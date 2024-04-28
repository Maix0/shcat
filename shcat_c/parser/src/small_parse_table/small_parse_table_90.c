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
	v->a[9000] = 1;
	v->a[9001] = aux_sym__literal_repeat1;
	v->a[9002] = state(2368);
	v->a[9003] = 1;
	v->a[9004] = sym_concatenation;
	v->a[9005] = state(2941);
	v->a[9006] = 1;
	v->a[9007] = sym_variable_assignment;
	v->a[9008] = state(5624);
	v->a[9009] = 1;
	v->a[9010] = sym_command;
	v->a[9011] = state(6756);
	v->a[9012] = 1;
	v->a[9013] = sym_subscript;
	v->a[9014] = actions(1051);
	v->a[9015] = 2;
	v->a[9016] = sym_raw_string;
	v->a[9017] = sym_ansi_c_string;
	v->a[9018] = actions(1065);
	v->a[9019] = 2;
	small_parse_table_451(v);
}

void	small_parse_table_451(t_small_parse_table_array *v)
{
	v->a[9020] = anon_sym_LT_LPAREN;
	v->a[9021] = anon_sym_GT_LPAREN;
	v->a[9022] = actions(1392);
	v->a[9023] = 2;
	v->a[9024] = anon_sym_LT_AMP_DASH;
	v->a[9025] = anon_sym_GT_AMP_DASH;
	v->a[9026] = state(3581);
	v->a[9027] = 2;
	v->a[9028] = sym_file_redirect;
	v->a[9029] = sym_herestring_redirect;
	v->a[9030] = state(5623);
	v->a[9031] = 2;
	v->a[9032] = sym_subshell;
	v->a[9033] = sym_test_command;
	v->a[9034] = actions(1390);
	v->a[9035] = 3;
	v->a[9036] = anon_sym_GT_GT;
	v->a[9037] = anon_sym_AMP_GT_GT;
	v->a[9038] = anon_sym_GT_PIPE;
	v->a[9039] = actions(1388);
	small_parse_table_452(v);
}

void	small_parse_table_452(t_small_parse_table_array *v)
{
	v->a[9040] = 5;
	v->a[9041] = anon_sym_LT;
	v->a[9042] = anon_sym_GT;
	v->a[9043] = anon_sym_AMP_GT;
	v->a[9044] = anon_sym_LT_AMP;
	v->a[9045] = anon_sym_GT_AMP;
	v->a[9046] = state(1799);
	v->a[9047] = 9;
	v->a[9048] = sym_arithmetic_expansion;
	v->a[9049] = sym_brace_expression;
	v->a[9050] = sym_string;
	v->a[9051] = sym_translated_string;
	v->a[9052] = sym_number;
	v->a[9053] = sym_simple_expansion;
	v->a[9054] = sym_expansion;
	v->a[9055] = sym_command_substitution;
	v->a[9056] = sym_process_substitution;
	v->a[9057] = 29;
	v->a[9058] = actions(71);
	v->a[9059] = 1;
	small_parse_table_453(v);
}

void	small_parse_table_453(t_small_parse_table_array *v)
{
	v->a[9060] = sym_comment;
	v->a[9061] = actions(1033);
	v->a[9062] = 1;
	v->a[9063] = anon_sym_LPAREN;
	v->a[9064] = actions(2628);
	v->a[9065] = 1;
	v->a[9066] = sym_word;
	v->a[9067] = actions(2634);
	v->a[9068] = 1;
	v->a[9069] = anon_sym_LT_LT_LT;
	v->a[9070] = actions(2636);
	v->a[9071] = 1;
	v->a[9072] = anon_sym_DOLLAR_LBRACK;
	v->a[9073] = actions(2638);
	v->a[9074] = 1;
	v->a[9075] = anon_sym_DOLLAR;
	v->a[9076] = actions(2640);
	v->a[9077] = 1;
	v->a[9078] = sym__special_character;
	v->a[9079] = actions(2642);
	small_parse_table_454(v);
}

void	small_parse_table_454(t_small_parse_table_array *v)
{
	v->a[9080] = 1;
	v->a[9081] = anon_sym_DQUOTE;
	v->a[9082] = actions(2646);
	v->a[9083] = 1;
	v->a[9084] = aux_sym_number_token1;
	v->a[9085] = actions(2648);
	v->a[9086] = 1;
	v->a[9087] = aux_sym_number_token2;
	v->a[9088] = actions(2650);
	v->a[9089] = 1;
	v->a[9090] = anon_sym_DOLLAR_LBRACE;
	v->a[9091] = actions(2652);
	v->a[9092] = 1;
	v->a[9093] = anon_sym_DOLLAR_LPAREN;
	v->a[9094] = actions(2654);
	v->a[9095] = 1;
	v->a[9096] = anon_sym_BQUOTE;
	v->a[9097] = actions(2656);
	v->a[9098] = 1;
	v->a[9099] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_455(v);
}

/* EOF small_parse_table_90.c */
