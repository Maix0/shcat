/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_390.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1950(t_small_parse_table_array *v)
{
	v->a[39000] = sym_number;
	v->a[39001] = sym_simple_expansion;
	v->a[39002] = sym_expansion;
	v->a[39003] = sym_command_substitution;
	v->a[39004] = sym_process_substitution;
	v->a[39005] = 3;
	v->a[39006] = actions(3);
	v->a[39007] = 1;
	v->a[39008] = sym_comment;
	v->a[39009] = actions(1298);
	v->a[39010] = 6;
	v->a[39011] = sym_file_descriptor;
	v->a[39012] = sym__concat;
	v->a[39013] = sym_test_operator;
	v->a[39014] = sym__bare_dollar;
	v->a[39015] = sym__brace_start;
	v->a[39016] = aux_sym_heredoc_redirect_token1;
	v->a[39017] = actions(1296);
	v->a[39018] = 43;
	v->a[39019] = anon_sym_LPAREN_LPAREN;
	small_parse_table_1951(v);
}

void	small_parse_table_1951(t_small_parse_table_array *v)
{
	v->a[39020] = anon_sym_SEMI;
	v->a[39021] = anon_sym_PIPE_PIPE;
	v->a[39022] = anon_sym_AMP_AMP;
	v->a[39023] = anon_sym_PIPE;
	v->a[39024] = anon_sym_AMP;
	v->a[39025] = anon_sym_EQ_EQ;
	v->a[39026] = anon_sym_LT;
	v->a[39027] = anon_sym_GT;
	v->a[39028] = anon_sym_LT_LT;
	v->a[39029] = anon_sym_GT_GT;
	v->a[39030] = anon_sym_LPAREN;
	v->a[39031] = anon_sym_SEMI_SEMI;
	v->a[39032] = anon_sym_SEMI_AMP;
	v->a[39033] = anon_sym_SEMI_SEMI_AMP;
	v->a[39034] = anon_sym_PIPE_AMP;
	v->a[39035] = anon_sym_EQ_TILDE;
	v->a[39036] = anon_sym_AMP_GT;
	v->a[39037] = anon_sym_AMP_GT_GT;
	v->a[39038] = anon_sym_LT_AMP;
	v->a[39039] = anon_sym_GT_AMP;
	small_parse_table_1952(v);
}

void	small_parse_table_1952(t_small_parse_table_array *v)
{
	v->a[39040] = anon_sym_GT_PIPE;
	v->a[39041] = anon_sym_LT_AMP_DASH;
	v->a[39042] = anon_sym_GT_AMP_DASH;
	v->a[39043] = anon_sym_LT_LT_DASH;
	v->a[39044] = anon_sym_LT_LT_LT;
	v->a[39045] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[39046] = anon_sym_DOLLAR_LBRACK;
	v->a[39047] = aux_sym_concatenation_token1;
	v->a[39048] = anon_sym_DOLLAR;
	v->a[39049] = sym__special_character;
	v->a[39050] = anon_sym_DQUOTE;
	v->a[39051] = sym_raw_string;
	v->a[39052] = sym_ansi_c_string;
	v->a[39053] = aux_sym_number_token1;
	v->a[39054] = aux_sym_number_token2;
	v->a[39055] = anon_sym_DOLLAR_LBRACE;
	v->a[39056] = anon_sym_DOLLAR_LPAREN;
	v->a[39057] = anon_sym_BQUOTE;
	v->a[39058] = anon_sym_DOLLAR_BQUOTE;
	v->a[39059] = anon_sym_LT_LPAREN;
	small_parse_table_1953(v);
}

void	small_parse_table_1953(t_small_parse_table_array *v)
{
	v->a[39060] = anon_sym_GT_LPAREN;
	v->a[39061] = sym_word;
	v->a[39062] = 13;
	v->a[39063] = actions(3);
	v->a[39064] = 1;
	v->a[39065] = sym_comment;
	v->a[39066] = actions(2721);
	v->a[39067] = 1;
	v->a[39068] = ts_builtin_sym_end;
	v->a[39069] = actions(4696);
	v->a[39070] = 1;
	v->a[39071] = sym_variable_name;
	v->a[39072] = actions(5051);
	v->a[39073] = 1;
	v->a[39074] = aux_sym_heredoc_redirect_token1;
	v->a[39075] = state(6757);
	v->a[39076] = 1;
	v->a[39077] = sym_subscript;
	v->a[39078] = actions(4253);
	v->a[39079] = 2;
	small_parse_table_1954(v);
}

void	small_parse_table_1954(t_small_parse_table_array *v)
{
	v->a[39080] = anon_sym_PIPE;
	v->a[39081] = anon_sym_PIPE_AMP;
	v->a[39082] = actions(4690);
	v->a[39083] = 2;
	v->a[39084] = anon_sym_PIPE_PIPE;
	v->a[39085] = anon_sym_AMP_AMP;
	v->a[39086] = actions(4692);
	v->a[39087] = 2;
	v->a[39088] = anon_sym_LT_LT;
	v->a[39089] = anon_sym_LT_LT_DASH;
	v->a[39090] = state(4574);
	v->a[39091] = 2;
	v->a[39092] = sym_variable_assignment;
	v->a[39093] = aux_sym_variable_assignments_repeat1;
	v->a[39094] = actions(4261);
	v->a[39095] = 3;
	v->a[39096] = sym_file_descriptor;
	v->a[39097] = sym_test_operator;
	v->a[39098] = sym__brace_start;
	v->a[39099] = actions(5049);
	small_parse_table_1955(v);
}

/* EOF small_parse_table_390.c */
