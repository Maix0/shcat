/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_543.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2715(t_small_parse_table_array *v)
{
	v->a[54300] = actions(3);
	v->a[54301] = 1;
	v->a[54302] = sym_comment;
	v->a[54303] = actions(692);
	v->a[54304] = 1;
	v->a[54305] = anon_sym_PIPE;
	v->a[54306] = actions(724);
	v->a[54307] = 1;
	v->a[54308] = anon_sym_BQUOTE;
	v->a[54309] = actions(1857);
	v->a[54310] = 1;
	v->a[54311] = aux_sym_heredoc_redirect_token1;
	v->a[54312] = actions(1871);
	v->a[54313] = 1;
	v->a[54314] = sym_file_descriptor;
	v->a[54315] = state(829);
	v->a[54316] = 1;
	v->a[54317] = sym_terminator;
	v->a[54318] = actions(700);
	v->a[54319] = 2;
	small_parse_table_2716(v);
}

void	small_parse_table_2716(t_small_parse_table_array *v)
{
	v->a[54320] = anon_sym_LT_LT;
	v->a[54321] = anon_sym_LT_LT_DASH;
	v->a[54322] = actions(936);
	v->a[54323] = 2;
	v->a[54324] = anon_sym_AMP_AMP;
	v->a[54325] = anon_sym_PIPE_PIPE;
	v->a[54326] = actions(696);
	v->a[54327] = 3;
	v->a[54328] = anon_sym_SEMI_SEMI;
	v->a[54329] = anon_sym_AMP;
	v->a[54330] = anon_sym_SEMI;
	v->a[54331] = state(1034);
	v->a[54332] = 3;
	v->a[54333] = sym_file_redirect;
	v->a[54334] = sym_heredoc_redirect;
	v->a[54335] = aux_sym_redirected_statement_repeat1;
	v->a[54336] = actions(1869);
	v->a[54337] = 7;
	v->a[54338] = anon_sym_LT;
	v->a[54339] = anon_sym_GT;
	small_parse_table_2717(v);
}

void	small_parse_table_2717(t_small_parse_table_array *v)
{
	v->a[54340] = anon_sym_GT_GT;
	v->a[54341] = anon_sym_LT_AMP;
	v->a[54342] = anon_sym_GT_AMP;
	v->a[54343] = anon_sym_GT_PIPE;
	v->a[54344] = anon_sym_LT_GT;
	v->a[54345] = 11;
	v->a[54346] = actions(3);
	v->a[54347] = 1;
	v->a[54348] = sym_comment;
	v->a[54349] = actions(692);
	v->a[54350] = 1;
	v->a[54351] = anon_sym_PIPE;
	v->a[54352] = actions(724);
	v->a[54353] = 1;
	v->a[54354] = anon_sym_BQUOTE;
	v->a[54355] = actions(1857);
	v->a[54356] = 1;
	v->a[54357] = aux_sym_heredoc_redirect_token1;
	v->a[54358] = actions(1871);
	v->a[54359] = 1;
	small_parse_table_2718(v);
}

void	small_parse_table_2718(t_small_parse_table_array *v)
{
	v->a[54360] = sym_file_descriptor;
	v->a[54361] = state(823);
	v->a[54362] = 1;
	v->a[54363] = sym_terminator;
	v->a[54364] = actions(700);
	v->a[54365] = 2;
	v->a[54366] = anon_sym_LT_LT;
	v->a[54367] = anon_sym_LT_LT_DASH;
	v->a[54368] = actions(936);
	v->a[54369] = 2;
	v->a[54370] = anon_sym_AMP_AMP;
	v->a[54371] = anon_sym_PIPE_PIPE;
	v->a[54372] = actions(696);
	v->a[54373] = 3;
	v->a[54374] = anon_sym_SEMI_SEMI;
	v->a[54375] = anon_sym_AMP;
	v->a[54376] = anon_sym_SEMI;
	v->a[54377] = state(1034);
	v->a[54378] = 3;
	v->a[54379] = sym_file_redirect;
	small_parse_table_2719(v);
}

void	small_parse_table_2719(t_small_parse_table_array *v)
{
	v->a[54380] = sym_heredoc_redirect;
	v->a[54381] = aux_sym_redirected_statement_repeat1;
	v->a[54382] = actions(1869);
	v->a[54383] = 7;
	v->a[54384] = anon_sym_LT;
	v->a[54385] = anon_sym_GT;
	v->a[54386] = anon_sym_GT_GT;
	v->a[54387] = anon_sym_LT_AMP;
	v->a[54388] = anon_sym_GT_AMP;
	v->a[54389] = anon_sym_GT_PIPE;
	v->a[54390] = anon_sym_LT_GT;
	v->a[54391] = 11;
	v->a[54392] = actions(3);
	v->a[54393] = 1;
	v->a[54394] = sym_comment;
	v->a[54395] = actions(692);
	v->a[54396] = 1;
	v->a[54397] = anon_sym_PIPE;
	v->a[54398] = actions(724);
	v->a[54399] = 1;
	small_parse_table_2720(v);
}

/* EOF small_parse_table_543.c */
