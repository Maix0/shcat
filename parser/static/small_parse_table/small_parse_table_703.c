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
	v->a[70300] = 1;
	v->a[70301] = ts_builtin_sym_end;
	v->a[70302] = actions(2277);
	v->a[70303] = 1;
	v->a[70304] = sym_file_descriptor;
	v->a[70305] = actions(2324);
	v->a[70306] = 1;
	v->a[70307] = aux_sym_heredoc_redirect_token1;
	v->a[70308] = actions(1060);
	v->a[70309] = 2;
	v->a[70310] = anon_sym_AMP_AMP;
	v->a[70311] = anon_sym_PIPE_PIPE;
	v->a[70312] = actions(1062);
	v->a[70313] = 2;
	v->a[70314] = anon_sym_LT_LT;
	v->a[70315] = anon_sym_LT_LT_DASH;
	v->a[70316] = actions(2273);
	v->a[70317] = 2;
	v->a[70318] = anon_sym_LT_AMP_DASH;
	v->a[70319] = anon_sym_GT_AMP_DASH;
	small_parse_table_3516(v);
}

void	small_parse_table_3516(t_small_parse_table_array *v)
{
	v->a[70320] = actions(1069);
	v->a[70321] = 3;
	v->a[70322] = anon_sym_SEMI_SEMI;
	v->a[70323] = anon_sym_AMP;
	v->a[70324] = anon_sym_SEMI;
	v->a[70325] = state(1043);
	v->a[70326] = 3;
	v->a[70327] = sym_file_redirect;
	v->a[70328] = sym_heredoc_redirect;
	v->a[70329] = aux_sym_redirected_statement_repeat1;
	v->a[70330] = actions(2271);
	v->a[70331] = 8;
	v->a[70332] = anon_sym_LT;
	v->a[70333] = anon_sym_GT;
	v->a[70334] = anon_sym_GT_GT;
	v->a[70335] = anon_sym_AMP_GT;
	v->a[70336] = anon_sym_AMP_GT_GT;
	v->a[70337] = anon_sym_LT_AMP;
	v->a[70338] = anon_sym_GT_AMP;
	v->a[70339] = anon_sym_GT_PIPE;
	small_parse_table_3517(v);
}

void	small_parse_table_3517(t_small_parse_table_array *v)
{
	v->a[70340] = 3;
	v->a[70341] = actions(3);
	v->a[70342] = 1;
	v->a[70343] = sym_comment;
	v->a[70344] = actions(2610);
	v->a[70345] = 3;
	v->a[70346] = sym_file_descriptor;
	v->a[70347] = ts_builtin_sym_end;
	v->a[70348] = aux_sym_heredoc_redirect_token1;
	v->a[70349] = actions(2612);
	v->a[70350] = 20;
	v->a[70351] = anon_sym_PIPE;
	v->a[70352] = anon_sym_RPAREN;
	v->a[70353] = anon_sym_SEMI_SEMI;
	v->a[70354] = anon_sym_AMP_AMP;
	v->a[70355] = anon_sym_PIPE_PIPE;
	v->a[70356] = anon_sym_LT;
	v->a[70357] = anon_sym_GT;
	v->a[70358] = anon_sym_GT_GT;
	v->a[70359] = anon_sym_AMP_GT;
	small_parse_table_3518(v);
}

void	small_parse_table_3518(t_small_parse_table_array *v)
{
	v->a[70360] = anon_sym_AMP_GT_GT;
	v->a[70361] = anon_sym_LT_AMP;
	v->a[70362] = anon_sym_GT_AMP;
	v->a[70363] = anon_sym_GT_PIPE;
	v->a[70364] = anon_sym_LT_AMP_DASH;
	v->a[70365] = anon_sym_GT_AMP_DASH;
	v->a[70366] = anon_sym_LT_LT;
	v->a[70367] = anon_sym_LT_LT_DASH;
	v->a[70368] = anon_sym_AMP;
	v->a[70369] = anon_sym_BQUOTE;
	v->a[70370] = anon_sym_SEMI;
	v->a[70371] = 5;
	v->a[70372] = actions(3);
	v->a[70373] = 1;
	v->a[70374] = sym_comment;
	v->a[70375] = actions(2614);
	v->a[70376] = 1;
	v->a[70377] = sym_variable_name;
	v->a[70378] = actions(2256);
	v->a[70379] = 2;
	small_parse_table_3519(v);
}

void	small_parse_table_3519(t_small_parse_table_array *v)
{
	v->a[70380] = sym_file_descriptor;
	v->a[70381] = aux_sym_heredoc_redirect_token1;
	v->a[70382] = state(1203);
	v->a[70383] = 2;
	v->a[70384] = sym_variable_assignment;
	v->a[70385] = aux_sym_variable_assignments_repeat1;
	v->a[70386] = actions(2254);
	v->a[70387] = 18;
	v->a[70388] = anon_sym_PIPE;
	v->a[70389] = anon_sym_SEMI_SEMI;
	v->a[70390] = anon_sym_AMP_AMP;
	v->a[70391] = anon_sym_PIPE_PIPE;
	v->a[70392] = anon_sym_LT;
	v->a[70393] = anon_sym_GT;
	v->a[70394] = anon_sym_GT_GT;
	v->a[70395] = anon_sym_AMP_GT;
	v->a[70396] = anon_sym_AMP_GT_GT;
	v->a[70397] = anon_sym_LT_AMP;
	v->a[70398] = anon_sym_GT_AMP;
	v->a[70399] = anon_sym_GT_PIPE;
	small_parse_table_3520(v);
}

/* EOF small_parse_table_703.c */
