/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_227.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1135(t_small_parse_table_array *v)
{
	v->a[22700] = anon_sym_LT;
	v->a[22701] = anon_sym_GT;
	v->a[22702] = anon_sym_LT_LT;
	v->a[22703] = anon_sym_GT_GT;
	v->a[22704] = anon_sym_RPAREN;
	v->a[22705] = anon_sym_SEMI_SEMI;
	v->a[22706] = anon_sym_PIPE_AMP;
	v->a[22707] = anon_sym_AMP_GT;
	v->a[22708] = anon_sym_AMP_GT_GT;
	v->a[22709] = anon_sym_LT_AMP;
	v->a[22710] = anon_sym_GT_AMP;
	v->a[22711] = anon_sym_GT_PIPE;
	v->a[22712] = anon_sym_LT_AMP_DASH;
	v->a[22713] = anon_sym_GT_AMP_DASH;
	v->a[22714] = anon_sym_LT_LT_DASH;
	v->a[22715] = aux_sym_heredoc_redirect_token1;
	v->a[22716] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22717] = anon_sym_DOLLAR_LBRACK;
	v->a[22718] = sym__special_character;
	v->a[22719] = sym_raw_string;
	small_parse_table_1136(v);
}

void	small_parse_table_1136(t_small_parse_table_array *v)
{
	v->a[22720] = sym_ansi_c_string;
	v->a[22721] = aux_sym_number_token1;
	v->a[22722] = aux_sym_number_token2;
	v->a[22723] = anon_sym_DOLLAR_LBRACE;
	v->a[22724] = anon_sym_DOLLAR_LPAREN;
	v->a[22725] = anon_sym_BQUOTE;
	v->a[22726] = anon_sym_DOLLAR_BQUOTE;
	v->a[22727] = anon_sym_LT_LPAREN;
	v->a[22728] = anon_sym_GT_LPAREN;
	v->a[22729] = sym_word;
	v->a[22730] = 8;
	v->a[22731] = actions(3);
	v->a[22732] = 1;
	v->a[22733] = sym_comment;
	v->a[22734] = actions(1555);
	v->a[22735] = 1;
	v->a[22736] = anon_sym_DQUOTE;
	v->a[22737] = actions(2070);
	v->a[22738] = 1;
	v->a[22739] = sym_variable_name;
	small_parse_table_1137(v);
}

void	small_parse_table_1137(t_small_parse_table_array *v)
{
	v->a[22740] = state(1176);
	v->a[22741] = 1;
	v->a[22742] = sym_string;
	v->a[22743] = actions(2068);
	v->a[22744] = 2;
	v->a[22745] = aux_sym__simple_variable_name_token1;
	v->a[22746] = aux_sym__multiline_variable_name_token1;
	v->a[22747] = actions(1235);
	v->a[22748] = 4;
	v->a[22749] = sym_file_descriptor;
	v->a[22750] = sym_test_operator;
	v->a[22751] = sym__bare_dollar;
	v->a[22752] = sym__brace_start;
	v->a[22753] = actions(2066);
	v->a[22754] = 9;
	v->a[22755] = anon_sym_DASH;
	v->a[22756] = anon_sym_STAR;
	v->a[22757] = anon_sym_BANG;
	v->a[22758] = anon_sym_QMARK;
	v->a[22759] = anon_sym_DOLLAR;
	small_parse_table_1138(v);
}

void	small_parse_table_1138(t_small_parse_table_array *v)
{
	v->a[22760] = anon_sym_POUND;
	v->a[22761] = anon_sym_AT2;
	v->a[22762] = anon_sym_0;
	v->a[22763] = anon_sym__;
	v->a[22764] = actions(1227);
	v->a[22765] = 35;
	v->a[22766] = anon_sym_LPAREN_LPAREN;
	v->a[22767] = anon_sym_PIPE_PIPE;
	v->a[22768] = anon_sym_AMP_AMP;
	v->a[22769] = anon_sym_PIPE;
	v->a[22770] = anon_sym_EQ_EQ;
	v->a[22771] = anon_sym_LT;
	v->a[22772] = anon_sym_GT;
	v->a[22773] = anon_sym_LT_LT;
	v->a[22774] = anon_sym_GT_GT;
	v->a[22775] = anon_sym_PIPE_AMP;
	v->a[22776] = anon_sym_EQ_TILDE;
	v->a[22777] = anon_sym_AMP_GT;
	v->a[22778] = anon_sym_AMP_GT_GT;
	v->a[22779] = anon_sym_LT_AMP;
	small_parse_table_1139(v);
}

void	small_parse_table_1139(t_small_parse_table_array *v)
{
	v->a[22780] = anon_sym_GT_AMP;
	v->a[22781] = anon_sym_GT_PIPE;
	v->a[22782] = anon_sym_LT_AMP_DASH;
	v->a[22783] = anon_sym_GT_AMP_DASH;
	v->a[22784] = anon_sym_LT_LT_DASH;
	v->a[22785] = aux_sym_heredoc_redirect_token1;
	v->a[22786] = anon_sym_LT_LT_LT;
	v->a[22787] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22788] = anon_sym_DOLLAR_LBRACK;
	v->a[22789] = sym__special_character;
	v->a[22790] = sym_raw_string;
	v->a[22791] = sym_ansi_c_string;
	v->a[22792] = aux_sym_number_token1;
	v->a[22793] = aux_sym_number_token2;
	v->a[22794] = anon_sym_DOLLAR_LBRACE;
	v->a[22795] = anon_sym_DOLLAR_LPAREN;
	v->a[22796] = anon_sym_BQUOTE;
	v->a[22797] = anon_sym_DOLLAR_BQUOTE;
	v->a[22798] = anon_sym_LT_LPAREN;
	v->a[22799] = anon_sym_GT_LPAREN;
	small_parse_table_1140(v);
}

/* EOF small_parse_table_227.c */
