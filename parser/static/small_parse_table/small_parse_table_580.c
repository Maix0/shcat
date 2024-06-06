/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_580.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2900(t_small_parse_table_array *v)
{
	v->a[58000] = anon_sym_GT;
	v->a[58001] = anon_sym_GT_GT;
	v->a[58002] = anon_sym_AMP_GT;
	v->a[58003] = anon_sym_AMP_GT_GT;
	v->a[58004] = anon_sym_LT_AMP;
	v->a[58005] = anon_sym_GT_AMP;
	v->a[58006] = anon_sym_GT_PIPE;
	v->a[58007] = anon_sym_LT_AMP_DASH;
	v->a[58008] = anon_sym_GT_AMP_DASH;
	v->a[58009] = anon_sym_LT_LT;
	v->a[58010] = anon_sym_LT_LT_DASH;
	v->a[58011] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[58012] = anon_sym_AMP;
	v->a[58013] = anon_sym_DOLLAR;
	v->a[58014] = sym__special_character;
	v->a[58015] = anon_sym_DQUOTE;
	v->a[58016] = sym_raw_string;
	v->a[58017] = aux_sym_number_token1;
	v->a[58018] = aux_sym_number_token2;
	v->a[58019] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_2901(v);
}

void	small_parse_table_2901(t_small_parse_table_array *v)
{
	v->a[58020] = anon_sym_DOLLAR_LPAREN;
	v->a[58021] = anon_sym_BQUOTE;
	v->a[58022] = anon_sym_DOLLAR_BQUOTE;
	v->a[58023] = sym_word;
	v->a[58024] = anon_sym_SEMI;
	v->a[58025] = 6;
	v->a[58026] = actions(3);
	v->a[58027] = 1;
	v->a[58028] = sym_comment;
	v->a[58029] = actions(3167);
	v->a[58030] = 1;
	v->a[58031] = aux_sym_concatenation_token1;
	v->a[58032] = actions(3296);
	v->a[58033] = 1;
	v->a[58034] = sym__concat;
	v->a[58035] = state(1326);
	v->a[58036] = 1;
	v->a[58037] = aux_sym_concatenation_repeat1;
	v->a[58038] = actions(2664);
	v->a[58039] = 5;
	small_parse_table_2902(v);
}

void	small_parse_table_2902(t_small_parse_table_array *v)
{
	v->a[58040] = sym_file_descriptor;
	v->a[58041] = sym_variable_name;
	v->a[58042] = sym_test_operator;
	v->a[58043] = sym__brace_start;
	v->a[58044] = aux_sym_heredoc_redirect_token1;
	v->a[58045] = actions(2662);
	v->a[58046] = 29;
	v->a[58047] = anon_sym_PIPE;
	v->a[58048] = anon_sym_PIPE_AMP;
	v->a[58049] = anon_sym_AMP_AMP;
	v->a[58050] = anon_sym_PIPE_PIPE;
	v->a[58051] = anon_sym_LT;
	v->a[58052] = anon_sym_GT;
	v->a[58053] = anon_sym_GT_GT;
	v->a[58054] = anon_sym_AMP_GT;
	v->a[58055] = anon_sym_AMP_GT_GT;
	v->a[58056] = anon_sym_LT_AMP;
	v->a[58057] = anon_sym_GT_AMP;
	v->a[58058] = anon_sym_GT_PIPE;
	v->a[58059] = anon_sym_LT_AMP_DASH;
	small_parse_table_2903(v);
}

void	small_parse_table_2903(t_small_parse_table_array *v)
{
	v->a[58060] = anon_sym_GT_AMP_DASH;
	v->a[58061] = anon_sym_LT_LT;
	v->a[58062] = anon_sym_LT_LT_DASH;
	v->a[58063] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[58064] = anon_sym_DOLLAR;
	v->a[58065] = sym__special_character;
	v->a[58066] = anon_sym_DQUOTE;
	v->a[58067] = sym_raw_string;
	v->a[58068] = aux_sym_number_token1;
	v->a[58069] = aux_sym_number_token2;
	v->a[58070] = anon_sym_DOLLAR_LBRACE;
	v->a[58071] = anon_sym_DOLLAR_LPAREN;
	v->a[58072] = anon_sym_BQUOTE;
	v->a[58073] = anon_sym_DOLLAR_BQUOTE;
	v->a[58074] = aux_sym__simple_variable_name_token1;
	v->a[58075] = sym_word;
	v->a[58076] = 8;
	v->a[58077] = actions(57);
	v->a[58078] = 1;
	v->a[58079] = sym_comment;
	small_parse_table_2904(v);
}

void	small_parse_table_2904(t_small_parse_table_array *v)
{
	v->a[58080] = actions(3856);
	v->a[58081] = 1;
	v->a[58082] = sym_variable_name;
	v->a[58083] = state(2637);
	v->a[58084] = 2;
	v->a[58085] = sym_variable_assignment;
	v->a[58086] = aux_sym_variable_assignments_repeat1;
	v->a[58087] = state(2632);
	v->a[58088] = 3;
	v->a[58089] = sym_file_redirect;
	v->a[58090] = sym_heredoc_redirect;
	v->a[58091] = aux_sym_redirected_statement_repeat1;
	v->a[58092] = actions(2512);
	v->a[58093] = 5;
	v->a[58094] = anon_sym_DOLLAR;
	v->a[58095] = aux_sym_number_token1;
	v->a[58096] = aux_sym_number_token2;
	v->a[58097] = anon_sym_DOLLAR_LPAREN;
	v->a[58098] = sym_word;
	v->a[58099] = actions(2516);
	small_parse_table_2905(v);
}

/* EOF small_parse_table_580.c */
