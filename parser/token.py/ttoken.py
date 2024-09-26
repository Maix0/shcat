from enum import Enum
from dataclasses import dataclass

TokenType = Enum(
    "TokenType",
    [
        "AMP",
        "AND",
        "CARRET",
        "DOLLAR",
        "DQUOTE",
        "EXPENSION",
        "LCARRET",
        "LCARRET_DOUBLE",
        "LPAREN",
        "NQUOTE",
        "OR",
        "PIPE",
        "RCARRET",
        "RCARRET_DOUBLE",
        "RPAREN",
        "SEMICOLON",
        "SQUOTE",
        "WHITESPACE",
        "WORD",
    ],
)


@dataclass
class Token:
    ty: TokenType
    string: str = None
    subtokens: list = None

    def is_subtoken(self) -> bool:
        return self.subtokens != None

    def append_char(self, c: str):
        if self.string is None:
            raise Exception(f"Tried to push a char on a token that contains subtokens, TT={self.ty}")
        self.string += c

    def is_word(self):
        return (
            self.ty == TokenType.SQUOTE
            or self.ty == TokenType.DQUOTE
            or self.ty == TokenType.NQUOTE
            or self.ty == TokenType.DOLLAR
        )


def print_tokenlist(tokens: list[Token], *, between="", end="\n"):
    for tok in tokens:
        col = "0"
        if tok.ty == TokenType.SQUOTE:
            col = "33"
        if tok.ty == TokenType.DQUOTE:
            col = "32"
        if tok.ty == TokenType.WHITESPACE:
            col = "31;4"
        if tok.ty == TokenType.DOLLAR:
            col = "31"
        if tok.ty == TokenType.LPAREN:
            col = "35"
        if tok.ty == TokenType.RPAREN:
            col = "35"
        if tok.ty == TokenType.AMP:
            col = "35"
        if tok.ty == TokenType.PIPE:
            col = "35"
        if tok.ty == TokenType.SEMICOLON:
            col = "35"
        if tok.ty == TokenType.CARRET:
            col = "35"
        if tok.is_subtoken():
            print_tokenlist(tok.subtokens, between="\x1b[100m", end="")
        else:
            print(f"\x1b[{col}m{between}{tok.string}\x1b[0m", end="")
    #print(end)


__all__ = ["TokenType", "Token", "print_tokenlist"]
