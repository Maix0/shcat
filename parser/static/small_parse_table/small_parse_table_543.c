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
	v->a[54300] = 1;
	v->a[54301] = anon_sym_BQUOTE;
	v->a[54302] = actions(1888);
	v->a[54303] = 1;
	v->a[54304] = aux_sym_heredoc_redirect_token1;
	v->a[54305] = actions(1890);
	v->a[54306] = 1;
	v->a[54307] = sym_file_descriptor;
	v->a[54308] = state(804);
	v->a[54309] = 1;
	v->a[54310] = sym_terminator;
	v->a[54311] = actions(786);
	v->a[54312] = 2;
	v->a[54313] = anon_sym_SEMI_SEMI;
	v->a[54314] = anon_sym_SEMI;
	v->a[54315] = actions(790);
	v->a[54316] = 2;
	v->a[54317] = anon_sym_LT_LT;
	v->a[54318] = anon_sym_LT_LT_DASH;
	v->a[54319] = actions(1059);
	small_parse_table_2716(v);
}

void	small_parse_table_2716(t_small_parse_table_array *v)
{
	v->a[54320] = 2;
	v->a[54321] = anon_sym_AMP_AMP;
	v->a[54322] = anon_sym_PIPE_PIPE;
	v->a[54323] = state(1062);
	v->a[54324] = 3;
	v->a[54325] = sym_file_redirect;
	v->a[54326] = sym_heredoc_redirect;
	v->a[54327] = aux_sym_redirected_statement_repeat1;
	v->a[54328] = actions(1886);
	v->a[54329] = 7;
	v->a[54330] = anon_sym_LT;
	v->a[54331] = anon_sym_GT;
	v->a[54332] = anon_sym_GT_GT;
	v->a[54333] = anon_sym_LT_AMP;
	v->a[54334] = anon_sym_GT_AMP;
	v->a[54335] = anon_sym_GT_PIPE;
	v->a[54336] = anon_sym_LT_GT;
	v->a[54337] = 11;
	v->a[54338] = actions(3);
	v->a[54339] = 1;
	small_parse_table_2717(v);
}

void	small_parse_table_2717(t_small_parse_table_array *v)
{
	v->a[54340] = sym_comment;
	v->a[54341] = actions(782);
	v->a[54342] = 1;
	v->a[54343] = anon_sym_PIPE;
	v->a[54344] = actions(784);
	v->a[54345] = 1;
	v->a[54346] = anon_sym_BQUOTE;
	v->a[54347] = actions(1888);
	v->a[54348] = 1;
	v->a[54349] = aux_sym_heredoc_redirect_token1;
	v->a[54350] = actions(1890);
	v->a[54351] = 1;
	v->a[54352] = sym_file_descriptor;
	v->a[54353] = state(803);
	v->a[54354] = 1;
	v->a[54355] = sym_terminator;
	v->a[54356] = actions(786);
	v->a[54357] = 2;
	v->a[54358] = anon_sym_SEMI_SEMI;
	v->a[54359] = anon_sym_SEMI;
	small_parse_table_2718(v);
}

void	small_parse_table_2718(t_small_parse_table_array *v)
{
	v->a[54360] = actions(790);
	v->a[54361] = 2;
	v->a[54362] = anon_sym_LT_LT;
	v->a[54363] = anon_sym_LT_LT_DASH;
	v->a[54364] = actions(1059);
	v->a[54365] = 2;
	v->a[54366] = anon_sym_AMP_AMP;
	v->a[54367] = anon_sym_PIPE_PIPE;
	v->a[54368] = state(1062);
	v->a[54369] = 3;
	v->a[54370] = sym_file_redirect;
	v->a[54371] = sym_heredoc_redirect;
	v->a[54372] = aux_sym_redirected_statement_repeat1;
	v->a[54373] = actions(1886);
	v->a[54374] = 7;
	v->a[54375] = anon_sym_LT;
	v->a[54376] = anon_sym_GT;
	v->a[54377] = anon_sym_GT_GT;
	v->a[54378] = anon_sym_LT_AMP;
	v->a[54379] = anon_sym_GT_AMP;
	small_parse_table_2719(v);
}

void	small_parse_table_2719(t_small_parse_table_array *v)
{
	v->a[54380] = anon_sym_GT_PIPE;
	v->a[54381] = anon_sym_LT_GT;
	v->a[54382] = 6;
	v->a[54383] = actions(3);
	v->a[54384] = 1;
	v->a[54385] = sym_comment;
	v->a[54386] = actions(1896);
	v->a[54387] = 1;
	v->a[54388] = aux_sym_concatenation_token1;
	v->a[54389] = actions(1898);
	v->a[54390] = 1;
	v->a[54391] = sym__concat;
	v->a[54392] = state(986);
	v->a[54393] = 1;
	v->a[54394] = aux_sym_concatenation_repeat1;
	v->a[54395] = actions(1200);
	v->a[54396] = 3;
	v->a[54397] = sym_file_descriptor;
	v->a[54398] = sym_variable_name;
	v->a[54399] = aux_sym_heredoc_redirect_token1;
	small_parse_table_2720(v);
}

/* EOF small_parse_table_543.c */
