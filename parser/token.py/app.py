import str_to_token
import concat 
import ttoken

s = input("> ")
print(s)
tokens = str_to_token.str_to_token(s)
concated_tokens = concat.concat(tokens)

ttoken.print_tokenlist(concated_tokens)
