/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_485.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2425(t_small_parse_table_array *v)
{
	v->a[48500] = sym_raw_string;
	v->a[48501] = sym_number;
	v->a[48502] = anon_sym_DOLLAR_LBRACE;
	v->a[48503] = anon_sym_DOLLAR_LPAREN;
	v->a[48504] = sym_word;
	v->a[48505] = 15;
	v->a[48506] = actions(501);
	v->a[48507] = 1;
	v->a[48508] = sym_comment;
	v->a[48509] = actions(1469);
	v->a[48510] = 1;
	v->a[48511] = anon_sym_LPAREN;
	v->a[48512] = actions(1471);
	v->a[48513] = 1;
	v->a[48514] = anon_sym_BANG;
	v->a[48515] = actions(1479);
	v->a[48516] = 1;
	v->a[48517] = anon_sym_TILDE;
	v->a[48518] = actions(1481);
	v->a[48519] = 1;
	small_parse_table_2426(v);
}

void	small_parse_table_2426(t_small_parse_table_array *v)
{
	v->a[48520] = anon_sym_DOLLAR;
	v->a[48521] = actions(1483);
	v->a[48522] = 1;
	v->a[48523] = anon_sym_DQUOTE;
	v->a[48524] = actions(1487);
	v->a[48525] = 1;
	v->a[48526] = anon_sym_DOLLAR_LBRACE;
	v->a[48527] = actions(1489);
	v->a[48528] = 1;
	v->a[48529] = anon_sym_DOLLAR_LPAREN;
	v->a[48530] = actions(1491);
	v->a[48531] = 1;
	v->a[48532] = anon_sym_BQUOTE;
	v->a[48533] = actions(1493);
	v->a[48534] = 1;
	v->a[48535] = sym_variable_name;
	v->a[48536] = actions(1475);
	v->a[48537] = 2;
	v->a[48538] = anon_sym_PLUS_PLUS;
	v->a[48539] = anon_sym_DASH_DASH;
	small_parse_table_2427(v);
}

void	small_parse_table_2427(t_small_parse_table_array *v)
{
	v->a[48540] = actions(1477);
	v->a[48541] = 2;
	v->a[48542] = anon_sym_DASH2;
	v->a[48543] = anon_sym_PLUS2;
	v->a[48544] = actions(1485);
	v->a[48545] = 2;
	v->a[48546] = sym_number;
	v->a[48547] = aux_sym__simple_variable_name_token1;
	v->a[48548] = state(194);
	v->a[48549] = 3;
	v->a[48550] = sym_string;
	v->a[48551] = sym_simple_expansion;
	v->a[48552] = sym_expansion;
	v->a[48553] = state(212);
	v->a[48554] = 8;
	v->a[48555] = sym__arithmetic_expression;
	v->a[48556] = sym_arithmetic_literal;
	v->a[48557] = sym_arithmetic_binary_expression;
	v->a[48558] = sym_arithmetic_ternary_expression;
	v->a[48559] = sym_arithmetic_unary_expression;
	small_parse_table_2428(v);
}

void	small_parse_table_2428(t_small_parse_table_array *v)
{
	v->a[48560] = sym_arithmetic_postfix_expression;
	v->a[48561] = sym_arithmetic_parenthesized_expression;
	v->a[48562] = sym_command_substitution;
	v->a[48563] = 15;
	v->a[48564] = actions(501);
	v->a[48565] = 1;
	v->a[48566] = sym_comment;
	v->a[48567] = actions(1469);
	v->a[48568] = 1;
	v->a[48569] = anon_sym_LPAREN;
	v->a[48570] = actions(1471);
	v->a[48571] = 1;
	v->a[48572] = anon_sym_BANG;
	v->a[48573] = actions(1479);
	v->a[48574] = 1;
	v->a[48575] = anon_sym_TILDE;
	v->a[48576] = actions(1481);
	v->a[48577] = 1;
	v->a[48578] = anon_sym_DOLLAR;
	v->a[48579] = actions(1483);
	small_parse_table_2429(v);
}

void	small_parse_table_2429(t_small_parse_table_array *v)
{
	v->a[48580] = 1;
	v->a[48581] = anon_sym_DQUOTE;
	v->a[48582] = actions(1487);
	v->a[48583] = 1;
	v->a[48584] = anon_sym_DOLLAR_LBRACE;
	v->a[48585] = actions(1489);
	v->a[48586] = 1;
	v->a[48587] = anon_sym_DOLLAR_LPAREN;
	v->a[48588] = actions(1491);
	v->a[48589] = 1;
	v->a[48590] = anon_sym_BQUOTE;
	v->a[48591] = actions(1493);
	v->a[48592] = 1;
	v->a[48593] = sym_variable_name;
	v->a[48594] = actions(1475);
	v->a[48595] = 2;
	v->a[48596] = anon_sym_PLUS_PLUS;
	v->a[48597] = anon_sym_DASH_DASH;
	v->a[48598] = actions(1477);
	v->a[48599] = 2;
	small_parse_table_2430(v);
}

/* EOF small_parse_table_485.c */
