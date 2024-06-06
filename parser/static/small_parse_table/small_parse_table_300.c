/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_300.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1500(t_small_parse_table_array *v)
{
	v->a[30000] = anon_sym_AMP;
	v->a[30001] = aux_sym_concatenation_token1;
	v->a[30002] = anon_sym_DOLLAR;
	v->a[30003] = sym__special_character;
	v->a[30004] = anon_sym_DQUOTE;
	v->a[30005] = sym_raw_string;
	v->a[30006] = aux_sym_number_token1;
	v->a[30007] = aux_sym_number_token2;
	v->a[30008] = anon_sym_DOLLAR_LBRACE;
	v->a[30009] = anon_sym_DOLLAR_LPAREN;
	v->a[30010] = anon_sym_BQUOTE;
	v->a[30011] = anon_sym_DOLLAR_BQUOTE;
	v->a[30012] = sym_word;
	v->a[30013] = anon_sym_SEMI;
	v->a[30014] = 11;
	v->a[30015] = actions(3);
	v->a[30016] = 1;
	v->a[30017] = sym_comment;
	v->a[30018] = actions(3241);
	v->a[30019] = 1;
	small_parse_table_1501(v);
}

void	small_parse_table_1501(t_small_parse_table_array *v)
{
	v->a[30020] = sym_variable_name;
	v->a[30021] = actions(3366);
	v->a[30022] = 1;
	v->a[30023] = aux_sym_heredoc_redirect_token1;
	v->a[30024] = actions(2516);
	v->a[30025] = 2;
	v->a[30026] = anon_sym_PIPE;
	v->a[30027] = anon_sym_PIPE_AMP;
	v->a[30028] = actions(2945);
	v->a[30029] = 2;
	v->a[30030] = anon_sym_LT_LT;
	v->a[30031] = anon_sym_LT_LT_DASH;
	v->a[30032] = actions(3300);
	v->a[30033] = 2;
	v->a[30034] = anon_sym_AMP_AMP;
	v->a[30035] = anon_sym_PIPE_PIPE;
	v->a[30036] = state(2166);
	v->a[30037] = 2;
	v->a[30038] = sym_variable_assignment;
	v->a[30039] = aux_sym_variable_assignments_repeat1;
	small_parse_table_1502(v);
}

void	small_parse_table_1502(t_small_parse_table_array *v)
{
	v->a[30040] = actions(2526);
	v->a[30041] = 3;
	v->a[30042] = sym_file_descriptor;
	v->a[30043] = sym_test_operator;
	v->a[30044] = sym__brace_start;
	v->a[30045] = actions(3364);
	v->a[30046] = 3;
	v->a[30047] = anon_sym_SEMI_SEMI;
	v->a[30048] = anon_sym_AMP;
	v->a[30049] = anon_sym_SEMI;
	v->a[30050] = state(2295);
	v->a[30051] = 3;
	v->a[30052] = sym_file_redirect;
	v->a[30053] = sym_heredoc_redirect;
	v->a[30054] = aux_sym_redirected_statement_repeat1;
	v->a[30055] = actions(2512);
	v->a[30056] = 22;
	v->a[30057] = anon_sym_LT;
	v->a[30058] = anon_sym_GT;
	v->a[30059] = anon_sym_GT_GT;
	small_parse_table_1503(v);
}

void	small_parse_table_1503(t_small_parse_table_array *v)
{
	v->a[30060] = anon_sym_AMP_GT;
	v->a[30061] = anon_sym_AMP_GT_GT;
	v->a[30062] = anon_sym_LT_AMP;
	v->a[30063] = anon_sym_GT_AMP;
	v->a[30064] = anon_sym_GT_PIPE;
	v->a[30065] = anon_sym_LT_AMP_DASH;
	v->a[30066] = anon_sym_GT_AMP_DASH;
	v->a[30067] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30068] = anon_sym_DOLLAR;
	v->a[30069] = sym__special_character;
	v->a[30070] = anon_sym_DQUOTE;
	v->a[30071] = sym_raw_string;
	v->a[30072] = aux_sym_number_token1;
	v->a[30073] = aux_sym_number_token2;
	v->a[30074] = anon_sym_DOLLAR_LBRACE;
	v->a[30075] = anon_sym_DOLLAR_LPAREN;
	v->a[30076] = anon_sym_BQUOTE;
	v->a[30077] = anon_sym_DOLLAR_BQUOTE;
	v->a[30078] = sym_word;
	v->a[30079] = 9;
	small_parse_table_1504(v);
}

void	small_parse_table_1504(t_small_parse_table_array *v)
{
	v->a[30080] = actions(3);
	v->a[30081] = 1;
	v->a[30082] = sym_comment;
	v->a[30083] = actions(2632);
	v->a[30084] = 1;
	v->a[30085] = aux_sym_heredoc_redirect_token1;
	v->a[30086] = actions(3368);
	v->a[30087] = 1;
	v->a[30088] = sym_variable_name;
	v->a[30089] = actions(2516);
	v->a[30090] = 2;
	v->a[30091] = anon_sym_PIPE;
	v->a[30092] = anon_sym_PIPE_AMP;
	v->a[30093] = state(2139);
	v->a[30094] = 2;
	v->a[30095] = sym_variable_assignment;
	v->a[30096] = aux_sym_variable_assignments_repeat1;
	v->a[30097] = actions(2526);
	v->a[30098] = 3;
	v->a[30099] = sym_file_descriptor;
	small_parse_table_1505(v);
}

/* EOF small_parse_table_300.c */
