#include "../src/alloc.h"
#include "../src/api.h"
#include "../src/array.h"
#include "../src/clock.h"
#include "../src/host.h"
#include "../src/language.h"
#include "../src/length.h"
#include "../src/lexer.h"
#include "../src/parser.h"
#include "../src/stack.h"
#include "../src/subtree.h"
#include "../src/tree.h"
#include "../src/tree_cursor.h"
#include "me/mem/mem.h"
#include <stdint.h>

typedef TSNode	   t_parse_node;
typedef TSSymbol   t_symbol;
typedef TSParser   t_first_parser;
typedef TSTree	   t_first_tree;
typedef TSLanguage t_language;

TSFieldId ts_node_field_id_for_child(TSNode self, uint32_t child_index);
