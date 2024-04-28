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
	v->a[20100] = anon_sym_GT_PIPE;
	v->a[20101] = anon_sym_LT_AMP_DASH;
	v->a[20102] = anon_sym_GT_AMP_DASH;
	v->a[20103] = anon_sym_LT_LT_DASH;
	v->a[20104] = anon_sym_LT_LT_LT;
	v->a[20105] = 8;
	v->a[20106] = actions(3);
	v->a[20107] = 1;
	v->a[20108] = sym_comment;
	v->a[20109] = actions(2267);
	v->a[20110] = 1;
	v->a[20111] = anon_sym_DQUOTE;
	v->a[20112] = actions(3829);
	v->a[20113] = 1;
	v->a[20114] = sym_variable_name;
	v->a[20115] = state(1595);
	v->a[20116] = 1;
	v->a[20117] = sym_string;
	v->a[20118] = actions(3827);
	v->a[20119] = 2;
	small_parse_table_1006(v);
}

void	small_parse_table_1006(t_small_parse_table_array *v)
{
	v->a[20120] = aux_sym__simple_variable_name_token1;
	v->a[20121] = aux_sym__multiline_variable_name_token1;
	v->a[20122] = actions(1235);
	v->a[20123] = 3;
	v->a[20124] = sym_file_descriptor;
	v->a[20125] = sym_test_operator;
	v->a[20126] = sym__brace_start;
	v->a[20127] = actions(3825);
	v->a[20128] = 9;
	v->a[20129] = anon_sym_DASH;
	v->a[20130] = anon_sym_STAR;
	v->a[20131] = anon_sym_BANG;
	v->a[20132] = anon_sym_QMARK;
	v->a[20133] = anon_sym_DOLLAR;
	v->a[20134] = anon_sym_POUND;
	v->a[20135] = anon_sym_AT2;
	v->a[20136] = anon_sym_0;
	v->a[20137] = anon_sym__;
	v->a[20138] = actions(1227);
	v->a[20139] = 36;
	small_parse_table_1007(v);
}

void	small_parse_table_1007(t_small_parse_table_array *v)
{
	v->a[20140] = anon_sym_LPAREN_LPAREN;
	v->a[20141] = anon_sym_SEMI;
	v->a[20142] = anon_sym_PIPE_PIPE;
	v->a[20143] = anon_sym_AMP_AMP;
	v->a[20144] = anon_sym_PIPE;
	v->a[20145] = anon_sym_AMP;
	v->a[20146] = anon_sym_LT;
	v->a[20147] = anon_sym_GT;
	v->a[20148] = anon_sym_LT_LT;
	v->a[20149] = anon_sym_GT_GT;
	v->a[20150] = anon_sym_RPAREN;
	v->a[20151] = anon_sym_SEMI_SEMI;
	v->a[20152] = anon_sym_PIPE_AMP;
	v->a[20153] = anon_sym_AMP_GT;
	v->a[20154] = anon_sym_AMP_GT_GT;
	v->a[20155] = anon_sym_LT_AMP;
	v->a[20156] = anon_sym_GT_AMP;
	v->a[20157] = anon_sym_GT_PIPE;
	v->a[20158] = anon_sym_LT_AMP_DASH;
	v->a[20159] = anon_sym_GT_AMP_DASH;
	small_parse_table_1008(v);
}

void	small_parse_table_1008(t_small_parse_table_array *v)
{
	v->a[20160] = anon_sym_LT_LT_DASH;
	v->a[20161] = aux_sym_heredoc_redirect_token1;
	v->a[20162] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20163] = anon_sym_DOLLAR_LBRACK;
	v->a[20164] = sym__special_character;
	v->a[20165] = sym_raw_string;
	v->a[20166] = sym_ansi_c_string;
	v->a[20167] = aux_sym_number_token1;
	v->a[20168] = aux_sym_number_token2;
	v->a[20169] = anon_sym_DOLLAR_LBRACE;
	v->a[20170] = anon_sym_DOLLAR_LPAREN;
	v->a[20171] = anon_sym_BQUOTE;
	v->a[20172] = anon_sym_DOLLAR_BQUOTE;
	v->a[20173] = anon_sym_LT_LPAREN;
	v->a[20174] = anon_sym_GT_LPAREN;
	v->a[20175] = sym_word;
	v->a[20176] = 21;
	v->a[20177] = actions(3);
	v->a[20178] = 1;
	v->a[20179] = sym_comment;
	small_parse_table_1009(v);
}

void	small_parse_table_1009(t_small_parse_table_array *v)
{
	v->a[20180] = actions(3837);
	v->a[20181] = 1;
	v->a[20182] = anon_sym_DOLLAR_LBRACK;
	v->a[20183] = actions(3840);
	v->a[20184] = 1;
	v->a[20185] = anon_sym_DOLLAR;
	v->a[20186] = actions(3843);
	v->a[20187] = 1;
	v->a[20188] = sym__special_character;
	v->a[20189] = actions(3846);
	v->a[20190] = 1;
	v->a[20191] = anon_sym_DQUOTE;
	v->a[20192] = actions(3849);
	v->a[20193] = 1;
	v->a[20194] = aux_sym_number_token1;
	v->a[20195] = actions(3852);
	v->a[20196] = 1;
	v->a[20197] = aux_sym_number_token2;
	v->a[20198] = actions(3855);
	v->a[20199] = 1;
	small_parse_table_1010(v);
}

/* EOF small_parse_table_201.c */
