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
	v->a[54200] = anon_sym_BQUOTE;
	v->a[54201] = sym_word;
	v->a[54202] = 11;
	v->a[54203] = actions(3);
	v->a[54204] = 1;
	v->a[54205] = sym_comment;
	v->a[54206] = actions(782);
	v->a[54207] = 1;
	v->a[54208] = anon_sym_PIPE;
	v->a[54209] = actions(784);
	v->a[54210] = 1;
	v->a[54211] = anon_sym_BQUOTE;
	v->a[54212] = actions(1888);
	v->a[54213] = 1;
	v->a[54214] = aux_sym_heredoc_redirect_token1;
	v->a[54215] = actions(1890);
	v->a[54216] = 1;
	v->a[54217] = sym_file_descriptor;
	v->a[54218] = state(827);
	v->a[54219] = 1;
	small_parse_table_2711(v);
}

void	small_parse_table_2711(t_small_parse_table_array *v)
{
	v->a[54220] = sym_terminator;
	v->a[54221] = actions(786);
	v->a[54222] = 2;
	v->a[54223] = anon_sym_SEMI_SEMI;
	v->a[54224] = anon_sym_SEMI;
	v->a[54225] = actions(790);
	v->a[54226] = 2;
	v->a[54227] = anon_sym_LT_LT;
	v->a[54228] = anon_sym_LT_LT_DASH;
	v->a[54229] = actions(1059);
	v->a[54230] = 2;
	v->a[54231] = anon_sym_AMP_AMP;
	v->a[54232] = anon_sym_PIPE_PIPE;
	v->a[54233] = state(1062);
	v->a[54234] = 3;
	v->a[54235] = sym_file_redirect;
	v->a[54236] = sym_heredoc_redirect;
	v->a[54237] = aux_sym_redirected_statement_repeat1;
	v->a[54238] = actions(1886);
	v->a[54239] = 7;
	small_parse_table_2712(v);
}

void	small_parse_table_2712(t_small_parse_table_array *v)
{
	v->a[54240] = anon_sym_LT;
	v->a[54241] = anon_sym_GT;
	v->a[54242] = anon_sym_GT_GT;
	v->a[54243] = anon_sym_LT_AMP;
	v->a[54244] = anon_sym_GT_AMP;
	v->a[54245] = anon_sym_GT_PIPE;
	v->a[54246] = anon_sym_LT_GT;
	v->a[54247] = 11;
	v->a[54248] = actions(3);
	v->a[54249] = 1;
	v->a[54250] = sym_comment;
	v->a[54251] = actions(782);
	v->a[54252] = 1;
	v->a[54253] = anon_sym_PIPE;
	v->a[54254] = actions(784);
	v->a[54255] = 1;
	v->a[54256] = anon_sym_BQUOTE;
	v->a[54257] = actions(1888);
	v->a[54258] = 1;
	v->a[54259] = aux_sym_heredoc_redirect_token1;
	small_parse_table_2713(v);
}

void	small_parse_table_2713(t_small_parse_table_array *v)
{
	v->a[54260] = actions(1890);
	v->a[54261] = 1;
	v->a[54262] = sym_file_descriptor;
	v->a[54263] = state(805);
	v->a[54264] = 1;
	v->a[54265] = sym_terminator;
	v->a[54266] = actions(786);
	v->a[54267] = 2;
	v->a[54268] = anon_sym_SEMI_SEMI;
	v->a[54269] = anon_sym_SEMI;
	v->a[54270] = actions(790);
	v->a[54271] = 2;
	v->a[54272] = anon_sym_LT_LT;
	v->a[54273] = anon_sym_LT_LT_DASH;
	v->a[54274] = actions(1059);
	v->a[54275] = 2;
	v->a[54276] = anon_sym_AMP_AMP;
	v->a[54277] = anon_sym_PIPE_PIPE;
	v->a[54278] = state(1062);
	v->a[54279] = 3;
	small_parse_table_2714(v);
}

void	small_parse_table_2714(t_small_parse_table_array *v)
{
	v->a[54280] = sym_file_redirect;
	v->a[54281] = sym_heredoc_redirect;
	v->a[54282] = aux_sym_redirected_statement_repeat1;
	v->a[54283] = actions(1886);
	v->a[54284] = 7;
	v->a[54285] = anon_sym_LT;
	v->a[54286] = anon_sym_GT;
	v->a[54287] = anon_sym_GT_GT;
	v->a[54288] = anon_sym_LT_AMP;
	v->a[54289] = anon_sym_GT_AMP;
	v->a[54290] = anon_sym_GT_PIPE;
	v->a[54291] = anon_sym_LT_GT;
	v->a[54292] = 11;
	v->a[54293] = actions(3);
	v->a[54294] = 1;
	v->a[54295] = sym_comment;
	v->a[54296] = actions(782);
	v->a[54297] = 1;
	v->a[54298] = anon_sym_PIPE;
	v->a[54299] = actions(784);
	small_parse_table_2715(v);
}

/* EOF small_parse_table_542.c */
