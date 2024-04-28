/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2571.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_12855(t_small_parse_table_array *v)
{
	v->a[257100] = anon_sym_POUND;
	v->a[257101] = anon_sym_0;
	v->a[257102] = anon_sym__;
	v->a[257103] = 11;
	v->a[257104] = actions(3);
	v->a[257105] = 1;
	v->a[257106] = sym_comment;
	v->a[257107] = actions(4257);
	v->a[257108] = 1;
	v->a[257109] = anon_sym_BQUOTE;
	v->a[257110] = actions(5379);
	v->a[257111] = 1;
	v->a[257112] = aux_sym_heredoc_redirect_token1;
	v->a[257113] = actions(11856);
	v->a[257114] = 1;
	v->a[257115] = sym_file_descriptor;
	v->a[257116] = actions(4253);
	v->a[257117] = 2;
	v->a[257118] = anon_sym_PIPE;
	v->a[257119] = anon_sym_PIPE_AMP;
	small_parse_table_12856(v);
}

void	small_parse_table_12856(t_small_parse_table_array *v)
{
	v->a[257120] = actions(4692);
	v->a[257121] = 2;
	v->a[257122] = anon_sym_LT_LT;
	v->a[257123] = anon_sym_LT_LT_DASH;
	v->a[257124] = actions(5355);
	v->a[257125] = 2;
	v->a[257126] = anon_sym_PIPE_PIPE;
	v->a[257127] = anon_sym_AMP_AMP;
	v->a[257128] = actions(11487);
	v->a[257129] = 2;
	v->a[257130] = anon_sym_LT_AMP_DASH;
	v->a[257131] = anon_sym_GT_AMP_DASH;
	v->a[257132] = actions(5377);
	v->a[257133] = 3;
	v->a[257134] = anon_sym_SEMI;
	v->a[257135] = anon_sym_AMP;
	v->a[257136] = anon_sym_SEMI_SEMI;
	v->a[257137] = state(4697);
	v->a[257138] = 3;
	v->a[257139] = sym_file_redirect;
	small_parse_table_12857(v);
}

void	small_parse_table_12857(t_small_parse_table_array *v)
{
	v->a[257140] = sym_heredoc_redirect;
	v->a[257141] = aux_sym_redirected_statement_repeat1;
	v->a[257142] = actions(11485);
	v->a[257143] = 8;
	v->a[257144] = anon_sym_LT;
	v->a[257145] = anon_sym_GT;
	v->a[257146] = anon_sym_GT_GT;
	v->a[257147] = anon_sym_AMP_GT;
	v->a[257148] = anon_sym_AMP_GT_GT;
	v->a[257149] = anon_sym_LT_AMP;
	v->a[257150] = anon_sym_GT_AMP;
	v->a[257151] = anon_sym_GT_PIPE;
	v->a[257152] = 11;
	v->a[257153] = actions(3);
	v->a[257154] = 1;
	v->a[257155] = sym_comment;
	v->a[257156] = actions(2721);
	v->a[257157] = 1;
	v->a[257158] = ts_builtin_sym_end;
	v->a[257159] = actions(5051);
	small_parse_table_12858(v);
}

void	small_parse_table_12858(t_small_parse_table_array *v)
{
	v->a[257160] = 1;
	v->a[257161] = aux_sym_heredoc_redirect_token1;
	v->a[257162] = actions(11834);
	v->a[257163] = 1;
	v->a[257164] = sym_file_descriptor;
	v->a[257165] = actions(4253);
	v->a[257166] = 2;
	v->a[257167] = anon_sym_PIPE;
	v->a[257168] = anon_sym_PIPE_AMP;
	v->a[257169] = actions(4690);
	v->a[257170] = 2;
	v->a[257171] = anon_sym_PIPE_PIPE;
	v->a[257172] = anon_sym_AMP_AMP;
	v->a[257173] = actions(4692);
	v->a[257174] = 2;
	v->a[257175] = anon_sym_LT_LT;
	v->a[257176] = anon_sym_LT_LT_DASH;
	v->a[257177] = actions(11481);
	v->a[257178] = 2;
	v->a[257179] = anon_sym_LT_AMP_DASH;
	small_parse_table_12859(v);
}

void	small_parse_table_12859(t_small_parse_table_array *v)
{
	v->a[257180] = anon_sym_GT_AMP_DASH;
	v->a[257181] = actions(5049);
	v->a[257182] = 3;
	v->a[257183] = anon_sym_SEMI;
	v->a[257184] = anon_sym_AMP;
	v->a[257185] = anon_sym_SEMI_SEMI;
	v->a[257186] = state(4650);
	v->a[257187] = 3;
	v->a[257188] = sym_file_redirect;
	v->a[257189] = sym_heredoc_redirect;
	v->a[257190] = aux_sym_redirected_statement_repeat1;
	v->a[257191] = actions(11479);
	v->a[257192] = 8;
	v->a[257193] = anon_sym_LT;
	v->a[257194] = anon_sym_GT;
	v->a[257195] = anon_sym_GT_GT;
	v->a[257196] = anon_sym_AMP_GT;
	v->a[257197] = anon_sym_AMP_GT_GT;
	v->a[257198] = anon_sym_LT_AMP;
	v->a[257199] = anon_sym_GT_AMP;
	small_parse_table_12860(v);
}

/* EOF small_parse_table_2571.c */
