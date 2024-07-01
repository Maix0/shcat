/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_652.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3260(t_small_parse_table_array *v)
{
	v->a[65200] = 1;
	v->a[65201] = sym__concat;
	v->a[65202] = state(978);
	v->a[65203] = 1;
	v->a[65204] = aux_sym_concatenation_repeat1;
	v->a[65205] = actions(1085);
	v->a[65206] = 3;
	v->a[65207] = sym_file_descriptor;
	v->a[65208] = ts_builtin_sym_end;
	v->a[65209] = aux_sym_heredoc_redirect_token1;
	v->a[65210] = actions(1081);
	v->a[65211] = 16;
	v->a[65212] = anon_sym_PIPE;
	v->a[65213] = anon_sym_SEMI_SEMI;
	v->a[65214] = anon_sym_AMP_AMP;
	v->a[65215] = anon_sym_PIPE_PIPE;
	v->a[65216] = anon_sym_LT;
	v->a[65217] = anon_sym_GT;
	v->a[65218] = anon_sym_GT_GT;
	v->a[65219] = anon_sym_LT_AMP;
	small_parse_table_3261(v);
}

void	small_parse_table_3261(t_small_parse_table_array *v)
{
	v->a[65220] = anon_sym_GT_AMP;
	v->a[65221] = anon_sym_GT_PIPE;
	v->a[65222] = anon_sym_LT_AMP_DASH;
	v->a[65223] = anon_sym_GT_AMP_DASH;
	v->a[65224] = anon_sym_LT_LT;
	v->a[65225] = anon_sym_LT_LT_DASH;
	v->a[65226] = anon_sym_AMP;
	v->a[65227] = anon_sym_SEMI;
	v->a[65228] = 11;
	v->a[65229] = actions(3);
	v->a[65230] = 1;
	v->a[65231] = sym_comment;
	v->a[65232] = actions(680);
	v->a[65233] = 1;
	v->a[65234] = anon_sym_BQUOTE;
	v->a[65235] = actions(2009);
	v->a[65236] = 1;
	v->a[65237] = aux_sym_heredoc_redirect_token1;
	v->a[65238] = actions(2041);
	v->a[65239] = 1;
	small_parse_table_3262(v);
}

void	small_parse_table_3262(t_small_parse_table_array *v)
{
	v->a[65240] = sym_file_descriptor;
	v->a[65241] = state(871);
	v->a[65242] = 1;
	v->a[65243] = sym_terminator;
	v->a[65244] = actions(754);
	v->a[65245] = 2;
	v->a[65246] = anon_sym_LT_LT;
	v->a[65247] = anon_sym_LT_LT_DASH;
	v->a[65248] = actions(963);
	v->a[65249] = 2;
	v->a[65250] = anon_sym_AMP_AMP;
	v->a[65251] = anon_sym_PIPE_PIPE;
	v->a[65252] = actions(2039);
	v->a[65253] = 2;
	v->a[65254] = anon_sym_LT_AMP_DASH;
	v->a[65255] = anon_sym_GT_AMP_DASH;
	v->a[65256] = actions(750);
	v->a[65257] = 3;
	v->a[65258] = anon_sym_SEMI_SEMI;
	v->a[65259] = anon_sym_AMP;
	small_parse_table_3263(v);
}

void	small_parse_table_3263(t_small_parse_table_array *v)
{
	v->a[65260] = anon_sym_SEMI;
	v->a[65261] = state(1165);
	v->a[65262] = 3;
	v->a[65263] = sym_file_redirect;
	v->a[65264] = sym_heredoc_redirect;
	v->a[65265] = aux_sym_redirected_statement_repeat1;
	v->a[65266] = actions(2037);
	v->a[65267] = 6;
	v->a[65268] = anon_sym_LT;
	v->a[65269] = anon_sym_GT;
	v->a[65270] = anon_sym_GT_GT;
	v->a[65271] = anon_sym_LT_AMP;
	v->a[65272] = anon_sym_GT_AMP;
	v->a[65273] = anon_sym_GT_PIPE;
	v->a[65274] = 5;
	v->a[65275] = actions(3);
	v->a[65276] = 1;
	v->a[65277] = sym_comment;
	v->a[65278] = actions(2152);
	v->a[65279] = 1;
	small_parse_table_3264(v);
}

void	small_parse_table_3264(t_small_parse_table_array *v)
{
	v->a[65280] = sym_variable_name;
	v->a[65281] = state(1097);
	v->a[65282] = 2;
	v->a[65283] = sym_variable_assignment;
	v->a[65284] = aux_sym__variable_assignments_repeat1;
	v->a[65285] = actions(2148);
	v->a[65286] = 3;
	v->a[65287] = sym_file_descriptor;
	v->a[65288] = ts_builtin_sym_end;
	v->a[65289] = aux_sym_heredoc_redirect_token1;
	v->a[65290] = actions(2150);
	v->a[65291] = 16;
	v->a[65292] = anon_sym_PIPE;
	v->a[65293] = anon_sym_SEMI_SEMI;
	v->a[65294] = anon_sym_AMP_AMP;
	v->a[65295] = anon_sym_PIPE_PIPE;
	v->a[65296] = anon_sym_LT;
	v->a[65297] = anon_sym_GT;
	v->a[65298] = anon_sym_GT_GT;
	v->a[65299] = anon_sym_LT_AMP;
	small_parse_table_3265(v);
}

/* EOF small_parse_table_652.c */
