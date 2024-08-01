/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_420.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2100(t_small_parse_table_array *v)
{
	v->a[42000] = actions(582);
	v->a[42001] = 2;
	v->a[42002] = anon_sym_AMP_AMP;
	v->a[42003] = anon_sym_PIPE_PIPE;
	v->a[42004] = actions(591);
	v->a[42005] = 2;
	v->a[42006] = anon_sym_esac;
	v->a[42007] = anon_sym_SEMI_SEMI;
	v->a[42008] = actions(1876);
	v->a[42009] = 3;
	v->a[42010] = anon_sym_LT;
	v->a[42011] = anon_sym_GT;
	v->a[42012] = anon_sym_GT_GT;
	v->a[42013] = state(971);
	v->a[42014] = 3;
	v->a[42015] = sym_file_redirect;
	v->a[42016] = sym_heredoc_redirect;
	v->a[42017] = aux_sym_redirected_statement_repeat1;
	v->a[42018] = 10;
	v->a[42019] = actions(3);
	small_parse_table_2101(v);
}

void	small_parse_table_2101(t_small_parse_table_array *v)
{
	v->a[42020] = 1;
	v->a[42021] = sym_comment;
	v->a[42022] = actions(580);
	v->a[42023] = 1;
	v->a[42024] = anon_sym_PIPE;
	v->a[42025] = actions(591);
	v->a[42026] = 1;
	v->a[42027] = anon_sym_BQUOTE;
	v->a[42028] = actions(597);
	v->a[42029] = 1;
	v->a[42030] = anon_sym_LT_LT;
	v->a[42031] = actions(1870);
	v->a[42032] = 1;
	v->a[42033] = aux_sym_heredoc_redirect_token1;
	v->a[42034] = state(584);
	v->a[42035] = 1;
	v->a[42036] = sym_terminator;
	v->a[42037] = actions(593);
	v->a[42038] = 2;
	v->a[42039] = anon_sym_SEMI_SEMI;
	small_parse_table_2102(v);
}

void	small_parse_table_2102(t_small_parse_table_array *v)
{
	v->a[42040] = anon_sym_SEMI;
	v->a[42041] = actions(762);
	v->a[42042] = 2;
	v->a[42043] = anon_sym_AMP_AMP;
	v->a[42044] = anon_sym_PIPE_PIPE;
	v->a[42045] = actions(1880);
	v->a[42046] = 3;
	v->a[42047] = anon_sym_LT;
	v->a[42048] = anon_sym_GT;
	v->a[42049] = anon_sym_GT_GT;
	v->a[42050] = state(925);
	v->a[42051] = 3;
	v->a[42052] = sym_file_redirect;
	v->a[42053] = sym_heredoc_redirect;
	v->a[42054] = aux_sym_redirected_statement_repeat1;
	v->a[42055] = 10;
	v->a[42056] = actions(3);
	v->a[42057] = 1;
	v->a[42058] = sym_comment;
	v->a[42059] = actions(580);
	small_parse_table_2103(v);
}

void	small_parse_table_2103(t_small_parse_table_array *v)
{
	v->a[42060] = 1;
	v->a[42061] = anon_sym_PIPE;
	v->a[42062] = actions(584);
	v->a[42063] = 1;
	v->a[42064] = anon_sym_LT_LT;
	v->a[42065] = actions(586);
	v->a[42066] = 1;
	v->a[42067] = anon_sym_SEMI;
	v->a[42068] = actions(1878);
	v->a[42069] = 1;
	v->a[42070] = aux_sym_heredoc_redirect_token1;
	v->a[42071] = state(336);
	v->a[42072] = 1;
	v->a[42073] = sym_terminator;
	v->a[42074] = actions(582);
	v->a[42075] = 2;
	v->a[42076] = anon_sym_AMP_AMP;
	v->a[42077] = anon_sym_PIPE_PIPE;
	v->a[42078] = actions(591);
	v->a[42079] = 2;
	small_parse_table_2104(v);
}

void	small_parse_table_2104(t_small_parse_table_array *v)
{
	v->a[42080] = anon_sym_esac;
	v->a[42081] = anon_sym_SEMI_SEMI;
	v->a[42082] = actions(1876);
	v->a[42083] = 3;
	v->a[42084] = anon_sym_LT;
	v->a[42085] = anon_sym_GT;
	v->a[42086] = anon_sym_GT_GT;
	v->a[42087] = state(971);
	v->a[42088] = 3;
	v->a[42089] = sym_file_redirect;
	v->a[42090] = sym_heredoc_redirect;
	v->a[42091] = aux_sym_redirected_statement_repeat1;
	v->a[42092] = 5;
	v->a[42093] = actions(3);
	v->a[42094] = 1;
	v->a[42095] = sym_comment;
	v->a[42096] = actions(1465);
	v->a[42097] = 1;
	v->a[42098] = aux_sym_concatenation_token1;
	v->a[42099] = actions(1467);
	small_parse_table_2105(v);
}

/* EOF small_parse_table_420.c */
