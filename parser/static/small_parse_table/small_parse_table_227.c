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
	v->a[22700] = anon_sym_LT_AMP;
	v->a[22701] = anon_sym_GT_AMP;
	v->a[22702] = anon_sym_GT_PIPE;
	v->a[22703] = anon_sym_LT_GT;
	v->a[22704] = anon_sym_LT_LT;
	v->a[22705] = anon_sym_LT_LT_DASH;
	v->a[22706] = aux_sym_heredoc_redirect_token1;
	v->a[22707] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22708] = anon_sym_DQUOTE;
	v->a[22709] = sym_raw_string;
	v->a[22710] = sym_number;
	v->a[22711] = anon_sym_DOLLAR_LBRACE;
	v->a[22712] = anon_sym_DOLLAR_LPAREN;
	v->a[22713] = anon_sym_BQUOTE;
	v->a[22714] = sym_word;
	v->a[22715] = 11;
	v->a[22716] = actions(3);
	v->a[22717] = 1;
	v->a[22718] = sym_comment;
	v->a[22719] = actions(824);
	small_parse_table_1136(v);
}

void	small_parse_table_1136(t_small_parse_table_array *v)
{
	v->a[22720] = 1;
	v->a[22721] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22722] = actions(827);
	v->a[22723] = 1;
	v->a[22724] = anon_sym_DOLLAR;
	v->a[22725] = actions(830);
	v->a[22726] = 1;
	v->a[22727] = anon_sym_DQUOTE;
	v->a[22728] = actions(833);
	v->a[22729] = 1;
	v->a[22730] = anon_sym_DOLLAR_LBRACE;
	v->a[22731] = actions(836);
	v->a[22732] = 1;
	v->a[22733] = anon_sym_DOLLAR_LPAREN;
	v->a[22734] = actions(839);
	v->a[22735] = 1;
	v->a[22736] = anon_sym_BQUOTE;
	v->a[22737] = state(263);
	v->a[22738] = 2;
	v->a[22739] = sym_concatenation;
	small_parse_table_1137(v);
}

void	small_parse_table_1137(t_small_parse_table_array *v)
{
	v->a[22740] = aux_sym_for_statement_repeat1;
	v->a[22741] = actions(821);
	v->a[22742] = 3;
	v->a[22743] = sym_raw_string;
	v->a[22744] = sym_number;
	v->a[22745] = sym_word;
	v->a[22746] = state(405);
	v->a[22747] = 5;
	v->a[22748] = sym_arithmetic_expansion;
	v->a[22749] = sym_string;
	v->a[22750] = sym_simple_expansion;
	v->a[22751] = sym_expansion;
	v->a[22752] = sym_command_substitution;
	v->a[22753] = actions(618);
	v->a[22754] = 16;
	v->a[22755] = anon_sym_PIPE;
	v->a[22756] = anon_sym_RPAREN;
	v->a[22757] = anon_sym_SEMI_SEMI;
	v->a[22758] = anon_sym_AMP_AMP;
	v->a[22759] = anon_sym_PIPE_PIPE;
	small_parse_table_1138(v);
}

void	small_parse_table_1138(t_small_parse_table_array *v)
{
	v->a[22760] = anon_sym_LT;
	v->a[22761] = anon_sym_GT;
	v->a[22762] = anon_sym_GT_GT;
	v->a[22763] = anon_sym_LT_AMP;
	v->a[22764] = anon_sym_GT_AMP;
	v->a[22765] = anon_sym_GT_PIPE;
	v->a[22766] = anon_sym_LT_GT;
	v->a[22767] = anon_sym_LT_LT;
	v->a[22768] = anon_sym_LT_LT_DASH;
	v->a[22769] = aux_sym_heredoc_redirect_token1;
	v->a[22770] = anon_sym_SEMI;
	v->a[22771] = 11;
	v->a[22772] = actions(3);
	v->a[22773] = 1;
	v->a[22774] = sym_comment;
	v->a[22775] = actions(746);
	v->a[22776] = 1;
	v->a[22777] = anon_sym_PIPE;
	v->a[22778] = actions(754);
	v->a[22779] = 1;
	small_parse_table_1139(v);
}

void	small_parse_table_1139(t_small_parse_table_array *v)
{
	v->a[22780] = sym_variable_name;
	v->a[22781] = state(551);
	v->a[22782] = 1;
	v->a[22783] = sym_terminator;
	v->a[22784] = actions(748);
	v->a[22785] = 2;
	v->a[22786] = anon_sym_AMP_AMP;
	v->a[22787] = anon_sym_PIPE_PIPE;
	v->a[22788] = actions(750);
	v->a[22789] = 2;
	v->a[22790] = anon_sym_LT_LT;
	v->a[22791] = anon_sym_LT_LT_DASH;
	v->a[22792] = actions(752);
	v->a[22793] = 2;
	v->a[22794] = aux_sym_heredoc_redirect_token1;
	v->a[22795] = anon_sym_SEMI;
	v->a[22796] = actions(842);
	v->a[22797] = 2;
	v->a[22798] = anon_sym_esac;
	v->a[22799] = anon_sym_SEMI_SEMI;
	small_parse_table_1140(v);
}

/* EOF small_parse_table_227.c */
