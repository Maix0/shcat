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
	v->a[22700] = anon_sym_PIPE;
	v->a[22701] = anon_sym_RPAREN;
	v->a[22702] = anon_sym_SEMI_SEMI;
	v->a[22703] = anon_sym_AMP_AMP;
	v->a[22704] = anon_sym_PIPE_PIPE;
	v->a[22705] = anon_sym_LT;
	v->a[22706] = anon_sym_GT;
	v->a[22707] = anon_sym_GT_GT;
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
	v->a[22718] = 5;
	v->a[22719] = actions(3);
	small_parse_table_1136(v);
}

void	small_parse_table_1136(t_small_parse_table_array *v)
{
	v->a[22720] = 1;
	v->a[22721] = sym_comment;
	v->a[22722] = state(667);
	v->a[22723] = 1;
	v->a[22724] = sym_concatenation;
	v->a[22725] = actions(713);
	v->a[22726] = 2;
	v->a[22727] = sym_file_descriptor;
	v->a[22728] = sym_variable_name;
	v->a[22729] = state(398);
	v->a[22730] = 5;
	v->a[22731] = sym_arithmetic_expansion;
	v->a[22732] = sym_string;
	v->a[22733] = sym_simple_expansion;
	v->a[22734] = sym_expansion;
	v->a[22735] = sym_command_substitution;
	v->a[22736] = actions(711);
	v->a[22737] = 27;
	v->a[22738] = anon_sym_PIPE;
	v->a[22739] = anon_sym_RPAREN;
	small_parse_table_1137(v);
}

void	small_parse_table_1137(t_small_parse_table_array *v)
{
	v->a[22740] = anon_sym_SEMI_SEMI;
	v->a[22741] = anon_sym_AMP_AMP;
	v->a[22742] = anon_sym_PIPE_PIPE;
	v->a[22743] = anon_sym_LT;
	v->a[22744] = anon_sym_GT;
	v->a[22745] = anon_sym_GT_GT;
	v->a[22746] = anon_sym_LT_AMP;
	v->a[22747] = anon_sym_GT_AMP;
	v->a[22748] = anon_sym_GT_PIPE;
	v->a[22749] = anon_sym_LT_AMP_DASH;
	v->a[22750] = anon_sym_GT_AMP_DASH;
	v->a[22751] = anon_sym_LT_LT;
	v->a[22752] = anon_sym_LT_LT_DASH;
	v->a[22753] = aux_sym_heredoc_redirect_token1;
	v->a[22754] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22755] = anon_sym_AMP;
	v->a[22756] = anon_sym_DOLLAR;
	v->a[22757] = anon_sym_DQUOTE;
	v->a[22758] = sym_raw_string;
	v->a[22759] = sym_number;
	small_parse_table_1138(v);
}

void	small_parse_table_1138(t_small_parse_table_array *v)
{
	v->a[22760] = anon_sym_DOLLAR_LBRACE;
	v->a[22761] = anon_sym_DOLLAR_LPAREN;
	v->a[22762] = anon_sym_BQUOTE;
	v->a[22763] = sym_word;
	v->a[22764] = anon_sym_SEMI;
	v->a[22765] = 12;
	v->a[22766] = actions(3);
	v->a[22767] = 1;
	v->a[22768] = sym_comment;
	v->a[22769] = actions(602);
	v->a[22770] = 1;
	v->a[22771] = sym_file_descriptor;
	v->a[22772] = actions(717);
	v->a[22773] = 1;
	v->a[22774] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22775] = actions(719);
	v->a[22776] = 1;
	v->a[22777] = anon_sym_DOLLAR;
	v->a[22778] = actions(721);
	v->a[22779] = 1;
	small_parse_table_1139(v);
}

void	small_parse_table_1139(t_small_parse_table_array *v)
{
	v->a[22780] = anon_sym_DQUOTE;
	v->a[22781] = actions(723);
	v->a[22782] = 1;
	v->a[22783] = anon_sym_DOLLAR_LBRACE;
	v->a[22784] = actions(725);
	v->a[22785] = 1;
	v->a[22786] = anon_sym_DOLLAR_LPAREN;
	v->a[22787] = actions(727);
	v->a[22788] = 1;
	v->a[22789] = anon_sym_BQUOTE;
	v->a[22790] = state(220);
	v->a[22791] = 2;
	v->a[22792] = sym_concatenation;
	v->a[22793] = aux_sym_for_statement_repeat1;
	v->a[22794] = actions(715);
	v->a[22795] = 3;
	v->a[22796] = sym_raw_string;
	v->a[22797] = sym_number;
	v->a[22798] = sym_word;
	v->a[22799] = state(577);
	small_parse_table_1140(v);
}

/* EOF small_parse_table_227.c */
