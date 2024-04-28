/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1357.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6785(t_small_parse_table_array *v)
{
	v->a[135700] = sym_file_descriptor;
	v->a[135701] = sym__concat;
	v->a[135702] = sym_test_operator;
	v->a[135703] = sym__brace_start;
	v->a[135704] = anon_sym_LPAREN_LPAREN;
	v->a[135705] = anon_sym_PIPE_PIPE;
	v->a[135706] = anon_sym_AMP_AMP;
	v->a[135707] = anon_sym_GT_GT;
	v->a[135708] = anon_sym_PIPE_AMP;
	v->a[135709] = anon_sym_RBRACK;
	v->a[135710] = anon_sym_AMP_GT_GT;
	v->a[135711] = anon_sym_GT_PIPE;
	v->a[135712] = anon_sym_LT_AMP_DASH;
	v->a[135713] = anon_sym_GT_AMP_DASH;
	v->a[135714] = anon_sym_LT_LT_DASH;
	v->a[135715] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[135716] = anon_sym_DOLLAR_LBRACK;
	v->a[135717] = aux_sym_concatenation_token1;
	v->a[135718] = anon_sym_DQUOTE;
	v->a[135719] = sym_raw_string;
	small_parse_table_6786(v);
}

void	small_parse_table_6786(t_small_parse_table_array *v)
{
	v->a[135720] = sym_ansi_c_string;
	v->a[135721] = anon_sym_DOLLAR_LBRACE;
	v->a[135722] = anon_sym_DOLLAR_BQUOTE;
	v->a[135723] = anon_sym_LT_LPAREN;
	v->a[135724] = anon_sym_GT_LPAREN;
	v->a[135725] = 3;
	v->a[135726] = actions(71);
	v->a[135727] = 1;
	v->a[135728] = sym_comment;
	v->a[135729] = actions(1328);
	v->a[135730] = 14;
	v->a[135731] = anon_sym_EQ;
	v->a[135732] = anon_sym_PIPE;
	v->a[135733] = anon_sym_CARET;
	v->a[135734] = anon_sym_AMP;
	v->a[135735] = anon_sym_LT;
	v->a[135736] = anon_sym_GT;
	v->a[135737] = anon_sym_LT_LT;
	v->a[135738] = anon_sym_GT_GT;
	v->a[135739] = anon_sym_PLUS;
	small_parse_table_6787(v);
}

void	small_parse_table_6787(t_small_parse_table_array *v)
{
	v->a[135740] = anon_sym_DASH;
	v->a[135741] = anon_sym_STAR;
	v->a[135742] = anon_sym_SLASH;
	v->a[135743] = anon_sym_PERCENT;
	v->a[135744] = anon_sym_STAR_STAR;
	v->a[135745] = actions(1330);
	v->a[135746] = 25;
	v->a[135747] = sym__concat;
	v->a[135748] = sym_test_operator;
	v->a[135749] = anon_sym_PLUS_PLUS;
	v->a[135750] = anon_sym_DASH_DASH;
	v->a[135751] = anon_sym_PLUS_EQ;
	v->a[135752] = anon_sym_DASH_EQ;
	v->a[135753] = anon_sym_STAR_EQ;
	v->a[135754] = anon_sym_SLASH_EQ;
	v->a[135755] = anon_sym_PERCENT_EQ;
	v->a[135756] = anon_sym_STAR_STAR_EQ;
	v->a[135757] = anon_sym_LT_LT_EQ;
	v->a[135758] = anon_sym_GT_GT_EQ;
	v->a[135759] = anon_sym_AMP_EQ;
	small_parse_table_6788(v);
}

void	small_parse_table_6788(t_small_parse_table_array *v)
{
	v->a[135760] = anon_sym_CARET_EQ;
	v->a[135761] = anon_sym_PIPE_EQ;
	v->a[135762] = anon_sym_PIPE_PIPE;
	v->a[135763] = anon_sym_AMP_AMP;
	v->a[135764] = anon_sym_EQ_EQ;
	v->a[135765] = anon_sym_BANG_EQ;
	v->a[135766] = anon_sym_LT_EQ;
	v->a[135767] = anon_sym_GT_EQ;
	v->a[135768] = anon_sym_RPAREN;
	v->a[135769] = anon_sym_EQ_TILDE;
	v->a[135770] = anon_sym_QMARK;
	v->a[135771] = aux_sym_concatenation_token1;
	v->a[135772] = 3;
	v->a[135773] = actions(71);
	v->a[135774] = 1;
	v->a[135775] = sym_comment;
	v->a[135776] = actions(1324);
	v->a[135777] = 14;
	v->a[135778] = anon_sym_PIPE;
	v->a[135779] = anon_sym_LT;
	small_parse_table_6789(v);
}

void	small_parse_table_6789(t_small_parse_table_array *v)
{
	v->a[135780] = anon_sym_GT;
	v->a[135781] = anon_sym_LT_LT;
	v->a[135782] = anon_sym_AMP_GT;
	v->a[135783] = anon_sym_LT_AMP;
	v->a[135784] = anon_sym_GT_AMP;
	v->a[135785] = anon_sym_DOLLAR;
	v->a[135786] = sym__special_character;
	v->a[135787] = aux_sym_number_token1;
	v->a[135788] = aux_sym_number_token2;
	v->a[135789] = anon_sym_DOLLAR_LPAREN;
	v->a[135790] = anon_sym_BQUOTE;
	v->a[135791] = sym_word;
	v->a[135792] = actions(1326);
	v->a[135793] = 25;
	v->a[135794] = sym_file_descriptor;
	v->a[135795] = sym__concat;
	v->a[135796] = sym_test_operator;
	v->a[135797] = sym__brace_start;
	v->a[135798] = anon_sym_LPAREN_LPAREN;
	v->a[135799] = anon_sym_PIPE_PIPE;
	small_parse_table_6790(v);
}

/* EOF small_parse_table_1357.c */
