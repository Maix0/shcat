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
	v->a[50000] = anon_sym_GT_EQ;
	v->a[50001] = anon_sym_LT_LT;
	v->a[50002] = anon_sym_GT_GT;
	v->a[50003] = anon_sym_PLUS;
	v->a[50004] = anon_sym_SLASH;
	v->a[50005] = anon_sym_PERCENT;
	v->a[50006] = anon_sym_STAR_STAR;
	v->a[50007] = anon_sym_EQ_TILDE;
	v->a[50008] = 3;
	v->a[50009] = actions(3);
	v->a[50010] = 1;
	v->a[50011] = sym_comment;
	v->a[50012] = actions(1342);
	v->a[50013] = 6;
	v->a[50014] = sym_file_descriptor;
	v->a[50015] = sym__concat;
	v->a[50016] = sym_variable_name;
	v->a[50017] = sym_test_operator;
	v->a[50018] = sym__brace_start;
	v->a[50019] = aux_sym_heredoc_redirect_token1;
	small_parse_table_2501(v);
}

void	small_parse_table_2501(t_small_parse_table_array *v)
{
	v->a[50020] = actions(1340);
	v->a[50021] = 41;
	v->a[50022] = anon_sym_LPAREN_LPAREN;
	v->a[50023] = anon_sym_SEMI;
	v->a[50024] = anon_sym_PIPE_PIPE;
	v->a[50025] = anon_sym_AMP_AMP;
	v->a[50026] = anon_sym_PIPE;
	v->a[50027] = anon_sym_AMP;
	v->a[50028] = anon_sym_LT;
	v->a[50029] = anon_sym_GT;
	v->a[50030] = anon_sym_LT_LT;
	v->a[50031] = anon_sym_GT_GT;
	v->a[50032] = anon_sym_esac;
	v->a[50033] = anon_sym_SEMI_SEMI;
	v->a[50034] = anon_sym_SEMI_AMP;
	v->a[50035] = anon_sym_SEMI_SEMI_AMP;
	v->a[50036] = anon_sym_PIPE_AMP;
	v->a[50037] = anon_sym_AMP_GT;
	v->a[50038] = anon_sym_AMP_GT_GT;
	v->a[50039] = anon_sym_LT_AMP;
	small_parse_table_2502(v);
}

void	small_parse_table_2502(t_small_parse_table_array *v)
{
	v->a[50040] = anon_sym_GT_AMP;
	v->a[50041] = anon_sym_GT_PIPE;
	v->a[50042] = anon_sym_LT_AMP_DASH;
	v->a[50043] = anon_sym_GT_AMP_DASH;
	v->a[50044] = anon_sym_LT_LT_DASH;
	v->a[50045] = anon_sym_LT_LT_LT;
	v->a[50046] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[50047] = anon_sym_DOLLAR_LBRACK;
	v->a[50048] = aux_sym_concatenation_token1;
	v->a[50049] = anon_sym_DOLLAR;
	v->a[50050] = sym__special_character;
	v->a[50051] = anon_sym_DQUOTE;
	v->a[50052] = sym_raw_string;
	v->a[50053] = sym_ansi_c_string;
	v->a[50054] = aux_sym_number_token1;
	v->a[50055] = aux_sym_number_token2;
	v->a[50056] = anon_sym_DOLLAR_LBRACE;
	v->a[50057] = anon_sym_DOLLAR_LPAREN;
	v->a[50058] = anon_sym_BQUOTE;
	v->a[50059] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_2503(v);
}

void	small_parse_table_2503(t_small_parse_table_array *v)
{
	v->a[50060] = anon_sym_LT_LPAREN;
	v->a[50061] = anon_sym_GT_LPAREN;
	v->a[50062] = sym_word;
	v->a[50063] = 6;
	v->a[50064] = actions(3);
	v->a[50065] = 1;
	v->a[50066] = sym_comment;
	v->a[50067] = actions(5397);
	v->a[50068] = 1;
	v->a[50069] = aux_sym_concatenation_token1;
	v->a[50070] = actions(5399);
	v->a[50071] = 1;
	v->a[50072] = sym__concat;
	v->a[50073] = state(1257);
	v->a[50074] = 1;
	v->a[50075] = aux_sym_concatenation_repeat1;
	v->a[50076] = actions(5375);
	v->a[50077] = 5;
	v->a[50078] = sym_file_descriptor;
	v->a[50079] = sym_variable_name;
	small_parse_table_2504(v);
}

void	small_parse_table_2504(t_small_parse_table_array *v)
{
	v->a[50080] = sym_test_operator;
	v->a[50081] = sym__brace_start;
	v->a[50082] = aux_sym_heredoc_redirect_token1;
	v->a[50083] = actions(5373);
	v->a[50084] = 39;
	v->a[50085] = anon_sym_LPAREN_LPAREN;
	v->a[50086] = anon_sym_SEMI;
	v->a[50087] = anon_sym_PIPE_PIPE;
	v->a[50088] = anon_sym_AMP_AMP;
	v->a[50089] = anon_sym_PIPE;
	v->a[50090] = anon_sym_AMP;
	v->a[50091] = anon_sym_LT;
	v->a[50092] = anon_sym_GT;
	v->a[50093] = anon_sym_LT_LT;
	v->a[50094] = anon_sym_GT_GT;
	v->a[50095] = anon_sym_SEMI_SEMI;
	v->a[50096] = anon_sym_SEMI_AMP;
	v->a[50097] = anon_sym_SEMI_SEMI_AMP;
	v->a[50098] = anon_sym_PIPE_AMP;
	v->a[50099] = anon_sym_AMP_GT;
	small_parse_table_2505(v);
}

/* EOF small_parse_table_500.c */
