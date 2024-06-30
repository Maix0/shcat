#include "../nnsrc/alloc.h"
#include "../nnsrc/api.h"
#include "../nnsrc/array.h"
#include "../nnsrc/clock.h"
#include "../nnsrc/host.h"
#include "../nnsrc/language.h"
#include "../nnsrc/length.h"
#include "../nnsrc/lexer.h"
#include "../nnsrc/parser.h"
#include "../nnsrc/stack.h"
#include "../nnsrc/subtree.h"
#include "../nnsrc/tree.h"
#include "../nnsrc/tree_cursor.h"
#include "me/mem/mem.h"
#include <stdint.h>

typedef TSNode	   t_parse_node;
typedef TSSymbol   t_symbol;
typedef TSParser   t_first_parser;
typedef TSTree	   t_first_tree;
typedef TSLanguage t_language;

TSFieldId ts_node_field_id_for_child(TSNode self, uint32_t child_index);
