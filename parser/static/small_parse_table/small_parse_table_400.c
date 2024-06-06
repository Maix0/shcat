/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_400.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2000(t_small_parse_table_array *v)
{
	v->a[40000] = sym_comment;
	v->a[40001] = actions(2888);
	v->a[40002] = 7;
	v->a[40003] = sym_file_descriptor;
	v->a[40004] = sym__concat;
	v->a[40005] = sym_test_operator;
	v->a[40006] = sym__bare_dollar;
	v->a[40007] = sym__brace_start;
	v->a[40008] = ts_builtin_sym_end;
	v->a[40009] = aux_sym_heredoc_redirect_token1;
	v->a[40010] = actions(2886);
	v->a[40011] = 33;
	v->a[40012] = anon_sym_LPAREN;
	v->a[40013] = anon_sym_PIPE;
	v->a[40014] = anon_sym_SEMI_SEMI;
	v->a[40015] = anon_sym_PIPE_AMP;
	v->a[40016] = anon_sym_AMP_AMP;
	v->a[40017] = anon_sym_PIPE_PIPE;
	v->a[40018] = anon_sym_LT;
	v->a[40019] = anon_sym_GT;
	small_parse_table_2001(v);
}

void	small_parse_table_2001(t_small_parse_table_array *v)
{
	v->a[40020] = anon_sym_GT_GT;
	v->a[40021] = anon_sym_AMP_GT;
	v->a[40022] = anon_sym_AMP_GT_GT;
	v->a[40023] = anon_sym_LT_AMP;
	v->a[40024] = anon_sym_GT_AMP;
	v->a[40025] = anon_sym_GT_PIPE;
	v->a[40026] = anon_sym_LT_AMP_DASH;
	v->a[40027] = anon_sym_GT_AMP_DASH;
	v->a[40028] = anon_sym_LT_LT;
	v->a[40029] = anon_sym_LT_LT_DASH;
	v->a[40030] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[40031] = anon_sym_AMP;
	v->a[40032] = aux_sym_concatenation_token1;
	v->a[40033] = anon_sym_DOLLAR;
	v->a[40034] = sym__special_character;
	v->a[40035] = anon_sym_DQUOTE;
	v->a[40036] = sym_raw_string;
	v->a[40037] = aux_sym_number_token1;
	v->a[40038] = aux_sym_number_token2;
	v->a[40039] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_2002(v);
}

void	small_parse_table_2002(t_small_parse_table_array *v)
{
	v->a[40040] = anon_sym_DOLLAR_LPAREN;
	v->a[40041] = anon_sym_BQUOTE;
	v->a[40042] = anon_sym_DOLLAR_BQUOTE;
	v->a[40043] = sym_word;
	v->a[40044] = anon_sym_SEMI;
	v->a[40045] = 6;
	v->a[40046] = actions(3);
	v->a[40047] = 1;
	v->a[40048] = sym_comment;
	v->a[40049] = actions(3438);
	v->a[40050] = 1;
	v->a[40051] = aux_sym_concatenation_token1;
	v->a[40052] = actions(3562);
	v->a[40053] = 1;
	v->a[40054] = sym__concat;
	v->a[40055] = state(897);
	v->a[40056] = 1;
	v->a[40057] = aux_sym_concatenation_repeat1;
	v->a[40058] = actions(2696);
	v->a[40059] = 6;
	small_parse_table_2003(v);
}

void	small_parse_table_2003(t_small_parse_table_array *v)
{
	v->a[40060] = sym_file_descriptor;
	v->a[40061] = sym_variable_name;
	v->a[40062] = sym_test_operator;
	v->a[40063] = sym__brace_start;
	v->a[40064] = ts_builtin_sym_end;
	v->a[40065] = aux_sym_heredoc_redirect_token1;
	v->a[40066] = actions(2694);
	v->a[40067] = 31;
	v->a[40068] = anon_sym_PIPE;
	v->a[40069] = anon_sym_SEMI_SEMI;
	v->a[40070] = anon_sym_PIPE_AMP;
	v->a[40071] = anon_sym_AMP_AMP;
	v->a[40072] = anon_sym_PIPE_PIPE;
	v->a[40073] = anon_sym_LT;
	v->a[40074] = anon_sym_GT;
	v->a[40075] = anon_sym_GT_GT;
	v->a[40076] = anon_sym_AMP_GT;
	v->a[40077] = anon_sym_AMP_GT_GT;
	v->a[40078] = anon_sym_LT_AMP;
	v->a[40079] = anon_sym_GT_AMP;
	small_parse_table_2004(v);
}

void	small_parse_table_2004(t_small_parse_table_array *v)
{
	v->a[40080] = anon_sym_GT_PIPE;
	v->a[40081] = anon_sym_LT_AMP_DASH;
	v->a[40082] = anon_sym_GT_AMP_DASH;
	v->a[40083] = anon_sym_LT_LT;
	v->a[40084] = anon_sym_LT_LT_DASH;
	v->a[40085] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[40086] = anon_sym_AMP;
	v->a[40087] = anon_sym_DOLLAR;
	v->a[40088] = sym__special_character;
	v->a[40089] = anon_sym_DQUOTE;
	v->a[40090] = sym_raw_string;
	v->a[40091] = aux_sym_number_token1;
	v->a[40092] = aux_sym_number_token2;
	v->a[40093] = anon_sym_DOLLAR_LBRACE;
	v->a[40094] = anon_sym_DOLLAR_LPAREN;
	v->a[40095] = anon_sym_BQUOTE;
	v->a[40096] = anon_sym_DOLLAR_BQUOTE;
	v->a[40097] = sym_word;
	v->a[40098] = anon_sym_SEMI;
	v->a[40099] = 5;
	small_parse_table_2005(v);
}

/* EOF small_parse_table_400.c */
