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
	v->a[22700] = state(1034);
	v->a[22701] = 3;
	v->a[22702] = sym_file_redirect;
	v->a[22703] = sym_heredoc_redirect;
	v->a[22704] = aux_sym_redirected_statement_repeat1;
	v->a[22705] = actions(780);
	v->a[22706] = 16;
	v->a[22707] = anon_sym_LT;
	v->a[22708] = anon_sym_GT;
	v->a[22709] = anon_sym_GT_GT;
	v->a[22710] = anon_sym_LT_AMP;
	v->a[22711] = anon_sym_GT_AMP;
	v->a[22712] = anon_sym_GT_PIPE;
	v->a[22713] = anon_sym_LT_GT;
	v->a[22714] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22715] = anon_sym_DOLLAR;
	v->a[22716] = anon_sym_DQUOTE;
	v->a[22717] = sym_raw_string;
	v->a[22718] = sym_number;
	v->a[22719] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1136(v);
}

void	small_parse_table_1136(t_small_parse_table_array *v)
{
	v->a[22720] = anon_sym_DOLLAR_LPAREN;
	v->a[22721] = anon_sym_BQUOTE;
	v->a[22722] = sym_word;
	v->a[22723] = 12;
	v->a[22724] = actions(3);
	v->a[22725] = 1;
	v->a[22726] = sym_comment;
	v->a[22727] = actions(630);
	v->a[22728] = 1;
	v->a[22729] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22730] = actions(633);
	v->a[22731] = 1;
	v->a[22732] = anon_sym_DOLLAR;
	v->a[22733] = actions(636);
	v->a[22734] = 1;
	v->a[22735] = anon_sym_DQUOTE;
	v->a[22736] = actions(639);
	v->a[22737] = 1;
	v->a[22738] = anon_sym_DOLLAR_LBRACE;
	v->a[22739] = actions(642);
	small_parse_table_1137(v);
}

void	small_parse_table_1137(t_small_parse_table_array *v)
{
	v->a[22740] = 1;
	v->a[22741] = anon_sym_DOLLAR_LPAREN;
	v->a[22742] = actions(645);
	v->a[22743] = 1;
	v->a[22744] = anon_sym_BQUOTE;
	v->a[22745] = actions(648);
	v->a[22746] = 2;
	v->a[22747] = sym_file_descriptor;
	v->a[22748] = sym_variable_name;
	v->a[22749] = state(242);
	v->a[22750] = 2;
	v->a[22751] = sym_concatenation;
	v->a[22752] = aux_sym_for_statement_repeat1;
	v->a[22753] = actions(799);
	v->a[22754] = 3;
	v->a[22755] = sym_raw_string;
	v->a[22756] = sym_number;
	v->a[22757] = sym_word;
	v->a[22758] = state(486);
	v->a[22759] = 5;
	small_parse_table_1138(v);
}

void	small_parse_table_1138(t_small_parse_table_array *v)
{
	v->a[22760] = sym_arithmetic_expansion;
	v->a[22761] = sym_string;
	v->a[22762] = sym_simple_expansion;
	v->a[22763] = sym_expansion;
	v->a[22764] = sym_command_substitution;
	v->a[22765] = actions(628);
	v->a[22766] = 15;
	v->a[22767] = anon_sym_PIPE;
	v->a[22768] = anon_sym_SEMI_SEMI;
	v->a[22769] = anon_sym_AMP_AMP;
	v->a[22770] = anon_sym_PIPE_PIPE;
	v->a[22771] = anon_sym_LT;
	v->a[22772] = anon_sym_GT;
	v->a[22773] = anon_sym_GT_GT;
	v->a[22774] = anon_sym_LT_AMP;
	v->a[22775] = anon_sym_GT_AMP;
	v->a[22776] = anon_sym_GT_PIPE;
	v->a[22777] = anon_sym_LT_GT;
	v->a[22778] = anon_sym_LT_LT;
	v->a[22779] = anon_sym_LT_LT_DASH;
	small_parse_table_1139(v);
}

void	small_parse_table_1139(t_small_parse_table_array *v)
{
	v->a[22780] = aux_sym_heredoc_redirect_token1;
	v->a[22781] = anon_sym_SEMI;
	v->a[22782] = 7;
	v->a[22783] = actions(501);
	v->a[22784] = 1;
	v->a[22785] = sym_comment;
	v->a[22786] = actions(762);
	v->a[22787] = 2;
	v->a[22788] = anon_sym_GT_GT;
	v->a[22789] = anon_sym_LT_LT;
	v->a[22790] = actions(772);
	v->a[22791] = 2;
	v->a[22792] = anon_sym_PLUS;
	v->a[22793] = anon_sym_DASH;
	v->a[22794] = actions(778);
	v->a[22795] = 2;
	v->a[22796] = anon_sym_PLUS_PLUS2;
	v->a[22797] = anon_sym_DASH_DASH2;
	v->a[22798] = actions(774);
	v->a[22799] = 3;
	small_parse_table_1140(v);
}

/* EOF small_parse_table_227.c */
