from ttoken import *

TT = TokenType


# This function will transform some tokens into others depending on what follows them
def collapse(tokens: list[Token]):
    i = 0
    out = []
    while i < len(tokens):
        tok = tokens[i]
        peek = tokens[i + 1] if i + 1 < len(tokens) else None
        if peek is None:
            out.append(tok)
            i += 1
            continue
        if tok.ty == TT.PIPE and peek.ty == TT.PIPE:
            out.append(Token(TT.OR, string="||"))
            i += 2
        elif tok.ty == TT.AMP and peek.ty == TT.AMP:
            out.append(Token(TT.AND, string="&&"))
            i += 2
        elif tok.ty == TT.CARRET and tok.string == "<" and peek.ty == TT.CARRET and peek.string == "<":
            out.append(Token(TT.DLCARRET, string="<<"))
            i += 2
        elif tok.ty == TT.CARRET and tok.string == ">" and peek.ty == TT.CARRET and peek.string == ">":
            out.append(Token(TT.DRCARRET, string=">>"))
            i += 2
        elif tok.ty == TT.CARRET and tok.string == "<" :
            out.append(Token(TT.LCARRET, string="<"))
            i += 1
        elif tok.ty == TT.CARRET and tok.string == ">" :
            out.append(Token(TT.RCARRET, string=">"))
            i += 1
        else:
            out.append(tok)
            i += 1
    return out
