from enum import Enum
from dataclasses import dataclass

TokenType = Enum(
    "TokenType",
    [
        "AMP",  # ampersand == &
        "AND",  # and == &&
        "CARRET",  # any carret == < > << >>
        "DLCARRET",  # double left carret == <<
        "DOLLAR",  # dollar == $
        "DQUOTE",  # double quote string
        "DRCARRET",  # double right carret == >>
        "EXPENSION",  # an expension == $<no_quote_word>
        "LCARRET",  # left carret == <
        "LPAREN",  # left parenthesis == (
        "NQUOTE",  # no quote string
        "OR",  # or == ||
        "PIPE",  # pipe == |
        "RCARRET",  # right carret == >
        "RPAREN",  # right parenthesis == )
        "SEMICOLON",  # semicolor == ;
        "SQUOTE",  # single quote string
        "WHITESPACE",  # whitespace outside of quoted strings
        "WORD",  # a meta token, which contains subtokens
    ],
)


@dataclass
class Token:
    ty: TokenType
    string: str = None
    subtokens: list = None

    def is_metatoken(self) -> bool:
        return self.subtokens != None

    def append_char(self, c: str):
        if self.string is None:
            raise Exception(
                f"Tried to push a char on a token that contains subtokens, TT={self.ty}"
            )
        self.string += c

    def is_word(self):
        return (
            self.ty == TokenType.SQUOTE
            or self.ty == TokenType.DQUOTE
            or self.ty == TokenType.NQUOTE
            or self.ty == TokenType.DOLLAR
        )


def print_tokenlist(tokens: list[Token], *, depth=0):
    for tok in tokens:
        if tok.is_metatoken():
            print_tokenlist(tok.subtokens, depth=depth + 1)
        else:
            print(f"{'\t' * depth}{tok.ty.name:>10} => \x1b[31;40m{tok.string}\x1b[0m")


__all__ = ["TokenType", "Token", "print_tokenlist"]
