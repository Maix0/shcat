/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_703.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3515(t_small_parse_table_array *v)
{
	v->a[70300] = 13;
	v->a[70301] = actions(3);
	v->a[70302] = 1;
	v->a[70303] = sym_comment;
	v->a[70304] = actions(807);
	v->a[70305] = 1;
	v->a[70306] = anon_sym_PIPE;
	v->a[70307] = actions(951);
	v->a[70308] = 1;
	v->a[70309] = ts_builtin_sym_end;
	v->a[70310] = actions(2075);
	v->a[70311] = 1;
	v->a[70312] = sym_file_descriptor;
	v->a[70313] = actions(2353);
	v->a[70314] = 1;
	v->a[70315] = anon_sym_SEMI_SEMI;
	v->a[70316] = actions(2355);
	v->a[70317] = 1;
	v->a[70318] = aux_sym_heredoc_redirect_token1;
	v->a[70319] = actions(2357);
	small_parse_table_3516(v);
}

void	small_parse_table_3516(t_small_parse_table_array *v)
{
	v->a[70320] = 1;
	v->a[70321] = anon_sym_AMP;
	v->a[70322] = actions(2359);
	v->a[70323] = 1;
	v->a[70324] = anon_sym_SEMI;
	v->a[70325] = actions(861);
	v->a[70326] = 2;
	v->a[70327] = anon_sym_LT_LT;
	v->a[70328] = anon_sym_LT_LT_DASH;
	v->a[70329] = actions(934);
	v->a[70330] = 2;
	v->a[70331] = anon_sym_AMP_AMP;
	v->a[70332] = anon_sym_PIPE_PIPE;
	v->a[70333] = actions(2067);
	v->a[70334] = 2;
	v->a[70335] = anon_sym_LT_AMP_DASH;
	v->a[70336] = anon_sym_GT_AMP_DASH;
	v->a[70337] = state(1289);
	v->a[70338] = 3;
	v->a[70339] = sym_file_redirect;
	small_parse_table_3517(v);
}

void	small_parse_table_3517(t_small_parse_table_array *v)
{
	v->a[70340] = sym_heredoc_redirect;
	v->a[70341] = aux_sym_redirected_statement_repeat1;
	v->a[70342] = actions(2065);
	v->a[70343] = 8;
	v->a[70344] = anon_sym_LT;
	v->a[70345] = anon_sym_GT;
	v->a[70346] = anon_sym_GT_GT;
	v->a[70347] = anon_sym_AMP_GT;
	v->a[70348] = anon_sym_AMP_GT_GT;
	v->a[70349] = anon_sym_LT_AMP;
	v->a[70350] = anon_sym_GT_AMP;
	v->a[70351] = anon_sym_GT_PIPE;
	v->a[70352] = 13;
	v->a[70353] = actions(3);
	v->a[70354] = 1;
	v->a[70355] = sym_comment;
	v->a[70356] = actions(807);
	v->a[70357] = 1;
	v->a[70358] = anon_sym_PIPE;
	v->a[70359] = actions(951);
	small_parse_table_3518(v);
}

void	small_parse_table_3518(t_small_parse_table_array *v)
{
	v->a[70360] = 1;
	v->a[70361] = ts_builtin_sym_end;
	v->a[70362] = actions(2075);
	v->a[70363] = 1;
	v->a[70364] = sym_file_descriptor;
	v->a[70365] = actions(2361);
	v->a[70366] = 1;
	v->a[70367] = anon_sym_SEMI_SEMI;
	v->a[70368] = actions(2363);
	v->a[70369] = 1;
	v->a[70370] = aux_sym_heredoc_redirect_token1;
	v->a[70371] = actions(2365);
	v->a[70372] = 1;
	v->a[70373] = anon_sym_AMP;
	v->a[70374] = actions(2367);
	v->a[70375] = 1;
	v->a[70376] = anon_sym_SEMI;
	v->a[70377] = actions(861);
	v->a[70378] = 2;
	v->a[70379] = anon_sym_LT_LT;
	small_parse_table_3519(v);
}

void	small_parse_table_3519(t_small_parse_table_array *v)
{
	v->a[70380] = anon_sym_LT_LT_DASH;
	v->a[70381] = actions(934);
	v->a[70382] = 2;
	v->a[70383] = anon_sym_AMP_AMP;
	v->a[70384] = anon_sym_PIPE_PIPE;
	v->a[70385] = actions(2067);
	v->a[70386] = 2;
	v->a[70387] = anon_sym_LT_AMP_DASH;
	v->a[70388] = anon_sym_GT_AMP_DASH;
	v->a[70389] = state(1289);
	v->a[70390] = 3;
	v->a[70391] = sym_file_redirect;
	v->a[70392] = sym_heredoc_redirect;
	v->a[70393] = aux_sym_redirected_statement_repeat1;
	v->a[70394] = actions(2065);
	v->a[70395] = 8;
	v->a[70396] = anon_sym_LT;
	v->a[70397] = anon_sym_GT;
	v->a[70398] = anon_sym_GT_GT;
	v->a[70399] = anon_sym_AMP_GT;
	small_parse_table_3520(v);
}

/* EOF small_parse_table_703.c */
