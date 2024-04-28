/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2423.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_12115(t_small_parse_table_array *v)
{
	v->a[242300] = sym_comment;
	v->a[242301] = actions(11431);
	v->a[242302] = 1;
	v->a[242303] = aux_sym_heredoc_redirect_token1;
	v->a[242304] = actions(11433);
	v->a[242305] = 1;
	v->a[242306] = sym_file_descriptor;
	v->a[242307] = actions(11425);
	v->a[242308] = 2;
	v->a[242309] = anon_sym_LT_LT;
	v->a[242310] = anon_sym_LT_LT_DASH;
	v->a[242311] = actions(11428);
	v->a[242312] = 2;
	v->a[242313] = anon_sym_LT_AMP_DASH;
	v->a[242314] = anon_sym_GT_AMP_DASH;
	v->a[242315] = state(4278);
	v->a[242316] = 3;
	v->a[242317] = sym_file_redirect;
	v->a[242318] = sym_heredoc_redirect;
	v->a[242319] = aux_sym_redirected_statement_repeat1;
	small_parse_table_12116(v);
}

void	small_parse_table_12116(t_small_parse_table_array *v)
{
	v->a[242320] = actions(11422);
	v->a[242321] = 8;
	v->a[242322] = anon_sym_LT;
	v->a[242323] = anon_sym_GT;
	v->a[242324] = anon_sym_GT_GT;
	v->a[242325] = anon_sym_AMP_GT;
	v->a[242326] = anon_sym_AMP_GT_GT;
	v->a[242327] = anon_sym_LT_AMP;
	v->a[242328] = anon_sym_GT_AMP;
	v->a[242329] = anon_sym_GT_PIPE;
	v->a[242330] = actions(11420);
	v->a[242331] = 10;
	v->a[242332] = anon_sym_SEMI;
	v->a[242333] = anon_sym_PIPE_PIPE;
	v->a[242334] = anon_sym_AMP_AMP;
	v->a[242335] = anon_sym_PIPE;
	v->a[242336] = anon_sym_AMP;
	v->a[242337] = anon_sym_esac;
	v->a[242338] = anon_sym_SEMI_SEMI;
	v->a[242339] = anon_sym_SEMI_AMP;
	small_parse_table_12117(v);
}

void	small_parse_table_12117(t_small_parse_table_array *v)
{
	v->a[242340] = anon_sym_SEMI_SEMI_AMP;
	v->a[242341] = anon_sym_PIPE_AMP;
	v->a[242342] = 8;
	v->a[242343] = actions(3);
	v->a[242344] = 1;
	v->a[242345] = sym_comment;
	v->a[242346] = actions(11315);
	v->a[242347] = 1;
	v->a[242348] = aux_sym_heredoc_redirect_token1;
	v->a[242349] = actions(11442);
	v->a[242350] = 1;
	v->a[242351] = anon_sym_LT_LT_LT;
	v->a[242352] = actions(11445);
	v->a[242353] = 1;
	v->a[242354] = sym_file_descriptor;
	v->a[242355] = actions(11439);
	v->a[242356] = 2;
	v->a[242357] = anon_sym_LT_AMP_DASH;
	v->a[242358] = anon_sym_GT_AMP_DASH;
	v->a[242359] = state(4279);
	small_parse_table_12118(v);
}

void	small_parse_table_12118(t_small_parse_table_array *v)
{
	v->a[242360] = 3;
	v->a[242361] = sym_file_redirect;
	v->a[242362] = sym_herestring_redirect;
	v->a[242363] = aux_sym_redirected_statement_repeat2;
	v->a[242364] = actions(11436);
	v->a[242365] = 8;
	v->a[242366] = anon_sym_LT;
	v->a[242367] = anon_sym_GT;
	v->a[242368] = anon_sym_GT_GT;
	v->a[242369] = anon_sym_AMP_GT;
	v->a[242370] = anon_sym_AMP_GT_GT;
	v->a[242371] = anon_sym_LT_AMP;
	v->a[242372] = anon_sym_GT_AMP;
	v->a[242373] = anon_sym_GT_PIPE;
	v->a[242374] = actions(11307);
	v->a[242375] = 11;
	v->a[242376] = anon_sym_SEMI;
	v->a[242377] = anon_sym_PIPE_PIPE;
	v->a[242378] = anon_sym_AMP_AMP;
	v->a[242379] = anon_sym_PIPE;
	small_parse_table_12119(v);
}

void	small_parse_table_12119(t_small_parse_table_array *v)
{
	v->a[242380] = anon_sym_AMP;
	v->a[242381] = anon_sym_LT_LT;
	v->a[242382] = anon_sym_SEMI_SEMI;
	v->a[242383] = anon_sym_SEMI_AMP;
	v->a[242384] = anon_sym_SEMI_SEMI_AMP;
	v->a[242385] = anon_sym_PIPE_AMP;
	v->a[242386] = anon_sym_LT_LT_DASH;
	v->a[242387] = 3;
	v->a[242388] = actions(3);
	v->a[242389] = 1;
	v->a[242390] = sym_comment;
	v->a[242391] = actions(1294);
	v->a[242392] = 4;
	v->a[242393] = sym_file_descriptor;
	v->a[242394] = sym__concat;
	v->a[242395] = ts_builtin_sym_end;
	v->a[242396] = aux_sym_heredoc_redirect_token1;
	v->a[242397] = actions(1292);
	v->a[242398] = 23;
	v->a[242399] = anon_sym_SEMI;
	small_parse_table_12120(v);
}

/* EOF small_parse_table_2423.c */
