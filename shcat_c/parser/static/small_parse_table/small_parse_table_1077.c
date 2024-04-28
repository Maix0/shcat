/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1077.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5385(t_small_parse_table_array *v)
{
	v->a[107700] = aux_sym_number_token1;
	v->a[107701] = aux_sym_number_token2;
	v->a[107702] = anon_sym_DOLLAR_LBRACE;
	v->a[107703] = anon_sym_DOLLAR_LPAREN;
	v->a[107704] = anon_sym_BQUOTE;
	v->a[107705] = anon_sym_DOLLAR_BQUOTE;
	v->a[107706] = anon_sym_LT_LPAREN;
	v->a[107707] = anon_sym_GT_LPAREN;
	v->a[107708] = sym_word;
	v->a[107709] = 8;
	v->a[107710] = actions(3);
	v->a[107711] = 1;
	v->a[107712] = sym_comment;
	v->a[107713] = actions(5826);
	v->a[107714] = 1;
	v->a[107715] = aux_sym_heredoc_redirect_token1;
	v->a[107716] = actions(5828);
	v->a[107717] = 1;
	v->a[107718] = sym_file_descriptor;
	v->a[107719] = actions(6205);
	small_parse_table_5386(v);
}

void	small_parse_table_5386(t_small_parse_table_array *v)
{
	v->a[107720] = 1;
	v->a[107721] = anon_sym_RPAREN;
	v->a[107722] = actions(5831);
	v->a[107723] = 3;
	v->a[107724] = sym_variable_name;
	v->a[107725] = sym_test_operator;
	v->a[107726] = sym__brace_start;
	v->a[107727] = actions(5821);
	v->a[107728] = 9;
	v->a[107729] = anon_sym_SEMI;
	v->a[107730] = anon_sym_PIPE_PIPE;
	v->a[107731] = anon_sym_AMP_AMP;
	v->a[107732] = anon_sym_PIPE;
	v->a[107733] = anon_sym_AMP;
	v->a[107734] = anon_sym_LT_LT;
	v->a[107735] = anon_sym_SEMI_SEMI;
	v->a[107736] = anon_sym_PIPE_AMP;
	v->a[107737] = anon_sym_LT_LT_DASH;
	v->a[107738] = actions(5823);
	v->a[107739] = 11;
	small_parse_table_5387(v);
}

void	small_parse_table_5387(t_small_parse_table_array *v)
{
	v->a[107740] = anon_sym_LT;
	v->a[107741] = anon_sym_GT;
	v->a[107742] = anon_sym_GT_GT;
	v->a[107743] = anon_sym_AMP_GT;
	v->a[107744] = anon_sym_AMP_GT_GT;
	v->a[107745] = anon_sym_LT_AMP;
	v->a[107746] = anon_sym_GT_AMP;
	v->a[107747] = anon_sym_GT_PIPE;
	v->a[107748] = anon_sym_LT_AMP_DASH;
	v->a[107749] = anon_sym_GT_AMP_DASH;
	v->a[107750] = anon_sym_LT_LT_LT;
	v->a[107751] = actions(5819);
	v->a[107752] = 17;
	v->a[107753] = anon_sym_LPAREN_LPAREN;
	v->a[107754] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[107755] = anon_sym_DOLLAR_LBRACK;
	v->a[107756] = anon_sym_DOLLAR;
	v->a[107757] = sym__special_character;
	v->a[107758] = anon_sym_DQUOTE;
	v->a[107759] = sym_raw_string;
	small_parse_table_5388(v);
}

void	small_parse_table_5388(t_small_parse_table_array *v)
{
	v->a[107760] = sym_ansi_c_string;
	v->a[107761] = aux_sym_number_token1;
	v->a[107762] = aux_sym_number_token2;
	v->a[107763] = anon_sym_DOLLAR_LBRACE;
	v->a[107764] = anon_sym_DOLLAR_LPAREN;
	v->a[107765] = anon_sym_BQUOTE;
	v->a[107766] = anon_sym_DOLLAR_BQUOTE;
	v->a[107767] = anon_sym_LT_LPAREN;
	v->a[107768] = anon_sym_GT_LPAREN;
	v->a[107769] = sym_word;
	v->a[107770] = 8;
	v->a[107771] = actions(3);
	v->a[107772] = 1;
	v->a[107773] = sym_comment;
	v->a[107774] = actions(6210);
	v->a[107775] = 1;
	v->a[107776] = anon_sym_DQUOTE;
	v->a[107777] = actions(6214);
	v->a[107778] = 1;
	v->a[107779] = sym_variable_name;
	small_parse_table_5389(v);
}

void	small_parse_table_5389(t_small_parse_table_array *v)
{
	v->a[107780] = state(3525);
	v->a[107781] = 1;
	v->a[107782] = sym_string;
	v->a[107783] = actions(6212);
	v->a[107784] = 2;
	v->a[107785] = aux_sym__simple_variable_name_token1;
	v->a[107786] = aux_sym__multiline_variable_name_token1;
	v->a[107787] = actions(1235);
	v->a[107788] = 3;
	v->a[107789] = sym_file_descriptor;
	v->a[107790] = sym_test_operator;
	v->a[107791] = sym__brace_start;
	v->a[107792] = actions(6208);
	v->a[107793] = 9;
	v->a[107794] = anon_sym_DASH;
	v->a[107795] = anon_sym_STAR;
	v->a[107796] = anon_sym_BANG;
	v->a[107797] = anon_sym_QMARK;
	v->a[107798] = anon_sym_DOLLAR;
	v->a[107799] = anon_sym_POUND;
	small_parse_table_5390(v);
}

/* EOF small_parse_table_1077.c */
