/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_457.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2285(t_small_parse_table_array *v)
{
	v->a[45700] = 1;
	v->a[45701] = sym_comment;
	v->a[45702] = actions(1170);
	v->a[45703] = 1;
	v->a[45704] = aux_sym_concatenation_token1;
	v->a[45705] = actions(1665);
	v->a[45706] = 1;
	v->a[45707] = sym__concat;
	v->a[45708] = state(419);
	v->a[45709] = 1;
	v->a[45710] = aux_sym_concatenation_repeat1;
	v->a[45711] = actions(1043);
	v->a[45712] = 2;
	v->a[45713] = sym_file_descriptor;
	v->a[45714] = sym_variable_name;
	v->a[45715] = actions(1045);
	v->a[45716] = 22;
	v->a[45717] = anon_sym_PIPE;
	v->a[45718] = anon_sym_AMP_AMP;
	v->a[45719] = anon_sym_PIPE_PIPE;
	small_parse_table_2286(v);
}

void	small_parse_table_2286(t_small_parse_table_array *v)
{
	v->a[45720] = anon_sym_LT;
	v->a[45721] = anon_sym_GT;
	v->a[45722] = anon_sym_GT_GT;
	v->a[45723] = anon_sym_LT_AMP;
	v->a[45724] = anon_sym_GT_AMP;
	v->a[45725] = anon_sym_GT_PIPE;
	v->a[45726] = anon_sym_LT_GT;
	v->a[45727] = anon_sym_LT_LT;
	v->a[45728] = anon_sym_LT_LT_DASH;
	v->a[45729] = aux_sym_heredoc_redirect_token1;
	v->a[45730] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[45731] = anon_sym_DOLLAR;
	v->a[45732] = anon_sym_DQUOTE;
	v->a[45733] = sym_raw_string;
	v->a[45734] = sym_number;
	v->a[45735] = anon_sym_DOLLAR_LBRACE;
	v->a[45736] = anon_sym_DOLLAR_LPAREN;
	v->a[45737] = anon_sym_BQUOTE;
	v->a[45738] = sym_word;
	v->a[45739] = 16;
	small_parse_table_2287(v);
}

void	small_parse_table_2287(t_small_parse_table_array *v)
{
	v->a[45740] = actions(680);
	v->a[45741] = 1;
	v->a[45742] = sym_comment;
	v->a[45743] = actions(1574);
	v->a[45744] = 1;
	v->a[45745] = anon_sym_LPAREN;
	v->a[45746] = actions(1576);
	v->a[45747] = 1;
	v->a[45748] = anon_sym_BANG;
	v->a[45749] = actions(1584);
	v->a[45750] = 1;
	v->a[45751] = anon_sym_TILDE;
	v->a[45752] = actions(1586);
	v->a[45753] = 1;
	v->a[45754] = anon_sym_DOLLAR;
	v->a[45755] = actions(1588);
	v->a[45756] = 1;
	v->a[45757] = anon_sym_DQUOTE;
	v->a[45758] = actions(1592);
	v->a[45759] = 1;
	small_parse_table_2288(v);
}

void	small_parse_table_2288(t_small_parse_table_array *v)
{
	v->a[45760] = anon_sym_DOLLAR_LBRACE;
	v->a[45761] = actions(1594);
	v->a[45762] = 1;
	v->a[45763] = anon_sym_DOLLAR_LPAREN;
	v->a[45764] = actions(1596);
	v->a[45765] = 1;
	v->a[45766] = anon_sym_BQUOTE;
	v->a[45767] = actions(1598);
	v->a[45768] = 1;
	v->a[45769] = sym_variable_name;
	v->a[45770] = actions(1667);
	v->a[45771] = 1;
	v->a[45772] = anon_sym_RPAREN_RPAREN;
	v->a[45773] = actions(1580);
	v->a[45774] = 2;
	v->a[45775] = anon_sym_PLUS_PLUS;
	v->a[45776] = anon_sym_DASH_DASH;
	v->a[45777] = actions(1582);
	v->a[45778] = 2;
	v->a[45779] = anon_sym_DASH2;
	small_parse_table_2289(v);
}

void	small_parse_table_2289(t_small_parse_table_array *v)
{
	v->a[45780] = anon_sym_PLUS2;
	v->a[45781] = actions(1590);
	v->a[45782] = 2;
	v->a[45783] = sym_number;
	v->a[45784] = aux_sym__simple_variable_name_token1;
	v->a[45785] = state(238);
	v->a[45786] = 3;
	v->a[45787] = sym_string;
	v->a[45788] = sym_simple_expansion;
	v->a[45789] = sym_expansion;
	v->a[45790] = state(313);
	v->a[45791] = 8;
	v->a[45792] = sym__arithmetic_expression;
	v->a[45793] = sym_arithmetic_literal;
	v->a[45794] = sym_arithmetic_binary_expression;
	v->a[45795] = sym_arithmetic_ternary_expression;
	v->a[45796] = sym_arithmetic_unary_expression;
	v->a[45797] = sym_arithmetic_postfix_expression;
	v->a[45798] = sym_arithmetic_parenthesized_expression;
	v->a[45799] = sym_command_substitution;
	small_parse_table_2290(v);
}

/* EOF small_parse_table_457.c */
