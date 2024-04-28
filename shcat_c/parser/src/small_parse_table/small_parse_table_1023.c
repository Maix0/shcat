/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1023.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5115(t_small_parse_table_array *v)
{
	v->a[102300] = sym__expression;
	v->a[102301] = actions(103);
	v->a[102302] = 2;
	v->a[102303] = anon_sym_PLUS_PLUS2;
	v->a[102304] = anon_sym_DASH_DASH2;
	v->a[102305] = actions(105);
	v->a[102306] = 2;
	v->a[102307] = anon_sym_DASH2;
	v->a[102308] = anon_sym_PLUS2;
	v->a[102309] = actions(1073);
	v->a[102310] = 2;
	v->a[102311] = anon_sym_LPAREN_LPAREN;
	v->a[102312] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[102313] = actions(1083);
	v->a[102314] = 2;
	v->a[102315] = sym_raw_string;
	v->a[102316] = sym_ansi_c_string;
	v->a[102317] = actions(1089);
	v->a[102318] = 2;
	v->a[102319] = anon_sym_LT_LPAREN;
	small_parse_table_5116(v);
}

void	small_parse_table_5116(t_small_parse_table_array *v)
{
	v->a[102320] = anon_sym_GT_LPAREN;
	v->a[102321] = state(3053);
	v->a[102322] = 6;
	v->a[102323] = sym_binary_expression;
	v->a[102324] = sym_ternary_expression;
	v->a[102325] = sym_unary_expression;
	v->a[102326] = sym_postfix_expression;
	v->a[102327] = sym_parenthesized_expression;
	v->a[102328] = sym_concatenation;
	v->a[102329] = state(2500);
	v->a[102330] = 9;
	v->a[102331] = sym_arithmetic_expansion;
	v->a[102332] = sym_brace_expression;
	v->a[102333] = sym_string;
	v->a[102334] = sym_translated_string;
	v->a[102335] = sym_number;
	v->a[102336] = sym_simple_expansion;
	v->a[102337] = sym_expansion;
	v->a[102338] = sym_command_substitution;
	v->a[102339] = sym_process_substitution;
	small_parse_table_5117(v);
}

void	small_parse_table_5117(t_small_parse_table_array *v)
{
	v->a[102340] = 3;
	v->a[102341] = actions(71);
	v->a[102342] = 1;
	v->a[102343] = sym_comment;
	v->a[102344] = actions(1308);
	v->a[102345] = 16;
	v->a[102346] = anon_sym_PIPE;
	v->a[102347] = anon_sym_EQ_EQ;
	v->a[102348] = anon_sym_LT;
	v->a[102349] = anon_sym_GT;
	v->a[102350] = anon_sym_LT_LT;
	v->a[102351] = anon_sym_LPAREN;
	v->a[102352] = anon_sym_EQ_TILDE;
	v->a[102353] = anon_sym_AMP_GT;
	v->a[102354] = anon_sym_LT_AMP;
	v->a[102355] = anon_sym_GT_AMP;
	v->a[102356] = anon_sym_DOLLAR;
	v->a[102357] = aux_sym_number_token1;
	v->a[102358] = aux_sym_number_token2;
	v->a[102359] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_5118(v);
}

void	small_parse_table_5118(t_small_parse_table_array *v)
{
	v->a[102360] = anon_sym_BQUOTE;
	v->a[102361] = sym_word;
	v->a[102362] = actions(1310);
	v->a[102363] = 27;
	v->a[102364] = sym_file_descriptor;
	v->a[102365] = sym__concat;
	v->a[102366] = sym_test_operator;
	v->a[102367] = sym__bare_dollar;
	v->a[102368] = sym__brace_start;
	v->a[102369] = anon_sym_LPAREN_LPAREN;
	v->a[102370] = anon_sym_PIPE_PIPE;
	v->a[102371] = anon_sym_AMP_AMP;
	v->a[102372] = anon_sym_GT_GT;
	v->a[102373] = anon_sym_PIPE_AMP;
	v->a[102374] = anon_sym_AMP_GT_GT;
	v->a[102375] = anon_sym_GT_PIPE;
	v->a[102376] = anon_sym_LT_AMP_DASH;
	v->a[102377] = anon_sym_GT_AMP_DASH;
	v->a[102378] = anon_sym_LT_LT_DASH;
	v->a[102379] = anon_sym_LT_LT_LT;
	small_parse_table_5119(v);
}

void	small_parse_table_5119(t_small_parse_table_array *v)
{
	v->a[102380] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[102381] = anon_sym_DOLLAR_LBRACK;
	v->a[102382] = aux_sym_concatenation_token1;
	v->a[102383] = sym__special_character;
	v->a[102384] = anon_sym_DQUOTE;
	v->a[102385] = sym_raw_string;
	v->a[102386] = sym_ansi_c_string;
	v->a[102387] = anon_sym_DOLLAR_LBRACE;
	v->a[102388] = anon_sym_DOLLAR_BQUOTE;
	v->a[102389] = anon_sym_LT_LPAREN;
	v->a[102390] = anon_sym_GT_LPAREN;
	v->a[102391] = 26;
	v->a[102392] = actions(71);
	v->a[102393] = 1;
	v->a[102394] = sym_comment;
	v->a[102395] = actions(1131);
	v->a[102396] = 1;
	v->a[102397] = anon_sym_LPAREN;
	v->a[102398] = actions(1141);
	v->a[102399] = 1;
	small_parse_table_5120(v);
}

/* EOF small_parse_table_1023.c */
