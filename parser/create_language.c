/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_language.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 16:13:52 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/30 16:37:30 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./static/headers/constants.h"
#include "./static/headers/symbols.h"
#include "./parse_types.h"

const uint16_t			   *create_parse_table(void);
const uint16_t			   *create_small_parse_table(void);
const uint32_t			   *create_small_parse_table_map(void);
const t_parse_action_entry *create_parse_actions_entries(void);
const char *const		   *create_symbols_names(void);
const char *const		   *create_field_names(void);
const t_field_map_slice	   *create_field_map_slices(void);
const t_field_map_entry	   *create_field_map_entries(void);
const t_symbol_metadata	   *create_symbols_metadata(void);
const t_symbol			   *create_unique_symbols_map(void);
const t_symbol			   *create_non_terminal_alias_map(void);
const t_symbol			   *create_alias_sequences(void);
const t_lex_modes		   *create_lex_modes(void);
const t_state_id		   *create_primary_state_ids(void);
const bool				   *create_external_scanner_states(void);
const t_symbol			   *create_external_scanner_symbol_map(void);
bool						lex_normal_main(t_lexer *lexer, t_state_id state);
bool						lex_keywords_main(t_lexer *lexer, t_state_id state);
void					   *tree_sitter_bash_external_scanner_create(void);
void	 tree_sitter_bash_external_scanner_destroy(void *ctx);
bool	 tree_sitter_bash_external_scanner_scan(void *ctx, t_lexer *lexer,
												const bool *ret);
uint32_t tree_sitter_bash_external_scanner_serialize(void *ctx, char *s);
void	 tree_sitter_bash_external_scanner_deserialize(void *ctx, const char *s,
													   uint32_t val);

static t_scanner init_scanner(void)
{
	return ((t_scanner){
		create_external_scanner_states(),
		create_external_scanner_symbol_map(),
		tree_sitter_bash_external_scanner_create,
		tree_sitter_bash_external_scanner_destroy,
		tree_sitter_bash_external_scanner_scan,
		tree_sitter_bash_external_scanner_serialize,
		tree_sitter_bash_external_scanner_deserialize,
	});
}

static void init_language(t_language *language)
{
	language->parse_table = create_parse_table();
	language->small_parse_table = create_small_parse_table();
	language->small_parse_table_map = create_small_parse_table_map();
	language->parse_actions = create_parse_actions_entries();
	language->symbol_names = create_symbols_names();
	language->field_names = create_field_names();
	language->field_map_slices = create_field_map_slices();
	language->field_map_entries = create_field_map_entries();
	language->symbol_metadata = create_symbols_metadata();
	language->public_symbol_map = create_unique_symbols_map();
	language->alias_map = create_non_terminal_alias_map();
	language->alias_sequences = create_alias_sequences();
	language->lex_modes = create_lex_modes();
	language->primary_state_ids = create_primary_state_ids();
	language->lex_fn = lex_normal_main;
	language->keyword_lex_fn = lex_keywords_main;
	language->keyword_capture_token = sym_word;
	language->external_scanner = init_scanner();
}

const t_language *tree_sitter_bash(void)
{
	static bool		  init = false;
	static t_language language = {
		.version = LANGUAGE_VERSION,
		.symbol_count = SYMBOL_COUNT,
		.alias_count = ALIAS_COUNT,
		.token_count = TOKEN_COUNT,
		.external_token_count = EXTERNAL_TOKEN_COUNT,
		.state_count = STATE_COUNT,
		.large_state_count = LARGE_STATE_COUNT,
		.production_id_count = PRODUCTION_ID_COUNT,
		.field_count = FIELD_COUNT,
		.max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
	};

	if (!init)
	{
		init_language(&language);
		init = true;
	}
	return ((t_language *)&language);
}
