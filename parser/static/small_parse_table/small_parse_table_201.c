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
	v->a[20100] = anon_sym_EQ;
	v->a[20101] = anon_sym_LT;
	v->a[20102] = anon_sym_GT;
	v->a[20103] = anon_sym_GT_GT;
	v->a[20104] = anon_sym_LT_LT;
	v->a[20105] = anon_sym_CARET;
	v->a[20106] = anon_sym_AMP;
	v->a[20107] = anon_sym_PLUS;
	v->a[20108] = anon_sym_DASH;
	v->a[20109] = anon_sym_STAR;
	v->a[20110] = anon_sym_SLASH;
	v->a[20111] = anon_sym_PERCENT;
	v->a[20112] = actions(523);
	v->a[20113] = 21;
	v->a[20114] = anon_sym_AMP_AMP;
	v->a[20115] = anon_sym_PIPE_PIPE;
	v->a[20116] = anon_sym_RPAREN_RPAREN;
	v->a[20117] = anon_sym_PLUS_EQ;
	v->a[20118] = anon_sym_DASH_EQ;
	v->a[20119] = anon_sym_STAR_EQ;
	small_parse_table_1006(v);
}

void	small_parse_table_1006(t_small_parse_table_array *v)
{
	v->a[20120] = anon_sym_SLASH_EQ;
	v->a[20121] = anon_sym_PERCENT_EQ;
	v->a[20122] = anon_sym_LT_LT_EQ;
	v->a[20123] = anon_sym_GT_GT_EQ;
	v->a[20124] = anon_sym_AMP_EQ;
	v->a[20125] = anon_sym_CARET_EQ;
	v->a[20126] = anon_sym_PIPE_EQ;
	v->a[20127] = anon_sym_EQ_EQ;
	v->a[20128] = anon_sym_BANG_EQ;
	v->a[20129] = anon_sym_LT_EQ;
	v->a[20130] = anon_sym_GT_EQ;
	v->a[20131] = anon_sym_QMARK;
	v->a[20132] = anon_sym_COLON;
	v->a[20133] = anon_sym_PLUS_PLUS2;
	v->a[20134] = anon_sym_DASH_DASH2;
	v->a[20135] = 5;
	v->a[20136] = actions(3);
	v->a[20137] = 1;
	v->a[20138] = sym_comment;
	v->a[20139] = state(215);
	small_parse_table_1007(v);
}

void	small_parse_table_1007(t_small_parse_table_array *v)
{
	v->a[20140] = 2;
	v->a[20141] = sym_concatenation;
	v->a[20142] = aux_sym_for_statement_repeat1;
	v->a[20143] = actions(529);
	v->a[20144] = 3;
	v->a[20145] = sym_file_descriptor;
	v->a[20146] = sym_variable_name;
	v->a[20147] = ts_builtin_sym_end;
	v->a[20148] = state(387);
	v->a[20149] = 5;
	v->a[20150] = sym_arithmetic_expansion;
	v->a[20151] = sym_string;
	v->a[20152] = sym_simple_expansion;
	v->a[20153] = sym_expansion;
	v->a[20154] = sym_command_substitution;
	v->a[20155] = actions(531);
	v->a[20156] = 24;
	v->a[20157] = anon_sym_PIPE;
	v->a[20158] = anon_sym_SEMI_SEMI;
	v->a[20159] = anon_sym_AMP_AMP;
	small_parse_table_1008(v);
}

void	small_parse_table_1008(t_small_parse_table_array *v)
{
	v->a[20160] = anon_sym_PIPE_PIPE;
	v->a[20161] = anon_sym_LT;
	v->a[20162] = anon_sym_GT;
	v->a[20163] = anon_sym_GT_GT;
	v->a[20164] = anon_sym_LT_AMP;
	v->a[20165] = anon_sym_GT_AMP;
	v->a[20166] = anon_sym_GT_PIPE;
	v->a[20167] = anon_sym_LT_GT;
	v->a[20168] = anon_sym_LT_LT;
	v->a[20169] = anon_sym_LT_LT_DASH;
	v->a[20170] = aux_sym_heredoc_redirect_token1;
	v->a[20171] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20172] = anon_sym_DOLLAR;
	v->a[20173] = anon_sym_DQUOTE;
	v->a[20174] = sym_raw_string;
	v->a[20175] = sym_number;
	v->a[20176] = anon_sym_DOLLAR_LBRACE;
	v->a[20177] = anon_sym_DOLLAR_LPAREN;
	v->a[20178] = anon_sym_BQUOTE;
	v->a[20179] = sym_word;
	small_parse_table_1009(v);
}

void	small_parse_table_1009(t_small_parse_table_array *v)
{
	v->a[20180] = anon_sym_SEMI;
	v->a[20181] = 3;
	v->a[20182] = actions(501);
	v->a[20183] = 1;
	v->a[20184] = sym_comment;
	v->a[20185] = actions(533);
	v->a[20186] = 13;
	v->a[20187] = anon_sym_PIPE;
	v->a[20188] = anon_sym_EQ;
	v->a[20189] = anon_sym_LT;
	v->a[20190] = anon_sym_GT;
	v->a[20191] = anon_sym_GT_GT;
	v->a[20192] = anon_sym_LT_LT;
	v->a[20193] = anon_sym_CARET;
	v->a[20194] = anon_sym_AMP;
	v->a[20195] = anon_sym_PLUS;
	v->a[20196] = anon_sym_DASH;
	v->a[20197] = anon_sym_STAR;
	v->a[20198] = anon_sym_SLASH;
	v->a[20199] = anon_sym_PERCENT;
	small_parse_table_1010(v);
}

/* EOF small_parse_table_201.c */
