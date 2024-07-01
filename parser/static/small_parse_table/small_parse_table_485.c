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
	v->a[48500] = 8;
	v->a[48501] = sym__arithmetic_expression;
	v->a[48502] = sym_arithmetic_literal;
	v->a[48503] = sym_arithmetic_binary_expression;
	v->a[48504] = sym_arithmetic_ternary_expression;
	v->a[48505] = sym_arithmetic_unary_expression;
	v->a[48506] = sym_arithmetic_postfix_expression;
	v->a[48507] = sym_arithmetic_parenthesized_expression;
	v->a[48508] = sym_command_substitution;
	v->a[48509] = 15;
	v->a[48510] = actions(664);
	v->a[48511] = 1;
	v->a[48512] = sym_comment;
	v->a[48513] = actions(1740);
	v->a[48514] = 1;
	v->a[48515] = anon_sym_LPAREN;
	v->a[48516] = actions(1742);
	v->a[48517] = 1;
	v->a[48518] = anon_sym_BANG;
	v->a[48519] = actions(1748);
	small_parse_table_2426(v);
}

void	small_parse_table_2426(t_small_parse_table_array *v)
{
	v->a[48520] = 1;
	v->a[48521] = anon_sym_TILDE;
	v->a[48522] = actions(1750);
	v->a[48523] = 1;
	v->a[48524] = anon_sym_DOLLAR;
	v->a[48525] = actions(1752);
	v->a[48526] = 1;
	v->a[48527] = anon_sym_DQUOTE;
	v->a[48528] = actions(1756);
	v->a[48529] = 1;
	v->a[48530] = anon_sym_DOLLAR_LBRACE;
	v->a[48531] = actions(1758);
	v->a[48532] = 1;
	v->a[48533] = anon_sym_DOLLAR_LPAREN;
	v->a[48534] = actions(1760);
	v->a[48535] = 1;
	v->a[48536] = anon_sym_BQUOTE;
	v->a[48537] = actions(1762);
	v->a[48538] = 1;
	v->a[48539] = sym_variable_name;
	small_parse_table_2427(v);
}

void	small_parse_table_2427(t_small_parse_table_array *v)
{
	v->a[48540] = actions(1744);
	v->a[48541] = 2;
	v->a[48542] = anon_sym_PLUS_PLUS;
	v->a[48543] = anon_sym_DASH_DASH;
	v->a[48544] = actions(1746);
	v->a[48545] = 2;
	v->a[48546] = anon_sym_DASH2;
	v->a[48547] = anon_sym_PLUS2;
	v->a[48548] = actions(1754);
	v->a[48549] = 2;
	v->a[48550] = sym_number;
	v->a[48551] = aux_sym__simple_variable_name_token1;
	v->a[48552] = state(260);
	v->a[48553] = 3;
	v->a[48554] = sym_string;
	v->a[48555] = sym_simple_expansion;
	v->a[48556] = sym_expansion;
	v->a[48557] = state(332);
	v->a[48558] = 8;
	v->a[48559] = sym__arithmetic_expression;
	small_parse_table_2428(v);
}

void	small_parse_table_2428(t_small_parse_table_array *v)
{
	v->a[48560] = sym_arithmetic_literal;
	v->a[48561] = sym_arithmetic_binary_expression;
	v->a[48562] = sym_arithmetic_ternary_expression;
	v->a[48563] = sym_arithmetic_unary_expression;
	v->a[48564] = sym_arithmetic_postfix_expression;
	v->a[48565] = sym_arithmetic_parenthesized_expression;
	v->a[48566] = sym_command_substitution;
	v->a[48567] = 4;
	v->a[48568] = actions(3);
	v->a[48569] = 1;
	v->a[48570] = sym_comment;
	v->a[48571] = actions(1439);
	v->a[48572] = 1;
	v->a[48573] = anon_sym_BQUOTE;
	v->a[48574] = actions(1441);
	v->a[48575] = 2;
	v->a[48576] = sym_file_descriptor;
	v->a[48577] = sym_variable_name;
	v->a[48578] = actions(1437);
	v->a[48579] = 23;
	small_parse_table_2429(v);
}

void	small_parse_table_2429(t_small_parse_table_array *v)
{
	v->a[48580] = anon_sym_for;
	v->a[48581] = anon_sym_while;
	v->a[48582] = anon_sym_until;
	v->a[48583] = anon_sym_if;
	v->a[48584] = anon_sym_case;
	v->a[48585] = anon_sym_LPAREN;
	v->a[48586] = anon_sym_LBRACE;
	v->a[48587] = anon_sym_BANG;
	v->a[48588] = anon_sym_LT;
	v->a[48589] = anon_sym_GT;
	v->a[48590] = anon_sym_GT_GT;
	v->a[48591] = anon_sym_LT_AMP;
	v->a[48592] = anon_sym_GT_AMP;
	v->a[48593] = anon_sym_GT_PIPE;
	v->a[48594] = anon_sym_LT_GT;
	v->a[48595] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[48596] = anon_sym_DOLLAR;
	v->a[48597] = anon_sym_DQUOTE;
	v->a[48598] = sym_raw_string;
	v->a[48599] = sym_number;
	small_parse_table_2430(v);
}

/* EOF small_parse_table_485.c */
