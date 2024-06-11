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
	v->a[68200] = state(1036);
	v->a[68201] = 1;
	v->a[68202] = aux_sym_concatenation_repeat1;
	v->a[68203] = actions(972);
	v->a[68204] = 3;
	v->a[68205] = sym_file_descriptor;
	v->a[68206] = sym_variable_name;
	v->a[68207] = aux_sym_heredoc_redirect_token1;
	v->a[68208] = actions(974);
	v->a[68209] = 18;
	v->a[68210] = anon_sym_PIPE;
	v->a[68211] = anon_sym_SEMI_SEMI;
	v->a[68212] = anon_sym_AMP_AMP;
	v->a[68213] = anon_sym_PIPE_PIPE;
	v->a[68214] = anon_sym_LT;
	v->a[68215] = anon_sym_GT;
	v->a[68216] = anon_sym_GT_GT;
	v->a[68217] = anon_sym_AMP_GT;
	v->a[68218] = anon_sym_AMP_GT_GT;
	v->a[68219] = anon_sym_LT_AMP;
	small_parse_table_3411(v);
}

void	small_parse_table_3411(t_small_parse_table_array *v)
{
	v->a[68220] = anon_sym_GT_AMP;
	v->a[68221] = anon_sym_GT_PIPE;
	v->a[68222] = anon_sym_LT_AMP_DASH;
	v->a[68223] = anon_sym_GT_AMP_DASH;
	v->a[68224] = anon_sym_LT_LT;
	v->a[68225] = anon_sym_LT_LT_DASH;
	v->a[68226] = anon_sym_AMP;
	v->a[68227] = anon_sym_SEMI;
	v->a[68228] = 13;
	v->a[68229] = actions(3);
	v->a[68230] = 1;
	v->a[68231] = sym_comment;
	v->a[68232] = actions(807);
	v->a[68233] = 1;
	v->a[68234] = anon_sym_PIPE;
	v->a[68235] = actions(840);
	v->a[68236] = 1;
	v->a[68237] = anon_sym_RPAREN;
	v->a[68238] = actions(2083);
	v->a[68239] = 1;
	small_parse_table_3412(v);
}

void	small_parse_table_3412(t_small_parse_table_array *v)
{
	v->a[68240] = sym_file_descriptor;
	v->a[68241] = actions(2107);
	v->a[68242] = 1;
	v->a[68243] = anon_sym_SEMI_SEMI;
	v->a[68244] = actions(2109);
	v->a[68245] = 1;
	v->a[68246] = aux_sym_heredoc_redirect_token1;
	v->a[68247] = actions(2111);
	v->a[68248] = 1;
	v->a[68249] = anon_sym_AMP;
	v->a[68250] = actions(2113);
	v->a[68251] = 1;
	v->a[68252] = anon_sym_SEMI;
	v->a[68253] = actions(859);
	v->a[68254] = 2;
	v->a[68255] = anon_sym_AMP_AMP;
	v->a[68256] = anon_sym_PIPE_PIPE;
	v->a[68257] = actions(861);
	v->a[68258] = 2;
	v->a[68259] = anon_sym_LT_LT;
	small_parse_table_3413(v);
}

void	small_parse_table_3413(t_small_parse_table_array *v)
{
	v->a[68260] = anon_sym_LT_LT_DASH;
	v->a[68261] = actions(2079);
	v->a[68262] = 2;
	v->a[68263] = anon_sym_LT_AMP_DASH;
	v->a[68264] = anon_sym_GT_AMP_DASH;
	v->a[68265] = state(1283);
	v->a[68266] = 3;
	v->a[68267] = sym_file_redirect;
	v->a[68268] = sym_heredoc_redirect;
	v->a[68269] = aux_sym_redirected_statement_repeat1;
	v->a[68270] = actions(2077);
	v->a[68271] = 8;
	v->a[68272] = anon_sym_LT;
	v->a[68273] = anon_sym_GT;
	v->a[68274] = anon_sym_GT_GT;
	v->a[68275] = anon_sym_AMP_GT;
	v->a[68276] = anon_sym_AMP_GT_GT;
	v->a[68277] = anon_sym_LT_AMP;
	v->a[68278] = anon_sym_GT_AMP;
	v->a[68279] = anon_sym_GT_PIPE;
	small_parse_table_3414(v);
}

void	small_parse_table_3414(t_small_parse_table_array *v)
{
	v->a[68280] = 3;
	v->a[68281] = actions(3);
	v->a[68282] = 1;
	v->a[68283] = sym_comment;
	v->a[68284] = actions(1004);
	v->a[68285] = 4;
	v->a[68286] = sym_file_descriptor;
	v->a[68287] = sym__concat;
	v->a[68288] = sym_variable_name;
	v->a[68289] = aux_sym_heredoc_redirect_token1;
	v->a[68290] = actions(999);
	v->a[68291] = 20;
	v->a[68292] = anon_sym_esac;
	v->a[68293] = anon_sym_PIPE;
	v->a[68294] = anon_sym_SEMI_SEMI;
	v->a[68295] = anon_sym_AMP_AMP;
	v->a[68296] = anon_sym_PIPE_PIPE;
	v->a[68297] = anon_sym_LT;
	v->a[68298] = anon_sym_GT;
	v->a[68299] = anon_sym_GT_GT;
	small_parse_table_3415(v);
}

/* EOF small_parse_table_682.c */
