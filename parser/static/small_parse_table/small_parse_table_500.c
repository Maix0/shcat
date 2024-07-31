/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_500.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2500(t_small_parse_table_array *v)
{
	v->a[50000] = 1;
	v->a[50001] = sym__concat;
	v->a[50002] = state(920);
	v->a[50003] = 1;
	v->a[50004] = aux_sym_concatenation_repeat1;
	v->a[50005] = actions(1023);
	v->a[50006] = 2;
	v->a[50007] = sym_variable_name;
	v->a[50008] = aux_sym_heredoc_redirect_token1;
	v->a[50009] = actions(1025);
	v->a[50010] = 14;
	v->a[50011] = anon_sym_PIPE;
	v->a[50012] = anon_sym_SEMI_SEMI;
	v->a[50013] = anon_sym_AMP_AMP;
	v->a[50014] = anon_sym_PIPE_PIPE;
	v->a[50015] = anon_sym_LT;
	v->a[50016] = anon_sym_GT;
	v->a[50017] = anon_sym_GT_GT;
	v->a[50018] = anon_sym_LT_AMP;
	v->a[50019] = anon_sym_GT_AMP;
	small_parse_table_2501(v);
}

void	small_parse_table_2501(t_small_parse_table_array *v)
{
	v->a[50020] = anon_sym_GT_PIPE;
	v->a[50021] = anon_sym_LT_GT;
	v->a[50022] = anon_sym_LT_LT;
	v->a[50023] = anon_sym_LT_LT_DASH;
	v->a[50024] = anon_sym_SEMI;
	v->a[50025] = 10;
	v->a[50026] = actions(3);
	v->a[50027] = 1;
	v->a[50028] = sym_comment;
	v->a[50029] = actions(744);
	v->a[50030] = 1;
	v->a[50031] = anon_sym_SEMI_SEMI;
	v->a[50032] = actions(746);
	v->a[50033] = 1;
	v->a[50034] = anon_sym_PIPE;
	v->a[50035] = actions(858);
	v->a[50036] = 1;
	v->a[50037] = anon_sym_SEMI;
	v->a[50038] = actions(1591);
	v->a[50039] = 1;
	small_parse_table_2502(v);
}

void	small_parse_table_2502(t_small_parse_table_array *v)
{
	v->a[50040] = aux_sym_heredoc_redirect_token1;
	v->a[50041] = state(465);
	v->a[50042] = 1;
	v->a[50043] = sym_terminator;
	v->a[50044] = actions(850);
	v->a[50045] = 2;
	v->a[50046] = anon_sym_LT_LT;
	v->a[50047] = anon_sym_LT_LT_DASH;
	v->a[50048] = actions(898);
	v->a[50049] = 2;
	v->a[50050] = anon_sym_AMP_AMP;
	v->a[50051] = anon_sym_PIPE_PIPE;
	v->a[50052] = state(984);
	v->a[50053] = 3;
	v->a[50054] = sym_file_redirect;
	v->a[50055] = sym_heredoc_redirect;
	v->a[50056] = aux_sym_redirected_statement_repeat1;
	v->a[50057] = actions(1676);
	v->a[50058] = 7;
	v->a[50059] = anon_sym_LT;
	small_parse_table_2503(v);
}

void	small_parse_table_2503(t_small_parse_table_array *v)
{
	v->a[50060] = anon_sym_GT;
	v->a[50061] = anon_sym_GT_GT;
	v->a[50062] = anon_sym_LT_AMP;
	v->a[50063] = anon_sym_GT_AMP;
	v->a[50064] = anon_sym_GT_PIPE;
	v->a[50065] = anon_sym_LT_GT;
	v->a[50066] = 3;
	v->a[50067] = actions(3);
	v->a[50068] = 1;
	v->a[50069] = sym_comment;
	v->a[50070] = actions(1165);
	v->a[50071] = 3;
	v->a[50072] = sym__concat;
	v->a[50073] = sym_variable_name;
	v->a[50074] = aux_sym_heredoc_redirect_token1;
	v->a[50075] = actions(1163);
	v->a[50076] = 16;
	v->a[50077] = anon_sym_esac;
	v->a[50078] = anon_sym_PIPE;
	v->a[50079] = anon_sym_SEMI_SEMI;
	small_parse_table_2504(v);
}

void	small_parse_table_2504(t_small_parse_table_array *v)
{
	v->a[50080] = anon_sym_AMP_AMP;
	v->a[50081] = anon_sym_PIPE_PIPE;
	v->a[50082] = anon_sym_LT;
	v->a[50083] = anon_sym_GT;
	v->a[50084] = anon_sym_GT_GT;
	v->a[50085] = anon_sym_LT_AMP;
	v->a[50086] = anon_sym_GT_AMP;
	v->a[50087] = anon_sym_GT_PIPE;
	v->a[50088] = anon_sym_LT_GT;
	v->a[50089] = anon_sym_LT_LT;
	v->a[50090] = anon_sym_LT_LT_DASH;
	v->a[50091] = aux_sym_concatenation_token1;
	v->a[50092] = anon_sym_SEMI;
	v->a[50093] = 9;
	v->a[50094] = actions(3);
	v->a[50095] = 1;
	v->a[50096] = sym_comment;
	v->a[50097] = actions(746);
	v->a[50098] = 1;
	v->a[50099] = anon_sym_PIPE;
	small_parse_table_2505(v);
}

/* EOF small_parse_table_500.c */
