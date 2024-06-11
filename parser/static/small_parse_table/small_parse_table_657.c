/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_657.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3285(t_small_parse_table_array *v)
{
	v->a[65700] = anon_sym_BQUOTE;
	v->a[65701] = actions(2025);
	v->a[65702] = 1;
	v->a[65703] = sym_variable_name;
	v->a[65704] = actions(2007);
	v->a[65705] = 2;
	v->a[65706] = anon_sym_PLUS_PLUS;
	v->a[65707] = anon_sym_DASH_DASH;
	v->a[65708] = actions(2009);
	v->a[65709] = 2;
	v->a[65710] = anon_sym_DASH2;
	v->a[65711] = anon_sym_PLUS2;
	v->a[65712] = actions(2017);
	v->a[65713] = 2;
	v->a[65714] = sym_number;
	v->a[65715] = aux_sym__simple_variable_name_token1;
	v->a[65716] = state(503);
	v->a[65717] = 3;
	v->a[65718] = sym_string;
	v->a[65719] = sym_simple_expansion;
	small_parse_table_3286(v);
}

void	small_parse_table_3286(t_small_parse_table_array *v)
{
	v->a[65720] = sym_expansion;
	v->a[65721] = state(590);
	v->a[65722] = 8;
	v->a[65723] = sym__arithmetic_expression;
	v->a[65724] = sym_arithmetic_literal;
	v->a[65725] = sym_arithmetic_binary_expression;
	v->a[65726] = sym_arithmetic_ternary_expression;
	v->a[65727] = sym_arithmetic_unary_expression;
	v->a[65728] = sym_arithmetic_postfix_expression;
	v->a[65729] = sym_arithmetic_parenthesized_expression;
	v->a[65730] = sym_command_substitution;
	v->a[65731] = 15;
	v->a[65732] = actions(1094);
	v->a[65733] = 1;
	v->a[65734] = sym_comment;
	v->a[65735] = actions(2003);
	v->a[65736] = 1;
	v->a[65737] = anon_sym_LPAREN;
	v->a[65738] = actions(2005);
	v->a[65739] = 1;
	small_parse_table_3287(v);
}

void	small_parse_table_3287(t_small_parse_table_array *v)
{
	v->a[65740] = anon_sym_BANG;
	v->a[65741] = actions(2011);
	v->a[65742] = 1;
	v->a[65743] = anon_sym_TILDE;
	v->a[65744] = actions(2013);
	v->a[65745] = 1;
	v->a[65746] = anon_sym_DOLLAR;
	v->a[65747] = actions(2015);
	v->a[65748] = 1;
	v->a[65749] = anon_sym_DQUOTE;
	v->a[65750] = actions(2019);
	v->a[65751] = 1;
	v->a[65752] = anon_sym_DOLLAR_LBRACE;
	v->a[65753] = actions(2021);
	v->a[65754] = 1;
	v->a[65755] = anon_sym_DOLLAR_LPAREN;
	v->a[65756] = actions(2023);
	v->a[65757] = 1;
	v->a[65758] = anon_sym_BQUOTE;
	v->a[65759] = actions(2025);
	small_parse_table_3288(v);
}

void	small_parse_table_3288(t_small_parse_table_array *v)
{
	v->a[65760] = 1;
	v->a[65761] = sym_variable_name;
	v->a[65762] = actions(2007);
	v->a[65763] = 2;
	v->a[65764] = anon_sym_PLUS_PLUS;
	v->a[65765] = anon_sym_DASH_DASH;
	v->a[65766] = actions(2009);
	v->a[65767] = 2;
	v->a[65768] = anon_sym_DASH2;
	v->a[65769] = anon_sym_PLUS2;
	v->a[65770] = actions(2017);
	v->a[65771] = 2;
	v->a[65772] = sym_number;
	v->a[65773] = aux_sym__simple_variable_name_token1;
	v->a[65774] = state(503);
	v->a[65775] = 3;
	v->a[65776] = sym_string;
	v->a[65777] = sym_simple_expansion;
	v->a[65778] = sym_expansion;
	v->a[65779] = state(591);
	small_parse_table_3289(v);
}

void	small_parse_table_3289(t_small_parse_table_array *v)
{
	v->a[65780] = 8;
	v->a[65781] = sym__arithmetic_expression;
	v->a[65782] = sym_arithmetic_literal;
	v->a[65783] = sym_arithmetic_binary_expression;
	v->a[65784] = sym_arithmetic_ternary_expression;
	v->a[65785] = sym_arithmetic_unary_expression;
	v->a[65786] = sym_arithmetic_postfix_expression;
	v->a[65787] = sym_arithmetic_parenthesized_expression;
	v->a[65788] = sym_command_substitution;
	v->a[65789] = 15;
	v->a[65790] = actions(1094);
	v->a[65791] = 1;
	v->a[65792] = sym_comment;
	v->a[65793] = actions(2003);
	v->a[65794] = 1;
	v->a[65795] = anon_sym_LPAREN;
	v->a[65796] = actions(2005);
	v->a[65797] = 1;
	v->a[65798] = anon_sym_BANG;
	v->a[65799] = actions(2011);
	small_parse_table_3290(v);
}

/* EOF small_parse_table_657.c */
