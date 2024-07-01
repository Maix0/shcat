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
	v->a[55700] = actions(1762);
	v->a[55701] = 1;
	v->a[55702] = anon_sym_DOLLAR_LBRACE;
	v->a[55703] = actions(1764);
	v->a[55704] = 1;
	v->a[55705] = anon_sym_DOLLAR_LPAREN;
	v->a[55706] = actions(1766);
	v->a[55707] = 1;
	v->a[55708] = anon_sym_BQUOTE;
	v->a[55709] = actions(1768);
	v->a[55710] = 1;
	v->a[55711] = sym_variable_name;
	v->a[55712] = actions(1750);
	v->a[55713] = 2;
	v->a[55714] = anon_sym_PLUS_PLUS;
	v->a[55715] = anon_sym_DASH_DASH;
	v->a[55716] = actions(1752);
	v->a[55717] = 2;
	v->a[55718] = anon_sym_DASH2;
	v->a[55719] = anon_sym_PLUS2;
	small_parse_table_2786(v);
}

void	small_parse_table_2786(t_small_parse_table_array *v)
{
	v->a[55720] = actions(1760);
	v->a[55721] = 2;
	v->a[55722] = sym_number;
	v->a[55723] = aux_sym__simple_variable_name_token1;
	v->a[55724] = state(271);
	v->a[55725] = 3;
	v->a[55726] = sym_string;
	v->a[55727] = sym_simple_expansion;
	v->a[55728] = sym_expansion;
	v->a[55729] = state(294);
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
	v->a[55743] = actions(982);
	v->a[55744] = 3;
	v->a[55745] = sym_file_descriptor;
	v->a[55746] = sym__concat;
	v->a[55747] = sym_variable_name;
	v->a[55748] = actions(980);
	v->a[55749] = 23;
	v->a[55750] = anon_sym_PIPE;
	v->a[55751] = anon_sym_AMP_AMP;
	v->a[55752] = anon_sym_PIPE_PIPE;
	v->a[55753] = anon_sym_LT;
	v->a[55754] = anon_sym_GT;
	v->a[55755] = anon_sym_GT_GT;
	v->a[55756] = anon_sym_LT_AMP;
	v->a[55757] = anon_sym_GT_AMP;
	v->a[55758] = anon_sym_GT_PIPE;
	v->a[55759] = anon_sym_LT_AMP_DASH;
	small_parse_table_2788(v);
}

void	small_parse_table_2788(t_small_parse_table_array *v)
{
	v->a[55760] = anon_sym_GT_AMP_DASH;
	v->a[55761] = anon_sym_LT_LT;
	v->a[55762] = anon_sym_LT_LT_DASH;
	v->a[55763] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[55764] = aux_sym_concatenation_token1;
	v->a[55765] = anon_sym_DOLLAR;
	v->a[55766] = anon_sym_DQUOTE;
	v->a[55767] = sym_raw_string;
	v->a[55768] = sym_number;
	v->a[55769] = anon_sym_DOLLAR_LBRACE;
	v->a[55770] = anon_sym_DOLLAR_LPAREN;
	v->a[55771] = anon_sym_BQUOTE;
	v->a[55772] = sym_word;
	v->a[55773] = 3;
	v->a[55774] = actions(3);
	v->a[55775] = 1;
	v->a[55776] = sym_comment;
	v->a[55777] = actions(939);
	v->a[55778] = 3;
	v->a[55779] = sym_file_descriptor;
	small_parse_table_2789(v);
}

void	small_parse_table_2789(t_small_parse_table_array *v)
{
	v->a[55780] = sym__concat;
	v->a[55781] = sym_variable_name;
	v->a[55782] = actions(937);
	v->a[55783] = 23;
	v->a[55784] = anon_sym_PIPE;
	v->a[55785] = anon_sym_AMP_AMP;
	v->a[55786] = anon_sym_PIPE_PIPE;
	v->a[55787] = anon_sym_LT;
	v->a[55788] = anon_sym_GT;
	v->a[55789] = anon_sym_GT_GT;
	v->a[55790] = anon_sym_LT_AMP;
	v->a[55791] = anon_sym_GT_AMP;
	v->a[55792] = anon_sym_GT_PIPE;
	v->a[55793] = anon_sym_LT_AMP_DASH;
	v->a[55794] = anon_sym_GT_AMP_DASH;
	v->a[55795] = anon_sym_LT_LT;
	v->a[55796] = anon_sym_LT_LT_DASH;
	v->a[55797] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[55798] = aux_sym_concatenation_token1;
	v->a[55799] = anon_sym_DOLLAR;
	small_parse_table_2790(v);
}

/* EOF small_parse_table_557.c */
