/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_537.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2685(t_small_parse_table_array *v)
{
	v->a[53700] = actions(1995);
	v->a[53701] = 1;
	v->a[53702] = aux_sym_number_token1;
	v->a[53703] = actions(1997);
	v->a[53704] = 1;
	v->a[53705] = aux_sym_number_token2;
	v->a[53706] = actions(1999);
	v->a[53707] = 1;
	v->a[53708] = anon_sym_DOLLAR_LBRACE;
	v->a[53709] = actions(2001);
	v->a[53710] = 1;
	v->a[53711] = anon_sym_DOLLAR_LPAREN;
	v->a[53712] = actions(2003);
	v->a[53713] = 1;
	v->a[53714] = anon_sym_BQUOTE;
	v->a[53715] = actions(2005);
	v->a[53716] = 1;
	v->a[53717] = aux_sym__simple_variable_name_token1;
	v->a[53718] = actions(2007);
	v->a[53719] = 1;
	small_parse_table_2686(v);
}

void	small_parse_table_2686(t_small_parse_table_array *v)
{
	v->a[53720] = sym_variable_name;
	v->a[53721] = actions(1985);
	v->a[53722] = 2;
	v->a[53723] = anon_sym_PLUS_PLUS;
	v->a[53724] = anon_sym_DASH_DASH;
	v->a[53725] = actions(1987);
	v->a[53726] = 2;
	v->a[53727] = anon_sym_DASH2;
	v->a[53728] = anon_sym_PLUS2;
	v->a[53729] = state(530);
	v->a[53730] = 4;
	v->a[53731] = sym_string;
	v->a[53732] = sym_number;
	v->a[53733] = sym_simple_expansion;
	v->a[53734] = sym_expansion;
	v->a[53735] = state(576);
	v->a[53736] = 8;
	v->a[53737] = sym__arithmetic_expression;
	v->a[53738] = sym_arithmetic_literal;
	v->a[53739] = sym_arithmetic_binary_expression;
	small_parse_table_2687(v);
}

void	small_parse_table_2687(t_small_parse_table_array *v)
{
	v->a[53740] = sym_arithmetic_ternary_expression;
	v->a[53741] = sym_arithmetic_unary_expression;
	v->a[53742] = sym_arithmetic_postfix_expression;
	v->a[53743] = sym_arithmetic_parenthesized_expression;
	v->a[53744] = sym_command_substitution;
	v->a[53745] = 6;
	v->a[53746] = actions(3);
	v->a[53747] = 1;
	v->a[53748] = sym_comment;
	v->a[53749] = actions(413);
	v->a[53750] = 1;
	v->a[53751] = sym_file_descriptor;
	v->a[53752] = actions(1650);
	v->a[53753] = 1;
	v->a[53754] = sym_variable_name;
	v->a[53755] = actions(1648);
	v->a[53756] = 2;
	v->a[53757] = aux_sym__simple_variable_name_token1;
	v->a[53758] = aux_sym__multiline_variable_name_token1;
	v->a[53759] = actions(1646);
	small_parse_table_2688(v);
}

void	small_parse_table_2688(t_small_parse_table_array *v)
{
	v->a[53760] = 9;
	v->a[53761] = anon_sym_BANG;
	v->a[53762] = anon_sym_DASH;
	v->a[53763] = anon_sym_STAR;
	v->a[53764] = anon_sym_QMARK;
	v->a[53765] = anon_sym_DOLLAR;
	v->a[53766] = anon_sym_POUND;
	v->a[53767] = anon_sym_AT;
	v->a[53768] = anon_sym_0;
	v->a[53769] = anon_sym__;
	v->a[53770] = actions(407);
	v->a[53771] = 16;
	v->a[53772] = anon_sym_PIPE;
	v->a[53773] = anon_sym_AMP_AMP;
	v->a[53774] = anon_sym_PIPE_PIPE;
	v->a[53775] = anon_sym_LT;
	v->a[53776] = anon_sym_GT;
	v->a[53777] = anon_sym_GT_GT;
	v->a[53778] = anon_sym_AMP_GT;
	v->a[53779] = anon_sym_AMP_GT_GT;
	small_parse_table_2689(v);
}

void	small_parse_table_2689(t_small_parse_table_array *v)
{
	v->a[53780] = anon_sym_LT_AMP;
	v->a[53781] = anon_sym_GT_AMP;
	v->a[53782] = anon_sym_GT_PIPE;
	v->a[53783] = anon_sym_LT_AMP_DASH;
	v->a[53784] = anon_sym_GT_AMP_DASH;
	v->a[53785] = anon_sym_LT_LT;
	v->a[53786] = anon_sym_LT_LT_DASH;
	v->a[53787] = aux_sym_heredoc_redirect_token1;
	v->a[53788] = 18;
	v->a[53789] = actions(1404);
	v->a[53790] = 1;
	v->a[53791] = sym_comment;
	v->a[53792] = actions(1979);
	v->a[53793] = 1;
	v->a[53794] = anon_sym_LPAREN;
	v->a[53795] = actions(1981);
	v->a[53796] = 1;
	v->a[53797] = anon_sym_BANG;
	v->a[53798] = actions(1989);
	v->a[53799] = 1;
	small_parse_table_2690(v);
}

/* EOF small_parse_table_537.c */
