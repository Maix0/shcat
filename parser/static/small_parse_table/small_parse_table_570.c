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
	v->a[57000] = actions(755);
	v->a[57001] = 2;
	v->a[57002] = anon_sym_AMP_AMP;
	v->a[57003] = anon_sym_PIPE_PIPE;
	v->a[57004] = actions(757);
	v->a[57005] = 2;
	v->a[57006] = anon_sym_LT_LT;
	v->a[57007] = anon_sym_LT_LT_DASH;
	v->a[57008] = actions(759);
	v->a[57009] = 2;
	v->a[57010] = anon_sym_AMP;
	v->a[57011] = anon_sym_SEMI;
	v->a[57012] = state(1094);
	v->a[57013] = 3;
	v->a[57014] = sym_file_redirect;
	v->a[57015] = sym_heredoc_redirect;
	v->a[57016] = aux_sym_redirected_statement_repeat1;
	v->a[57017] = actions(1849);
	v->a[57018] = 7;
	v->a[57019] = anon_sym_LT;
	small_parse_table_2851(v);
}

void	small_parse_table_2851(t_small_parse_table_array *v)
{
	v->a[57020] = anon_sym_GT;
	v->a[57021] = anon_sym_GT_GT;
	v->a[57022] = anon_sym_LT_AMP;
	v->a[57023] = anon_sym_GT_AMP;
	v->a[57024] = anon_sym_GT_PIPE;
	v->a[57025] = anon_sym_LT_GT;
	v->a[57026] = 3;
	v->a[57027] = actions(3);
	v->a[57028] = 1;
	v->a[57029] = sym_comment;
	v->a[57030] = actions(753);
	v->a[57031] = 4;
	v->a[57032] = sym_file_descriptor;
	v->a[57033] = sym__concat;
	v->a[57034] = sym_variable_name;
	v->a[57035] = aux_sym_heredoc_redirect_token1;
	v->a[57036] = actions(751);
	v->a[57037] = 17;
	v->a[57038] = anon_sym_esac;
	v->a[57039] = anon_sym_PIPE;
	small_parse_table_2852(v);
}

void	small_parse_table_2852(t_small_parse_table_array *v)
{
	v->a[57040] = anon_sym_SEMI_SEMI;
	v->a[57041] = anon_sym_AMP_AMP;
	v->a[57042] = anon_sym_PIPE_PIPE;
	v->a[57043] = anon_sym_LT;
	v->a[57044] = anon_sym_GT;
	v->a[57045] = anon_sym_GT_GT;
	v->a[57046] = anon_sym_LT_AMP;
	v->a[57047] = anon_sym_GT_AMP;
	v->a[57048] = anon_sym_GT_PIPE;
	v->a[57049] = anon_sym_LT_GT;
	v->a[57050] = anon_sym_LT_LT;
	v->a[57051] = anon_sym_LT_LT_DASH;
	v->a[57052] = anon_sym_AMP;
	v->a[57053] = aux_sym_concatenation_token1;
	v->a[57054] = anon_sym_SEMI;
	v->a[57055] = 3;
	v->a[57056] = actions(3);
	v->a[57057] = 1;
	v->a[57058] = sym_comment;
	v->a[57059] = actions(662);
	small_parse_table_2853(v);
}

void	small_parse_table_2853(t_small_parse_table_array *v)
{
	v->a[57060] = 4;
	v->a[57061] = sym_file_descriptor;
	v->a[57062] = sym__concat;
	v->a[57063] = sym_variable_name;
	v->a[57064] = aux_sym_heredoc_redirect_token1;
	v->a[57065] = actions(660);
	v->a[57066] = 17;
	v->a[57067] = anon_sym_esac;
	v->a[57068] = anon_sym_PIPE;
	v->a[57069] = anon_sym_SEMI_SEMI;
	v->a[57070] = anon_sym_AMP_AMP;
	v->a[57071] = anon_sym_PIPE_PIPE;
	v->a[57072] = anon_sym_LT;
	v->a[57073] = anon_sym_GT;
	v->a[57074] = anon_sym_GT_GT;
	v->a[57075] = anon_sym_LT_AMP;
	v->a[57076] = anon_sym_GT_AMP;
	v->a[57077] = anon_sym_GT_PIPE;
	v->a[57078] = anon_sym_LT_GT;
	v->a[57079] = anon_sym_LT_LT;
	small_parse_table_2854(v);
}

void	small_parse_table_2854(t_small_parse_table_array *v)
{
	v->a[57080] = anon_sym_LT_LT_DASH;
	v->a[57081] = anon_sym_AMP;
	v->a[57082] = aux_sym_concatenation_token1;
	v->a[57083] = anon_sym_SEMI;
	v->a[57084] = 3;
	v->a[57085] = actions(3);
	v->a[57086] = 1;
	v->a[57087] = sym_comment;
	v->a[57088] = actions(766);
	v->a[57089] = 4;
	v->a[57090] = sym_file_descriptor;
	v->a[57091] = sym__concat;
	v->a[57092] = sym_variable_name;
	v->a[57093] = aux_sym_heredoc_redirect_token1;
	v->a[57094] = actions(764);
	v->a[57095] = 17;
	v->a[57096] = anon_sym_esac;
	v->a[57097] = anon_sym_PIPE;
	v->a[57098] = anon_sym_SEMI_SEMI;
	v->a[57099] = anon_sym_AMP_AMP;
	small_parse_table_2855(v);
}

/* EOF small_parse_table_570.c */
