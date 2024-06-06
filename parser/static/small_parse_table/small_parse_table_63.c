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
	v->a[6300] = sym_arithmetic_expansion;
	v->a[6301] = sym_brace_expression;
	v->a[6302] = sym_string;
	v->a[6303] = sym_number;
	v->a[6304] = sym_simple_expansion;
	v->a[6305] = sym_expansion;
	v->a[6306] = sym_command_substitution;
	v->a[6307] = actions(725);
	v->a[6308] = 19;
	v->a[6309] = anon_sym_PIPE;
	v->a[6310] = anon_sym_SEMI_SEMI;
	v->a[6311] = anon_sym_PIPE_AMP;
	v->a[6312] = anon_sym_AMP_AMP;
	v->a[6313] = anon_sym_PIPE_PIPE;
	v->a[6314] = anon_sym_LT;
	v->a[6315] = anon_sym_GT;
	v->a[6316] = anon_sym_GT_GT;
	v->a[6317] = anon_sym_AMP_GT;
	v->a[6318] = anon_sym_AMP_GT_GT;
	v->a[6319] = anon_sym_LT_AMP;
	small_parse_table_316(v);
}

void	small_parse_table_316(t_small_parse_table_array *v)
{
	v->a[6320] = anon_sym_GT_AMP;
	v->a[6321] = anon_sym_GT_PIPE;
	v->a[6322] = anon_sym_LT_AMP_DASH;
	v->a[6323] = anon_sym_GT_AMP_DASH;
	v->a[6324] = anon_sym_LT_LT;
	v->a[6325] = anon_sym_LT_LT_DASH;
	v->a[6326] = anon_sym_AMP;
	v->a[6327] = anon_sym_SEMI;
	v->a[6328] = 6;
	v->a[6329] = actions(3);
	v->a[6330] = 1;
	v->a[6331] = sym_comment;
	v->a[6332] = state(980);
	v->a[6333] = 1;
	v->a[6334] = aux_sym__literal_repeat1;
	v->a[6335] = state(334);
	v->a[6336] = 2;
	v->a[6337] = sym_concatenation;
	v->a[6338] = aux_sym_for_statement_repeat1;
	v->a[6339] = actions(1390);
	small_parse_table_317(v);
}

void	small_parse_table_317(t_small_parse_table_array *v)
{
	v->a[6340] = 5;
	v->a[6341] = sym_file_descriptor;
	v->a[6342] = sym_variable_name;
	v->a[6343] = sym_test_operator;
	v->a[6344] = sym__brace_start;
	v->a[6345] = aux_sym_heredoc_redirect_token1;
	v->a[6346] = state(637);
	v->a[6347] = 7;
	v->a[6348] = sym_arithmetic_expansion;
	v->a[6349] = sym_brace_expression;
	v->a[6350] = sym_string;
	v->a[6351] = sym_number;
	v->a[6352] = sym_simple_expansion;
	v->a[6353] = sym_expansion;
	v->a[6354] = sym_command_substitution;
	v->a[6355] = actions(1388);
	v->a[6356] = 33;
	v->a[6357] = anon_sym_PIPE;
	v->a[6358] = anon_sym_SEMI_SEMI;
	v->a[6359] = anon_sym_SEMI_AMP;
	small_parse_table_318(v);
}

void	small_parse_table_318(t_small_parse_table_array *v)
{
	v->a[6360] = anon_sym_SEMI_SEMI_AMP;
	v->a[6361] = anon_sym_PIPE_AMP;
	v->a[6362] = anon_sym_AMP_AMP;
	v->a[6363] = anon_sym_PIPE_PIPE;
	v->a[6364] = anon_sym_LT;
	v->a[6365] = anon_sym_GT;
	v->a[6366] = anon_sym_GT_GT;
	v->a[6367] = anon_sym_AMP_GT;
	v->a[6368] = anon_sym_AMP_GT_GT;
	v->a[6369] = anon_sym_LT_AMP;
	v->a[6370] = anon_sym_GT_AMP;
	v->a[6371] = anon_sym_GT_PIPE;
	v->a[6372] = anon_sym_LT_AMP_DASH;
	v->a[6373] = anon_sym_GT_AMP_DASH;
	v->a[6374] = anon_sym_LT_LT;
	v->a[6375] = anon_sym_LT_LT_DASH;
	v->a[6376] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[6377] = anon_sym_AMP;
	v->a[6378] = anon_sym_DOLLAR;
	v->a[6379] = sym__special_character;
	small_parse_table_319(v);
}

void	small_parse_table_319(t_small_parse_table_array *v)
{
	v->a[6380] = anon_sym_DQUOTE;
	v->a[6381] = sym_raw_string;
	v->a[6382] = aux_sym_number_token1;
	v->a[6383] = aux_sym_number_token2;
	v->a[6384] = anon_sym_DOLLAR_LBRACE;
	v->a[6385] = anon_sym_DOLLAR_LPAREN;
	v->a[6386] = anon_sym_BQUOTE;
	v->a[6387] = anon_sym_DOLLAR_BQUOTE;
	v->a[6388] = sym_word;
	v->a[6389] = anon_sym_SEMI;
	v->a[6390] = 6;
	v->a[6391] = actions(3);
	v->a[6392] = 1;
	v->a[6393] = sym_comment;
	v->a[6394] = actions(1601);
	v->a[6395] = 1;
	v->a[6396] = sym_variable_name;
	v->a[6397] = actions(1599);
	v->a[6398] = 2;
	v->a[6399] = aux_sym__simple_variable_name_token1;
	small_parse_table_320(v);
}

/* EOF small_parse_table_63.c */
