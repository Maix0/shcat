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
	v->a[22700] = anon_sym_SEMI_SEMI;
	v->a[22701] = anon_sym_AMP_AMP;
	v->a[22702] = anon_sym_PIPE_PIPE;
	v->a[22703] = anon_sym_LT;
	v->a[22704] = anon_sym_GT;
	v->a[22705] = anon_sym_GT_GT;
	v->a[22706] = anon_sym_AMP_GT;
	v->a[22707] = anon_sym_AMP_GT_GT;
	v->a[22708] = anon_sym_LT_AMP;
	v->a[22709] = anon_sym_GT_AMP;
	v->a[22710] = anon_sym_GT_PIPE;
	v->a[22711] = anon_sym_LT_AMP_DASH;
	v->a[22712] = anon_sym_GT_AMP_DASH;
	v->a[22713] = anon_sym_LT_LT;
	v->a[22714] = anon_sym_LT_LT_DASH;
	v->a[22715] = aux_sym_heredoc_redirect_token1;
	v->a[22716] = anon_sym_AMP;
	v->a[22717] = anon_sym_SEMI;
	v->a[22718] = 12;
	v->a[22719] = actions(3);
	small_parse_table_1136(v);
}

void	small_parse_table_1136(t_small_parse_table_array *v)
{
	v->a[22720] = 1;
	v->a[22721] = sym_comment;
	v->a[22722] = actions(660);
	v->a[22723] = 1;
	v->a[22724] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22725] = actions(663);
	v->a[22726] = 1;
	v->a[22727] = anon_sym_DOLLAR;
	v->a[22728] = actions(666);
	v->a[22729] = 1;
	v->a[22730] = anon_sym_DQUOTE;
	v->a[22731] = actions(669);
	v->a[22732] = 1;
	v->a[22733] = anon_sym_DOLLAR_LBRACE;
	v->a[22734] = actions(672);
	v->a[22735] = 1;
	v->a[22736] = anon_sym_DOLLAR_LPAREN;
	v->a[22737] = actions(675);
	v->a[22738] = 1;
	v->a[22739] = anon_sym_BQUOTE;
	small_parse_table_1137(v);
}

void	small_parse_table_1137(t_small_parse_table_array *v)
{
	v->a[22740] = actions(536);
	v->a[22741] = 2;
	v->a[22742] = sym_file_descriptor;
	v->a[22743] = sym_variable_name;
	v->a[22744] = state(211);
	v->a[22745] = 2;
	v->a[22746] = sym_concatenation;
	v->a[22747] = aux_sym_for_statement_repeat1;
	v->a[22748] = actions(657);
	v->a[22749] = 3;
	v->a[22750] = sym_raw_string;
	v->a[22751] = sym_number;
	v->a[22752] = sym_word;
	v->a[22753] = state(361);
	v->a[22754] = 5;
	v->a[22755] = sym_arithmetic_expansion;
	v->a[22756] = sym_string;
	v->a[22757] = sym_simple_expansion;
	v->a[22758] = sym_expansion;
	v->a[22759] = sym_command_substitution;
	small_parse_table_1138(v);
}

void	small_parse_table_1138(t_small_parse_table_array *v)
{
	v->a[22760] = actions(516);
	v->a[22761] = 20;
	v->a[22762] = anon_sym_esac;
	v->a[22763] = anon_sym_PIPE;
	v->a[22764] = anon_sym_SEMI_SEMI;
	v->a[22765] = anon_sym_AMP_AMP;
	v->a[22766] = anon_sym_PIPE_PIPE;
	v->a[22767] = anon_sym_LT;
	v->a[22768] = anon_sym_GT;
	v->a[22769] = anon_sym_GT_GT;
	v->a[22770] = anon_sym_AMP_GT;
	v->a[22771] = anon_sym_AMP_GT_GT;
	v->a[22772] = anon_sym_LT_AMP;
	v->a[22773] = anon_sym_GT_AMP;
	v->a[22774] = anon_sym_GT_PIPE;
	v->a[22775] = anon_sym_LT_AMP_DASH;
	v->a[22776] = anon_sym_GT_AMP_DASH;
	v->a[22777] = anon_sym_LT_LT;
	v->a[22778] = anon_sym_LT_LT_DASH;
	v->a[22779] = aux_sym_heredoc_redirect_token1;
	small_parse_table_1139(v);
}

void	small_parse_table_1139(t_small_parse_table_array *v)
{
	v->a[22780] = anon_sym_AMP;
	v->a[22781] = anon_sym_SEMI;
	v->a[22782] = 12;
	v->a[22783] = actions(3);
	v->a[22784] = 1;
	v->a[22785] = sym_comment;
	v->a[22786] = actions(518);
	v->a[22787] = 1;
	v->a[22788] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22789] = actions(521);
	v->a[22790] = 1;
	v->a[22791] = anon_sym_DOLLAR;
	v->a[22792] = actions(524);
	v->a[22793] = 1;
	v->a[22794] = anon_sym_DQUOTE;
	v->a[22795] = actions(527);
	v->a[22796] = 1;
	v->a[22797] = anon_sym_DOLLAR_LBRACE;
	v->a[22798] = actions(530);
	v->a[22799] = 1;
	small_parse_table_1140(v);
}

/* EOF small_parse_table_227.c */
