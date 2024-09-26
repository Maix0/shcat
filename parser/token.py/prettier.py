from enum import Enum
from dataclasses import dataclass
import make_token as mt


TokenType = Enum(
    "TokenType",
    [
        "AND",
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
    raw: str
    raw_list: list
    ty: TokenType

    def is_list(self):
        return self.ty == TokenType.WORD or self.ty == TokenType.EXPENSION


def is_word_mt(tok: mt.Token):
    return (
        tok.ty == mt.TokenType.SQUOTE
        or tok.ty == mt.TokenType.DQUOTE
        or tok.ty == mt.TokenType.NQUOTE
        or tok.ty == mt.TokenType.DOLLAR
    )


def pass1(tokens: list[mt.Token]):
    i = 0
    out = []
    while i < len(tokens):
        tok = tokens[i]
        if is_word_mt(tok):
            concat = Token("", [], TokenType.WORD)
            concat.raw_list.append(tok)
            j = 1
            while i + j < len(tokens) and is_word_mt(tokens[i + j]):
                concat.raw_list.append(tokens[i + j])
                j += 1
            i += j
        else:
            out.append(tok)
            i += 1
    return out


def print_tokenlist(tokens: list[Token]):
    print("\n")
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
        if tok.ty == TokenType.PIPE:
            col = "35"
        if tok.ty == TokenType.SEMICOLON:
            col = "35"
        if not Token.is_list(tok):
            print(f"\x1b[{col}m{tok.raw}\x1b[0m", end="")
        else:
            print("NOT_PRINT_YET_LOL", end="")
    print("\n")
