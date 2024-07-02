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
	v->a[48500] = anon_sym_DOLLAR;
	v->a[48501] = actions(1742);
	v->a[48502] = 1;
	v->a[48503] = anon_sym_DQUOTE;
	v->a[48504] = actions(1746);
	v->a[48505] = 1;
	v->a[48506] = anon_sym_DOLLAR_LBRACE;
	v->a[48507] = actions(1748);
	v->a[48508] = 1;
	v->a[48509] = anon_sym_DOLLAR_LPAREN;
	v->a[48510] = actions(1750);
	v->a[48511] = 1;
	v->a[48512] = anon_sym_BQUOTE;
	v->a[48513] = actions(1752);
	v->a[48514] = 1;
	v->a[48515] = sym_variable_name;
	v->a[48516] = actions(1734);
	v->a[48517] = 2;
	v->a[48518] = anon_sym_PLUS_PLUS;
	v->a[48519] = anon_sym_DASH_DASH;
	small_parse_table_2426(v);
}

void	small_parse_table_2426(t_small_parse_table_array *v)
{
	v->a[48520] = actions(1736);
	v->a[48521] = 2;
	v->a[48522] = anon_sym_DASH2;
	v->a[48523] = anon_sym_PLUS2;
	v->a[48524] = actions(1744);
	v->a[48525] = 2;
	v->a[48526] = sym_number;
	v->a[48527] = aux_sym__simple_variable_name_token1;
	v->a[48528] = state(264);
	v->a[48529] = 3;
	v->a[48530] = sym_string;
	v->a[48531] = sym_simple_expansion;
	v->a[48532] = sym_expansion;
	v->a[48533] = state(330);
	v->a[48534] = 8;
	v->a[48535] = sym__arithmetic_expression;
	v->a[48536] = sym_arithmetic_literal;
	v->a[48537] = sym_arithmetic_binary_expression;
	v->a[48538] = sym_arithmetic_ternary_expression;
	v->a[48539] = sym_arithmetic_unary_expression;
	small_parse_table_2427(v);
}

void	small_parse_table_2427(t_small_parse_table_array *v)
{
	v->a[48540] = sym_arithmetic_postfix_expression;
	v->a[48541] = sym_arithmetic_parenthesized_expression;
	v->a[48542] = sym_command_substitution;
	v->a[48543] = 6;
	v->a[48544] = actions(3);
	v->a[48545] = 1;
	v->a[48546] = sym_comment;
	v->a[48547] = actions(1754);
	v->a[48548] = 1;
	v->a[48549] = aux_sym_concatenation_token1;
	v->a[48550] = actions(1756);
	v->a[48551] = 1;
	v->a[48552] = sym__concat;
	v->a[48553] = state(778);
	v->a[48554] = 1;
	v->a[48555] = aux_sym_concatenation_repeat1;
	v->a[48556] = actions(1043);
	v->a[48557] = 2;
	v->a[48558] = sym_file_descriptor;
	v->a[48559] = sym_variable_name;
	small_parse_table_2428(v);
}

void	small_parse_table_2428(t_small_parse_table_array *v)
{
	v->a[48560] = actions(1045);
	v->a[48561] = 21;
	v->a[48562] = anon_sym_PIPE;
	v->a[48563] = anon_sym_AMP_AMP;
	v->a[48564] = anon_sym_PIPE_PIPE;
	v->a[48565] = anon_sym_LT;
	v->a[48566] = anon_sym_GT;
	v->a[48567] = anon_sym_GT_GT;
	v->a[48568] = anon_sym_LT_AMP;
	v->a[48569] = anon_sym_GT_AMP;
	v->a[48570] = anon_sym_GT_PIPE;
	v->a[48571] = anon_sym_LT_GT;
	v->a[48572] = anon_sym_LT_LT;
	v->a[48573] = anon_sym_LT_LT_DASH;
	v->a[48574] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[48575] = anon_sym_DOLLAR;
	v->a[48576] = anon_sym_DQUOTE;
	v->a[48577] = sym_raw_string;
	v->a[48578] = sym_number;
	v->a[48579] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_2429(v);
}

void	small_parse_table_2429(t_small_parse_table_array *v)
{
	v->a[48580] = anon_sym_DOLLAR_LPAREN;
	v->a[48581] = anon_sym_BQUOTE;
	v->a[48582] = sym_word;
	v->a[48583] = 15;
	v->a[48584] = actions(680);
	v->a[48585] = 1;
	v->a[48586] = sym_comment;
	v->a[48587] = actions(1574);
	v->a[48588] = 1;
	v->a[48589] = anon_sym_LPAREN;
	v->a[48590] = actions(1576);
	v->a[48591] = 1;
	v->a[48592] = anon_sym_BANG;
	v->a[48593] = actions(1584);
	v->a[48594] = 1;
	v->a[48595] = anon_sym_TILDE;
	v->a[48596] = actions(1586);
	v->a[48597] = 1;
	v->a[48598] = anon_sym_DOLLAR;
	v->a[48599] = actions(1588);
	small_parse_table_2430(v);
}

/* EOF small_parse_table_485.c */
