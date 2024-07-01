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
	v->a[20100] = anon_sym_LT_AMP_DASH;
	v->a[20101] = anon_sym_GT_AMP_DASH;
	v->a[20102] = anon_sym_LT_LT;
	v->a[20103] = anon_sym_LT_LT_DASH;
	v->a[20104] = aux_sym_heredoc_redirect_token1;
	v->a[20105] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20106] = anon_sym_AMP;
	v->a[20107] = anon_sym_DQUOTE;
	v->a[20108] = sym_raw_string;
	v->a[20109] = sym_number;
	v->a[20110] = anon_sym_DOLLAR_LBRACE;
	v->a[20111] = anon_sym_DOLLAR_LPAREN;
	v->a[20112] = anon_sym_BQUOTE;
	v->a[20113] = sym_word;
	v->a[20114] = anon_sym_SEMI;
	v->a[20115] = 6;
	v->a[20116] = actions(3);
	v->a[20117] = 1;
	v->a[20118] = sym_comment;
	v->a[20119] = actions(379);
	small_parse_table_1006(v);
}

void	small_parse_table_1006(t_small_parse_table_array *v)
{
	v->a[20120] = 1;
	v->a[20121] = sym_file_descriptor;
	v->a[20122] = actions(441);
	v->a[20123] = 1;
	v->a[20124] = sym_variable_name;
	v->a[20125] = actions(439);
	v->a[20126] = 2;
	v->a[20127] = aux_sym__simple_variable_name_token1;
	v->a[20128] = aux_sym__multiline_variable_name_token1;
	v->a[20129] = actions(437);
	v->a[20130] = 9;
	v->a[20131] = anon_sym_BANG;
	v->a[20132] = anon_sym_DASH;
	v->a[20133] = anon_sym_STAR;
	v->a[20134] = anon_sym_QMARK;
	v->a[20135] = anon_sym_DOLLAR;
	v->a[20136] = anon_sym_POUND;
	v->a[20137] = anon_sym_AT;
	v->a[20138] = anon_sym_0;
	v->a[20139] = anon_sym__;
	small_parse_table_1007(v);
}

void	small_parse_table_1007(t_small_parse_table_array *v)
{
	v->a[20140] = actions(381);
	v->a[20141] = 26;
	v->a[20142] = anon_sym_esac;
	v->a[20143] = anon_sym_PIPE;
	v->a[20144] = anon_sym_SEMI_SEMI;
	v->a[20145] = anon_sym_AMP_AMP;
	v->a[20146] = anon_sym_PIPE_PIPE;
	v->a[20147] = anon_sym_LT;
	v->a[20148] = anon_sym_GT;
	v->a[20149] = anon_sym_GT_GT;
	v->a[20150] = anon_sym_LT_AMP;
	v->a[20151] = anon_sym_GT_AMP;
	v->a[20152] = anon_sym_GT_PIPE;
	v->a[20153] = anon_sym_LT_AMP_DASH;
	v->a[20154] = anon_sym_GT_AMP_DASH;
	v->a[20155] = anon_sym_LT_LT;
	v->a[20156] = anon_sym_LT_LT_DASH;
	v->a[20157] = aux_sym_heredoc_redirect_token1;
	v->a[20158] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20159] = anon_sym_AMP;
	small_parse_table_1008(v);
}

void	small_parse_table_1008(t_small_parse_table_array *v)
{
	v->a[20160] = anon_sym_DQUOTE;
	v->a[20161] = sym_raw_string;
	v->a[20162] = sym_number;
	v->a[20163] = anon_sym_DOLLAR_LBRACE;
	v->a[20164] = anon_sym_DOLLAR_LPAREN;
	v->a[20165] = anon_sym_BQUOTE;
	v->a[20166] = sym_word;
	v->a[20167] = anon_sym_SEMI;
	v->a[20168] = 6;
	v->a[20169] = actions(3);
	v->a[20170] = 1;
	v->a[20171] = sym_comment;
	v->a[20172] = actions(447);
	v->a[20173] = 1;
	v->a[20174] = sym_variable_name;
	v->a[20175] = actions(379);
	v->a[20176] = 2;
	v->a[20177] = sym_file_descriptor;
	v->a[20178] = ts_builtin_sym_end;
	v->a[20179] = actions(445);
	small_parse_table_1009(v);
}

void	small_parse_table_1009(t_small_parse_table_array *v)
{
	v->a[20180] = 2;
	v->a[20181] = aux_sym__simple_variable_name_token1;
	v->a[20182] = aux_sym__multiline_variable_name_token1;
	v->a[20183] = actions(443);
	v->a[20184] = 9;
	v->a[20185] = anon_sym_BANG;
	v->a[20186] = anon_sym_DASH;
	v->a[20187] = anon_sym_STAR;
	v->a[20188] = anon_sym_QMARK;
	v->a[20189] = anon_sym_DOLLAR;
	v->a[20190] = anon_sym_POUND;
	v->a[20191] = anon_sym_AT;
	v->a[20192] = anon_sym_0;
	v->a[20193] = anon_sym__;
	v->a[20194] = actions(381);
	v->a[20195] = 25;
	v->a[20196] = anon_sym_PIPE;
	v->a[20197] = anon_sym_SEMI_SEMI;
	v->a[20198] = anon_sym_AMP_AMP;
	v->a[20199] = anon_sym_PIPE_PIPE;
	small_parse_table_1010(v);
}

/* EOF small_parse_table_201.c */
