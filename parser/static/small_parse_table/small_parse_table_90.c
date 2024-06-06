/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_90.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_450(t_small_parse_table_array *v)
{
	v->a[9000] = anon_sym_DOLLAR_LPAREN;
	v->a[9001] = actions(2026);
	v->a[9002] = 1;
	v->a[9003] = anon_sym_BQUOTE;
	v->a[9004] = actions(2029);
	v->a[9005] = 1;
	v->a[9006] = anon_sym_DOLLAR_BQUOTE;
	v->a[9007] = actions(2032);
	v->a[9008] = 1;
	v->a[9009] = sym_test_operator;
	v->a[9010] = actions(2035);
	v->a[9011] = 1;
	v->a[9012] = sym__brace_start;
	v->a[9013] = state(1205);
	v->a[9014] = 1;
	v->a[9015] = aux_sym__literal_repeat1;
	v->a[9016] = actions(1287);
	v->a[9017] = 2;
	v->a[9018] = sym_file_descriptor;
	v->a[9019] = aux_sym_heredoc_redirect_token1;
	small_parse_table_451(v);
}

void	small_parse_table_451(t_small_parse_table_array *v)
{
	v->a[9020] = actions(1999);
	v->a[9021] = 2;
	v->a[9022] = sym_raw_string;
	v->a[9023] = sym_word;
	v->a[9024] = state(373);
	v->a[9025] = 2;
	v->a[9026] = sym_concatenation;
	v->a[9027] = aux_sym_for_statement_repeat1;
	v->a[9028] = state(791);
	v->a[9029] = 7;
	v->a[9030] = sym_arithmetic_expansion;
	v->a[9031] = sym_brace_expression;
	v->a[9032] = sym_string;
	v->a[9033] = sym_number;
	v->a[9034] = sym_simple_expansion;
	v->a[9035] = sym_expansion;
	v->a[9036] = sym_command_substitution;
	v->a[9037] = actions(1285);
	v->a[9038] = 21;
	v->a[9039] = anon_sym_PIPE;
	small_parse_table_452(v);
}

void	small_parse_table_452(t_small_parse_table_array *v)
{
	v->a[9040] = anon_sym_SEMI_SEMI;
	v->a[9041] = anon_sym_SEMI_AMP;
	v->a[9042] = anon_sym_SEMI_SEMI_AMP;
	v->a[9043] = anon_sym_PIPE_AMP;
	v->a[9044] = anon_sym_AMP_AMP;
	v->a[9045] = anon_sym_PIPE_PIPE;
	v->a[9046] = anon_sym_LT;
	v->a[9047] = anon_sym_GT;
	v->a[9048] = anon_sym_GT_GT;
	v->a[9049] = anon_sym_AMP_GT;
	v->a[9050] = anon_sym_AMP_GT_GT;
	v->a[9051] = anon_sym_LT_AMP;
	v->a[9052] = anon_sym_GT_AMP;
	v->a[9053] = anon_sym_GT_PIPE;
	v->a[9054] = anon_sym_LT_AMP_DASH;
	v->a[9055] = anon_sym_GT_AMP_DASH;
	v->a[9056] = anon_sym_LT_LT;
	v->a[9057] = anon_sym_LT_LT_DASH;
	v->a[9058] = anon_sym_AMP;
	v->a[9059] = anon_sym_SEMI;
	small_parse_table_453(v);
}

void	small_parse_table_453(t_small_parse_table_array *v)
{
	v->a[9060] = 6;
	v->a[9061] = actions(3);
	v->a[9062] = 1;
	v->a[9063] = sym_comment;
	v->a[9064] = actions(2042);
	v->a[9065] = 1;
	v->a[9066] = sym_variable_name;
	v->a[9067] = actions(2040);
	v->a[9068] = 2;
	v->a[9069] = aux_sym__simple_variable_name_token1;
	v->a[9070] = aux_sym__multiline_variable_name_token1;
	v->a[9071] = actions(816);
	v->a[9072] = 3;
	v->a[9073] = sym_file_descriptor;
	v->a[9074] = sym_test_operator;
	v->a[9075] = sym__brace_start;
	v->a[9076] = actions(2038);
	v->a[9077] = 9;
	v->a[9078] = anon_sym_BANG;
	v->a[9079] = anon_sym_DASH;
	small_parse_table_454(v);
}

void	small_parse_table_454(t_small_parse_table_array *v)
{
	v->a[9080] = anon_sym_STAR;
	v->a[9081] = anon_sym_QMARK;
	v->a[9082] = anon_sym_DOLLAR;
	v->a[9083] = anon_sym_POUND;
	v->a[9084] = anon_sym_AT;
	v->a[9085] = anon_sym_0;
	v->a[9086] = anon_sym__;
	v->a[9087] = actions(810);
	v->a[9088] = 32;
	v->a[9089] = anon_sym_PIPE;
	v->a[9090] = anon_sym_RPAREN;
	v->a[9091] = anon_sym_SEMI_SEMI;
	v->a[9092] = anon_sym_PIPE_AMP;
	v->a[9093] = anon_sym_AMP_AMP;
	v->a[9094] = anon_sym_PIPE_PIPE;
	v->a[9095] = anon_sym_LT;
	v->a[9096] = anon_sym_GT;
	v->a[9097] = anon_sym_GT_GT;
	v->a[9098] = anon_sym_AMP_GT;
	v->a[9099] = anon_sym_AMP_GT_GT;
	small_parse_table_455(v);
}

/* EOF small_parse_table_90.c */
