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
	v->a[39000] = anon_sym_GT;
	v->a[39001] = anon_sym_GT_GT;
	v->a[39002] = anon_sym_AMP_GT;
	v->a[39003] = anon_sym_AMP_GT_GT;
	v->a[39004] = anon_sym_LT_AMP;
	v->a[39005] = anon_sym_GT_AMP;
	v->a[39006] = anon_sym_GT_PIPE;
	v->a[39007] = anon_sym_LT_AMP_DASH;
	v->a[39008] = anon_sym_GT_AMP_DASH;
	v->a[39009] = anon_sym_LT_LT;
	v->a[39010] = anon_sym_LT_LT_DASH;
	v->a[39011] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[39012] = anon_sym_AMP;
	v->a[39013] = anon_sym_DOLLAR;
	v->a[39014] = anon_sym_DQUOTE;
	v->a[39015] = sym_raw_string;
	v->a[39016] = aux_sym_number_token1;
	v->a[39017] = aux_sym_number_token2;
	v->a[39018] = anon_sym_DOLLAR_LBRACE;
	v->a[39019] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1951(v);
}

void	small_parse_table_1951(t_small_parse_table_array *v)
{
	v->a[39020] = anon_sym_BQUOTE;
	v->a[39021] = anon_sym_DOLLAR_BQUOTE;
	v->a[39022] = aux_sym__simple_variable_name_token1;
	v->a[39023] = sym_word;
	v->a[39024] = anon_sym_SEMI;
	v->a[39025] = 6;
	v->a[39026] = actions(3);
	v->a[39027] = 1;
	v->a[39028] = sym_comment;
	v->a[39029] = actions(3167);
	v->a[39030] = 1;
	v->a[39031] = aux_sym_concatenation_token1;
	v->a[39032] = actions(3533);
	v->a[39033] = 1;
	v->a[39034] = sym__concat;
	v->a[39035] = state(715);
	v->a[39036] = 1;
	v->a[39037] = aux_sym_concatenation_repeat1;
	v->a[39038] = actions(2690);
	v->a[39039] = 5;
	small_parse_table_1952(v);
}

void	small_parse_table_1952(t_small_parse_table_array *v)
{
	v->a[39040] = sym_file_descriptor;
	v->a[39041] = sym_variable_name;
	v->a[39042] = sym_test_operator;
	v->a[39043] = sym__brace_start;
	v->a[39044] = aux_sym_heredoc_redirect_token1;
	v->a[39045] = actions(2688);
	v->a[39046] = 32;
	v->a[39047] = anon_sym_PIPE;
	v->a[39048] = anon_sym_SEMI_SEMI;
	v->a[39049] = anon_sym_PIPE_AMP;
	v->a[39050] = anon_sym_AMP_AMP;
	v->a[39051] = anon_sym_PIPE_PIPE;
	v->a[39052] = anon_sym_LT;
	v->a[39053] = anon_sym_GT;
	v->a[39054] = anon_sym_GT_GT;
	v->a[39055] = anon_sym_AMP_GT;
	v->a[39056] = anon_sym_AMP_GT_GT;
	v->a[39057] = anon_sym_LT_AMP;
	v->a[39058] = anon_sym_GT_AMP;
	v->a[39059] = anon_sym_GT_PIPE;
	small_parse_table_1953(v);
}

void	small_parse_table_1953(t_small_parse_table_array *v)
{
	v->a[39060] = anon_sym_LT_AMP_DASH;
	v->a[39061] = anon_sym_GT_AMP_DASH;
	v->a[39062] = anon_sym_LT_LT;
	v->a[39063] = anon_sym_LT_LT_DASH;
	v->a[39064] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[39065] = anon_sym_AMP;
	v->a[39066] = anon_sym_DOLLAR;
	v->a[39067] = sym__special_character;
	v->a[39068] = anon_sym_DQUOTE;
	v->a[39069] = sym_raw_string;
	v->a[39070] = aux_sym_number_token1;
	v->a[39071] = aux_sym_number_token2;
	v->a[39072] = anon_sym_DOLLAR_LBRACE;
	v->a[39073] = anon_sym_DOLLAR_LPAREN;
	v->a[39074] = anon_sym_BQUOTE;
	v->a[39075] = anon_sym_DOLLAR_BQUOTE;
	v->a[39076] = aux_sym__simple_variable_name_token1;
	v->a[39077] = sym_word;
	v->a[39078] = anon_sym_SEMI;
	v->a[39079] = 3;
	small_parse_table_1954(v);
}

void	small_parse_table_1954(t_small_parse_table_array *v)
{
	v->a[39080] = actions(3);
	v->a[39081] = 1;
	v->a[39082] = sym_comment;
	v->a[39083] = actions(3024);
	v->a[39084] = 6;
	v->a[39085] = sym_file_descriptor;
	v->a[39086] = sym__concat;
	v->a[39087] = sym_test_operator;
	v->a[39088] = sym__bare_dollar;
	v->a[39089] = sym__brace_start;
	v->a[39090] = aux_sym_heredoc_redirect_token1;
	v->a[39091] = actions(3022);
	v->a[39092] = 34;
	v->a[39093] = anon_sym_LPAREN;
	v->a[39094] = anon_sym_PIPE;
	v->a[39095] = anon_sym_RPAREN;
	v->a[39096] = anon_sym_SEMI_SEMI;
	v->a[39097] = anon_sym_PIPE_AMP;
	v->a[39098] = anon_sym_AMP_AMP;
	v->a[39099] = anon_sym_PIPE_PIPE;
	small_parse_table_1955(v);
}

/* EOF small_parse_table_390.c */
