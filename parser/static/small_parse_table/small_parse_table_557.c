/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_557.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2785(t_small_parse_table_array *v)
{
	v->a[55700] = actions(2001);
	v->a[55701] = 1;
	v->a[55702] = anon_sym_DOLLAR_LPAREN;
	v->a[55703] = actions(2003);
	v->a[55704] = 1;
	v->a[55705] = anon_sym_BQUOTE;
	v->a[55706] = actions(2005);
	v->a[55707] = 1;
	v->a[55708] = aux_sym__simple_variable_name_token1;
	v->a[55709] = actions(2007);
	v->a[55710] = 1;
	v->a[55711] = sym_variable_name;
	v->a[55712] = actions(2059);
	v->a[55713] = 1;
	v->a[55714] = anon_sym_RPAREN_RPAREN;
	v->a[55715] = actions(1985);
	v->a[55716] = 2;
	v->a[55717] = anon_sym_PLUS_PLUS;
	v->a[55718] = anon_sym_DASH_DASH;
	v->a[55719] = actions(1987);
	small_parse_table_2786(v);
}

void	small_parse_table_2786(t_small_parse_table_array *v)
{
	v->a[55720] = 2;
	v->a[55721] = anon_sym_DASH2;
	v->a[55722] = anon_sym_PLUS2;
	v->a[55723] = state(530);
	v->a[55724] = 4;
	v->a[55725] = sym_string;
	v->a[55726] = sym_number;
	v->a[55727] = sym_simple_expansion;
	v->a[55728] = sym_expansion;
	v->a[55729] = state(627);
	v->a[55730] = 8;
	v->a[55731] = sym__arithmetic_expression;
	v->a[55732] = sym_arithmetic_literal;
	v->a[55733] = sym_arithmetic_binary_expression;
	v->a[55734] = sym_arithmetic_ternary_expression;
	v->a[55735] = sym_arithmetic_unary_expression;
	v->a[55736] = sym_arithmetic_postfix_expression;
	v->a[55737] = sym_arithmetic_parenthesized_expression;
	v->a[55738] = sym_command_substitution;
	v->a[55739] = 3;
	small_parse_table_2787(v);
}

void	small_parse_table_2787(t_small_parse_table_array *v)
{
	v->a[55740] = actions(3);
	v->a[55741] = 1;
	v->a[55742] = sym_comment;
	v->a[55743] = actions(1194);
	v->a[55744] = 3;
	v->a[55745] = sym_file_descriptor;
	v->a[55746] = sym__concat;
	v->a[55747] = sym__bare_dollar;
	v->a[55748] = actions(1196);
	v->a[55749] = 26;
	v->a[55750] = anon_sym_PIPE;
	v->a[55751] = anon_sym_AMP_AMP;
	v->a[55752] = anon_sym_PIPE_PIPE;
	v->a[55753] = anon_sym_LT;
	v->a[55754] = anon_sym_GT;
	v->a[55755] = anon_sym_GT_GT;
	v->a[55756] = anon_sym_AMP_GT;
	v->a[55757] = anon_sym_AMP_GT_GT;
	v->a[55758] = anon_sym_LT_AMP;
	v->a[55759] = anon_sym_GT_AMP;
	small_parse_table_2788(v);
}

void	small_parse_table_2788(t_small_parse_table_array *v)
{
	v->a[55760] = anon_sym_GT_PIPE;
	v->a[55761] = anon_sym_LT_AMP_DASH;
	v->a[55762] = anon_sym_GT_AMP_DASH;
	v->a[55763] = anon_sym_LT_LT;
	v->a[55764] = anon_sym_LT_LT_DASH;
	v->a[55765] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[55766] = aux_sym_concatenation_token1;
	v->a[55767] = anon_sym_DOLLAR;
	v->a[55768] = anon_sym_DQUOTE;
	v->a[55769] = sym_raw_string;
	v->a[55770] = aux_sym_number_token1;
	v->a[55771] = aux_sym_number_token2;
	v->a[55772] = anon_sym_DOLLAR_LBRACE;
	v->a[55773] = anon_sym_DOLLAR_LPAREN;
	v->a[55774] = anon_sym_BQUOTE;
	v->a[55775] = sym_word;
	v->a[55776] = 18;
	v->a[55777] = actions(1404);
	v->a[55778] = 1;
	v->a[55779] = sym_comment;
	small_parse_table_2789(v);
}

void	small_parse_table_2789(t_small_parse_table_array *v)
{
	v->a[55780] = actions(1979);
	v->a[55781] = 1;
	v->a[55782] = anon_sym_LPAREN;
	v->a[55783] = actions(1981);
	v->a[55784] = 1;
	v->a[55785] = anon_sym_BANG;
	v->a[55786] = actions(1989);
	v->a[55787] = 1;
	v->a[55788] = anon_sym_TILDE;
	v->a[55789] = actions(1991);
	v->a[55790] = 1;
	v->a[55791] = anon_sym_DOLLAR;
	v->a[55792] = actions(1993);
	v->a[55793] = 1;
	v->a[55794] = anon_sym_DQUOTE;
	v->a[55795] = actions(1995);
	v->a[55796] = 1;
	v->a[55797] = aux_sym_number_token1;
	v->a[55798] = actions(1997);
	v->a[55799] = 1;
	small_parse_table_2790(v);
}

/* EOF small_parse_table_557.c */
