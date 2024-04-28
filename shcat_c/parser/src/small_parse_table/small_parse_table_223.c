/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_223.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1115(t_small_parse_table_array *v)
{
	v->a[22300] = 1;
	v->a[22301] = sym_command_substitution;
	v->a[22302] = state(2484);
	v->a[22303] = 1;
	v->a[22304] = aux_sym__literal_repeat1;
	v->a[22305] = state(2621);
	v->a[22306] = 1;
	v->a[22307] = sym__expression;
	v->a[22308] = state(2801);
	v->a[22309] = 1;
	v->a[22310] = sym__arithmetic_binary_expression;
	v->a[22311] = state(2803);
	v->a[22312] = 1;
	v->a[22313] = sym__arithmetic_ternary_expression;
	v->a[22314] = state(2809);
	v->a[22315] = 1;
	v->a[22316] = sym__arithmetic_unary_expression;
	v->a[22317] = state(2825);
	v->a[22318] = 1;
	v->a[22319] = sym__arithmetic_postfix_expression;
	small_parse_table_1116(v);
}

void	small_parse_table_1116(t_small_parse_table_array *v)
{
	v->a[22320] = actions(1129);
	v->a[22321] = 2;
	v->a[22322] = anon_sym_LPAREN_LPAREN;
	v->a[22323] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22324] = actions(1165);
	v->a[22325] = 2;
	v->a[22326] = anon_sym_LT_LPAREN;
	v->a[22327] = anon_sym_GT_LPAREN;
	v->a[22328] = actions(1183);
	v->a[22329] = 2;
	v->a[22330] = sym_raw_string;
	v->a[22331] = sym_ansi_c_string;
	v->a[22332] = actions(3054);
	v->a[22333] = 2;
	v->a[22334] = anon_sym_PLUS_PLUS2;
	v->a[22335] = anon_sym_DASH_DASH2;
	v->a[22336] = actions(3056);
	v->a[22337] = 2;
	v->a[22338] = anon_sym_DASH2;
	v->a[22339] = anon_sym_PLUS2;
	small_parse_table_1117(v);
}

void	small_parse_table_1117(t_small_parse_table_array *v)
{
	v->a[22340] = state(2397);
	v->a[22341] = 4;
	v->a[22342] = sym_string;
	v->a[22343] = sym_number;
	v->a[22344] = sym_simple_expansion;
	v->a[22345] = sym_expansion;
	v->a[22346] = state(2456);
	v->a[22347] = 4;
	v->a[22348] = sym_arithmetic_expansion;
	v->a[22349] = sym_brace_expression;
	v->a[22350] = sym_translated_string;
	v->a[22351] = sym_process_substitution;
	v->a[22352] = state(2843);
	v->a[22353] = 4;
	v->a[22354] = sym_subscript;
	v->a[22355] = sym__arithmetic_expression;
	v->a[22356] = sym__arithmetic_literal;
	v->a[22357] = sym__arithmetic_parenthesized_expression;
	v->a[22358] = state(2594);
	v->a[22359] = 6;
	small_parse_table_1118(v);
}

void	small_parse_table_1118(t_small_parse_table_array *v)
{
	v->a[22360] = sym_binary_expression;
	v->a[22361] = sym_ternary_expression;
	v->a[22362] = sym_unary_expression;
	v->a[22363] = sym_postfix_expression;
	v->a[22364] = sym_parenthesized_expression;
	v->a[22365] = sym_concatenation;
	v->a[22366] = 35;
	v->a[22367] = actions(71);
	v->a[22368] = 1;
	v->a[22369] = sym_comment;
	v->a[22370] = actions(1141);
	v->a[22371] = 1;
	v->a[22372] = anon_sym_DOLLAR_LBRACK;
	v->a[22373] = actions(1145);
	v->a[22374] = 1;
	v->a[22375] = anon_sym_DOLLAR;
	v->a[22376] = actions(1149);
	v->a[22377] = 1;
	v->a[22378] = anon_sym_DQUOTE;
	v->a[22379] = actions(1153);
	small_parse_table_1119(v);
}

void	small_parse_table_1119(t_small_parse_table_array *v)
{
	v->a[22380] = 1;
	v->a[22381] = aux_sym_number_token1;
	v->a[22382] = actions(1155);
	v->a[22383] = 1;
	v->a[22384] = aux_sym_number_token2;
	v->a[22385] = actions(1157);
	v->a[22386] = 1;
	v->a[22387] = anon_sym_DOLLAR_LBRACE;
	v->a[22388] = actions(1159);
	v->a[22389] = 1;
	v->a[22390] = anon_sym_DOLLAR_LPAREN;
	v->a[22391] = actions(1163);
	v->a[22392] = 1;
	v->a[22393] = anon_sym_DOLLAR_BQUOTE;
	v->a[22394] = actions(1169);
	v->a[22395] = 1;
	v->a[22396] = sym__brace_start;
	v->a[22397] = actions(1171);
	v->a[22398] = 1;
	v->a[22399] = sym_word;
	small_parse_table_1120(v);
}

/* EOF small_parse_table_223.c */
