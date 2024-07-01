/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_682.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3410(t_small_parse_table_array *v)
{
	v->a[68200] = actions(2270);
	v->a[68201] = 18;
	v->a[68202] = anon_sym_PIPE;
	v->a[68203] = anon_sym_RPAREN;
	v->a[68204] = anon_sym_SEMI_SEMI;
	v->a[68205] = anon_sym_AMP_AMP;
	v->a[68206] = anon_sym_PIPE_PIPE;
	v->a[68207] = anon_sym_LT;
	v->a[68208] = anon_sym_GT;
	v->a[68209] = anon_sym_GT_GT;
	v->a[68210] = anon_sym_LT_AMP;
	v->a[68211] = anon_sym_GT_AMP;
	v->a[68212] = anon_sym_GT_PIPE;
	v->a[68213] = anon_sym_LT_AMP_DASH;
	v->a[68214] = anon_sym_GT_AMP_DASH;
	v->a[68215] = anon_sym_LT_LT;
	v->a[68216] = anon_sym_LT_LT_DASH;
	v->a[68217] = anon_sym_AMP;
	v->a[68218] = anon_sym_BQUOTE;
	v->a[68219] = anon_sym_SEMI;
	small_parse_table_3411(v);
}

void	small_parse_table_3411(t_small_parse_table_array *v)
{
	v->a[68220] = 10;
	v->a[68221] = actions(3);
	v->a[68222] = 1;
	v->a[68223] = sym_comment;
	v->a[68224] = actions(2065);
	v->a[68225] = 1;
	v->a[68226] = sym_file_descriptor;
	v->a[68227] = actions(2154);
	v->a[68228] = 1;
	v->a[68229] = aux_sym_heredoc_redirect_token1;
	v->a[68230] = state(783);
	v->a[68231] = 1;
	v->a[68232] = sym_terminator;
	v->a[68233] = actions(754);
	v->a[68234] = 2;
	v->a[68235] = anon_sym_LT_LT;
	v->a[68236] = anon_sym_LT_LT_DASH;
	v->a[68237] = actions(924);
	v->a[68238] = 2;
	v->a[68239] = anon_sym_AMP_AMP;
	small_parse_table_3412(v);
}

void	small_parse_table_3412(t_small_parse_table_array *v)
{
	v->a[68240] = anon_sym_PIPE_PIPE;
	v->a[68241] = actions(2063);
	v->a[68242] = 2;
	v->a[68243] = anon_sym_LT_AMP_DASH;
	v->a[68244] = anon_sym_GT_AMP_DASH;
	v->a[68245] = actions(922);
	v->a[68246] = 3;
	v->a[68247] = anon_sym_SEMI_SEMI;
	v->a[68248] = anon_sym_AMP;
	v->a[68249] = anon_sym_SEMI;
	v->a[68250] = state(1268);
	v->a[68251] = 3;
	v->a[68252] = sym_file_redirect;
	v->a[68253] = sym_heredoc_redirect;
	v->a[68254] = aux_sym_redirected_statement_repeat1;
	v->a[68255] = actions(2061);
	v->a[68256] = 6;
	v->a[68257] = anon_sym_LT;
	v->a[68258] = anon_sym_GT;
	v->a[68259] = anon_sym_GT_GT;
	small_parse_table_3413(v);
}

void	small_parse_table_3413(t_small_parse_table_array *v)
{
	v->a[68260] = anon_sym_LT_AMP;
	v->a[68261] = anon_sym_GT_AMP;
	v->a[68262] = anon_sym_GT_PIPE;
	v->a[68263] = 15;
	v->a[68264] = actions(3);
	v->a[68265] = 1;
	v->a[68266] = sym_comment;
	v->a[68267] = actions(1774);
	v->a[68268] = 1;
	v->a[68269] = anon_sym_LPAREN;
	v->a[68270] = actions(1778);
	v->a[68271] = 1;
	v->a[68272] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[68273] = actions(1780);
	v->a[68274] = 1;
	v->a[68275] = anon_sym_DOLLAR;
	v->a[68276] = actions(1782);
	v->a[68277] = 1;
	v->a[68278] = anon_sym_DQUOTE;
	v->a[68279] = actions(1784);
	small_parse_table_3414(v);
}

void	small_parse_table_3414(t_small_parse_table_array *v)
{
	v->a[68280] = 1;
	v->a[68281] = anon_sym_DOLLAR_LBRACE;
	v->a[68282] = actions(1786);
	v->a[68283] = 1;
	v->a[68284] = anon_sym_DOLLAR_LPAREN;
	v->a[68285] = actions(1788);
	v->a[68286] = 1;
	v->a[68287] = anon_sym_BQUOTE;
	v->a[68288] = actions(1790);
	v->a[68289] = 1;
	v->a[68290] = sym_extglob_pattern;
	v->a[68291] = state(1329);
	v->a[68292] = 1;
	v->a[68293] = aux_sym_case_statement_repeat1;
	v->a[68294] = state(1920);
	v->a[68295] = 1;
	v->a[68296] = sym_case_item;
	v->a[68297] = state(2312);
	v->a[68298] = 1;
	v->a[68299] = sym__case_item_last;
	small_parse_table_3415(v);
}

/* EOF small_parse_table_682.c */
