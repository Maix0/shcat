/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_542.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2710(t_small_parse_table_array *v)
{
	v->a[54200] = anon_sym_LT;
	v->a[54201] = anon_sym_GT;
	v->a[54202] = anon_sym_GT_GT;
	v->a[54203] = anon_sym_LT_AMP;
	v->a[54204] = anon_sym_GT_AMP;
	v->a[54205] = anon_sym_GT_PIPE;
	v->a[54206] = anon_sym_LT_GT;
	v->a[54207] = 11;
	v->a[54208] = actions(3);
	v->a[54209] = 1;
	v->a[54210] = sym_comment;
	v->a[54211] = actions(692);
	v->a[54212] = 1;
	v->a[54213] = anon_sym_PIPE;
	v->a[54214] = actions(724);
	v->a[54215] = 1;
	v->a[54216] = anon_sym_BQUOTE;
	v->a[54217] = actions(1857);
	v->a[54218] = 1;
	v->a[54219] = aux_sym_heredoc_redirect_token1;
	small_parse_table_2711(v);
}

void	small_parse_table_2711(t_small_parse_table_array *v)
{
	v->a[54220] = actions(1871);
	v->a[54221] = 1;
	v->a[54222] = sym_file_descriptor;
	v->a[54223] = state(812);
	v->a[54224] = 1;
	v->a[54225] = sym_terminator;
	v->a[54226] = actions(700);
	v->a[54227] = 2;
	v->a[54228] = anon_sym_LT_LT;
	v->a[54229] = anon_sym_LT_LT_DASH;
	v->a[54230] = actions(936);
	v->a[54231] = 2;
	v->a[54232] = anon_sym_AMP_AMP;
	v->a[54233] = anon_sym_PIPE_PIPE;
	v->a[54234] = actions(696);
	v->a[54235] = 3;
	v->a[54236] = anon_sym_SEMI_SEMI;
	v->a[54237] = anon_sym_AMP;
	v->a[54238] = anon_sym_SEMI;
	v->a[54239] = state(1034);
	small_parse_table_2712(v);
}

void	small_parse_table_2712(t_small_parse_table_array *v)
{
	v->a[54240] = 3;
	v->a[54241] = sym_file_redirect;
	v->a[54242] = sym_heredoc_redirect;
	v->a[54243] = aux_sym_redirected_statement_repeat1;
	v->a[54244] = actions(1869);
	v->a[54245] = 7;
	v->a[54246] = anon_sym_LT;
	v->a[54247] = anon_sym_GT;
	v->a[54248] = anon_sym_GT_GT;
	v->a[54249] = anon_sym_LT_AMP;
	v->a[54250] = anon_sym_GT_AMP;
	v->a[54251] = anon_sym_GT_PIPE;
	v->a[54252] = anon_sym_LT_GT;
	v->a[54253] = 11;
	v->a[54254] = actions(3);
	v->a[54255] = 1;
	v->a[54256] = sym_comment;
	v->a[54257] = actions(692);
	v->a[54258] = 1;
	v->a[54259] = anon_sym_PIPE;
	small_parse_table_2713(v);
}

void	small_parse_table_2713(t_small_parse_table_array *v)
{
	v->a[54260] = actions(862);
	v->a[54261] = 1;
	v->a[54262] = ts_builtin_sym_end;
	v->a[54263] = actions(1863);
	v->a[54264] = 1;
	v->a[54265] = aux_sym_heredoc_redirect_token1;
	v->a[54266] = actions(1865);
	v->a[54267] = 1;
	v->a[54268] = sym_file_descriptor;
	v->a[54269] = state(744);
	v->a[54270] = 1;
	v->a[54271] = sym_terminator;
	v->a[54272] = actions(700);
	v->a[54273] = 2;
	v->a[54274] = anon_sym_LT_LT;
	v->a[54275] = anon_sym_LT_LT_DASH;
	v->a[54276] = actions(719);
	v->a[54277] = 2;
	v->a[54278] = anon_sym_AMP_AMP;
	v->a[54279] = anon_sym_PIPE_PIPE;
	small_parse_table_2714(v);
}

void	small_parse_table_2714(t_small_parse_table_array *v)
{
	v->a[54280] = actions(717);
	v->a[54281] = 3;
	v->a[54282] = anon_sym_SEMI_SEMI;
	v->a[54283] = anon_sym_AMP;
	v->a[54284] = anon_sym_SEMI;
	v->a[54285] = state(1086);
	v->a[54286] = 3;
	v->a[54287] = sym_file_redirect;
	v->a[54288] = sym_heredoc_redirect;
	v->a[54289] = aux_sym_redirected_statement_repeat1;
	v->a[54290] = actions(1861);
	v->a[54291] = 7;
	v->a[54292] = anon_sym_LT;
	v->a[54293] = anon_sym_GT;
	v->a[54294] = anon_sym_GT_GT;
	v->a[54295] = anon_sym_LT_AMP;
	v->a[54296] = anon_sym_GT_AMP;
	v->a[54297] = anon_sym_GT_PIPE;
	v->a[54298] = anon_sym_LT_GT;
	v->a[54299] = 11;
	small_parse_table_2715(v);
}

/* EOF small_parse_table_542.c */
