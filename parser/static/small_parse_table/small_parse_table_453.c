/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_453.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2265(t_small_parse_table_array *v)
{
	v->a[45300] = anon_sym_SEMI;
	v->a[45301] = actions(1878);
	v->a[45302] = 1;
	v->a[45303] = aux_sym_heredoc_redirect_token1;
	v->a[45304] = state(332);
	v->a[45305] = 1;
	v->a[45306] = sym_terminator;
	v->a[45307] = actions(582);
	v->a[45308] = 2;
	v->a[45309] = anon_sym_AMP_AMP;
	v->a[45310] = anon_sym_PIPE_PIPE;
	v->a[45311] = actions(591);
	v->a[45312] = 2;
	v->a[45313] = anon_sym_esac;
	v->a[45314] = anon_sym_SEMI_SEMI;
	v->a[45315] = actions(1876);
	v->a[45316] = 3;
	v->a[45317] = anon_sym_LT;
	v->a[45318] = anon_sym_GT;
	v->a[45319] = anon_sym_GT_GT;
	small_parse_table_2266(v);
}

void	small_parse_table_2266(t_small_parse_table_array *v)
{
	v->a[45320] = state(971);
	v->a[45321] = 3;
	v->a[45322] = sym_file_redirect;
	v->a[45323] = sym_heredoc_redirect;
	v->a[45324] = aux_sym_redirected_statement_repeat1;
	v->a[45325] = 9;
	v->a[45326] = actions(3);
	v->a[45327] = 1;
	v->a[45328] = sym_comment;
	v->a[45329] = actions(597);
	v->a[45330] = 1;
	v->a[45331] = anon_sym_LT_LT;
	v->a[45332] = actions(691);
	v->a[45333] = 1;
	v->a[45334] = ts_builtin_sym_end;
	v->a[45335] = actions(1874);
	v->a[45336] = 1;
	v->a[45337] = aux_sym_heredoc_redirect_token1;
	v->a[45338] = state(461);
	v->a[45339] = 1;
	small_parse_table_2267(v);
}

void	small_parse_table_2267(t_small_parse_table_array *v)
{
	v->a[45340] = sym_terminator;
	v->a[45341] = actions(693);
	v->a[45342] = 2;
	v->a[45343] = anon_sym_SEMI_SEMI;
	v->a[45344] = anon_sym_SEMI;
	v->a[45345] = actions(695);
	v->a[45346] = 2;
	v->a[45347] = anon_sym_AMP_AMP;
	v->a[45348] = anon_sym_PIPE_PIPE;
	v->a[45349] = actions(1872);
	v->a[45350] = 3;
	v->a[45351] = anon_sym_LT;
	v->a[45352] = anon_sym_GT;
	v->a[45353] = anon_sym_GT_GT;
	v->a[45354] = state(922);
	v->a[45355] = 3;
	v->a[45356] = sym_file_redirect;
	v->a[45357] = sym_heredoc_redirect;
	v->a[45358] = aux_sym_redirected_statement_repeat1;
	v->a[45359] = 6;
	small_parse_table_2268(v);
}

void	small_parse_table_2268(t_small_parse_table_array *v)
{
	v->a[45360] = actions(3);
	v->a[45361] = 1;
	v->a[45362] = sym_comment;
	v->a[45363] = actions(1945);
	v->a[45364] = 1;
	v->a[45365] = anon_sym_LT_LT;
	v->a[45366] = actions(1948);
	v->a[45367] = 2;
	v->a[45368] = ts_builtin_sym_end;
	v->a[45369] = aux_sym_heredoc_redirect_token1;
	v->a[45370] = actions(1985);
	v->a[45371] = 3;
	v->a[45372] = anon_sym_LT;
	v->a[45373] = anon_sym_GT;
	v->a[45374] = anon_sym_GT_GT;
	v->a[45375] = state(961);
	v->a[45376] = 3;
	v->a[45377] = sym_file_redirect;
	v->a[45378] = sym_heredoc_redirect;
	v->a[45379] = aux_sym_redirected_statement_repeat1;
	small_parse_table_2269(v);
}

void	small_parse_table_2269(t_small_parse_table_array *v)
{
	v->a[45380] = actions(1940);
	v->a[45381] = 5;
	v->a[45382] = anon_sym_PIPE;
	v->a[45383] = anon_sym_SEMI_SEMI;
	v->a[45384] = anon_sym_AMP_AMP;
	v->a[45385] = anon_sym_PIPE_PIPE;
	v->a[45386] = anon_sym_SEMI;
	v->a[45387] = 9;
	v->a[45388] = actions(3);
	v->a[45389] = 1;
	v->a[45390] = sym_comment;
	v->a[45391] = actions(591);
	v->a[45392] = 1;
	v->a[45393] = anon_sym_BQUOTE;
	v->a[45394] = actions(597);
	v->a[45395] = 1;
	v->a[45396] = anon_sym_LT_LT;
	v->a[45397] = actions(1870);
	v->a[45398] = 1;
	v->a[45399] = aux_sym_heredoc_redirect_token1;
	small_parse_table_2270(v);
}

/* EOF small_parse_table_453.c */
