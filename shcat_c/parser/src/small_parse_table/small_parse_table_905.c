/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_905.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4525(t_small_parse_table_array *v)
{
	v->a[90500] = anon_sym_LT_LPAREN;
	v->a[90501] = anon_sym_GT_LPAREN;
	v->a[90502] = sym_word;
	v->a[90503] = 27;
	v->a[90504] = actions(71);
	v->a[90505] = 1;
	v->a[90506] = sym_comment;
	v->a[90507] = actions(1131);
	v->a[90508] = 1;
	v->a[90509] = anon_sym_LPAREN;
	v->a[90510] = actions(1141);
	v->a[90511] = 1;
	v->a[90512] = anon_sym_DOLLAR_LBRACK;
	v->a[90513] = actions(1145);
	v->a[90514] = 1;
	v->a[90515] = anon_sym_DOLLAR;
	v->a[90516] = actions(1149);
	v->a[90517] = 1;
	v->a[90518] = anon_sym_DQUOTE;
	v->a[90519] = actions(1153);
	small_parse_table_4526(v);
}

void	small_parse_table_4526(t_small_parse_table_array *v)
{
	v->a[90520] = 1;
	v->a[90521] = aux_sym_number_token1;
	v->a[90522] = actions(1155);
	v->a[90523] = 1;
	v->a[90524] = aux_sym_number_token2;
	v->a[90525] = actions(1157);
	v->a[90526] = 1;
	v->a[90527] = anon_sym_DOLLAR_LBRACE;
	v->a[90528] = actions(1159);
	v->a[90529] = 1;
	v->a[90530] = anon_sym_DOLLAR_LPAREN;
	v->a[90531] = actions(1163);
	v->a[90532] = 1;
	v->a[90533] = anon_sym_DOLLAR_BQUOTE;
	v->a[90534] = actions(1169);
	v->a[90535] = 1;
	v->a[90536] = sym__brace_start;
	v->a[90537] = actions(1187);
	v->a[90538] = 1;
	v->a[90539] = sym_word;
	small_parse_table_4527(v);
}

void	small_parse_table_4527(t_small_parse_table_array *v)
{
	v->a[90540] = actions(1189);
	v->a[90541] = 1;
	v->a[90542] = anon_sym_BANG;
	v->a[90543] = actions(1195);
	v->a[90544] = 1;
	v->a[90545] = anon_sym_TILDE;
	v->a[90546] = actions(1201);
	v->a[90547] = 1;
	v->a[90548] = sym_test_operator;
	v->a[90549] = actions(3060);
	v->a[90550] = 1;
	v->a[90551] = anon_sym_BQUOTE;
	v->a[90552] = actions(5779);
	v->a[90553] = 1;
	v->a[90554] = sym__special_character;
	v->a[90555] = state(2717);
	v->a[90556] = 1;
	v->a[90557] = aux_sym__literal_repeat1;
	v->a[90558] = state(3156);
	v->a[90559] = 1;
	small_parse_table_4528(v);
}

void	small_parse_table_4528(t_small_parse_table_array *v)
{
	v->a[90560] = sym__expression;
	v->a[90561] = state(7444);
	v->a[90562] = 1;
	v->a[90563] = sym__test_command_binary_expression;
	v->a[90564] = actions(1129);
	v->a[90565] = 2;
	v->a[90566] = anon_sym_LPAREN_LPAREN;
	v->a[90567] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[90568] = actions(1165);
	v->a[90569] = 2;
	v->a[90570] = anon_sym_LT_LPAREN;
	v->a[90571] = anon_sym_GT_LPAREN;
	v->a[90572] = actions(1191);
	v->a[90573] = 2;
	v->a[90574] = anon_sym_PLUS_PLUS2;
	v->a[90575] = anon_sym_DASH_DASH2;
	v->a[90576] = actions(1193);
	v->a[90577] = 2;
	v->a[90578] = anon_sym_DASH2;
	v->a[90579] = anon_sym_PLUS2;
	small_parse_table_4529(v);
}

void	small_parse_table_4529(t_small_parse_table_array *v)
{
	v->a[90580] = actions(1199);
	v->a[90581] = 2;
	v->a[90582] = sym_raw_string;
	v->a[90583] = sym_ansi_c_string;
	v->a[90584] = state(2594);
	v->a[90585] = 6;
	v->a[90586] = sym_binary_expression;
	v->a[90587] = sym_ternary_expression;
	v->a[90588] = sym_unary_expression;
	v->a[90589] = sym_postfix_expression;
	v->a[90590] = sym_parenthesized_expression;
	v->a[90591] = sym_concatenation;
	v->a[90592] = state(2503);
	v->a[90593] = 9;
	v->a[90594] = sym_arithmetic_expansion;
	v->a[90595] = sym_brace_expression;
	v->a[90596] = sym_string;
	v->a[90597] = sym_translated_string;
	v->a[90598] = sym_number;
	v->a[90599] = sym_simple_expansion;
	small_parse_table_4530(v);
}

/* EOF small_parse_table_905.c */
