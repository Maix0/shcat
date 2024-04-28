/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1175.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5875(t_small_parse_table_array *v)
{
	v->a[117500] = sym_comment;
	v->a[117501] = actions(1131);
	v->a[117502] = 1;
	v->a[117503] = anon_sym_LPAREN;
	v->a[117504] = actions(1141);
	v->a[117505] = 1;
	v->a[117506] = anon_sym_DOLLAR_LBRACK;
	v->a[117507] = actions(1145);
	v->a[117508] = 1;
	v->a[117509] = anon_sym_DOLLAR;
	v->a[117510] = actions(1149);
	v->a[117511] = 1;
	v->a[117512] = anon_sym_DQUOTE;
	v->a[117513] = actions(1153);
	v->a[117514] = 1;
	v->a[117515] = aux_sym_number_token1;
	v->a[117516] = actions(1155);
	v->a[117517] = 1;
	v->a[117518] = aux_sym_number_token2;
	v->a[117519] = actions(1157);
	small_parse_table_5876(v);
}

void	small_parse_table_5876(t_small_parse_table_array *v)
{
	v->a[117520] = 1;
	v->a[117521] = anon_sym_DOLLAR_LBRACE;
	v->a[117522] = actions(1159);
	v->a[117523] = 1;
	v->a[117524] = anon_sym_DOLLAR_LPAREN;
	v->a[117525] = actions(1163);
	v->a[117526] = 1;
	v->a[117527] = anon_sym_DOLLAR_BQUOTE;
	v->a[117528] = actions(1169);
	v->a[117529] = 1;
	v->a[117530] = sym__brace_start;
	v->a[117531] = actions(1187);
	v->a[117532] = 1;
	v->a[117533] = sym_word;
	v->a[117534] = actions(1189);
	v->a[117535] = 1;
	v->a[117536] = anon_sym_BANG;
	v->a[117537] = actions(1195);
	v->a[117538] = 1;
	v->a[117539] = anon_sym_TILDE;
	small_parse_table_5877(v);
}

void	small_parse_table_5877(t_small_parse_table_array *v)
{
	v->a[117540] = actions(1201);
	v->a[117541] = 1;
	v->a[117542] = sym_test_operator;
	v->a[117543] = actions(3060);
	v->a[117544] = 1;
	v->a[117545] = anon_sym_BQUOTE;
	v->a[117546] = actions(5779);
	v->a[117547] = 1;
	v->a[117548] = sym__special_character;
	v->a[117549] = state(2717);
	v->a[117550] = 1;
	v->a[117551] = aux_sym__literal_repeat1;
	v->a[117552] = state(2996);
	v->a[117553] = 1;
	v->a[117554] = sym__expression;
	v->a[117555] = actions(1129);
	v->a[117556] = 2;
	v->a[117557] = anon_sym_LPAREN_LPAREN;
	v->a[117558] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[117559] = actions(1165);
	small_parse_table_5878(v);
}

void	small_parse_table_5878(t_small_parse_table_array *v)
{
	v->a[117560] = 2;
	v->a[117561] = anon_sym_LT_LPAREN;
	v->a[117562] = anon_sym_GT_LPAREN;
	v->a[117563] = actions(1191);
	v->a[117564] = 2;
	v->a[117565] = anon_sym_PLUS_PLUS2;
	v->a[117566] = anon_sym_DASH_DASH2;
	v->a[117567] = actions(1193);
	v->a[117568] = 2;
	v->a[117569] = anon_sym_DASH2;
	v->a[117570] = anon_sym_PLUS2;
	v->a[117571] = actions(1199);
	v->a[117572] = 2;
	v->a[117573] = sym_raw_string;
	v->a[117574] = sym_ansi_c_string;
	v->a[117575] = state(2594);
	v->a[117576] = 6;
	v->a[117577] = sym_binary_expression;
	v->a[117578] = sym_ternary_expression;
	v->a[117579] = sym_unary_expression;
	small_parse_table_5879(v);
}

void	small_parse_table_5879(t_small_parse_table_array *v)
{
	v->a[117580] = sym_postfix_expression;
	v->a[117581] = sym_parenthesized_expression;
	v->a[117582] = sym_concatenation;
	v->a[117583] = state(2503);
	v->a[117584] = 9;
	v->a[117585] = sym_arithmetic_expansion;
	v->a[117586] = sym_brace_expression;
	v->a[117587] = sym_string;
	v->a[117588] = sym_translated_string;
	v->a[117589] = sym_number;
	v->a[117590] = sym_simple_expansion;
	v->a[117591] = sym_expansion;
	v->a[117592] = sym_command_substitution;
	v->a[117593] = sym_process_substitution;
	v->a[117594] = 3;
	v->a[117595] = actions(3);
	v->a[117596] = 1;
	v->a[117597] = sym_comment;
	v->a[117598] = actions(5768);
	v->a[117599] = 5;
	small_parse_table_5880(v);
}

/* EOF small_parse_table_1175.c */
