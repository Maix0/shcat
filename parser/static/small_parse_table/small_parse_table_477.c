/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_477.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2385(t_small_parse_table_array *v)
{
	v->a[47700] = sym_expansion;
	v->a[47701] = state(210);
	v->a[47702] = 8;
	v->a[47703] = sym__arithmetic_expression;
	v->a[47704] = sym_arithmetic_literal;
	v->a[47705] = sym_arithmetic_binary_expression;
	v->a[47706] = sym_arithmetic_ternary_expression;
	v->a[47707] = sym_arithmetic_unary_expression;
	v->a[47708] = sym_arithmetic_postfix_expression;
	v->a[47709] = sym_arithmetic_parenthesized_expression;
	v->a[47710] = sym_command_substitution;
	v->a[47711] = 6;
	v->a[47712] = actions(3);
	v->a[47713] = 1;
	v->a[47714] = sym_comment;
	v->a[47715] = actions(1724);
	v->a[47716] = 1;
	v->a[47717] = aux_sym_concatenation_token1;
	v->a[47718] = actions(1726);
	v->a[47719] = 1;
	small_parse_table_2386(v);
}

void	small_parse_table_2386(t_small_parse_table_array *v)
{
	v->a[47720] = sym__concat;
	v->a[47721] = state(791);
	v->a[47722] = 1;
	v->a[47723] = aux_sym_concatenation_repeat1;
	v->a[47724] = actions(1158);
	v->a[47725] = 2;
	v->a[47726] = sym_file_descriptor;
	v->a[47727] = sym__bare_dollar;
	v->a[47728] = actions(1154);
	v->a[47729] = 21;
	v->a[47730] = anon_sym_PIPE;
	v->a[47731] = anon_sym_AMP_AMP;
	v->a[47732] = anon_sym_PIPE_PIPE;
	v->a[47733] = anon_sym_LT;
	v->a[47734] = anon_sym_GT;
	v->a[47735] = anon_sym_GT_GT;
	v->a[47736] = anon_sym_LT_AMP;
	v->a[47737] = anon_sym_GT_AMP;
	v->a[47738] = anon_sym_GT_PIPE;
	v->a[47739] = anon_sym_LT_GT;
	small_parse_table_2387(v);
}

void	small_parse_table_2387(t_small_parse_table_array *v)
{
	v->a[47740] = anon_sym_LT_LT;
	v->a[47741] = anon_sym_LT_LT_DASH;
	v->a[47742] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[47743] = anon_sym_DOLLAR;
	v->a[47744] = anon_sym_DQUOTE;
	v->a[47745] = sym_raw_string;
	v->a[47746] = sym_number;
	v->a[47747] = anon_sym_DOLLAR_LBRACE;
	v->a[47748] = anon_sym_DOLLAR_LPAREN;
	v->a[47749] = anon_sym_BQUOTE;
	v->a[47750] = sym_word;
	v->a[47751] = 6;
	v->a[47752] = actions(3);
	v->a[47753] = 1;
	v->a[47754] = sym_comment;
	v->a[47755] = actions(367);
	v->a[47756] = 1;
	v->a[47757] = sym_file_descriptor;
	v->a[47758] = actions(1295);
	v->a[47759] = 1;
	small_parse_table_2388(v);
}

void	small_parse_table_2388(t_small_parse_table_array *v)
{
	v->a[47760] = sym_variable_name;
	v->a[47761] = actions(1293);
	v->a[47762] = 2;
	v->a[47763] = aux_sym__simple_variable_name_token1;
	v->a[47764] = aux_sym__multiline_variable_name_token1;
	v->a[47765] = actions(1291);
	v->a[47766] = 9;
	v->a[47767] = anon_sym_BANG;
	v->a[47768] = anon_sym_DASH;
	v->a[47769] = anon_sym_STAR;
	v->a[47770] = anon_sym_QMARK;
	v->a[47771] = anon_sym_DOLLAR;
	v->a[47772] = anon_sym_POUND;
	v->a[47773] = anon_sym_AT;
	v->a[47774] = anon_sym_0;
	v->a[47775] = anon_sym__;
	v->a[47776] = actions(361);
	v->a[47777] = 13;
	v->a[47778] = anon_sym_PIPE;
	v->a[47779] = anon_sym_AMP_AMP;
	small_parse_table_2389(v);
}

void	small_parse_table_2389(t_small_parse_table_array *v)
{
	v->a[47780] = anon_sym_PIPE_PIPE;
	v->a[47781] = anon_sym_LT;
	v->a[47782] = anon_sym_GT;
	v->a[47783] = anon_sym_GT_GT;
	v->a[47784] = anon_sym_LT_AMP;
	v->a[47785] = anon_sym_GT_AMP;
	v->a[47786] = anon_sym_GT_PIPE;
	v->a[47787] = anon_sym_LT_GT;
	v->a[47788] = anon_sym_LT_LT;
	v->a[47789] = anon_sym_LT_LT_DASH;
	v->a[47790] = aux_sym_heredoc_redirect_token1;
	v->a[47791] = 4;
	v->a[47792] = actions(3);
	v->a[47793] = 1;
	v->a[47794] = sym_comment;
	v->a[47795] = actions(1462);
	v->a[47796] = 1;
	v->a[47797] = anon_sym_BQUOTE;
	v->a[47798] = actions(1441);
	v->a[47799] = 2;
	small_parse_table_2390(v);
}

/* EOF small_parse_table_477.c */
