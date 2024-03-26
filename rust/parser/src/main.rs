#![allow(dead_code)]
use std::{borrow::Cow, collections::VecDeque, convert::Infallible as Never, pin::Pin};

type WORD = String;
type Rule2 = String;
type Rule3 = String;

struct SourceFile {
    cmds: Vec<CompleteCommands>,
}

struct CompleteCommands {
    // each Pipeline Must have a Separator, but the
    // last Pipeline is optional
    list: Vec<(Pipeline, Option<SeparatorOp>)>,
}

enum SeparatorOp {
    Semi, /* ; */
    Fork, /* & */
}

struct Pipeline {
    bang: bool,                 // placed before the seqence
    kind: Option<PipelineKind>, // placed after the seqence
    seq: Vec<Commands>,         // each cmd are piped into the next
}

enum PipelineKind {
    Or,  /* || */
    And, /* && */
}

enum Commands {
    Simple(SimpleCommand),
    Compound(Never),
    FuncDef(Never),
}

struct SimpleCommand {
    prefix: Vec<CmdPrefix>,
    cmd: Vec<WORD>, // First is rule 7a, then 7b
    suffix: Vec<CmdSuffix>,
}

enum CmdPrefix {
    IoRedirect(IoRedirect),
    Assigment(Assigment),
}

enum CmdSuffix {
    IoRedirect(IoRedirect),
    Word(WORD),
}

struct IoRedirect {
    io_file: Option<usize>,
    io_kind: IoKind,
}

enum IoKind {
    IoFile(IoFile),
    IoHere(IoHere),
}

enum IoFile {
    Less { filename: Rule2 },          /* <  */
    Greater { filename: Rule2 },       /* >  */
    LessAnd { filename: Rule2 },       /* <& */
    GreaterAnd { filename: Rule2 },    /* >& */
    DoubleGreater { filename: Rule2 }, /* >> */
    LessGreater { filename: Rule2 },   /* <> */
    Clobber { filename: Rule2 },       /* >| */
}
enum IoHere {
    Dless { here_end: Rule3 },     /* <<  */
    DlessDash { here_end: Rule3 }, /* <<- */
}

// Rule 7
struct Assigment {
    key: WORD,
    value: WORD,
}

#[derive(Default)]
struct TokenizerState<'input> {
    current_pos: usize,
    input: &'input str,
    remaining: &'input str,
    invalid_quote: bool,
    _marker: std::marker::PhantomPinned,
}

impl<'input> TokenizerState<'input> {
    fn new(input: &'input str) -> Self {
        Self {
            current_pos: 0,
            remaining: input,
            invalid_quote: false,
            input,
            _marker: std::marker::PhantomPinned,
        }
    }
}

// Cow<'input, str> is either a owned string (so it'll have to be free'd, basically it is an `String`
// or it is an borrow string, so an &'input str, which doesn't need to be free (or at least by us)

#[derive(Debug, Clone)]
enum Token<'input> {
    SingleQuote {
        val: Cow<'input, str>,
        start_pos: usize,
    },
    DoubleQuote {
        val: Cow<'input, str>,
        start_pos: usize,
    },
    WhiteSpace {
        val: Cow<'input, str>,
        start_pos: usize,
    },
    Word {
        val: Cow<'input, str>,
        start_pos: usize,
    },
}

fn tokenizer<'state, 'input: 'state>(
    state: &'state mut TokenizerState<'input>,
) -> impl Iterator<Item = Token<'input>> + 'state {
    state.current_pos = 0;
    std::iter::from_fn(move || {
        let state = &mut *state;
        let mut chars = state.remaining.chars().peekable();
        let mut len = 1;
        let mut escaped = false;

        let Some(chr) = chars.next() else {
            return None;
        };
        match chr {
            '\'' => {
                while let Some(s) = chars.peek().copied() {
                    if s == '\'' {
                        break;
                    }
                    len += 1;
                    chars.next();
                }
                let skip = chars.peek() == Some(&'\'');
                state.invalid_quote |= !skip;
                let old_current = state.current_pos;
                state.current_pos += len;
                let old_remaining = state.remaining;
                state.remaining = &state.remaining[(len + skip as usize)..];
                return Some(Token::SingleQuote {
                    val: old_remaining[1..len].into(),
                    start_pos: old_current,
                });
            }
            '"' => {
                while let Some(s) = chars.peek().copied() {
                    if !escaped && s == '\"' {
                        break;
                    }
                    len += 1;
                    escaped = chars.next() == Some('\\');
                }
                let skip = chars.peek() == Some(&'\"');
                state.invalid_quote |= !skip;
                let old_current = state.current_pos;
                state.current_pos += len;
                let old_remaining = state.remaining;
                state.remaining = &state.remaining[(len + skip as usize)..];
                return Some(Token::DoubleQuote {
                    val: old_remaining[1..len].into(),
                    start_pos: old_current,
                });
            }
            _ => {}
        }
        let was_whitespace = chr.is_ascii_whitespace();
        while let Some(&chr) = chars.peek() {
            if chr.is_ascii_whitespace() && !escaped && !was_whitespace {
                let old_current = state.current_pos;
                state.current_pos += len;
                let old_remaining = state.remaining;
                state.remaining = &state.remaining[len..];
                return Some(Token::Word {
                    val: old_remaining[..len].into(),
                    start_pos: old_current,
                });
            } else if !chr.is_ascii_whitespace() && was_whitespace {
                let old_current = state.current_pos;
                state.current_pos += len;
                let old_remaining = state.remaining;
                state.remaining = &state.remaining[len..];
                return Some(Token::WhiteSpace {
                    val: old_remaining[..len].into(),
                    start_pos: old_current,
                });
            }
            len += 1;
            escaped = chars.next() == Some('\\');
        }
        let old_current = state.current_pos;
        state.current_pos += len;
        let old_remaining = state.remaining;
        state.remaining = &state.remaining[len..];
        Some(if was_whitespace {
            Token::WhiteSpace {
                val: old_remaining[..len].into(),
                start_pos: old_current,
            }
        } else {
            Token::Word {
                val: old_remaining[..len].into(),
                start_pos: old_current,
            }
        })
    })
}

struct TokenizerWrapper<'input> {
    _marker: std::marker::PhantomPinned,
    first_pass: TokenizerState<'input>,
    iter: Box<dyn Iterator<Item = Token<'input>> + 'input>,
}

impl<'input> TokenizerWrapper<'input> {
    fn new(s: TokenizerState<'input>) -> Pin<Box<Self>> {
        let mut value = Box::new(std::mem::MaybeUninit::<Self>::uninit());
        unsafe {
            //
            let ptr: *mut Self = value.as_mut_ptr();
            std::ptr::write(std::ptr::addr_of_mut!((*ptr).first_pass), s);
            std::ptr::write(
                std::ptr::addr_of_mut!((*ptr).iter),
                Box::new(tokenizer(&mut *std::ptr::addr_of_mut!((*ptr).first_pass))),
            );
            std::mem::transmute(Pin::new_unchecked(value))
        }
    }
}

impl<'input> TokenizerWrapper<'input> {
    fn next(self: &mut Pin<Box<Self>>) -> Option<Token<'input>> {
        unsafe { Pin::into_inner_unchecked(self.as_mut()).iter.next() }
    }
}

struct ExpenderState<'input> {
    // These will be inserted when a substitution is made, like $HOME
    // if it is "$HOME", then no splitting should be done, so if there  is any stuff  that needs to
    // be pushed, then push it, otherwise get the next token from `iter`, expend if needed and
    // voila
    need_push: VecDeque<ExpendedToken<'input>>,
    // This is because of the way I wrote the rust
    // stuff, returning iterator instead of an token everytime I call a function and stuff, it
    // shouldn't be reflected into the C code, as we will just call 'get_next_token(&state)' and it
    // will give us the next token (or EOF if no more token are present)
    tokenizer: Pin<Box<TokenizerWrapper<'input>>>,
}

#[derive(Debug, Clone)]
enum ExpendedToken<'input> {
    SingleQuote {
        val: Cow<'input, str>,
        start_pos: usize,
    },
    DoubleQuote {
        val: Cow<'input, str>,
        start_pos: usize,
    },
    WhiteSpace {
        val: Cow<'input, str>,
        start_pos: usize,
    },
    Word {
        val: Cow<'input, str>,
        start_pos: usize,
    },
}

impl<'input> ExpenderState<'input> {
    fn new(input: &'input str) -> Self {
        let wrapper = TokenizerWrapper::new(TokenizerState::new(input));

        Self {
            need_push: VecDeque::new(),
            tokenizer: wrapper,
        }
    }
}

fn expend<'state, 'input: 'state>(
    input: &'state mut ExpenderState<'input>,
) -> impl Iterator<Item = ExpendedToken<'input>> + 'state {
    std::iter::from_fn(|| {
        if !input.need_push.is_empty() {
            input.need_push.pop_front()
        } else {
            input.tokenizer.next().map(|t| match t {
                Token::Word { val, start_pos } => ExpendedToken::Word { val, start_pos },
                Token::DoubleQuote { val, start_pos } => {
                    ExpendedToken::DoubleQuote { val, start_pos }
                }
                Token::SingleQuote { val, start_pos } => {
                    ExpendedToken::SingleQuote { val, start_pos }
                }
                Token::WhiteSpace { val, start_pos } => {
                    ExpendedToken::WhiteSpace { val, start_pos }
                }
            })
        }
    })
}

fn main() {
    for line in std::io::stdin().lines() {
        let line = line.unwrap();
        let mut state = ExpenderState::new(&line);
        println!("line is = '{line}'");
        println!("token are = {:?}", expend(&mut state).collect::<Vec<_>>());
    }
}
