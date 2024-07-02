/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_570.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2850(t_small_parse_table_array *v)
{
	v->a[57000] = 1;
	v->a[57001] = aux_sym_heredoc_redirect_token1;
	v->a[57002] = actions(1859);
	v->a[57003] = 1;
	v->a[57004] = sym_file_descriptor;
	v->a[57005] = state(618);
	v->a[57006] = 1;
	v->a[57007] = sym_terminator;
	v->a[57008] = actions(698);
	v->a[57009] = 2;
	v->a[57010] = anon_sym_AMP_AMP;
	v->a[57011] = anon_sym_PIPE_PIPE;
	v->a[57012] = actions(700);
	v->a[57013] = 2;
	v->a[57014] = anon_sym_LT_LT;
	v->a[57015] = anon_sym_LT_LT_DASH;
	v->a[57016] = actions(696);
	v->a[57017] = 3;
	v->a[57018] = anon_sym_SEMI_SEMI;
	v->a[57019] = anon_sym_AMP;
	small_parse_table_2851(v);
}

void	small_parse_table_2851(t_small_parse_table_array *v)
{
	v->a[57020] = anon_sym_SEMI;
	v->a[57021] = state(1031);
	v->a[57022] = 3;
	v->a[57023] = sym_file_redirect;
	v->a[57024] = sym_heredoc_redirect;
	v->a[57025] = aux_sym_redirected_statement_repeat1;
	v->a[57026] = actions(1855);
	v->a[57027] = 7;
	v->a[57028] = anon_sym_LT;
	v->a[57029] = anon_sym_GT;
	v->a[57030] = anon_sym_GT_GT;
	v->a[57031] = anon_sym_LT_AMP;
	v->a[57032] = anon_sym_GT_AMP;
	v->a[57033] = anon_sym_GT_PIPE;
	v->a[57034] = anon_sym_LT_GT;
	v->a[57035] = 11;
	v->a[57036] = actions(3);
	v->a[57037] = 1;
	v->a[57038] = sym_comment;
	v->a[57039] = actions(692);
	small_parse_table_2852(v);
}

void	small_parse_table_2852(t_small_parse_table_array *v)
{
	v->a[57040] = 1;
	v->a[57041] = anon_sym_PIPE;
	v->a[57042] = actions(724);
	v->a[57043] = 1;
	v->a[57044] = anon_sym_RPAREN;
	v->a[57045] = actions(1857);
	v->a[57046] = 1;
	v->a[57047] = aux_sym_heredoc_redirect_token1;
	v->a[57048] = actions(1859);
	v->a[57049] = 1;
	v->a[57050] = sym_file_descriptor;
	v->a[57051] = state(677);
	v->a[57052] = 1;
	v->a[57053] = sym_terminator;
	v->a[57054] = actions(698);
	v->a[57055] = 2;
	v->a[57056] = anon_sym_AMP_AMP;
	v->a[57057] = anon_sym_PIPE_PIPE;
	v->a[57058] = actions(700);
	v->a[57059] = 2;
	small_parse_table_2853(v);
}

void	small_parse_table_2853(t_small_parse_table_array *v)
{
	v->a[57060] = anon_sym_LT_LT;
	v->a[57061] = anon_sym_LT_LT_DASH;
	v->a[57062] = actions(696);
	v->a[57063] = 3;
	v->a[57064] = anon_sym_SEMI_SEMI;
	v->a[57065] = anon_sym_AMP;
	v->a[57066] = anon_sym_SEMI;
	v->a[57067] = state(1031);
	v->a[57068] = 3;
	v->a[57069] = sym_file_redirect;
	v->a[57070] = sym_heredoc_redirect;
	v->a[57071] = aux_sym_redirected_statement_repeat1;
	v->a[57072] = actions(1855);
	v->a[57073] = 7;
	v->a[57074] = anon_sym_LT;
	v->a[57075] = anon_sym_GT;
	v->a[57076] = anon_sym_GT_GT;
	v->a[57077] = anon_sym_LT_AMP;
	v->a[57078] = anon_sym_GT_AMP;
	v->a[57079] = anon_sym_GT_PIPE;
	small_parse_table_2854(v);
}

void	small_parse_table_2854(t_small_parse_table_array *v)
{
	v->a[57080] = anon_sym_LT_GT;
	v->a[57081] = 11;
	v->a[57082] = actions(3);
	v->a[57083] = 1;
	v->a[57084] = sym_comment;
	v->a[57085] = actions(692);
	v->a[57086] = 1;
	v->a[57087] = anon_sym_PIPE;
	v->a[57088] = actions(724);
	v->a[57089] = 1;
	v->a[57090] = anon_sym_RPAREN;
	v->a[57091] = actions(1857);
	v->a[57092] = 1;
	v->a[57093] = aux_sym_heredoc_redirect_token1;
	v->a[57094] = actions(1859);
	v->a[57095] = 1;
	v->a[57096] = sym_file_descriptor;
	v->a[57097] = state(619);
	v->a[57098] = 1;
	v->a[57099] = sym_terminator;
	small_parse_table_2855(v);
}

/* EOF small_parse_table_570.c */
