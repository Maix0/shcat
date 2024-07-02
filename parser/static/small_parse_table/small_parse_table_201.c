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
	v->a[20100] = anon_sym_AMP_AMP;
	v->a[20101] = anon_sym_PIPE_PIPE;
	v->a[20102] = anon_sym_LT;
	v->a[20103] = anon_sym_GT;
	v->a[20104] = anon_sym_GT_GT;
	v->a[20105] = anon_sym_LT_AMP;
	v->a[20106] = anon_sym_GT_AMP;
	v->a[20107] = anon_sym_GT_PIPE;
	v->a[20108] = anon_sym_LT_GT;
	v->a[20109] = anon_sym_LT_LT;
	v->a[20110] = anon_sym_LT_LT_DASH;
	v->a[20111] = aux_sym_heredoc_redirect_token1;
	v->a[20112] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20113] = anon_sym_AMP;
	v->a[20114] = anon_sym_DOLLAR;
	v->a[20115] = anon_sym_DQUOTE;
	v->a[20116] = sym_raw_string;
	v->a[20117] = sym_number;
	v->a[20118] = anon_sym_DOLLAR_LBRACE;
	v->a[20119] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1006(v);
}

void	small_parse_table_1006(t_small_parse_table_array *v)
{
	v->a[20120] = anon_sym_BQUOTE;
	v->a[20121] = sym_word;
	v->a[20122] = anon_sym_SEMI;
	v->a[20123] = 14;
	v->a[20124] = actions(3);
	v->a[20125] = 1;
	v->a[20126] = sym_comment;
	v->a[20127] = actions(441);
	v->a[20128] = 1;
	v->a[20129] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20130] = actions(443);
	v->a[20131] = 1;
	v->a[20132] = anon_sym_DOLLAR;
	v->a[20133] = actions(445);
	v->a[20134] = 1;
	v->a[20135] = anon_sym_DQUOTE;
	v->a[20136] = actions(447);
	v->a[20137] = 1;
	v->a[20138] = anon_sym_DOLLAR_LBRACE;
	v->a[20139] = actions(449);
	small_parse_table_1007(v);
}

void	small_parse_table_1007(t_small_parse_table_array *v)
{
	v->a[20140] = 1;
	v->a[20141] = anon_sym_DOLLAR_LPAREN;
	v->a[20142] = actions(451);
	v->a[20143] = 1;
	v->a[20144] = anon_sym_BQUOTE;
	v->a[20145] = actions(455);
	v->a[20146] = 1;
	v->a[20147] = sym__bare_dollar;
	v->a[20148] = actions(503);
	v->a[20149] = 1;
	v->a[20150] = sym_file_descriptor;
	v->a[20151] = state(201);
	v->a[20152] = 1;
	v->a[20153] = aux_sym_command_repeat2;
	v->a[20154] = state(666);
	v->a[20155] = 1;
	v->a[20156] = sym_concatenation;
	v->a[20157] = actions(437);
	v->a[20158] = 3;
	v->a[20159] = sym_raw_string;
	small_parse_table_1008(v);
}

void	small_parse_table_1008(t_small_parse_table_array *v)
{
	v->a[20160] = sym_number;
	v->a[20161] = sym_word;
	v->a[20162] = state(420);
	v->a[20163] = 5;
	v->a[20164] = sym_arithmetic_expansion;
	v->a[20165] = sym_string;
	v->a[20166] = sym_simple_expansion;
	v->a[20167] = sym_expansion;
	v->a[20168] = sym_command_substitution;
	v->a[20169] = actions(501);
	v->a[20170] = 17;
	v->a[20171] = anon_sym_esac;
	v->a[20172] = anon_sym_PIPE;
	v->a[20173] = anon_sym_SEMI_SEMI;
	v->a[20174] = anon_sym_AMP_AMP;
	v->a[20175] = anon_sym_PIPE_PIPE;
	v->a[20176] = anon_sym_LT;
	v->a[20177] = anon_sym_GT;
	v->a[20178] = anon_sym_GT_GT;
	v->a[20179] = anon_sym_LT_AMP;
	small_parse_table_1009(v);
}

void	small_parse_table_1009(t_small_parse_table_array *v)
{
	v->a[20180] = anon_sym_GT_AMP;
	v->a[20181] = anon_sym_GT_PIPE;
	v->a[20182] = anon_sym_LT_GT;
	v->a[20183] = anon_sym_LT_LT;
	v->a[20184] = anon_sym_LT_LT_DASH;
	v->a[20185] = aux_sym_heredoc_redirect_token1;
	v->a[20186] = anon_sym_AMP;
	v->a[20187] = anon_sym_SEMI;
	v->a[20188] = 14;
	v->a[20189] = actions(3);
	v->a[20190] = 1;
	v->a[20191] = sym_comment;
	v->a[20192] = actions(547);
	v->a[20193] = 1;
	v->a[20194] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20195] = actions(550);
	v->a[20196] = 1;
	v->a[20197] = anon_sym_DOLLAR;
	v->a[20198] = actions(553);
	v->a[20199] = 1;
	small_parse_table_1010(v);
}

/* EOF small_parse_table_201.c */
