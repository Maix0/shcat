/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_357.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1785(t_small_parse_table_array *v)
{
	v->a[35700] = sym_comment;
	v->a[35701] = actions(1438);
	v->a[35702] = 1;
	v->a[35703] = sym_variable_name;
	v->a[35704] = actions(1426);
	v->a[35705] = 2;
	v->a[35706] = anon_sym_DASH2;
	v->a[35707] = anon_sym_PLUS2;
	v->a[35708] = actions(1432);
	v->a[35709] = 2;
	v->a[35710] = sym_number;
	v->a[35711] = aux_sym__simple_variable_name_token1;
	v->a[35712] = state(1312);
	v->a[35713] = 3;
	v->a[35714] = sym_string;
	v->a[35715] = sym_simple_expansion;
	v->a[35716] = sym_expansion;
	v->a[35717] = state(1345);
	v->a[35718] = 7;
	v->a[35719] = sym__arithmetic_expression;
	small_parse_table_1786(v);
}

void	small_parse_table_1786(t_small_parse_table_array *v)
{
	v->a[35720] = sym_arithmetic_literal;
	v->a[35721] = sym_arithmetic_binary_expression;
	v->a[35722] = sym_arithmetic_ternary_expression;
	v->a[35723] = sym_arithmetic_unary_expression;
	v->a[35724] = sym_arithmetic_postfix_expression;
	v->a[35725] = sym_arithmetic_parenthesized_expression;
	v->a[35726] = 10;
	v->a[35727] = actions(1436);
	v->a[35728] = 1;
	v->a[35729] = sym_comment;
	v->a[35730] = actions(1440);
	v->a[35731] = 1;
	v->a[35732] = anon_sym_LPAREN;
	v->a[35733] = actions(1444);
	v->a[35734] = 1;
	v->a[35735] = anon_sym_DOLLAR;
	v->a[35736] = actions(1446);
	v->a[35737] = 1;
	v->a[35738] = anon_sym_DQUOTE;
	v->a[35739] = actions(1450);
	small_parse_table_1787(v);
}

void	small_parse_table_1787(t_small_parse_table_array *v)
{
	v->a[35740] = 1;
	v->a[35741] = anon_sym_DOLLAR_LBRACE;
	v->a[35742] = actions(1452);
	v->a[35743] = 1;
	v->a[35744] = sym_variable_name;
	v->a[35745] = actions(1442);
	v->a[35746] = 2;
	v->a[35747] = anon_sym_DASH2;
	v->a[35748] = anon_sym_PLUS2;
	v->a[35749] = actions(1448);
	v->a[35750] = 2;
	v->a[35751] = sym_number;
	v->a[35752] = aux_sym__simple_variable_name_token1;
	v->a[35753] = state(1340);
	v->a[35754] = 3;
	v->a[35755] = sym_string;
	v->a[35756] = sym_simple_expansion;
	v->a[35757] = sym_expansion;
	v->a[35758] = state(1328);
	v->a[35759] = 7;
	small_parse_table_1788(v);
}

void	small_parse_table_1788(t_small_parse_table_array *v)
{
	v->a[35760] = sym__arithmetic_expression;
	v->a[35761] = sym_arithmetic_literal;
	v->a[35762] = sym_arithmetic_binary_expression;
	v->a[35763] = sym_arithmetic_ternary_expression;
	v->a[35764] = sym_arithmetic_unary_expression;
	v->a[35765] = sym_arithmetic_postfix_expression;
	v->a[35766] = sym_arithmetic_parenthesized_expression;
	v->a[35767] = 10;
	v->a[35768] = actions(1424);
	v->a[35769] = 1;
	v->a[35770] = anon_sym_LPAREN;
	v->a[35771] = actions(1428);
	v->a[35772] = 1;
	v->a[35773] = anon_sym_DOLLAR;
	v->a[35774] = actions(1430);
	v->a[35775] = 1;
	v->a[35776] = anon_sym_DQUOTE;
	v->a[35777] = actions(1434);
	v->a[35778] = 1;
	v->a[35779] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1789(v);
}

void	small_parse_table_1789(t_small_parse_table_array *v)
{
	v->a[35780] = actions(1436);
	v->a[35781] = 1;
	v->a[35782] = sym_comment;
	v->a[35783] = actions(1438);
	v->a[35784] = 1;
	v->a[35785] = sym_variable_name;
	v->a[35786] = actions(1426);
	v->a[35787] = 2;
	v->a[35788] = anon_sym_DASH2;
	v->a[35789] = anon_sym_PLUS2;
	v->a[35790] = actions(1432);
	v->a[35791] = 2;
	v->a[35792] = sym_number;
	v->a[35793] = aux_sym__simple_variable_name_token1;
	v->a[35794] = state(1312);
	v->a[35795] = 3;
	v->a[35796] = sym_string;
	v->a[35797] = sym_simple_expansion;
	v->a[35798] = sym_expansion;
	v->a[35799] = state(1353);
	small_parse_table_1790(v);
}

/* EOF small_parse_table_357.c */
