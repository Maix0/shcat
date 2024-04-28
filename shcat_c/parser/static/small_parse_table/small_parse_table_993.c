/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_993.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4965(t_small_parse_table_array *v)
{
	v->a[99300] = anon_sym_DOLLAR_BQUOTE;
	v->a[99301] = actions(1169);
	v->a[99302] = 1;
	v->a[99303] = sym__brace_start;
	v->a[99304] = actions(1211);
	v->a[99305] = 1;
	v->a[99306] = sym_word;
	v->a[99307] = actions(1213);
	v->a[99308] = 1;
	v->a[99309] = anon_sym_BANG;
	v->a[99310] = actions(1219);
	v->a[99311] = 1;
	v->a[99312] = anon_sym_TILDE;
	v->a[99313] = actions(1221);
	v->a[99314] = 1;
	v->a[99315] = sym__special_character;
	v->a[99316] = actions(1225);
	v->a[99317] = 1;
	v->a[99318] = sym_test_operator;
	v->a[99319] = actions(3060);
	small_parse_table_4966(v);
}

void	small_parse_table_4966(t_small_parse_table_array *v)
{
	v->a[99320] = 1;
	v->a[99321] = anon_sym_BQUOTE;
	v->a[99322] = state(2484);
	v->a[99323] = 1;
	v->a[99324] = aux_sym__literal_repeat1;
	v->a[99325] = state(3314);
	v->a[99326] = 1;
	v->a[99327] = sym__expression;
	v->a[99328] = actions(1129);
	v->a[99329] = 2;
	v->a[99330] = anon_sym_LPAREN_LPAREN;
	v->a[99331] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[99332] = actions(1165);
	v->a[99333] = 2;
	v->a[99334] = anon_sym_LT_LPAREN;
	v->a[99335] = anon_sym_GT_LPAREN;
	v->a[99336] = actions(1215);
	v->a[99337] = 2;
	v->a[99338] = anon_sym_PLUS_PLUS2;
	v->a[99339] = anon_sym_DASH_DASH2;
	small_parse_table_4967(v);
}

void	small_parse_table_4967(t_small_parse_table_array *v)
{
	v->a[99340] = actions(1217);
	v->a[99341] = 2;
	v->a[99342] = anon_sym_DASH2;
	v->a[99343] = anon_sym_PLUS2;
	v->a[99344] = actions(1223);
	v->a[99345] = 2;
	v->a[99346] = sym_raw_string;
	v->a[99347] = sym_ansi_c_string;
	v->a[99348] = state(2594);
	v->a[99349] = 6;
	v->a[99350] = sym_binary_expression;
	v->a[99351] = sym_ternary_expression;
	v->a[99352] = sym_unary_expression;
	v->a[99353] = sym_postfix_expression;
	v->a[99354] = sym_parenthesized_expression;
	v->a[99355] = sym_concatenation;
	v->a[99356] = state(2588);
	v->a[99357] = 9;
	v->a[99358] = sym_arithmetic_expansion;
	v->a[99359] = sym_brace_expression;
	small_parse_table_4968(v);
}

void	small_parse_table_4968(t_small_parse_table_array *v)
{
	v->a[99360] = sym_string;
	v->a[99361] = sym_translated_string;
	v->a[99362] = sym_number;
	v->a[99363] = sym_simple_expansion;
	v->a[99364] = sym_expansion;
	v->a[99365] = sym_command_substitution;
	v->a[99366] = sym_process_substitution;
	v->a[99367] = 26;
	v->a[99368] = actions(71);
	v->a[99369] = 1;
	v->a[99370] = sym_comment;
	v->a[99371] = actions(1131);
	v->a[99372] = 1;
	v->a[99373] = anon_sym_LPAREN;
	v->a[99374] = actions(1141);
	v->a[99375] = 1;
	v->a[99376] = anon_sym_DOLLAR_LBRACK;
	v->a[99377] = actions(1145);
	v->a[99378] = 1;
	v->a[99379] = anon_sym_DOLLAR;
	small_parse_table_4969(v);
}

void	small_parse_table_4969(t_small_parse_table_array *v)
{
	v->a[99380] = actions(1149);
	v->a[99381] = 1;
	v->a[99382] = anon_sym_DQUOTE;
	v->a[99383] = actions(1153);
	v->a[99384] = 1;
	v->a[99385] = aux_sym_number_token1;
	v->a[99386] = actions(1155);
	v->a[99387] = 1;
	v->a[99388] = aux_sym_number_token2;
	v->a[99389] = actions(1157);
	v->a[99390] = 1;
	v->a[99391] = anon_sym_DOLLAR_LBRACE;
	v->a[99392] = actions(1159);
	v->a[99393] = 1;
	v->a[99394] = anon_sym_DOLLAR_LPAREN;
	v->a[99395] = actions(1163);
	v->a[99396] = 1;
	v->a[99397] = anon_sym_DOLLAR_BQUOTE;
	v->a[99398] = actions(1169);
	v->a[99399] = 1;
	small_parse_table_4970(v);
}

/* EOF small_parse_table_993.c */
