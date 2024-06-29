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
	v->a[50000] = actions(1536);
	v->a[50001] = 1;
	v->a[50002] = sym_file_descriptor;
	v->a[50003] = actions(1539);
	v->a[50004] = 1;
	v->a[50005] = sym_variable_name;
	v->a[50006] = actions(1683);
	v->a[50007] = 1;
	v->a[50008] = anon_sym_RPAREN;
	v->a[50009] = actions(1526);
	v->a[50010] = 9;
	v->a[50011] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[50012] = anon_sym_DOLLAR;
	v->a[50013] = anon_sym_DQUOTE;
	v->a[50014] = sym_raw_string;
	v->a[50015] = sym_number;
	v->a[50016] = anon_sym_DOLLAR_LBRACE;
	v->a[50017] = anon_sym_DOLLAR_LPAREN;
	v->a[50018] = anon_sym_BQUOTE;
	v->a[50019] = sym_word;
	small_parse_table_2501(v);
}

void	small_parse_table_2501(t_small_parse_table_array *v)
{
	v->a[50020] = actions(1528);
	v->a[50021] = 9;
	v->a[50022] = anon_sym_PIPE;
	v->a[50023] = anon_sym_SEMI_SEMI;
	v->a[50024] = anon_sym_AMP_AMP;
	v->a[50025] = anon_sym_PIPE_PIPE;
	v->a[50026] = anon_sym_LT_LT;
	v->a[50027] = anon_sym_LT_LT_DASH;
	v->a[50028] = aux_sym_heredoc_redirect_token1;
	v->a[50029] = anon_sym_AMP;
	v->a[50030] = anon_sym_SEMI;
	v->a[50031] = actions(1533);
	v->a[50032] = 10;
	v->a[50033] = anon_sym_LT;
	v->a[50034] = anon_sym_GT;
	v->a[50035] = anon_sym_GT_GT;
	v->a[50036] = anon_sym_AMP_GT;
	v->a[50037] = anon_sym_AMP_GT_GT;
	v->a[50038] = anon_sym_LT_AMP;
	v->a[50039] = anon_sym_GT_AMP;
	small_parse_table_2502(v);
}

void	small_parse_table_2502(t_small_parse_table_array *v)
{
	v->a[50040] = anon_sym_GT_PIPE;
	v->a[50041] = anon_sym_LT_AMP_DASH;
	v->a[50042] = anon_sym_GT_AMP_DASH;
	v->a[50043] = 7;
	v->a[50044] = actions(3);
	v->a[50045] = 1;
	v->a[50046] = sym_comment;
	v->a[50047] = actions(875);
	v->a[50048] = 1;
	v->a[50049] = sym_file_descriptor;
	v->a[50050] = actions(1625);
	v->a[50051] = 1;
	v->a[50052] = sym_variable_name;
	v->a[50053] = state(1432);
	v->a[50054] = 2;
	v->a[50055] = sym_variable_assignment;
	v->a[50056] = aux_sym__variable_assignments_repeat1;
	v->a[50057] = state(1433);
	v->a[50058] = 3;
	v->a[50059] = sym_file_redirect;
	small_parse_table_2503(v);
}

void	small_parse_table_2503(t_small_parse_table_array *v)
{
	v->a[50060] = sym_heredoc_redirect;
	v->a[50061] = aux_sym_redirected_statement_repeat1;
	v->a[50062] = actions(762);
	v->a[50063] = 9;
	v->a[50064] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[50065] = anon_sym_DOLLAR;
	v->a[50066] = anon_sym_DQUOTE;
	v->a[50067] = sym_raw_string;
	v->a[50068] = sym_number;
	v->a[50069] = anon_sym_DOLLAR_LBRACE;
	v->a[50070] = anon_sym_DOLLAR_LPAREN;
	v->a[50071] = anon_sym_BQUOTE;
	v->a[50072] = sym_word;
	v->a[50073] = actions(766);
	v->a[50074] = 15;
	v->a[50075] = anon_sym_PIPE;
	v->a[50076] = anon_sym_AMP_AMP;
	v->a[50077] = anon_sym_PIPE_PIPE;
	v->a[50078] = anon_sym_LT;
	v->a[50079] = anon_sym_GT;
	small_parse_table_2504(v);
}

void	small_parse_table_2504(t_small_parse_table_array *v)
{
	v->a[50080] = anon_sym_GT_GT;
	v->a[50081] = anon_sym_AMP_GT;
	v->a[50082] = anon_sym_AMP_GT_GT;
	v->a[50083] = anon_sym_LT_AMP;
	v->a[50084] = anon_sym_GT_AMP;
	v->a[50085] = anon_sym_GT_PIPE;
	v->a[50086] = anon_sym_LT_AMP_DASH;
	v->a[50087] = anon_sym_GT_AMP_DASH;
	v->a[50088] = anon_sym_LT_LT;
	v->a[50089] = anon_sym_LT_LT_DASH;
	v->a[50090] = 3;
	v->a[50091] = actions(3);
	v->a[50092] = 1;
	v->a[50093] = sym_comment;
	v->a[50094] = actions(538);
	v->a[50095] = 2;
	v->a[50096] = sym_file_descriptor;
	v->a[50097] = sym_variable_name;
	v->a[50098] = actions(540);
	v->a[50099] = 29;
	small_parse_table_2505(v);
}

/* EOF small_parse_table_500.c */
