from ttoken import *

TT = TokenType


def is_quote(c: chr):
    return c == "'" or c == '"'


# This function takes the string and seperate them into different tokens depending on the quotes
def str_to_token(s: str):
    tokens = []
    current_token = None
    quote = 0
    i = 0
    while i < len(s):
        c = s[i]
        if quote == 0:
            # if we have a quote, juste push the current token if any, then switch the the correct quote token 
            if is_quote(c):
                if current_token != None:
                    tokens.append(current_token)
                quote = c
                current_token = Token(TT.DQUOTE if c == '"' else TT.SQUOTE, string="")
            else:
                # here we have no quote, so we first create a token if none exist, then handle special stuff 
                # like whitespace for example, or any character we want to spit in a single token of their own (; $ | &)
                if current_token == None:
                    current_token = Token(TT.NQUOTE, string="")
                if c.isspace():
                    # we have a whitespace, then create a whitespace token, and push the current token 
                    # if it isn't empty and not whitesace
                    if (
                        len(current_token.string) != 0
                        and current_token.ty != TT.WHITESPACE
                    ):
                        tokens.append(current_token)
                    current_token = Token(TT.WHITESPACE, string="")
                else:
                    # we DON'T have a whitespace, then if the current token is a whitespace, just push it and set the new token to raw_string
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
            # we are in a single quotem basically we push until we have another single quote
            if c == "'":
                tokens.append(current_token)
                current_token = None
                quote = 0
            else:
                if current_token == None:
                    current_token = Token(TT.SQUOTE, string="")
                current_token.append_char(c)
        elif quote == '"':
            # we are in a double quotem basically we push until we have another double quote
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
    # if the current token is not none and the current token is "no quote" then we push it
    if current_token != None and current_token.ty == TT.NQUOTE:
        tokens.append(current_token)
    return tokens
