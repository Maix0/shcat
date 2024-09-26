from ttoken import *

def concat(tokens: list[Token]):
    i = 0
    out = []
    while i < len(tokens):
        tok = tokens[i]
        if tok.is_word():
            word = Token(TokenType.WORD, subtokens=[])
            word.subtokens.append(tok)
            j = 1
            while i + j < len(tokens) and (tokens[i + j]).is_word():
                word.subtokens.append(tokens[i + j])
                j += 1
            i += j
            out.append(word)
        else:
            out.append(tok)
            i += 1
    return out
