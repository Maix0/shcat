from ttoken import *


# This function will make a "big" token that will represent a word in the shell sense
def concat(tokens: list[Token]):
    i = 0
    out = []
    while i < len(tokens):
        tok = tokens[i]
        # if the token is a token that can be inside a word, then we start createing a WORD "metaToken"
        if tok.is_word():
            word = Token(TokenType.WORD, subtokens=[])
            word.subtokens.append(tok)
            j = 1
            # then we get every token after the first that is also a word and we push them
            while i + j < len(tokens) and (tokens[i + j]).is_word():
                word.subtokens.append(tokens[i + j])
                j += 1
            i += j
            out.append(word)
        else:
            # otherwise we just push the token alone
            out.append(tok)
            i += 1
    return out
