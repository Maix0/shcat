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
	v->a[22700] = anon_sym_RPAREN;
	v->a[22701] = anon_sym_SEMI_SEMI;
	v->a[22702] = anon_sym_AMP_AMP;
	v->a[22703] = anon_sym_PIPE_PIPE;
	v->a[22704] = anon_sym_LT;
	v->a[22705] = anon_sym_GT;
	v->a[22706] = anon_sym_GT_GT;
	v->a[22707] = anon_sym_AMP_GT;
	v->a[22708] = anon_sym_AMP_GT_GT;
	v->a[22709] = anon_sym_LT_AMP;
	v->a[22710] = anon_sym_GT_AMP;
	v->a[22711] = anon_sym_GT_PIPE;
	v->a[22712] = anon_sym_LT_AMP_DASH;
	v->a[22713] = anon_sym_GT_AMP_DASH;
	v->a[22714] = anon_sym_LT_LT;
	v->a[22715] = anon_sym_LT_LT_DASH;
	v->a[22716] = aux_sym_heredoc_redirect_token1;
	v->a[22717] = anon_sym_AMP;
	v->a[22718] = anon_sym_SEMI;
	v->a[22719] = 5;
	small_parse_table_1136(v);
}

void	small_parse_table_1136(t_small_parse_table_array *v)
{
	v->a[22720] = actions(3);
	v->a[22721] = 1;
	v->a[22722] = sym_comment;
	v->a[22723] = state(207);
	v->a[22724] = 2;
	v->a[22725] = sym_concatenation;
	v->a[22726] = aux_sym_for_statement_repeat1;
	v->a[22727] = actions(565);
	v->a[22728] = 3;
	v->a[22729] = sym_file_descriptor;
	v->a[22730] = sym_variable_name;
	v->a[22731] = ts_builtin_sym_end;
	v->a[22732] = state(329);
	v->a[22733] = 6;
	v->a[22734] = sym_arithmetic_expansion;
	v->a[22735] = sym_string;
	v->a[22736] = sym_number;
	v->a[22737] = sym_simple_expansion;
	v->a[22738] = sym_expansion;
	v->a[22739] = sym_command_substitution;
	small_parse_table_1137(v);
}

void	small_parse_table_1137(t_small_parse_table_array *v)
{
	v->a[22740] = actions(567);
	v->a[22741] = 29;
	v->a[22742] = anon_sym_PIPE;
	v->a[22743] = anon_sym_SEMI_SEMI;
	v->a[22744] = anon_sym_AMP_AMP;
	v->a[22745] = anon_sym_PIPE_PIPE;
	v->a[22746] = anon_sym_LT;
	v->a[22747] = anon_sym_GT;
	v->a[22748] = anon_sym_GT_GT;
	v->a[22749] = anon_sym_AMP_GT;
	v->a[22750] = anon_sym_AMP_GT_GT;
	v->a[22751] = anon_sym_LT_AMP;
	v->a[22752] = anon_sym_GT_AMP;
	v->a[22753] = anon_sym_GT_PIPE;
	v->a[22754] = anon_sym_LT_AMP_DASH;
	v->a[22755] = anon_sym_GT_AMP_DASH;
	v->a[22756] = anon_sym_LT_LT;
	v->a[22757] = anon_sym_LT_LT_DASH;
	v->a[22758] = aux_sym_heredoc_redirect_token1;
	v->a[22759] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1138(v);
}

void	small_parse_table_1138(t_small_parse_table_array *v)
{
	v->a[22760] = anon_sym_AMP;
	v->a[22761] = anon_sym_DOLLAR;
	v->a[22762] = anon_sym_DQUOTE;
	v->a[22763] = sym_raw_string;
	v->a[22764] = aux_sym_number_token1;
	v->a[22765] = aux_sym_number_token2;
	v->a[22766] = anon_sym_DOLLAR_LBRACE;
	v->a[22767] = anon_sym_DOLLAR_LPAREN;
	v->a[22768] = anon_sym_BQUOTE;
	v->a[22769] = sym_word;
	v->a[22770] = anon_sym_SEMI;
	v->a[22771] = 5;
	v->a[22772] = actions(3);
	v->a[22773] = 1;
	v->a[22774] = sym_comment;
	v->a[22775] = actions(565);
	v->a[22776] = 2;
	v->a[22777] = sym_file_descriptor;
	v->a[22778] = sym_variable_name;
	v->a[22779] = state(208);
	small_parse_table_1139(v);
}

void	small_parse_table_1139(t_small_parse_table_array *v)
{
	v->a[22780] = 2;
	v->a[22781] = sym_concatenation;
	v->a[22782] = aux_sym_for_statement_repeat1;
	v->a[22783] = state(378);
	v->a[22784] = 6;
	v->a[22785] = sym_arithmetic_expansion;
	v->a[22786] = sym_string;
	v->a[22787] = sym_number;
	v->a[22788] = sym_simple_expansion;
	v->a[22789] = sym_expansion;
	v->a[22790] = sym_command_substitution;
	v->a[22791] = actions(567);
	v->a[22792] = 30;
	v->a[22793] = anon_sym_esac;
	v->a[22794] = anon_sym_PIPE;
	v->a[22795] = anon_sym_SEMI_SEMI;
	v->a[22796] = anon_sym_AMP_AMP;
	v->a[22797] = anon_sym_PIPE_PIPE;
	v->a[22798] = anon_sym_LT;
	v->a[22799] = anon_sym_GT;
	small_parse_table_1140(v);
}

/* EOF small_parse_table_227.c */
