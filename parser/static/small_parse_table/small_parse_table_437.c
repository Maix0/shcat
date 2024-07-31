/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_437.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2185(t_small_parse_table_array *v)
{
	v->a[43700] = actions(1542);
	v->a[43701] = 1;
	v->a[43702] = anon_sym_BANG;
	v->a[43703] = actions(1548);
	v->a[43704] = 1;
	v->a[43705] = anon_sym_DOLLAR;
	v->a[43706] = actions(1550);
	v->a[43707] = 1;
	v->a[43708] = anon_sym_DQUOTE;
	v->a[43709] = actions(1554);
	v->a[43710] = 1;
	v->a[43711] = anon_sym_DOLLAR_LBRACE;
	v->a[43712] = actions(1556);
	v->a[43713] = 1;
	v->a[43714] = sym_variable_name;
	v->a[43715] = actions(1544);
	v->a[43716] = 2;
	v->a[43717] = anon_sym_PLUS_PLUS;
	v->a[43718] = anon_sym_DASH_DASH;
	v->a[43719] = actions(1546);
	small_parse_table_2186(v);
}

void	small_parse_table_2186(t_small_parse_table_array *v)
{
	v->a[43720] = 2;
	v->a[43721] = anon_sym_DASH2;
	v->a[43722] = anon_sym_PLUS2;
	v->a[43723] = actions(1552);
	v->a[43724] = 2;
	v->a[43725] = sym_number;
	v->a[43726] = aux_sym__simple_variable_name_token1;
	v->a[43727] = state(157);
	v->a[43728] = 3;
	v->a[43729] = sym_string;
	v->a[43730] = sym_simple_expansion;
	v->a[43731] = sym_expansion;
	v->a[43732] = state(250);
	v->a[43733] = 7;
	v->a[43734] = sym__arithmetic_expression;
	v->a[43735] = sym_arithmetic_literal;
	v->a[43736] = sym_arithmetic_binary_expression;
	v->a[43737] = sym_arithmetic_ternary_expression;
	v->a[43738] = sym_arithmetic_unary_expression;
	v->a[43739] = sym_arithmetic_postfix_expression;
	small_parse_table_2187(v);
}

void	small_parse_table_2187(t_small_parse_table_array *v)
{
	v->a[43740] = sym_arithmetic_parenthesized_expression;
	v->a[43741] = 12;
	v->a[43742] = actions(407);
	v->a[43743] = 1;
	v->a[43744] = sym_comment;
	v->a[43745] = actions(1540);
	v->a[43746] = 1;
	v->a[43747] = anon_sym_LPAREN;
	v->a[43748] = actions(1542);
	v->a[43749] = 1;
	v->a[43750] = anon_sym_BANG;
	v->a[43751] = actions(1548);
	v->a[43752] = 1;
	v->a[43753] = anon_sym_DOLLAR;
	v->a[43754] = actions(1550);
	v->a[43755] = 1;
	v->a[43756] = anon_sym_DQUOTE;
	v->a[43757] = actions(1554);
	v->a[43758] = 1;
	v->a[43759] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_2188(v);
}

void	small_parse_table_2188(t_small_parse_table_array *v)
{
	v->a[43760] = actions(1556);
	v->a[43761] = 1;
	v->a[43762] = sym_variable_name;
	v->a[43763] = actions(1544);
	v->a[43764] = 2;
	v->a[43765] = anon_sym_PLUS_PLUS;
	v->a[43766] = anon_sym_DASH_DASH;
	v->a[43767] = actions(1546);
	v->a[43768] = 2;
	v->a[43769] = anon_sym_DASH2;
	v->a[43770] = anon_sym_PLUS2;
	v->a[43771] = actions(1552);
	v->a[43772] = 2;
	v->a[43773] = sym_number;
	v->a[43774] = aux_sym__simple_variable_name_token1;
	v->a[43775] = state(157);
	v->a[43776] = 3;
	v->a[43777] = sym_string;
	v->a[43778] = sym_simple_expansion;
	v->a[43779] = sym_expansion;
	small_parse_table_2189(v);
}

void	small_parse_table_2189(t_small_parse_table_array *v)
{
	v->a[43780] = state(249);
	v->a[43781] = 7;
	v->a[43782] = sym__arithmetic_expression;
	v->a[43783] = sym_arithmetic_literal;
	v->a[43784] = sym_arithmetic_binary_expression;
	v->a[43785] = sym_arithmetic_ternary_expression;
	v->a[43786] = sym_arithmetic_unary_expression;
	v->a[43787] = sym_arithmetic_postfix_expression;
	v->a[43788] = sym_arithmetic_parenthesized_expression;
	v->a[43789] = 12;
	v->a[43790] = actions(407);
	v->a[43791] = 1;
	v->a[43792] = sym_comment;
	v->a[43793] = actions(1540);
	v->a[43794] = 1;
	v->a[43795] = anon_sym_LPAREN;
	v->a[43796] = actions(1542);
	v->a[43797] = 1;
	v->a[43798] = anon_sym_BANG;
	v->a[43799] = actions(1548);
	small_parse_table_2190(v);
}

/* EOF small_parse_table_437.c */
