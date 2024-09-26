import make_token
import prettier

s = input("> ")
print(s);
first = make_token.me_tokenize(s)
pass1 = prettier.pass1(first)

prettier.print_tokenlist(pass1)
