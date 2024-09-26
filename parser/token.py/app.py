import collapse
import concat
import str_to_token
import ttoken

s = input("> ")
print(s)
tokens = str_to_token.str_to_token(s)
concated_tokens = concat.concat(tokens)
collapsed_tokens = collapse.collapse(concated_tokens)

ttoken.print_tokenlist(collapsed_tokens)
