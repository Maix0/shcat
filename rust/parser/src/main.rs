#![allow(dead_code)]
use std::convert::Infallible as Never;

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
}

impl<'input> TokenizerState<'input> {
    fn new(input: &'input str) -> Self {
        Self {
            current_pos: 0,
            remaining: input,
            input,
        }
    }
}

#[derive(Debug, Clone)]
enum Token<'input> {
    SingleQuote { val: &'input str, start_pos: usize },
    DoubleQuote { val: &'input str, start_pos: usize },
    WhiteSpace { val: &'input str, start_pos: usize },
    Word { val: &'input str, start_pos: usize },
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
                let old_current = state.current_pos;
                state.current_pos += len;
                let old_remaining = state.remaining;
                state.remaining = &state.remaining[(len + skip as usize)..];
                return Some(Token::SingleQuote {
                    val: &old_remaining[1..len],
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
                let old_current = state.current_pos;
                state.current_pos += len;
                let old_remaining = state.remaining;
                state.remaining = &state.remaining[(len + skip as usize)..];
                return Some(Token::DoubleQuote {
                    val: &old_remaining[1..len],
                    start_pos: old_current,
                });
            }
            _ => {}
        }
        let was_whitespace = chr.is_ascii_whitespace();
        while let Some(&chr) = chars.peek() {
            if chr.is_ascii_whitespace() && !escaped && !was_whitespace {
                dbg!(state.current_pos);
                let old_current = state.current_pos;
                state.current_pos += len;
                let old_remaining = state.remaining;
                state.remaining = &state.remaining[len..];
                return Some(Token::Word {
                    val: &old_remaining[..len],
                    start_pos: old_current,
                });
            } else if !chr.is_ascii_whitespace() && was_whitespace {
                let old_current = state.current_pos;
                state.current_pos += len;
                let old_remaining = state.remaining;
                state.remaining = &state.remaining[len..];
                return Some(Token::WhiteSpace {
                    val: &old_remaining[..len],
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
                val: &old_remaining[..len],
                start_pos: old_current,
            }
        } else {
            Token::Word {
                val: &old_remaining[..len],
                start_pos: old_current,
            }
        })
    })
}

fn main() {
    for line in std::io::stdin().lines() {
        let line = line.unwrap();
        let mut state = TokenizerState::new(&line);
        println!("line is = '{line}'");
        println!(
            "token are = {:?}",
            tokenizer(&mut state).collect::<Vec<_>>()
        );
    }
}
