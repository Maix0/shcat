/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_language.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 16:13:52 by maiboyer          #+#    #+#             */
/*   Updated: 2024/06/30 16:44:49 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../static/headers/constants.h"
#include "../static/headers/symbols.h"
#include "./parser.h"
#include "me/types.h"

// bool	 lex_keywords_main(TSLexer *lexer, TSStateId state);
// bool	 lex_normal_main(TSLexer *lexer, TSStateId state);
bool  tree_sitter_sh_external_scanner_scan(void *ctx, TSLexer *lexer, const bool *ret);
void *create_external_scanner_states(void);
void *create_field_names(void);
void *create_symbols_names(void);
void *create_field_map_entries(void);
void *create_field_map_slices(void);
void *create_lex_modes(void);
void *create_parse_actions_entries(void);
void *create_primary_state_ids(void);
void *create_alias_sequences(void);
void *create_external_scanner_symbol_map(void);
void *create_non_terminal_alias_map(void);
void *create_unique_symbols_map(void);
void *create_symbols_metadata(void);
void *create_parse_table(void);
void *create_small_parse_table(void);
void *create_small_parse_table_map(void);
bool  ts_lex_keywords(TSLexer *lexer, TSStateId state);
bool  ts_lex(TSLexer *lexer, TSStateId state);
t_u32 tree_sitter_sh_external_scanner_serialize(void *ctx, char *s);
void  tree_sitter_sh_external_scanner_deserialize(void *ctx, const char *s, t_u32 val);
void  tree_sitter_sh_external_scanner_destroy(void *ctx);
void *tree_sitter_sh_external_scanner_create(void);

static struct ExternalScannerDefinition init_scanner(void)
{
	return ((struct ExternalScannerDefinition){
		create_external_scanner_states(),
		create_external_scanner_symbol_map(),
		tree_sitter_sh_external_scanner_create,
		tree_sitter_sh_external_scanner_destroy,
		tree_sitter_sh_external_scanner_scan,
		tree_sitter_sh_external_scanner_serialize,
		tree_sitter_sh_external_scanner_deserialize,
	});
}

static void init_language(TSLanguage *language)
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
	language->lex_fn = ts_lex;
	language->keyword_lex_fn = ts_lex_keywords;
	language->keyword_capture_token = sym_word;
	language->external_scanner = init_scanner();
}

const TSLanguage *tree_sitter_sh(void)
{
	static bool		  init = false;
	static TSLanguage language = {
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
	return ((TSLanguage *)&language);
}
