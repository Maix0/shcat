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
	v->a[54300] = actions(2704);
	v->a[54301] = 3;
	v->a[54302] = anon_sym_STAR;
	v->a[54303] = anon_sym_SLASH;
	v->a[54304] = anon_sym_PERCENT;
	v->a[54305] = 6;
	v->a[54306] = actions(1436);
	v->a[54307] = 1;
	v->a[54308] = sym_comment;
	v->a[54309] = actions(2758);
	v->a[54310] = 1;
	v->a[54311] = anon_sym_GT_GT;
	v->a[54312] = actions(2760);
	v->a[54313] = 1;
	v->a[54314] = anon_sym_LT_LT;
	v->a[54315] = actions(1868);
	v->a[54316] = 2;
	v->a[54317] = anon_sym_LT;
	v->a[54318] = anon_sym_GT;
	v->a[54319] = actions(2756);
	small_parse_table_2716(v);
}

void	small_parse_table_2716(t_small_parse_table_array *v)
{
	v->a[54320] = 2;
	v->a[54321] = anon_sym_AMP_AMP;
	v->a[54322] = anon_sym_PIPE_PIPE;
	v->a[54323] = state(916);
	v->a[54324] = 3;
	v->a[54325] = sym_file_redirect;
	v->a[54326] = sym_heredoc_redirect;
	v->a[54327] = aux_sym_redirected_statement_repeat1;
	v->a[54328] = 6;
	v->a[54329] = actions(1436);
	v->a[54330] = 1;
	v->a[54331] = sym_comment;
	v->a[54332] = actions(2754);
	v->a[54333] = 1;
	v->a[54334] = anon_sym_QMARK;
	v->a[54335] = actions(2762);
	v->a[54336] = 1;
	v->a[54337] = anon_sym_RPAREN_RPAREN;
	v->a[54338] = actions(2702);
	v->a[54339] = 2;
	small_parse_table_2717(v);
}

void	small_parse_table_2717(t_small_parse_table_array *v)
{
	v->a[54340] = anon_sym_PLUS;
	v->a[54341] = anon_sym_DASH;
	v->a[54342] = actions(2706);
	v->a[54343] = 2;
	v->a[54344] = anon_sym_PLUS_PLUS;
	v->a[54345] = anon_sym_DASH_DASH;
	v->a[54346] = actions(2704);
	v->a[54347] = 3;
	v->a[54348] = anon_sym_STAR;
	v->a[54349] = anon_sym_SLASH;
	v->a[54350] = anon_sym_PERCENT;
	v->a[54351] = 6;
	v->a[54352] = actions(1436);
	v->a[54353] = 1;
	v->a[54354] = sym_comment;
	v->a[54355] = actions(2748);
	v->a[54356] = 1;
	v->a[54357] = anon_sym_GT_GT;
	v->a[54358] = actions(2750);
	v->a[54359] = 1;
	small_parse_table_2718(v);
}

void	small_parse_table_2718(t_small_parse_table_array *v)
{
	v->a[54360] = anon_sym_LT_LT;
	v->a[54361] = actions(2746);
	v->a[54362] = 2;
	v->a[54363] = anon_sym_LT;
	v->a[54364] = anon_sym_GT;
	v->a[54365] = actions(2764);
	v->a[54366] = 2;
	v->a[54367] = anon_sym_AMP_AMP;
	v->a[54368] = anon_sym_PIPE_PIPE;
	v->a[54369] = state(1319);
	v->a[54370] = 3;
	v->a[54371] = sym_file_redirect;
	v->a[54372] = sym_heredoc_redirect;
	v->a[54373] = aux_sym_redirected_statement_repeat1;
	v->a[54374] = 3;
	v->a[54375] = actions(1436);
	v->a[54376] = 1;
	v->a[54377] = sym_comment;
	v->a[54378] = actions(2672);
	v->a[54379] = 2;
	small_parse_table_2719(v);
}

void	small_parse_table_2719(t_small_parse_table_array *v)
{
	v->a[54380] = anon_sym_PLUS;
	v->a[54381] = anon_sym_DASH;
	v->a[54382] = actions(2670);
	v->a[54383] = 7;
	v->a[54384] = anon_sym_RPAREN;
	v->a[54385] = anon_sym_STAR;
	v->a[54386] = anon_sym_SLASH;
	v->a[54387] = anon_sym_PERCENT;
	v->a[54388] = anon_sym_QMARK;
	v->a[54389] = anon_sym_PLUS_PLUS;
	v->a[54390] = anon_sym_DASH_DASH;
	v->a[54391] = 6;
	v->a[54392] = actions(1436);
	v->a[54393] = 1;
	v->a[54394] = sym_comment;
	v->a[54395] = actions(2766);
	v->a[54396] = 1;
	v->a[54397] = anon_sym_RPAREN;
	v->a[54398] = actions(2772);
	v->a[54399] = 1;
	small_parse_table_2720(v);
}

/* EOF small_parse_table_543.c */
