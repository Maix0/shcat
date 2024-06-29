/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_291.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1455(t_small_parse_table_array *v)
{
	v->a[29100] = sym_number;
	v->a[29101] = anon_sym_DOLLAR_LBRACE;
	v->a[29102] = anon_sym_DOLLAR_LPAREN;
	v->a[29103] = anon_sym_BQUOTE;
	v->a[29104] = sym_word;
	v->a[29105] = anon_sym_SEMI;
	v->a[29106] = 3;
	v->a[29107] = actions(3);
	v->a[29108] = 1;
	v->a[29109] = sym_comment;
	v->a[29110] = actions(1088);
	v->a[29111] = 4;
	v->a[29112] = sym_file_descriptor;
	v->a[29113] = sym__concat;
	v->a[29114] = sym__bare_dollar;
	v->a[29115] = ts_builtin_sym_end;
	v->a[29116] = actions(1086);
	v->a[29117] = 30;
	v->a[29118] = anon_sym_LPAREN;
	v->a[29119] = anon_sym_PIPE;
	small_parse_table_1456(v);
}

void	small_parse_table_1456(t_small_parse_table_array *v)
{
	v->a[29120] = anon_sym_SEMI_SEMI;
	v->a[29121] = anon_sym_AMP_AMP;
	v->a[29122] = anon_sym_PIPE_PIPE;
	v->a[29123] = anon_sym_LT;
	v->a[29124] = anon_sym_GT;
	v->a[29125] = anon_sym_GT_GT;
	v->a[29126] = anon_sym_AMP_GT;
	v->a[29127] = anon_sym_AMP_GT_GT;
	v->a[29128] = anon_sym_LT_AMP;
	v->a[29129] = anon_sym_GT_AMP;
	v->a[29130] = anon_sym_GT_PIPE;
	v->a[29131] = anon_sym_LT_AMP_DASH;
	v->a[29132] = anon_sym_GT_AMP_DASH;
	v->a[29133] = anon_sym_LT_LT;
	v->a[29134] = anon_sym_LT_LT_DASH;
	v->a[29135] = aux_sym_heredoc_redirect_token1;
	v->a[29136] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[29137] = anon_sym_AMP;
	v->a[29138] = aux_sym_concatenation_token1;
	v->a[29139] = anon_sym_DOLLAR;
	small_parse_table_1457(v);
}

void	small_parse_table_1457(t_small_parse_table_array *v)
{
	v->a[29140] = anon_sym_DQUOTE;
	v->a[29141] = sym_raw_string;
	v->a[29142] = sym_number;
	v->a[29143] = anon_sym_DOLLAR_LBRACE;
	v->a[29144] = anon_sym_DOLLAR_LPAREN;
	v->a[29145] = anon_sym_BQUOTE;
	v->a[29146] = sym_word;
	v->a[29147] = anon_sym_SEMI;
	v->a[29148] = 3;
	v->a[29149] = actions(1074);
	v->a[29150] = 1;
	v->a[29151] = sym_comment;
	v->a[29152] = actions(1098);
	v->a[29153] = 13;
	v->a[29154] = anon_sym_PIPE;
	v->a[29155] = anon_sym_EQ;
	v->a[29156] = anon_sym_LT;
	v->a[29157] = anon_sym_GT;
	v->a[29158] = anon_sym_GT_GT;
	v->a[29159] = anon_sym_LT_LT;
	small_parse_table_1458(v);
}

void	small_parse_table_1458(t_small_parse_table_array *v)
{
	v->a[29160] = anon_sym_CARET;
	v->a[29161] = anon_sym_AMP;
	v->a[29162] = anon_sym_PLUS;
	v->a[29163] = anon_sym_DASH;
	v->a[29164] = anon_sym_STAR;
	v->a[29165] = anon_sym_SLASH;
	v->a[29166] = anon_sym_PERCENT;
	v->a[29167] = actions(1100);
	v->a[29168] = 21;
	v->a[29169] = anon_sym_AMP_AMP;
	v->a[29170] = anon_sym_PIPE_PIPE;
	v->a[29171] = anon_sym_RPAREN_RPAREN;
	v->a[29172] = anon_sym_PLUS_EQ;
	v->a[29173] = anon_sym_DASH_EQ;
	v->a[29174] = anon_sym_STAR_EQ;
	v->a[29175] = anon_sym_SLASH_EQ;
	v->a[29176] = anon_sym_PERCENT_EQ;
	v->a[29177] = anon_sym_LT_LT_EQ;
	v->a[29178] = anon_sym_GT_GT_EQ;
	v->a[29179] = anon_sym_AMP_EQ;
	small_parse_table_1459(v);
}

void	small_parse_table_1459(t_small_parse_table_array *v)
{
	v->a[29180] = anon_sym_CARET_EQ;
	v->a[29181] = anon_sym_PIPE_EQ;
	v->a[29182] = anon_sym_EQ_EQ;
	v->a[29183] = anon_sym_BANG_EQ;
	v->a[29184] = anon_sym_LT_EQ;
	v->a[29185] = anon_sym_GT_EQ;
	v->a[29186] = anon_sym_QMARK;
	v->a[29187] = anon_sym_COLON;
	v->a[29188] = anon_sym_PLUS_PLUS2;
	v->a[29189] = anon_sym_DASH_DASH2;
	v->a[29190] = 6;
	v->a[29191] = actions(3);
	v->a[29192] = 1;
	v->a[29193] = sym_comment;
	v->a[29194] = actions(1092);
	v->a[29195] = 1;
	v->a[29196] = aux_sym_concatenation_token1;
	v->a[29197] = actions(1096);
	v->a[29198] = 1;
	v->a[29199] = sym__concat;
	small_parse_table_1460(v);
}

/* EOF small_parse_table_291.c */
