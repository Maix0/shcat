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
	v->a[45700] = sym_number;
	v->a[45701] = sym_word;
	v->a[45702] = actions(1636);
	v->a[45703] = 4;
	v->a[45704] = anon_sym_SEMI_SEMI;
	v->a[45705] = aux_sym_heredoc_redirect_token1;
	v->a[45706] = anon_sym_AMP;
	v->a[45707] = anon_sym_SEMI;
	v->a[45708] = state(1804);
	v->a[45709] = 5;
	v->a[45710] = sym_arithmetic_expansion;
	v->a[45711] = sym_string;
	v->a[45712] = sym_simple_expansion;
	v->a[45713] = sym_expansion;
	v->a[45714] = sym_command_substitution;
	v->a[45715] = 16;
	v->a[45716] = actions(664);
	v->a[45717] = 1;
	v->a[45718] = sym_comment;
	v->a[45719] = actions(1560);
	small_parse_table_2286(v);
}

void	small_parse_table_2286(t_small_parse_table_array *v)
{
	v->a[45720] = 1;
	v->a[45721] = anon_sym_LPAREN;
	v->a[45722] = actions(1562);
	v->a[45723] = 1;
	v->a[45724] = anon_sym_BANG;
	v->a[45725] = actions(1570);
	v->a[45726] = 1;
	v->a[45727] = anon_sym_TILDE;
	v->a[45728] = actions(1572);
	v->a[45729] = 1;
	v->a[45730] = anon_sym_DOLLAR;
	v->a[45731] = actions(1574);
	v->a[45732] = 1;
	v->a[45733] = anon_sym_DQUOTE;
	v->a[45734] = actions(1578);
	v->a[45735] = 1;
	v->a[45736] = anon_sym_DOLLAR_LBRACE;
	v->a[45737] = actions(1580);
	v->a[45738] = 1;
	v->a[45739] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2287(v);
}

void	small_parse_table_2287(t_small_parse_table_array *v)
{
	v->a[45740] = actions(1582);
	v->a[45741] = 1;
	v->a[45742] = anon_sym_BQUOTE;
	v->a[45743] = actions(1584);
	v->a[45744] = 1;
	v->a[45745] = sym_variable_name;
	v->a[45746] = actions(1691);
	v->a[45747] = 1;
	v->a[45748] = anon_sym_RPAREN_RPAREN;
	v->a[45749] = actions(1566);
	v->a[45750] = 2;
	v->a[45751] = anon_sym_PLUS_PLUS;
	v->a[45752] = anon_sym_DASH_DASH;
	v->a[45753] = actions(1568);
	v->a[45754] = 2;
	v->a[45755] = anon_sym_DASH2;
	v->a[45756] = anon_sym_PLUS2;
	v->a[45757] = actions(1576);
	v->a[45758] = 2;
	v->a[45759] = sym_number;
	small_parse_table_2288(v);
}

void	small_parse_table_2288(t_small_parse_table_array *v)
{
	v->a[45760] = aux_sym__simple_variable_name_token1;
	v->a[45761] = state(255);
	v->a[45762] = 3;
	v->a[45763] = sym_string;
	v->a[45764] = sym_simple_expansion;
	v->a[45765] = sym_expansion;
	v->a[45766] = state(314);
	v->a[45767] = 8;
	v->a[45768] = sym__arithmetic_expression;
	v->a[45769] = sym_arithmetic_literal;
	v->a[45770] = sym_arithmetic_binary_expression;
	v->a[45771] = sym_arithmetic_ternary_expression;
	v->a[45772] = sym_arithmetic_unary_expression;
	v->a[45773] = sym_arithmetic_postfix_expression;
	v->a[45774] = sym_arithmetic_parenthesized_expression;
	v->a[45775] = sym_command_substitution;
	v->a[45776] = 12;
	v->a[45777] = actions(3);
	v->a[45778] = 1;
	v->a[45779] = sym_comment;
	small_parse_table_2289(v);
}

void	small_parse_table_2289(t_small_parse_table_array *v)
{
	v->a[45780] = actions(495);
	v->a[45781] = 1;
	v->a[45782] = sym_file_descriptor;
	v->a[45783] = actions(1588);
	v->a[45784] = 1;
	v->a[45785] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[45786] = actions(1590);
	v->a[45787] = 1;
	v->a[45788] = anon_sym_DOLLAR;
	v->a[45789] = actions(1592);
	v->a[45790] = 1;
	v->a[45791] = anon_sym_DQUOTE;
	v->a[45792] = actions(1594);
	v->a[45793] = 1;
	v->a[45794] = anon_sym_DOLLAR_LBRACE;
	v->a[45795] = actions(1596);
	v->a[45796] = 1;
	v->a[45797] = anon_sym_DOLLAR_LPAREN;
	v->a[45798] = actions(1598);
	v->a[45799] = 1;
	small_parse_table_2290(v);
}

/* EOF small_parse_table_457.c */
