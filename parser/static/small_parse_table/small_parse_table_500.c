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
	v->a[50000] = anon_sym_RPAREN;
	v->a[50001] = actions(1698);
	v->a[50002] = 9;
	v->a[50003] = anon_sym_PIPE;
	v->a[50004] = anon_sym_SEMI_SEMI;
	v->a[50005] = anon_sym_AMP_AMP;
	v->a[50006] = anon_sym_PIPE_PIPE;
	v->a[50007] = anon_sym_LT_LT;
	v->a[50008] = anon_sym_LT_LT_DASH;
	v->a[50009] = aux_sym_heredoc_redirect_token1;
	v->a[50010] = anon_sym_AMP;
	v->a[50011] = anon_sym_SEMI;
	v->a[50012] = actions(1696);
	v->a[50013] = 10;
	v->a[50014] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[50015] = anon_sym_DOLLAR;
	v->a[50016] = anon_sym_DQUOTE;
	v->a[50017] = sym_raw_string;
	v->a[50018] = aux_sym_number_token1;
	v->a[50019] = aux_sym_number_token2;
	small_parse_table_2501(v);
}

void	small_parse_table_2501(t_small_parse_table_array *v)
{
	v->a[50020] = anon_sym_DOLLAR_LBRACE;
	v->a[50021] = anon_sym_DOLLAR_LPAREN;
	v->a[50022] = anon_sym_BQUOTE;
	v->a[50023] = sym_word;
	v->a[50024] = actions(1703);
	v->a[50025] = 10;
	v->a[50026] = anon_sym_LT;
	v->a[50027] = anon_sym_GT;
	v->a[50028] = anon_sym_GT_GT;
	v->a[50029] = anon_sym_AMP_GT;
	v->a[50030] = anon_sym_AMP_GT_GT;
	v->a[50031] = anon_sym_LT_AMP;
	v->a[50032] = anon_sym_GT_AMP;
	v->a[50033] = anon_sym_GT_PIPE;
	v->a[50034] = anon_sym_LT_AMP_DASH;
	v->a[50035] = anon_sym_GT_AMP_DASH;
	v->a[50036] = 5;
	v->a[50037] = actions(3);
	v->a[50038] = 1;
	v->a[50039] = sym_comment;
	small_parse_table_2502(v);
}

void	small_parse_table_2502(t_small_parse_table_array *v)
{
	v->a[50040] = actions(1006);
	v->a[50041] = 1;
	v->a[50042] = sym_variable_name;
	v->a[50043] = actions(1842);
	v->a[50044] = 1;
	v->a[50045] = sym_file_descriptor;
	v->a[50046] = actions(1000);
	v->a[50047] = 10;
	v->a[50048] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[50049] = anon_sym_DOLLAR;
	v->a[50050] = anon_sym_DQUOTE;
	v->a[50051] = sym_raw_string;
	v->a[50052] = aux_sym_number_token1;
	v->a[50053] = aux_sym_number_token2;
	v->a[50054] = anon_sym_DOLLAR_LBRACE;
	v->a[50055] = anon_sym_DOLLAR_LPAREN;
	v->a[50056] = anon_sym_BQUOTE;
	v->a[50057] = sym_word;
	v->a[50058] = actions(1840);
	v->a[50059] = 20;
	small_parse_table_2503(v);
}

void	small_parse_table_2503(t_small_parse_table_array *v)
{
	v->a[50060] = anon_sym_PIPE;
	v->a[50061] = anon_sym_RPAREN;
	v->a[50062] = anon_sym_SEMI_SEMI;
	v->a[50063] = anon_sym_AMP_AMP;
	v->a[50064] = anon_sym_PIPE_PIPE;
	v->a[50065] = anon_sym_LT;
	v->a[50066] = anon_sym_GT;
	v->a[50067] = anon_sym_GT_GT;
	v->a[50068] = anon_sym_AMP_GT;
	v->a[50069] = anon_sym_AMP_GT_GT;
	v->a[50070] = anon_sym_LT_AMP;
	v->a[50071] = anon_sym_GT_AMP;
	v->a[50072] = anon_sym_GT_PIPE;
	v->a[50073] = anon_sym_LT_AMP_DASH;
	v->a[50074] = anon_sym_GT_AMP_DASH;
	v->a[50075] = anon_sym_LT_LT;
	v->a[50076] = anon_sym_LT_LT_DASH;
	v->a[50077] = aux_sym_heredoc_redirect_token1;
	v->a[50078] = anon_sym_AMP;
	v->a[50079] = anon_sym_SEMI;
	small_parse_table_2504(v);
}

void	small_parse_table_2504(t_small_parse_table_array *v)
{
	v->a[50080] = 7;
	v->a[50081] = actions(3);
	v->a[50082] = 1;
	v->a[50083] = sym_comment;
	v->a[50084] = actions(1706);
	v->a[50085] = 1;
	v->a[50086] = sym_file_descriptor;
	v->a[50087] = actions(1709);
	v->a[50088] = 1;
	v->a[50089] = sym_variable_name;
	v->a[50090] = actions(1844);
	v->a[50091] = 1;
	v->a[50092] = anon_sym_RPAREN;
	v->a[50093] = actions(1698);
	v->a[50094] = 9;
	v->a[50095] = anon_sym_PIPE;
	v->a[50096] = anon_sym_SEMI_SEMI;
	v->a[50097] = anon_sym_AMP_AMP;
	v->a[50098] = anon_sym_PIPE_PIPE;
	v->a[50099] = anon_sym_LT_LT;
	small_parse_table_2505(v);
}

/* EOF small_parse_table_500.c */
