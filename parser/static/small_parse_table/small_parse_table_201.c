/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_201.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1005(t_small_parse_table_array *v)
{
	v->a[20100] = sym__bare_dollar;
	v->a[20101] = state(186);
	v->a[20102] = 1;
	v->a[20103] = aux_sym_command_repeat2;
	v->a[20104] = state(681);
	v->a[20105] = 1;
	v->a[20106] = sym_concatenation;
	v->a[20107] = actions(560);
	v->a[20108] = 2;
	v->a[20109] = sym_file_descriptor;
	v->a[20110] = ts_builtin_sym_end;
	v->a[20111] = actions(439);
	v->a[20112] = 3;
	v->a[20113] = sym_raw_string;
	v->a[20114] = sym_number;
	v->a[20115] = sym_word;
	v->a[20116] = state(386);
	v->a[20117] = 5;
	v->a[20118] = sym_arithmetic_expansion;
	v->a[20119] = sym_string;
	small_parse_table_1006(v);
}

void	small_parse_table_1006(t_small_parse_table_array *v)
{
	v->a[20120] = sym_simple_expansion;
	v->a[20121] = sym_expansion;
	v->a[20122] = sym_command_substitution;
	v->a[20123] = actions(562);
	v->a[20124] = 16;
	v->a[20125] = anon_sym_PIPE;
	v->a[20126] = anon_sym_SEMI_SEMI;
	v->a[20127] = anon_sym_AMP_AMP;
	v->a[20128] = anon_sym_PIPE_PIPE;
	v->a[20129] = anon_sym_LT;
	v->a[20130] = anon_sym_GT;
	v->a[20131] = anon_sym_GT_GT;
	v->a[20132] = anon_sym_LT_AMP;
	v->a[20133] = anon_sym_GT_AMP;
	v->a[20134] = anon_sym_GT_PIPE;
	v->a[20135] = anon_sym_LT_GT;
	v->a[20136] = anon_sym_LT_LT;
	v->a[20137] = anon_sym_LT_LT_DASH;
	v->a[20138] = aux_sym_heredoc_redirect_token1;
	v->a[20139] = anon_sym_AMP;
	small_parse_table_1007(v);
}

void	small_parse_table_1007(t_small_parse_table_array *v)
{
	v->a[20140] = anon_sym_SEMI;
	v->a[20141] = 14;
	v->a[20142] = actions(3);
	v->a[20143] = 1;
	v->a[20144] = sym_comment;
	v->a[20145] = actions(524);
	v->a[20146] = 1;
	v->a[20147] = sym_file_descriptor;
	v->a[20148] = actions(567);
	v->a[20149] = 1;
	v->a[20150] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20151] = actions(570);
	v->a[20152] = 1;
	v->a[20153] = anon_sym_DOLLAR;
	v->a[20154] = actions(573);
	v->a[20155] = 1;
	v->a[20156] = anon_sym_DQUOTE;
	v->a[20157] = actions(576);
	v->a[20158] = 1;
	v->a[20159] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1008(v);
}

void	small_parse_table_1008(t_small_parse_table_array *v)
{
	v->a[20160] = actions(579);
	v->a[20161] = 1;
	v->a[20162] = anon_sym_DOLLAR_LPAREN;
	v->a[20163] = actions(582);
	v->a[20164] = 1;
	v->a[20165] = anon_sym_BQUOTE;
	v->a[20166] = actions(585);
	v->a[20167] = 1;
	v->a[20168] = sym__bare_dollar;
	v->a[20169] = state(191);
	v->a[20170] = 1;
	v->a[20171] = aux_sym_command_repeat2;
	v->a[20172] = state(640);
	v->a[20173] = 1;
	v->a[20174] = sym_concatenation;
	v->a[20175] = actions(564);
	v->a[20176] = 3;
	v->a[20177] = sym_raw_string;
	v->a[20178] = sym_number;
	v->a[20179] = sym_word;
	small_parse_table_1009(v);
}

void	small_parse_table_1009(t_small_parse_table_array *v)
{
	v->a[20180] = state(442);
	v->a[20181] = 5;
	v->a[20182] = sym_arithmetic_expansion;
	v->a[20183] = sym_string;
	v->a[20184] = sym_simple_expansion;
	v->a[20185] = sym_expansion;
	v->a[20186] = sym_command_substitution;
	v->a[20187] = actions(529);
	v->a[20188] = 17;
	v->a[20189] = anon_sym_esac;
	v->a[20190] = anon_sym_PIPE;
	v->a[20191] = anon_sym_SEMI_SEMI;
	v->a[20192] = anon_sym_AMP_AMP;
	v->a[20193] = anon_sym_PIPE_PIPE;
	v->a[20194] = anon_sym_LT;
	v->a[20195] = anon_sym_GT;
	v->a[20196] = anon_sym_GT_GT;
	v->a[20197] = anon_sym_LT_AMP;
	v->a[20198] = anon_sym_GT_AMP;
	v->a[20199] = anon_sym_GT_PIPE;
	small_parse_table_1010(v);
}

/* EOF small_parse_table_201.c */
