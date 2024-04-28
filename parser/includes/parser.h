#ifndef TREE_SITTER_PARSER_H_
#define TREE_SITTER_PARSER_H_

#include "../parse_types.h"
#include "./lexer.h"
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

#define TREE_SITTER_SERIALIZATION_BUFFER_SIZE 1024

typedef struct s_language t_language;
typedef struct s_scanner
{
	const bool	   *states;
	const t_symbol *symbol_map;
	void *(*create)(void);
	void (*destroy)(void *);
	bool (*scan)(void *, t_lexer *, const bool *symbol_whitelist);
	unsigned (*serialize)(void *, char *);
	void (*deserialize)(void *, const char *, unsigned);
} t_scanner;

struct s_language
{
	uint32_t					version;
	uint32_t					symbol_count;
	uint32_t					alias_count;
	uint32_t					token_count;
	uint32_t					external_token_count;
	uint32_t					state_count;
	uint32_t					large_state_count;
	uint32_t					production_id_count;
	uint32_t					field_count;
	uint16_t					max_alias_sequence_length;
	const uint16_t			   *parse_table;
	const uint16_t			   *small_parse_table;
	const uint32_t			   *small_parse_table_map;
	const t_parse_action_entry *parse_actions;
	const char *const		   *symbol_names;
	const char *const		   *field_names;
	const t_field_map_slice	   *field_map_slices;
	const t_field_map_entry	   *field_map_entries;
	const t_symbol_metadata	   *symbol_metadata;
	const t_symbol			   *public_symbol_map;
	const uint16_t			   *alias_map;
	const t_symbol			   *alias_sequences;
	const t_lex_modes		   *lex_modes;
	bool (*lex_fn)(t_lexer *, t_state_id);
	bool (*keyword_lex_fn)(t_lexer *, t_state_id);
	t_symbol		  keyword_capture_token;
	t_scanner		  external_scanner;
	const t_state_id *primary_state_ids;
};

#endif // TREE_SITTER_PARSER_H_
