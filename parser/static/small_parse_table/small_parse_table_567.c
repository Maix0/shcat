/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_567.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2835(t_small_parse_table_array *v)
{
	v->a[56700] = actions(1931);
	v->a[56701] = 1;
	v->a[56702] = anon_sym_DOLLAR;
	v->a[56703] = actions(1933);
	v->a[56704] = 1;
	v->a[56705] = anon_sym_DQUOTE;
	v->a[56706] = actions(1937);
	v->a[56707] = 1;
	v->a[56708] = anon_sym_DOLLAR_LBRACE;
	v->a[56709] = actions(1939);
	v->a[56710] = 1;
	v->a[56711] = anon_sym_DOLLAR_LPAREN;
	v->a[56712] = actions(1941);
	v->a[56713] = 1;
	v->a[56714] = anon_sym_BQUOTE;
	v->a[56715] = actions(1943);
	v->a[56716] = 1;
	v->a[56717] = sym_variable_name;
	v->a[56718] = actions(1925);
	v->a[56719] = 2;
	small_parse_table_2836(v);
}

void	small_parse_table_2836(t_small_parse_table_array *v)
{
	v->a[56720] = anon_sym_PLUS_PLUS;
	v->a[56721] = anon_sym_DASH_DASH;
	v->a[56722] = actions(1927);
	v->a[56723] = 2;
	v->a[56724] = anon_sym_DASH2;
	v->a[56725] = anon_sym_PLUS2;
	v->a[56726] = actions(1935);
	v->a[56727] = 2;
	v->a[56728] = sym_number;
	v->a[56729] = aux_sym__simple_variable_name_token1;
	v->a[56730] = state(334);
	v->a[56731] = 3;
	v->a[56732] = sym_string;
	v->a[56733] = sym_simple_expansion;
	v->a[56734] = sym_expansion;
	v->a[56735] = state(361);
	v->a[56736] = 8;
	v->a[56737] = sym__arithmetic_expression;
	v->a[56738] = sym_arithmetic_literal;
	v->a[56739] = sym_arithmetic_binary_expression;
	small_parse_table_2837(v);
}

void	small_parse_table_2837(t_small_parse_table_array *v)
{
	v->a[56740] = sym_arithmetic_ternary_expression;
	v->a[56741] = sym_arithmetic_unary_expression;
	v->a[56742] = sym_arithmetic_postfix_expression;
	v->a[56743] = sym_arithmetic_parenthesized_expression;
	v->a[56744] = sym_command_substitution;
	v->a[56745] = 15;
	v->a[56746] = actions(870);
	v->a[56747] = 1;
	v->a[56748] = sym_comment;
	v->a[56749] = actions(1744);
	v->a[56750] = 1;
	v->a[56751] = anon_sym_LPAREN;
	v->a[56752] = actions(1746);
	v->a[56753] = 1;
	v->a[56754] = anon_sym_BANG;
	v->a[56755] = actions(1754);
	v->a[56756] = 1;
	v->a[56757] = anon_sym_TILDE;
	v->a[56758] = actions(1756);
	v->a[56759] = 1;
	small_parse_table_2838(v);
}

void	small_parse_table_2838(t_small_parse_table_array *v)
{
	v->a[56760] = anon_sym_DOLLAR;
	v->a[56761] = actions(1758);
	v->a[56762] = 1;
	v->a[56763] = anon_sym_DQUOTE;
	v->a[56764] = actions(1762);
	v->a[56765] = 1;
	v->a[56766] = anon_sym_DOLLAR_LBRACE;
	v->a[56767] = actions(1764);
	v->a[56768] = 1;
	v->a[56769] = anon_sym_DOLLAR_LPAREN;
	v->a[56770] = actions(1766);
	v->a[56771] = 1;
	v->a[56772] = anon_sym_BQUOTE;
	v->a[56773] = actions(1768);
	v->a[56774] = 1;
	v->a[56775] = sym_variable_name;
	v->a[56776] = actions(1750);
	v->a[56777] = 2;
	v->a[56778] = anon_sym_PLUS_PLUS;
	v->a[56779] = anon_sym_DASH_DASH;
	small_parse_table_2839(v);
}

void	small_parse_table_2839(t_small_parse_table_array *v)
{
	v->a[56780] = actions(1752);
	v->a[56781] = 2;
	v->a[56782] = anon_sym_DASH2;
	v->a[56783] = anon_sym_PLUS2;
	v->a[56784] = actions(1760);
	v->a[56785] = 2;
	v->a[56786] = sym_number;
	v->a[56787] = aux_sym__simple_variable_name_token1;
	v->a[56788] = state(271);
	v->a[56789] = 3;
	v->a[56790] = sym_string;
	v->a[56791] = sym_simple_expansion;
	v->a[56792] = sym_expansion;
	v->a[56793] = state(319);
	v->a[56794] = 8;
	v->a[56795] = sym__arithmetic_expression;
	v->a[56796] = sym_arithmetic_literal;
	v->a[56797] = sym_arithmetic_binary_expression;
	v->a[56798] = sym_arithmetic_ternary_expression;
	v->a[56799] = sym_arithmetic_unary_expression;
	small_parse_table_2840(v);
}

/* EOF small_parse_table_567.c */
