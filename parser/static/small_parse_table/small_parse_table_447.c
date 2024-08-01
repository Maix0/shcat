/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_447.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2235(t_small_parse_table_array *v)
{
	v->a[44700] = state(922);
	v->a[44701] = 3;
	v->a[44702] = sym_file_redirect;
	v->a[44703] = sym_heredoc_redirect;
	v->a[44704] = aux_sym_redirected_statement_repeat1;
	v->a[44705] = 10;
	v->a[44706] = actions(3);
	v->a[44707] = 1;
	v->a[44708] = sym_comment;
	v->a[44709] = actions(580);
	v->a[44710] = 1;
	v->a[44711] = anon_sym_PIPE;
	v->a[44712] = actions(591);
	v->a[44713] = 1;
	v->a[44714] = anon_sym_SEMI_SEMI;
	v->a[44715] = actions(593);
	v->a[44716] = 1;
	v->a[44717] = anon_sym_SEMI;
	v->a[44718] = actions(597);
	v->a[44719] = 1;
	small_parse_table_2236(v);
}

void	small_parse_table_2236(t_small_parse_table_array *v)
{
	v->a[44720] = anon_sym_LT_LT;
	v->a[44721] = actions(1870);
	v->a[44722] = 1;
	v->a[44723] = aux_sym_heredoc_redirect_token1;
	v->a[44724] = state(384);
	v->a[44725] = 1;
	v->a[44726] = sym_terminator;
	v->a[44727] = actions(769);
	v->a[44728] = 2;
	v->a[44729] = anon_sym_AMP_AMP;
	v->a[44730] = anon_sym_PIPE_PIPE;
	v->a[44731] = actions(1924);
	v->a[44732] = 3;
	v->a[44733] = anon_sym_LT;
	v->a[44734] = anon_sym_GT;
	v->a[44735] = anon_sym_GT_GT;
	v->a[44736] = state(1040);
	v->a[44737] = 3;
	v->a[44738] = sym_file_redirect;
	v->a[44739] = sym_heredoc_redirect;
	small_parse_table_2237(v);
}

void	small_parse_table_2237(t_small_parse_table_array *v)
{
	v->a[44740] = aux_sym_redirected_statement_repeat1;
	v->a[44741] = 5;
	v->a[44742] = actions(3);
	v->a[44743] = 1;
	v->a[44744] = sym_comment;
	v->a[44745] = actions(580);
	v->a[44746] = 1;
	v->a[44747] = anon_sym_PIPE;
	v->a[44748] = actions(827);
	v->a[44749] = 1;
	v->a[44750] = aux_sym_heredoc_redirect_token1;
	v->a[44751] = state(971);
	v->a[44752] = 3;
	v->a[44753] = sym_file_redirect;
	v->a[44754] = sym_heredoc_redirect;
	v->a[44755] = aux_sym_redirected_statement_repeat1;
	v->a[44756] = actions(816);
	v->a[44757] = 9;
	v->a[44758] = anon_sym_esac;
	v->a[44759] = anon_sym_SEMI_SEMI;
	small_parse_table_2238(v);
}

void	small_parse_table_2238(t_small_parse_table_array *v)
{
	v->a[44760] = anon_sym_AMP_AMP;
	v->a[44761] = anon_sym_PIPE_PIPE;
	v->a[44762] = anon_sym_LT;
	v->a[44763] = anon_sym_GT;
	v->a[44764] = anon_sym_GT_GT;
	v->a[44765] = anon_sym_LT_LT;
	v->a[44766] = anon_sym_SEMI;
	v->a[44767] = 10;
	v->a[44768] = actions(3);
	v->a[44769] = 1;
	v->a[44770] = sym_comment;
	v->a[44771] = actions(580);
	v->a[44772] = 1;
	v->a[44773] = anon_sym_PIPE;
	v->a[44774] = actions(591);
	v->a[44775] = 1;
	v->a[44776] = anon_sym_SEMI_SEMI;
	v->a[44777] = actions(593);
	v->a[44778] = 1;
	v->a[44779] = anon_sym_SEMI;
	small_parse_table_2239(v);
}

void	small_parse_table_2239(t_small_parse_table_array *v)
{
	v->a[44780] = actions(597);
	v->a[44781] = 1;
	v->a[44782] = anon_sym_LT_LT;
	v->a[44783] = actions(1870);
	v->a[44784] = 1;
	v->a[44785] = aux_sym_heredoc_redirect_token1;
	v->a[44786] = state(383);
	v->a[44787] = 1;
	v->a[44788] = sym_terminator;
	v->a[44789] = actions(769);
	v->a[44790] = 2;
	v->a[44791] = anon_sym_AMP_AMP;
	v->a[44792] = anon_sym_PIPE_PIPE;
	v->a[44793] = actions(1924);
	v->a[44794] = 3;
	v->a[44795] = anon_sym_LT;
	v->a[44796] = anon_sym_GT;
	v->a[44797] = anon_sym_GT_GT;
	v->a[44798] = state(1040);
	v->a[44799] = 3;
	small_parse_table_2240(v);
}

/* EOF small_parse_table_447.c */
