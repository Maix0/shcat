/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1078.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5390(t_small_parse_table_array *v)
{
	v->a[107800] = anon_sym_AT2;
	v->a[107801] = anon_sym_0;
	v->a[107802] = anon_sym__;
	v->a[107803] = actions(1227);
	v->a[107804] = 26;
	v->a[107805] = anon_sym_LPAREN_LPAREN;
	v->a[107806] = anon_sym_LT;
	v->a[107807] = anon_sym_GT;
	v->a[107808] = anon_sym_GT_GT;
	v->a[107809] = anon_sym_AMP_GT;
	v->a[107810] = anon_sym_AMP_GT_GT;
	v->a[107811] = anon_sym_LT_AMP;
	v->a[107812] = anon_sym_GT_AMP;
	v->a[107813] = anon_sym_GT_PIPE;
	v->a[107814] = anon_sym_LT_AMP_DASH;
	v->a[107815] = anon_sym_GT_AMP_DASH;
	v->a[107816] = anon_sym_LT_LT_LT;
	v->a[107817] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[107818] = anon_sym_DOLLAR_LBRACK;
	v->a[107819] = sym__special_character;
	small_parse_table_5391(v);
}

void	small_parse_table_5391(t_small_parse_table_array *v)
{
	v->a[107820] = sym_raw_string;
	v->a[107821] = sym_ansi_c_string;
	v->a[107822] = aux_sym_number_token1;
	v->a[107823] = aux_sym_number_token2;
	v->a[107824] = anon_sym_DOLLAR_LBRACE;
	v->a[107825] = anon_sym_DOLLAR_LPAREN;
	v->a[107826] = anon_sym_BQUOTE;
	v->a[107827] = anon_sym_DOLLAR_BQUOTE;
	v->a[107828] = anon_sym_LT_LPAREN;
	v->a[107829] = anon_sym_GT_LPAREN;
	v->a[107830] = sym_word;
	v->a[107831] = 3;
	v->a[107832] = actions(3);
	v->a[107833] = 1;
	v->a[107834] = sym_comment;
	v->a[107835] = actions(1322);
	v->a[107836] = 5;
	v->a[107837] = sym_file_descriptor;
	v->a[107838] = sym__concat;
	v->a[107839] = sym_test_operator;
	small_parse_table_5392(v);
}

void	small_parse_table_5392(t_small_parse_table_array *v)
{
	v->a[107840] = sym__brace_start;
	v->a[107841] = aux_sym_heredoc_redirect_token1;
	v->a[107842] = actions(1320);
	v->a[107843] = 38;
	v->a[107844] = anon_sym_LPAREN_LPAREN;
	v->a[107845] = anon_sym_SEMI;
	v->a[107846] = anon_sym_PIPE_PIPE;
	v->a[107847] = anon_sym_AMP_AMP;
	v->a[107848] = anon_sym_PIPE;
	v->a[107849] = anon_sym_AMP;
	v->a[107850] = anon_sym_LT;
	v->a[107851] = anon_sym_GT;
	v->a[107852] = anon_sym_LT_LT;
	v->a[107853] = anon_sym_GT_GT;
	v->a[107854] = anon_sym_RPAREN;
	v->a[107855] = anon_sym_SEMI_SEMI;
	v->a[107856] = anon_sym_PIPE_AMP;
	v->a[107857] = anon_sym_AMP_GT;
	v->a[107858] = anon_sym_AMP_GT_GT;
	v->a[107859] = anon_sym_LT_AMP;
	small_parse_table_5393(v);
}

void	small_parse_table_5393(t_small_parse_table_array *v)
{
	v->a[107860] = anon_sym_GT_AMP;
	v->a[107861] = anon_sym_GT_PIPE;
	v->a[107862] = anon_sym_LT_AMP_DASH;
	v->a[107863] = anon_sym_GT_AMP_DASH;
	v->a[107864] = anon_sym_LT_LT_DASH;
	v->a[107865] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[107866] = anon_sym_DOLLAR_LBRACK;
	v->a[107867] = aux_sym_concatenation_token1;
	v->a[107868] = anon_sym_DOLLAR;
	v->a[107869] = sym__special_character;
	v->a[107870] = anon_sym_DQUOTE;
	v->a[107871] = sym_raw_string;
	v->a[107872] = sym_ansi_c_string;
	v->a[107873] = aux_sym_number_token1;
	v->a[107874] = aux_sym_number_token2;
	v->a[107875] = anon_sym_DOLLAR_LBRACE;
	v->a[107876] = anon_sym_DOLLAR_LPAREN;
	v->a[107877] = anon_sym_BQUOTE;
	v->a[107878] = anon_sym_DOLLAR_BQUOTE;
	v->a[107879] = anon_sym_LT_LPAREN;
	small_parse_table_5394(v);
}

void	small_parse_table_5394(t_small_parse_table_array *v)
{
	v->a[107880] = anon_sym_GT_LPAREN;
	v->a[107881] = sym_word;
	v->a[107882] = 8;
	v->a[107883] = actions(3);
	v->a[107884] = 1;
	v->a[107885] = sym_comment;
	v->a[107886] = actions(6210);
	v->a[107887] = 1;
	v->a[107888] = anon_sym_DQUOTE;
	v->a[107889] = actions(6214);
	v->a[107890] = 1;
	v->a[107891] = sym_variable_name;
	v->a[107892] = state(3525);
	v->a[107893] = 1;
	v->a[107894] = sym_string;
	v->a[107895] = actions(6212);
	v->a[107896] = 2;
	v->a[107897] = aux_sym__simple_variable_name_token1;
	v->a[107898] = aux_sym__multiline_variable_name_token1;
	v->a[107899] = actions(1241);
	small_parse_table_5395(v);
}

/* EOF small_parse_table_1078.c */
