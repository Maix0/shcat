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
	v->a[50000] = 7;
	v->a[50001] = actions(3);
	v->a[50002] = 1;
	v->a[50003] = sym_comment;
	v->a[50004] = actions(1565);
	v->a[50005] = 1;
	v->a[50006] = sym_file_descriptor;
	v->a[50007] = actions(1568);
	v->a[50008] = 1;
	v->a[50009] = sym_variable_name;
	v->a[50010] = actions(1644);
	v->a[50011] = 1;
	v->a[50012] = anon_sym_RPAREN;
	v->a[50013] = actions(1558);
	v->a[50014] = 9;
	v->a[50015] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[50016] = anon_sym_DOLLAR;
	v->a[50017] = anon_sym_DQUOTE;
	v->a[50018] = sym_raw_string;
	v->a[50019] = sym_number;
	small_parse_table_2501(v);
}

void	small_parse_table_2501(t_small_parse_table_array *v)
{
	v->a[50020] = anon_sym_DOLLAR_LBRACE;
	v->a[50021] = anon_sym_DOLLAR_LPAREN;
	v->a[50022] = anon_sym_BQUOTE;
	v->a[50023] = sym_word;
	v->a[50024] = actions(1560);
	v->a[50025] = 9;
	v->a[50026] = anon_sym_PIPE;
	v->a[50027] = anon_sym_SEMI_SEMI;
	v->a[50028] = anon_sym_AMP_AMP;
	v->a[50029] = anon_sym_PIPE_PIPE;
	v->a[50030] = anon_sym_LT_LT;
	v->a[50031] = anon_sym_LT_LT_DASH;
	v->a[50032] = aux_sym_heredoc_redirect_token1;
	v->a[50033] = anon_sym_AMP;
	v->a[50034] = anon_sym_SEMI;
	v->a[50035] = actions(1562);
	v->a[50036] = 10;
	v->a[50037] = anon_sym_LT;
	v->a[50038] = anon_sym_GT;
	v->a[50039] = anon_sym_GT_GT;
	small_parse_table_2502(v);
}

void	small_parse_table_2502(t_small_parse_table_array *v)
{
	v->a[50040] = anon_sym_AMP_GT;
	v->a[50041] = anon_sym_AMP_GT_GT;
	v->a[50042] = anon_sym_LT_AMP;
	v->a[50043] = anon_sym_GT_AMP;
	v->a[50044] = anon_sym_GT_PIPE;
	v->a[50045] = anon_sym_LT_AMP_DASH;
	v->a[50046] = anon_sym_GT_AMP_DASH;
	v->a[50047] = 7;
	v->a[50048] = actions(3);
	v->a[50049] = 1;
	v->a[50050] = sym_comment;
	v->a[50051] = actions(1565);
	v->a[50052] = 1;
	v->a[50053] = sym_file_descriptor;
	v->a[50054] = actions(1568);
	v->a[50055] = 1;
	v->a[50056] = sym_variable_name;
	v->a[50057] = actions(1647);
	v->a[50058] = 1;
	v->a[50059] = anon_sym_RPAREN;
	small_parse_table_2503(v);
}

void	small_parse_table_2503(t_small_parse_table_array *v)
{
	v->a[50060] = actions(1558);
	v->a[50061] = 9;
	v->a[50062] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[50063] = anon_sym_DOLLAR;
	v->a[50064] = anon_sym_DQUOTE;
	v->a[50065] = sym_raw_string;
	v->a[50066] = sym_number;
	v->a[50067] = anon_sym_DOLLAR_LBRACE;
	v->a[50068] = anon_sym_DOLLAR_LPAREN;
	v->a[50069] = anon_sym_BQUOTE;
	v->a[50070] = sym_word;
	v->a[50071] = actions(1560);
	v->a[50072] = 9;
	v->a[50073] = anon_sym_PIPE;
	v->a[50074] = anon_sym_SEMI_SEMI;
	v->a[50075] = anon_sym_AMP_AMP;
	v->a[50076] = anon_sym_PIPE_PIPE;
	v->a[50077] = anon_sym_LT_LT;
	v->a[50078] = anon_sym_LT_LT_DASH;
	v->a[50079] = aux_sym_heredoc_redirect_token1;
	small_parse_table_2504(v);
}

void	small_parse_table_2504(t_small_parse_table_array *v)
{
	v->a[50080] = anon_sym_AMP;
	v->a[50081] = anon_sym_SEMI;
	v->a[50082] = actions(1562);
	v->a[50083] = 10;
	v->a[50084] = anon_sym_LT;
	v->a[50085] = anon_sym_GT;
	v->a[50086] = anon_sym_GT_GT;
	v->a[50087] = anon_sym_AMP_GT;
	v->a[50088] = anon_sym_AMP_GT_GT;
	v->a[50089] = anon_sym_LT_AMP;
	v->a[50090] = anon_sym_GT_AMP;
	v->a[50091] = anon_sym_GT_PIPE;
	v->a[50092] = anon_sym_LT_AMP_DASH;
	v->a[50093] = anon_sym_GT_AMP_DASH;
	v->a[50094] = 7;
	v->a[50095] = actions(3);
	v->a[50096] = 1;
	v->a[50097] = sym_comment;
	v->a[50098] = actions(1565);
	v->a[50099] = 1;
	small_parse_table_2505(v);
}

/* EOF small_parse_table_500.c */
