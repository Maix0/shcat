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
	v->a[50000] = anon_sym_SEMI_SEMI;
	v->a[50001] = anon_sym_PIPE_AMP;
	v->a[50002] = anon_sym_AMP_AMP;
	v->a[50003] = anon_sym_PIPE_PIPE;
	v->a[50004] = anon_sym_LT;
	v->a[50005] = anon_sym_GT;
	v->a[50006] = anon_sym_GT_GT;
	v->a[50007] = anon_sym_AMP_GT;
	v->a[50008] = anon_sym_AMP_GT_GT;
	v->a[50009] = anon_sym_LT_AMP;
	v->a[50010] = anon_sym_GT_AMP;
	v->a[50011] = anon_sym_GT_PIPE;
	v->a[50012] = anon_sym_LT_AMP_DASH;
	v->a[50013] = anon_sym_GT_AMP_DASH;
	v->a[50014] = anon_sym_LT_LT;
	v->a[50015] = anon_sym_LT_LT_DASH;
	v->a[50016] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[50017] = anon_sym_AMP;
	v->a[50018] = aux_sym_concatenation_token1;
	v->a[50019] = anon_sym_DOLLAR;
	small_parse_table_2501(v);
}

void	small_parse_table_2501(t_small_parse_table_array *v)
{
	v->a[50020] = sym__special_character;
	v->a[50021] = anon_sym_DQUOTE;
	v->a[50022] = sym_raw_string;
	v->a[50023] = aux_sym_number_token1;
	v->a[50024] = aux_sym_number_token2;
	v->a[50025] = anon_sym_DOLLAR_LBRACE;
	v->a[50026] = anon_sym_DOLLAR_LPAREN;
	v->a[50027] = anon_sym_BQUOTE;
	v->a[50028] = anon_sym_DOLLAR_BQUOTE;
	v->a[50029] = sym_word;
	v->a[50030] = anon_sym_SEMI;
	v->a[50031] = 3;
	v->a[50032] = actions(3);
	v->a[50033] = 1;
	v->a[50034] = sym_comment;
	v->a[50035] = actions(3024);
	v->a[50036] = 7;
	v->a[50037] = sym_file_descriptor;
	v->a[50038] = sym__concat;
	v->a[50039] = sym_variable_name;
	small_parse_table_2502(v);
}

void	small_parse_table_2502(t_small_parse_table_array *v)
{
	v->a[50040] = sym_test_operator;
	v->a[50041] = sym__brace_start;
	v->a[50042] = ts_builtin_sym_end;
	v->a[50043] = aux_sym_heredoc_redirect_token1;
	v->a[50044] = actions(3022);
	v->a[50045] = 32;
	v->a[50046] = anon_sym_PIPE;
	v->a[50047] = anon_sym_SEMI_SEMI;
	v->a[50048] = anon_sym_PIPE_AMP;
	v->a[50049] = anon_sym_AMP_AMP;
	v->a[50050] = anon_sym_PIPE_PIPE;
	v->a[50051] = anon_sym_LT;
	v->a[50052] = anon_sym_GT;
	v->a[50053] = anon_sym_GT_GT;
	v->a[50054] = anon_sym_AMP_GT;
	v->a[50055] = anon_sym_AMP_GT_GT;
	v->a[50056] = anon_sym_LT_AMP;
	v->a[50057] = anon_sym_GT_AMP;
	v->a[50058] = anon_sym_GT_PIPE;
	v->a[50059] = anon_sym_LT_AMP_DASH;
	small_parse_table_2503(v);
}

void	small_parse_table_2503(t_small_parse_table_array *v)
{
	v->a[50060] = anon_sym_GT_AMP_DASH;
	v->a[50061] = anon_sym_LT_LT;
	v->a[50062] = anon_sym_LT_LT_DASH;
	v->a[50063] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[50064] = anon_sym_AMP;
	v->a[50065] = aux_sym_concatenation_token1;
	v->a[50066] = anon_sym_DOLLAR;
	v->a[50067] = sym__special_character;
	v->a[50068] = anon_sym_DQUOTE;
	v->a[50069] = sym_raw_string;
	v->a[50070] = aux_sym_number_token1;
	v->a[50071] = aux_sym_number_token2;
	v->a[50072] = anon_sym_DOLLAR_LBRACE;
	v->a[50073] = anon_sym_DOLLAR_LPAREN;
	v->a[50074] = anon_sym_BQUOTE;
	v->a[50075] = anon_sym_DOLLAR_BQUOTE;
	v->a[50076] = sym_word;
	v->a[50077] = anon_sym_SEMI;
	v->a[50078] = 3;
	v->a[50079] = actions(3);
	small_parse_table_2504(v);
}

void	small_parse_table_2504(t_small_parse_table_array *v)
{
	v->a[50080] = 1;
	v->a[50081] = sym_comment;
	v->a[50082] = actions(2778);
	v->a[50083] = 7;
	v->a[50084] = sym_file_descriptor;
	v->a[50085] = sym__concat;
	v->a[50086] = sym_test_operator;
	v->a[50087] = sym__bare_dollar;
	v->a[50088] = sym__brace_start;
	v->a[50089] = ts_builtin_sym_end;
	v->a[50090] = aux_sym_heredoc_redirect_token1;
	v->a[50091] = actions(2776);
	v->a[50092] = 32;
	v->a[50093] = anon_sym_PIPE;
	v->a[50094] = anon_sym_SEMI_SEMI;
	v->a[50095] = anon_sym_PIPE_AMP;
	v->a[50096] = anon_sym_AMP_AMP;
	v->a[50097] = anon_sym_PIPE_PIPE;
	v->a[50098] = anon_sym_LT;
	v->a[50099] = anon_sym_GT;
	small_parse_table_2505(v);
}

/* EOF small_parse_table_500.c */
