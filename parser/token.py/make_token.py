from enum import Enum
from dataclasses import dataclass


TokenType = Enum(
    "TokenType",
    [
        "AMP",
        "DOLLAR",
        "DQUOTE",
        "LPAREN",
        "NQUOTE",
        "PIPE",
        "CARRET",
        "RPAREN",
        "SEMICOLON",
        "SQUOTE",
        "WHITESPACE",
    ],
)

@dataclass
class Token:
    raw: str
    ty: TokenType

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
        if tok.ty == TokenType.AMP:
            col = "35"
        if tok.ty == TokenType.PIPE:
            col = "35"
        if tok.ty == TokenType.SEMICOLON:
            col = "35"
        if tok.ty == TokenType.CARRET:
            col = "35"
        print(f"\x1b[{col}m{tok.raw}\x1b[0m", end="")
    print("\n")


def is_quote(c: chr):
    return c == "'" or c == '"'

def me_tokenize(s: str):
    tokens = []
    current_token = None
    quote = 0
    i = 0
    while i < len(s):
        c = s[i]
        if quote == 0:
            if is_quote(c):
                if current_token != None:
                    tokens.append(current_token)
                quote = c
                current_token = Token(
                    "", TokenType.DQUOTE if c == '"' else TokenType.SQUOTE
                )
            else:
                if current_token == None:
                    current_token = Token("", TokenType.NQUOTE)
                if c.isspace():
                    if (
                        len(current_token.raw) != 0
                        and current_token.ty != TokenType.WHITESPACE
                    ):
                        tokens.append(current_token)
                    current_token = Token("", TokenType.WHITESPACE)
                else:
                    if current_token.ty == TokenType.WHITESPACE:
                        tokens.append(current_token)
                        current_token = Token("", TokenType.NQUOTE)
                if c == "$":
                    tokens.append(current_token)
                    current_token = None
                    tokens.append(Token("$", TokenType.DOLLAR))
                elif c == "(":
                    tokens.append(current_token)
                    current_token = None
                    tokens.append(Token("(", TokenType.LPAREN))
                elif c == ")":
                    tokens.append(current_token)
                    current_token = None
                    tokens.append(Token(")", TokenType.RPAREN))
                elif c == "|":
                    tokens.append(current_token)
                    current_token = None
                    tokens.append(Token("|", TokenType.PIPE))
                elif c == "&":
                    tokens.append(current_token)
                    current_token = None
                    tokens.append(Token("&", TokenType.AMP))
                elif c == ";":
                    tokens.append(current_token)
                    current_token = None
                    tokens.append(Token(";", TokenType.CARRET))
                elif c == ">" or c == "<":
                    tokens.append(current_token)
                    current_token = None
                    tokens.append(Token(c, TokenType.CARRET))
                else:
                    current_token.raw += c
        elif quote == "'":
            if c == "'":
                tokens.append(current_token)
                current_token = None
                quote = 0
            else:
                if current_token == None:
                    current_token = Token("", TokenType.SQUOTE)
                current_token.raw += c

        elif quote == '"':
            if c == '"':
                tokens.append(current_token)
                current_token = None
                quote = 0
            else:
                if current_token == None:
                    current_token = Token("", TokenType.DQUOTE)
                current_token.raw += c
        else:
            print("you fucked up you quote thingy")
        i += 1
    if current_token != None and current_token.ty == TokenType.NQUOTE:
        tokens.append(current_token)
    return tokens

