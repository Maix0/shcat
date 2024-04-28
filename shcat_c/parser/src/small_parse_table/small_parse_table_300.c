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
	v->a[30000] = sym_command_substitution;
	v->a[30001] = sym_process_substitution;
	v->a[30002] = actions(2072);
	v->a[30003] = 17;
	v->a[30004] = anon_sym_PIPE_PIPE;
	v->a[30005] = anon_sym_AMP_AMP;
	v->a[30006] = anon_sym_PIPE;
	v->a[30007] = anon_sym_LT;
	v->a[30008] = anon_sym_GT;
	v->a[30009] = anon_sym_LT_LT;
	v->a[30010] = anon_sym_GT_GT;
	v->a[30011] = anon_sym_PIPE_AMP;
	v->a[30012] = anon_sym_AMP_GT;
	v->a[30013] = anon_sym_AMP_GT_GT;
	v->a[30014] = anon_sym_LT_AMP;
	v->a[30015] = anon_sym_GT_AMP;
	v->a[30016] = anon_sym_GT_PIPE;
	v->a[30017] = anon_sym_LT_AMP_DASH;
	v->a[30018] = anon_sym_GT_AMP_DASH;
	v->a[30019] = anon_sym_LT_LT_DASH;
	small_parse_table_1501(v);
}

void	small_parse_table_1501(t_small_parse_table_array *v)
{
	v->a[30020] = anon_sym_LT_LT_LT;
	v->a[30021] = 21;
	v->a[30022] = actions(3);
	v->a[30023] = 1;
	v->a[30024] = sym_comment;
	v->a[30025] = actions(3115);
	v->a[30026] = 1;
	v->a[30027] = anon_sym_DQUOTE;
	v->a[30028] = actions(3395);
	v->a[30029] = 1;
	v->a[30030] = anon_sym_DOLLAR_LBRACK;
	v->a[30031] = actions(3397);
	v->a[30032] = 1;
	v->a[30033] = anon_sym_DOLLAR;
	v->a[30034] = actions(3401);
	v->a[30035] = 1;
	v->a[30036] = aux_sym_number_token1;
	v->a[30037] = actions(3403);
	v->a[30038] = 1;
	v->a[30039] = aux_sym_number_token2;
	small_parse_table_1502(v);
}

void	small_parse_table_1502(t_small_parse_table_array *v)
{
	v->a[30040] = actions(3405);
	v->a[30041] = 1;
	v->a[30042] = anon_sym_DOLLAR_LBRACE;
	v->a[30043] = actions(3407);
	v->a[30044] = 1;
	v->a[30045] = anon_sym_DOLLAR_LPAREN;
	v->a[30046] = actions(3409);
	v->a[30047] = 1;
	v->a[30048] = anon_sym_BQUOTE;
	v->a[30049] = actions(3411);
	v->a[30050] = 1;
	v->a[30051] = anon_sym_DOLLAR_BQUOTE;
	v->a[30052] = actions(3417);
	v->a[30053] = 1;
	v->a[30054] = sym__brace_start;
	v->a[30055] = actions(4486);
	v->a[30056] = 1;
	v->a[30057] = sym__special_character;
	v->a[30058] = actions(4488);
	v->a[30059] = 1;
	small_parse_table_1503(v);
}

void	small_parse_table_1503(t_small_parse_table_array *v)
{
	v->a[30060] = sym_test_operator;
	v->a[30061] = state(2161);
	v->a[30062] = 1;
	v->a[30063] = aux_sym__literal_repeat1;
	v->a[30064] = actions(2096);
	v->a[30065] = 2;
	v->a[30066] = sym_file_descriptor;
	v->a[30067] = aux_sym_heredoc_redirect_token1;
	v->a[30068] = actions(3393);
	v->a[30069] = 2;
	v->a[30070] = anon_sym_LPAREN_LPAREN;
	v->a[30071] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30072] = actions(3413);
	v->a[30073] = 2;
	v->a[30074] = anon_sym_LT_LPAREN;
	v->a[30075] = anon_sym_GT_LPAREN;
	v->a[30076] = state(860);
	v->a[30077] = 2;
	v->a[30078] = sym_concatenation;
	v->a[30079] = aux_sym_for_statement_repeat1;
	small_parse_table_1504(v);
}

void	small_parse_table_1504(t_small_parse_table_array *v)
{
	v->a[30080] = actions(4484);
	v->a[30081] = 3;
	v->a[30082] = sym_raw_string;
	v->a[30083] = sym_ansi_c_string;
	v->a[30084] = sym_word;
	v->a[30085] = state(2422);
	v->a[30086] = 9;
	v->a[30087] = sym_arithmetic_expansion;
	v->a[30088] = sym_brace_expression;
	v->a[30089] = sym_string;
	v->a[30090] = sym_translated_string;
	v->a[30091] = sym_number;
	v->a[30092] = sym_simple_expansion;
	v->a[30093] = sym_expansion;
	v->a[30094] = sym_command_substitution;
	v->a[30095] = sym_process_substitution;
	v->a[30096] = actions(2094);
	v->a[30097] = 17;
	v->a[30098] = anon_sym_PIPE_PIPE;
	v->a[30099] = anon_sym_AMP_AMP;
	small_parse_table_1505(v);
}

/* EOF small_parse_table_300.c */
