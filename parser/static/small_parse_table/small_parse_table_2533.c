/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2533.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_12665(t_small_parse_table_array *v)
{
	v->a[253300] = actions(4253);
	v->a[253301] = 2;
	v->a[253302] = anon_sym_PIPE;
	v->a[253303] = anon_sym_PIPE_AMP;
	v->a[253304] = actions(4692);
	v->a[253305] = 2;
	v->a[253306] = anon_sym_LT_LT;
	v->a[253307] = anon_sym_LT_LT_DASH;
	v->a[253308] = actions(5099);
	v->a[253309] = 2;
	v->a[253310] = anon_sym_PIPE_PIPE;
	v->a[253311] = anon_sym_AMP_AMP;
	v->a[253312] = actions(11556);
	v->a[253313] = 2;
	v->a[253314] = anon_sym_LT_AMP_DASH;
	v->a[253315] = anon_sym_GT_AMP_DASH;
	v->a[253316] = actions(5385);
	v->a[253317] = 3;
	v->a[253318] = anon_sym_SEMI;
	v->a[253319] = anon_sym_AMP;
	small_parse_table_12666(v);
}

void	small_parse_table_12666(t_small_parse_table_array *v)
{
	v->a[253320] = anon_sym_SEMI_SEMI;
	v->a[253321] = state(4986);
	v->a[253322] = 3;
	v->a[253323] = sym_file_redirect;
	v->a[253324] = sym_heredoc_redirect;
	v->a[253325] = aux_sym_redirected_statement_repeat1;
	v->a[253326] = actions(11554);
	v->a[253327] = 8;
	v->a[253328] = anon_sym_LT;
	v->a[253329] = anon_sym_GT;
	v->a[253330] = anon_sym_GT_GT;
	v->a[253331] = anon_sym_AMP_GT;
	v->a[253332] = anon_sym_AMP_GT_GT;
	v->a[253333] = anon_sym_LT_AMP;
	v->a[253334] = anon_sym_GT_AMP;
	v->a[253335] = anon_sym_GT_PIPE;
	v->a[253336] = 6;
	v->a[253337] = actions(3);
	v->a[253338] = 1;
	v->a[253339] = sym_comment;
	small_parse_table_12667(v);
}

void	small_parse_table_12667(t_small_parse_table_array *v)
{
	v->a[253340] = actions(11686);
	v->a[253341] = 1;
	v->a[253342] = sym_variable_name;
	v->a[253343] = state(6758);
	v->a[253344] = 1;
	v->a[253345] = sym_subscript;
	v->a[253346] = actions(11329);
	v->a[253347] = 2;
	v->a[253348] = sym_file_descriptor;
	v->a[253349] = aux_sym_heredoc_redirect_token1;
	v->a[253350] = state(4581);
	v->a[253351] = 2;
	v->a[253352] = sym_variable_assignment;
	v->a[253353] = aux_sym_variable_assignments_repeat1;
	v->a[253354] = actions(11327);
	v->a[253355] = 20;
	v->a[253356] = anon_sym_SEMI;
	v->a[253357] = anon_sym_PIPE_PIPE;
	v->a[253358] = anon_sym_AMP_AMP;
	v->a[253359] = anon_sym_PIPE;
	small_parse_table_12668(v);
}

void	small_parse_table_12668(t_small_parse_table_array *v)
{
	v->a[253360] = anon_sym_AMP;
	v->a[253361] = anon_sym_LT;
	v->a[253362] = anon_sym_GT;
	v->a[253363] = anon_sym_LT_LT;
	v->a[253364] = anon_sym_GT_GT;
	v->a[253365] = anon_sym_SEMI_SEMI;
	v->a[253366] = anon_sym_PIPE_AMP;
	v->a[253367] = anon_sym_AMP_GT;
	v->a[253368] = anon_sym_AMP_GT_GT;
	v->a[253369] = anon_sym_LT_AMP;
	v->a[253370] = anon_sym_GT_AMP;
	v->a[253371] = anon_sym_GT_PIPE;
	v->a[253372] = anon_sym_LT_AMP_DASH;
	v->a[253373] = anon_sym_GT_AMP_DASH;
	v->a[253374] = anon_sym_LT_LT_DASH;
	v->a[253375] = anon_sym_BQUOTE;
	v->a[253376] = 3;
	v->a[253377] = actions(3);
	v->a[253378] = 1;
	v->a[253379] = sym_comment;
	small_parse_table_12669(v);
}

void	small_parse_table_12669(t_small_parse_table_array *v)
{
	v->a[253380] = actions(1298);
	v->a[253381] = 4;
	v->a[253382] = sym_file_descriptor;
	v->a[253383] = sym__concat;
	v->a[253384] = ts_builtin_sym_end;
	v->a[253385] = aux_sym_heredoc_redirect_token1;
	v->a[253386] = actions(1296);
	v->a[253387] = 22;
	v->a[253388] = anon_sym_SEMI;
	v->a[253389] = anon_sym_PIPE_PIPE;
	v->a[253390] = anon_sym_AMP_AMP;
	v->a[253391] = anon_sym_PIPE;
	v->a[253392] = anon_sym_AMP;
	v->a[253393] = anon_sym_LT;
	v->a[253394] = anon_sym_GT;
	v->a[253395] = anon_sym_LT_LT;
	v->a[253396] = anon_sym_GT_GT;
	v->a[253397] = anon_sym_RPAREN;
	v->a[253398] = anon_sym_SEMI_SEMI;
	v->a[253399] = anon_sym_PIPE_AMP;
	small_parse_table_12670(v);
}

/* EOF small_parse_table_2533.c */
