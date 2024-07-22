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
	v->a[45700] = sym_variable_name;
	v->a[45701] = actions(1408);
	v->a[45702] = 24;
	v->a[45703] = anon_sym_for;
	v->a[45704] = anon_sym_while;
	v->a[45705] = anon_sym_until;
	v->a[45706] = anon_sym_if;
	v->a[45707] = anon_sym_case;
	v->a[45708] = anon_sym_LPAREN;
	v->a[45709] = anon_sym_LBRACE;
	v->a[45710] = anon_sym_BANG;
	v->a[45711] = anon_sym_LT;
	v->a[45712] = anon_sym_GT;
	v->a[45713] = anon_sym_GT_GT;
	v->a[45714] = anon_sym_LT_AMP;
	v->a[45715] = anon_sym_GT_AMP;
	v->a[45716] = anon_sym_GT_PIPE;
	v->a[45717] = anon_sym_LT_GT;
	v->a[45718] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[45719] = anon_sym_DOLLAR;
	small_parse_table_2286(v);
}

void	small_parse_table_2286(t_small_parse_table_array *v)
{
	v->a[45720] = anon_sym_DQUOTE;
	v->a[45721] = sym_raw_string;
	v->a[45722] = sym_number;
	v->a[45723] = anon_sym_DOLLAR_LBRACE;
	v->a[45724] = anon_sym_DOLLAR_LPAREN;
	v->a[45725] = anon_sym_BQUOTE;
	v->a[45726] = sym_word;
	v->a[45727] = 16;
	v->a[45728] = actions(501);
	v->a[45729] = 1;
	v->a[45730] = sym_comment;
	v->a[45731] = actions(1469);
	v->a[45732] = 1;
	v->a[45733] = anon_sym_LPAREN;
	v->a[45734] = actions(1471);
	v->a[45735] = 1;
	v->a[45736] = anon_sym_BANG;
	v->a[45737] = actions(1479);
	v->a[45738] = 1;
	v->a[45739] = anon_sym_TILDE;
	small_parse_table_2287(v);
}

void	small_parse_table_2287(t_small_parse_table_array *v)
{
	v->a[45740] = actions(1481);
	v->a[45741] = 1;
	v->a[45742] = anon_sym_DOLLAR;
	v->a[45743] = actions(1483);
	v->a[45744] = 1;
	v->a[45745] = anon_sym_DQUOTE;
	v->a[45746] = actions(1487);
	v->a[45747] = 1;
	v->a[45748] = anon_sym_DOLLAR_LBRACE;
	v->a[45749] = actions(1489);
	v->a[45750] = 1;
	v->a[45751] = anon_sym_DOLLAR_LPAREN;
	v->a[45752] = actions(1491);
	v->a[45753] = 1;
	v->a[45754] = anon_sym_BQUOTE;
	v->a[45755] = actions(1493);
	v->a[45756] = 1;
	v->a[45757] = sym_variable_name;
	v->a[45758] = actions(1656);
	v->a[45759] = 1;
	small_parse_table_2288(v);
}

void	small_parse_table_2288(t_small_parse_table_array *v)
{
	v->a[45760] = anon_sym_RPAREN_RPAREN;
	v->a[45761] = actions(1475);
	v->a[45762] = 2;
	v->a[45763] = anon_sym_PLUS_PLUS;
	v->a[45764] = anon_sym_DASH_DASH;
	v->a[45765] = actions(1477);
	v->a[45766] = 2;
	v->a[45767] = anon_sym_DASH2;
	v->a[45768] = anon_sym_PLUS2;
	v->a[45769] = actions(1485);
	v->a[45770] = 2;
	v->a[45771] = sym_number;
	v->a[45772] = aux_sym__simple_variable_name_token1;
	v->a[45773] = state(194);
	v->a[45774] = 3;
	v->a[45775] = sym_string;
	v->a[45776] = sym_simple_expansion;
	v->a[45777] = sym_expansion;
	v->a[45778] = state(310);
	v->a[45779] = 8;
	small_parse_table_2289(v);
}

void	small_parse_table_2289(t_small_parse_table_array *v)
{
	v->a[45780] = sym__arithmetic_expression;
	v->a[45781] = sym_arithmetic_literal;
	v->a[45782] = sym_arithmetic_binary_expression;
	v->a[45783] = sym_arithmetic_ternary_expression;
	v->a[45784] = sym_arithmetic_unary_expression;
	v->a[45785] = sym_arithmetic_postfix_expression;
	v->a[45786] = sym_arithmetic_parenthesized_expression;
	v->a[45787] = sym_command_substitution;
	v->a[45788] = 6;
	v->a[45789] = actions(3);
	v->a[45790] = 1;
	v->a[45791] = sym_comment;
	v->a[45792] = actions(1219);
	v->a[45793] = 1;
	v->a[45794] = aux_sym_concatenation_token1;
	v->a[45795] = actions(1658);
	v->a[45796] = 1;
	v->a[45797] = sym__concat;
	v->a[45798] = state(444);
	v->a[45799] = 1;
	small_parse_table_2290(v);
}

/* EOF small_parse_table_457.c */
