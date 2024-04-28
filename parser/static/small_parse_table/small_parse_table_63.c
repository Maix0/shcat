/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_63.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_315(t_small_parse_table_array *v)
{
	v->a[6300] = sym_word;
	v->a[6301] = state(1190);
	v->a[6302] = 9;
	v->a[6303] = sym_arithmetic_expansion;
	v->a[6304] = sym_brace_expression;
	v->a[6305] = sym_string;
	v->a[6306] = sym_translated_string;
	v->a[6307] = sym_number;
	v->a[6308] = sym_simple_expansion;
	v->a[6309] = sym_expansion;
	v->a[6310] = sym_command_substitution;
	v->a[6311] = sym_process_substitution;
	v->a[6312] = actions(2297);
	v->a[6313] = 22;
	v->a[6314] = anon_sym_SEMI;
	v->a[6315] = anon_sym_PIPE_PIPE;
	v->a[6316] = anon_sym_AMP_AMP;
	v->a[6317] = anon_sym_PIPE;
	v->a[6318] = anon_sym_AMP;
	v->a[6319] = anon_sym_LT;
	small_parse_table_316(v);
}

void	small_parse_table_316(t_small_parse_table_array *v)
{
	v->a[6320] = anon_sym_GT;
	v->a[6321] = anon_sym_LT_LT;
	v->a[6322] = anon_sym_GT_GT;
	v->a[6323] = anon_sym_esac;
	v->a[6324] = anon_sym_SEMI_SEMI;
	v->a[6325] = anon_sym_SEMI_AMP;
	v->a[6326] = anon_sym_SEMI_SEMI_AMP;
	v->a[6327] = anon_sym_PIPE_AMP;
	v->a[6328] = anon_sym_AMP_GT;
	v->a[6329] = anon_sym_AMP_GT_GT;
	v->a[6330] = anon_sym_LT_AMP;
	v->a[6331] = anon_sym_GT_AMP;
	v->a[6332] = anon_sym_GT_PIPE;
	v->a[6333] = anon_sym_LT_AMP_DASH;
	v->a[6334] = anon_sym_GT_AMP_DASH;
	v->a[6335] = anon_sym_LT_LT_DASH;
	v->a[6336] = 21;
	v->a[6337] = actions(3);
	v->a[6338] = 1;
	v->a[6339] = sym_comment;
	small_parse_table_317(v);
}

void	small_parse_table_317(t_small_parse_table_array *v)
{
	v->a[6340] = actions(2333);
	v->a[6341] = 1;
	v->a[6342] = anon_sym_DOLLAR_LBRACK;
	v->a[6343] = actions(2335);
	v->a[6344] = 1;
	v->a[6345] = anon_sym_DOLLAR;
	v->a[6346] = actions(2337);
	v->a[6347] = 1;
	v->a[6348] = sym__special_character;
	v->a[6349] = actions(2339);
	v->a[6350] = 1;
	v->a[6351] = anon_sym_DQUOTE;
	v->a[6352] = actions(2341);
	v->a[6353] = 1;
	v->a[6354] = aux_sym_number_token1;
	v->a[6355] = actions(2343);
	v->a[6356] = 1;
	v->a[6357] = aux_sym_number_token2;
	v->a[6358] = actions(2345);
	v->a[6359] = 1;
	small_parse_table_318(v);
}

void	small_parse_table_318(t_small_parse_table_array *v)
{
	v->a[6360] = anon_sym_DOLLAR_LBRACE;
	v->a[6361] = actions(2347);
	v->a[6362] = 1;
	v->a[6363] = anon_sym_DOLLAR_LPAREN;
	v->a[6364] = actions(2349);
	v->a[6365] = 1;
	v->a[6366] = anon_sym_BQUOTE;
	v->a[6367] = actions(2351);
	v->a[6368] = 1;
	v->a[6369] = anon_sym_DOLLAR_BQUOTE;
	v->a[6370] = actions(2355);
	v->a[6371] = 1;
	v->a[6372] = sym_test_operator;
	v->a[6373] = actions(2357);
	v->a[6374] = 1;
	v->a[6375] = sym__brace_start;
	v->a[6376] = state(1658);
	v->a[6377] = 1;
	v->a[6378] = aux_sym__literal_repeat1;
	v->a[6379] = actions(2096);
	small_parse_table_319(v);
}

void	small_parse_table_319(t_small_parse_table_array *v)
{
	v->a[6380] = 2;
	v->a[6381] = sym_file_descriptor;
	v->a[6382] = aux_sym_heredoc_redirect_token1;
	v->a[6383] = actions(2331);
	v->a[6384] = 2;
	v->a[6385] = anon_sym_LPAREN_LPAREN;
	v->a[6386] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[6387] = actions(2353);
	v->a[6388] = 2;
	v->a[6389] = anon_sym_LT_LPAREN;
	v->a[6390] = anon_sym_GT_LPAREN;
	v->a[6391] = state(593);
	v->a[6392] = 2;
	v->a[6393] = sym_concatenation;
	v->a[6394] = aux_sym_for_statement_repeat1;
	v->a[6395] = actions(2329);
	v->a[6396] = 3;
	v->a[6397] = sym_raw_string;
	v->a[6398] = sym_ansi_c_string;
	v->a[6399] = sym_word;
	small_parse_table_320(v);
}

/* EOF small_parse_table_63.c */
