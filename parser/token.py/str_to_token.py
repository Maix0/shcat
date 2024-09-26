from ttoken import *

TT = TokenType


def is_quote(c: chr):
    return c == "'" or c == '"'


def str_to_token(s: str):
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
                current_token = Token(TT.DQUOTE if c == '"' else TT.SQUOTE, string="")
            else:
                if current_token == None:
                    current_token = Token(TT.NQUOTE, string="")
                if c.isspace():
                    if (
                        len(current_token.string) != 0
                        and current_token.ty != TT.WHITESPACE
                    ):
                        tokens.append(current_token)
                    current_token = Token(TT.WHITESPACE, string="")
                else:
                    if current_token.ty == TT.WHITESPACE:
                        tokens.append(current_token)
                        current_token = Token(TT.NQUOTE, string="")
                if c == "$":
                    tokens.append(current_token)
                    current_token = None
                    tokens.append(Token(TT.DOLLAR, string="$"))
                elif c == "(":
                    tokens.append(current_token)
                    current_token = None
                    tokens.append(Token(TT.LPAREN, string="("))
                elif c == ")":
                    tokens.append(current_token)
                    current_token = None
                    tokens.append(Token(TT.RPAREN, string=")"))
                elif c == "|":
                    tokens.append(current_token)
                    current_token = None
                    tokens.append(Token(TT.PIPE, string="|"))
                elif c == "&":
                    tokens.append(current_token)
                    current_token = None
                    tokens.append(Token(TT.AMP, string="&"))
                elif c == ";":
                    tokens.append(current_token)
                    current_token = None
                    tokens.append(Token(TT.CARRET, string=";"))
                elif c == ">" or c == "<":
                    tokens.append(current_token)
                    current_token = None
                    tokens.append(Token(TT.CARRET, string=c))
                else:
                    current_token.append_char(c)
        elif quote == "'":
            if c == "'":
                tokens.append(current_token)
                current_token = None
                quote = 0
            else:
                if current_token == None:
                    current_token = Token(TT.SQUOTE, string="")
                current_token.append_char(c)
        elif quote == '"':
            if c == '"':
                tokens.append(current_token)
                current_token = None
                quote = 0
            else:
                if current_token == None:
                    current_token = Token(TT.DQUOTE, string="")
                current_token.append_char(c)
        else:
            print("you fucked up you quote thingy")
        i += 1
    if current_token != None and current_token.ty == TT.NQUOTE:
        tokens.append(current_token)
    return tokens
