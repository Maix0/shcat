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
	v->a[20100] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20101] = anon_sym_DOLLAR;
	v->a[20102] = anon_sym_DQUOTE;
	v->a[20103] = sym_raw_string;
	v->a[20104] = sym_number;
	v->a[20105] = anon_sym_DOLLAR_LBRACE;
	v->a[20106] = anon_sym_DOLLAR_LPAREN;
	v->a[20107] = anon_sym_BQUOTE;
	v->a[20108] = sym_word;
	v->a[20109] = 10;
	v->a[20110] = actions(3);
	v->a[20111] = 1;
	v->a[20112] = sym_comment;
	v->a[20113] = actions(580);
	v->a[20114] = 1;
	v->a[20115] = anon_sym_PIPE;
	v->a[20116] = actions(597);
	v->a[20117] = 1;
	v->a[20118] = anon_sym_LT_LT;
	v->a[20119] = actions(771);
	small_parse_table_1006(v);
}

void	small_parse_table_1006(t_small_parse_table_array *v)
{
	v->a[20120] = 1;
	v->a[20121] = sym_variable_name;
	v->a[20122] = state(281);
	v->a[20123] = 1;
	v->a[20124] = sym_terminator;
	v->a[20125] = actions(769);
	v->a[20126] = 2;
	v->a[20127] = anon_sym_AMP_AMP;
	v->a[20128] = anon_sym_PIPE_PIPE;
	v->a[20129] = state(995);
	v->a[20130] = 2;
	v->a[20131] = sym_variable_assignment;
	v->a[20132] = aux_sym__variable_assignments_repeat1;
	v->a[20133] = actions(823);
	v->a[20134] = 3;
	v->a[20135] = anon_sym_SEMI_SEMI;
	v->a[20136] = aux_sym_heredoc_redirect_token1;
	v->a[20137] = anon_sym_SEMI;
	v->a[20138] = state(1040);
	v->a[20139] = 3;
	small_parse_table_1007(v);
}

void	small_parse_table_1007(t_small_parse_table_array *v)
{
	v->a[20140] = sym_file_redirect;
	v->a[20141] = sym_heredoc_redirect;
	v->a[20142] = aux_sym_redirected_statement_repeat1;
	v->a[20143] = actions(576);
	v->a[20144] = 12;
	v->a[20145] = anon_sym_LT;
	v->a[20146] = anon_sym_GT;
	v->a[20147] = anon_sym_GT_GT;
	v->a[20148] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20149] = anon_sym_DOLLAR;
	v->a[20150] = anon_sym_DQUOTE;
	v->a[20151] = sym_raw_string;
	v->a[20152] = sym_number;
	v->a[20153] = anon_sym_DOLLAR_LBRACE;
	v->a[20154] = anon_sym_DOLLAR_LPAREN;
	v->a[20155] = anon_sym_BQUOTE;
	v->a[20156] = sym_word;
	v->a[20157] = 18;
	v->a[20158] = actions(3);
	v->a[20159] = 1;
	small_parse_table_1008(v);
}

void	small_parse_table_1008(t_small_parse_table_array *v)
{
	v->a[20160] = sym_comment;
	v->a[20161] = actions(778);
	v->a[20162] = 1;
	v->a[20163] = anon_sym_LPAREN;
	v->a[20164] = actions(782);
	v->a[20165] = 1;
	v->a[20166] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20167] = actions(784);
	v->a[20168] = 1;
	v->a[20169] = anon_sym_DOLLAR;
	v->a[20170] = actions(786);
	v->a[20171] = 1;
	v->a[20172] = anon_sym_DQUOTE;
	v->a[20173] = actions(788);
	v->a[20174] = 1;
	v->a[20175] = anon_sym_DOLLAR_LBRACE;
	v->a[20176] = actions(790);
	v->a[20177] = 1;
	v->a[20178] = anon_sym_DOLLAR_LPAREN;
	v->a[20179] = actions(792);
	small_parse_table_1009(v);
}

void	small_parse_table_1009(t_small_parse_table_array *v)
{
	v->a[20180] = 1;
	v->a[20181] = anon_sym_BQUOTE;
	v->a[20182] = actions(794);
	v->a[20183] = 1;
	v->a[20184] = sym_extglob_pattern;
	v->a[20185] = actions(825);
	v->a[20186] = 1;
	v->a[20187] = anon_sym_esac;
	v->a[20188] = state(479);
	v->a[20189] = 1;
	v->a[20190] = sym_terminator;
	v->a[20191] = state(529);
	v->a[20192] = 1;
	v->a[20193] = aux_sym_case_statement_repeat1;
	v->a[20194] = state(1232);
	v->a[20195] = 1;
	v->a[20196] = sym_case_item;
	v->a[20197] = state(1631);
	v->a[20198] = 1;
	v->a[20199] = sym__case_item_last;
	small_parse_table_1010(v);
}

/* EOF small_parse_table_201.c */
