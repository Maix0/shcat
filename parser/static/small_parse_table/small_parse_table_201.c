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
	v->a[20100] = aux_sym__simple_variable_name_token1;
	v->a[20101] = aux_sym__multiline_variable_name_token1;
	v->a[20102] = actions(828);
	v->a[20103] = 3;
	v->a[20104] = sym_file_descriptor;
	v->a[20105] = sym_test_operator;
	v->a[20106] = sym__brace_start;
	v->a[20107] = actions(2920);
	v->a[20108] = 9;
	v->a[20109] = anon_sym_BANG;
	v->a[20110] = anon_sym_DASH;
	v->a[20111] = anon_sym_STAR;
	v->a[20112] = anon_sym_QMARK;
	v->a[20113] = anon_sym_DOLLAR;
	v->a[20114] = anon_sym_POUND;
	v->a[20115] = anon_sym_AT;
	v->a[20116] = anon_sym_0;
	v->a[20117] = anon_sym__;
	v->a[20118] = actions(826);
	v->a[20119] = 27;
	small_parse_table_1006(v);
}

void	small_parse_table_1006(t_small_parse_table_array *v)
{
	v->a[20120] = anon_sym_PIPE;
	v->a[20121] = anon_sym_PIPE_AMP;
	v->a[20122] = anon_sym_AMP_AMP;
	v->a[20123] = anon_sym_PIPE_PIPE;
	v->a[20124] = anon_sym_LT;
	v->a[20125] = anon_sym_GT;
	v->a[20126] = anon_sym_GT_GT;
	v->a[20127] = anon_sym_AMP_GT;
	v->a[20128] = anon_sym_AMP_GT_GT;
	v->a[20129] = anon_sym_LT_AMP;
	v->a[20130] = anon_sym_GT_AMP;
	v->a[20131] = anon_sym_GT_PIPE;
	v->a[20132] = anon_sym_LT_AMP_DASH;
	v->a[20133] = anon_sym_GT_AMP_DASH;
	v->a[20134] = anon_sym_LT_LT;
	v->a[20135] = anon_sym_LT_LT_DASH;
	v->a[20136] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20137] = sym__special_character;
	v->a[20138] = anon_sym_DQUOTE;
	v->a[20139] = sym_raw_string;
	small_parse_table_1007(v);
}

void	small_parse_table_1007(t_small_parse_table_array *v)
{
	v->a[20140] = aux_sym_number_token1;
	v->a[20141] = aux_sym_number_token2;
	v->a[20142] = anon_sym_DOLLAR_LBRACE;
	v->a[20143] = anon_sym_DOLLAR_LPAREN;
	v->a[20144] = anon_sym_BQUOTE;
	v->a[20145] = anon_sym_DOLLAR_BQUOTE;
	v->a[20146] = sym_word;
	v->a[20147] = 6;
	v->a[20148] = actions(3);
	v->a[20149] = 1;
	v->a[20150] = sym_comment;
	v->a[20151] = actions(2822);
	v->a[20152] = 1;
	v->a[20153] = aux_sym_concatenation_token1;
	v->a[20154] = actions(2830);
	v->a[20155] = 1;
	v->a[20156] = sym__concat;
	v->a[20157] = state(512);
	v->a[20158] = 1;
	v->a[20159] = aux_sym_concatenation_repeat1;
	small_parse_table_1008(v);
}

void	small_parse_table_1008(t_small_parse_table_array *v)
{
	v->a[20160] = actions(1182);
	v->a[20161] = 5;
	v->a[20162] = sym_file_descriptor;
	v->a[20163] = sym_variable_name;
	v->a[20164] = sym_test_operator;
	v->a[20165] = sym__brace_start;
	v->a[20166] = aux_sym_heredoc_redirect_token1;
	v->a[20167] = actions(1180);
	v->a[20168] = 34;
	v->a[20169] = anon_sym_esac;
	v->a[20170] = anon_sym_PIPE;
	v->a[20171] = anon_sym_SEMI_SEMI;
	v->a[20172] = anon_sym_SEMI_AMP;
	v->a[20173] = anon_sym_SEMI_SEMI_AMP;
	v->a[20174] = anon_sym_PIPE_AMP;
	v->a[20175] = anon_sym_AMP_AMP;
	v->a[20176] = anon_sym_PIPE_PIPE;
	v->a[20177] = anon_sym_LT;
	v->a[20178] = anon_sym_GT;
	v->a[20179] = anon_sym_GT_GT;
	small_parse_table_1009(v);
}

void	small_parse_table_1009(t_small_parse_table_array *v)
{
	v->a[20180] = anon_sym_AMP_GT;
	v->a[20181] = anon_sym_AMP_GT_GT;
	v->a[20182] = anon_sym_LT_AMP;
	v->a[20183] = anon_sym_GT_AMP;
	v->a[20184] = anon_sym_GT_PIPE;
	v->a[20185] = anon_sym_LT_AMP_DASH;
	v->a[20186] = anon_sym_GT_AMP_DASH;
	v->a[20187] = anon_sym_LT_LT;
	v->a[20188] = anon_sym_LT_LT_DASH;
	v->a[20189] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20190] = anon_sym_AMP;
	v->a[20191] = anon_sym_DOLLAR;
	v->a[20192] = sym__special_character;
	v->a[20193] = anon_sym_DQUOTE;
	v->a[20194] = sym_raw_string;
	v->a[20195] = aux_sym_number_token1;
	v->a[20196] = aux_sym_number_token2;
	v->a[20197] = anon_sym_DOLLAR_LBRACE;
	v->a[20198] = anon_sym_DOLLAR_LPAREN;
	v->a[20199] = anon_sym_BQUOTE;
	small_parse_table_1010(v);
}

/* EOF small_parse_table_201.c */
