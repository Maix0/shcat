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
	v->a[50000] = anon_sym_LT_AMP_DASH;
	v->a[50001] = anon_sym_GT_AMP_DASH;
	v->a[50002] = aux_sym_heredoc_redirect_token1;
	v->a[50003] = 6;
	v->a[50004] = actions(3);
	v->a[50005] = 1;
	v->a[50006] = sym_comment;
	v->a[50007] = actions(1311);
	v->a[50008] = 1;
	v->a[50009] = aux_sym_concatenation_token1;
	v->a[50010] = actions(1742);
	v->a[50011] = 1;
	v->a[50012] = sym__concat;
	v->a[50013] = state(425);
	v->a[50014] = 1;
	v->a[50015] = aux_sym_concatenation_repeat1;
	v->a[50016] = actions(1085);
	v->a[50017] = 2;
	v->a[50018] = sym_file_descriptor;
	v->a[50019] = sym__bare_dollar;
	small_parse_table_2501(v);
}

void	small_parse_table_2501(t_small_parse_table_array *v)
{
	v->a[50020] = actions(1081);
	v->a[50021] = 23;
	v->a[50022] = anon_sym_PIPE;
	v->a[50023] = anon_sym_AMP_AMP;
	v->a[50024] = anon_sym_PIPE_PIPE;
	v->a[50025] = anon_sym_LT;
	v->a[50026] = anon_sym_GT;
	v->a[50027] = anon_sym_GT_GT;
	v->a[50028] = anon_sym_LT_AMP;
	v->a[50029] = anon_sym_GT_AMP;
	v->a[50030] = anon_sym_GT_PIPE;
	v->a[50031] = anon_sym_LT_AMP_DASH;
	v->a[50032] = anon_sym_GT_AMP_DASH;
	v->a[50033] = anon_sym_LT_LT;
	v->a[50034] = anon_sym_LT_LT_DASH;
	v->a[50035] = aux_sym_heredoc_redirect_token1;
	v->a[50036] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[50037] = anon_sym_DOLLAR;
	v->a[50038] = anon_sym_DQUOTE;
	v->a[50039] = sym_raw_string;
	small_parse_table_2502(v);
}

void	small_parse_table_2502(t_small_parse_table_array *v)
{
	v->a[50040] = sym_number;
	v->a[50041] = anon_sym_DOLLAR_LBRACE;
	v->a[50042] = anon_sym_DOLLAR_LPAREN;
	v->a[50043] = anon_sym_BQUOTE;
	v->a[50044] = sym_word;
	v->a[50045] = 4;
	v->a[50046] = actions(3);
	v->a[50047] = 1;
	v->a[50048] = sym_comment;
	v->a[50049] = actions(1686);
	v->a[50050] = 1;
	v->a[50051] = ts_builtin_sym_end;
	v->a[50052] = actions(1577);
	v->a[50053] = 2;
	v->a[50054] = sym_file_descriptor;
	v->a[50055] = sym_variable_name;
	v->a[50056] = actions(1573);
	v->a[50057] = 25;
	v->a[50058] = anon_sym_for;
	v->a[50059] = anon_sym_while;
	small_parse_table_2503(v);
}

void	small_parse_table_2503(t_small_parse_table_array *v)
{
	v->a[50060] = anon_sym_until;
	v->a[50061] = anon_sym_if;
	v->a[50062] = anon_sym_case;
	v->a[50063] = anon_sym_LPAREN;
	v->a[50064] = anon_sym_LBRACE;
	v->a[50065] = anon_sym_BANG;
	v->a[50066] = anon_sym_LT;
	v->a[50067] = anon_sym_GT;
	v->a[50068] = anon_sym_GT_GT;
	v->a[50069] = anon_sym_LT_AMP;
	v->a[50070] = anon_sym_GT_AMP;
	v->a[50071] = anon_sym_GT_PIPE;
	v->a[50072] = anon_sym_LT_AMP_DASH;
	v->a[50073] = anon_sym_GT_AMP_DASH;
	v->a[50074] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[50075] = anon_sym_DOLLAR;
	v->a[50076] = anon_sym_DQUOTE;
	v->a[50077] = sym_raw_string;
	v->a[50078] = sym_number;
	v->a[50079] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_2504(v);
}

void	small_parse_table_2504(t_small_parse_table_array *v)
{
	v->a[50080] = anon_sym_DOLLAR_LPAREN;
	v->a[50081] = anon_sym_BQUOTE;
	v->a[50082] = sym_word;
	v->a[50083] = 4;
	v->a[50084] = actions(3);
	v->a[50085] = 1;
	v->a[50086] = sym_comment;
	v->a[50087] = actions(1686);
	v->a[50088] = 1;
	v->a[50089] = ts_builtin_sym_end;
	v->a[50090] = actions(1577);
	v->a[50091] = 2;
	v->a[50092] = sym_file_descriptor;
	v->a[50093] = sym_variable_name;
	v->a[50094] = actions(1573);
	v->a[50095] = 25;
	v->a[50096] = anon_sym_for;
	v->a[50097] = anon_sym_while;
	v->a[50098] = anon_sym_until;
	v->a[50099] = anon_sym_if;
	small_parse_table_2505(v);
}

/* EOF small_parse_table_500.c */
