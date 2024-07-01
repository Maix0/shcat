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
	v->a[9001] = sym_comment;
	v->a[9002] = actions(9);
	v->a[9003] = 1;
	v->a[9004] = anon_sym_for;
	v->a[9005] = actions(13);
	v->a[9006] = 1;
	v->a[9007] = anon_sym_if;
	v->a[9008] = actions(15);
	v->a[9009] = 1;
	v->a[9010] = anon_sym_case;
	v->a[9011] = actions(17);
	v->a[9012] = 1;
	v->a[9013] = anon_sym_LPAREN;
	v->a[9014] = actions(19);
	v->a[9015] = 1;
	v->a[9016] = anon_sym_LBRACE;
	v->a[9017] = actions(59);
	v->a[9018] = 1;
	v->a[9019] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_451(v);
}

void	small_parse_table_451(t_small_parse_table_array *v)
{
	v->a[9020] = actions(61);
	v->a[9021] = 1;
	v->a[9022] = anon_sym_DOLLAR;
	v->a[9023] = actions(63);
	v->a[9024] = 1;
	v->a[9025] = anon_sym_DQUOTE;
	v->a[9026] = actions(67);
	v->a[9027] = 1;
	v->a[9028] = anon_sym_DOLLAR_LBRACE;
	v->a[9029] = actions(69);
	v->a[9030] = 1;
	v->a[9031] = anon_sym_DOLLAR_LPAREN;
	v->a[9032] = actions(71);
	v->a[9033] = 1;
	v->a[9034] = anon_sym_BQUOTE;
	v->a[9035] = actions(220);
	v->a[9036] = 1;
	v->a[9037] = sym_word;
	v->a[9038] = actions(222);
	v->a[9039] = 1;
	small_parse_table_452(v);
}

void	small_parse_table_452(t_small_parse_table_array *v)
{
	v->a[9040] = anon_sym_BANG;
	v->a[9041] = actions(230);
	v->a[9042] = 1;
	v->a[9043] = sym_file_descriptor;
	v->a[9044] = actions(232);
	v->a[9045] = 1;
	v->a[9046] = sym_variable_name;
	v->a[9047] = state(133);
	v->a[9048] = 1;
	v->a[9049] = aux_sym__statements_repeat1;
	v->a[9050] = state(180);
	v->a[9051] = 1;
	v->a[9052] = sym_command_name;
	v->a[9053] = state(231);
	v->a[9054] = 1;
	v->a[9055] = sym_variable_assignment;
	v->a[9056] = state(650);
	v->a[9057] = 1;
	v->a[9058] = sym_concatenation;
	v->a[9059] = state(710);
	small_parse_table_453(v);
}

void	small_parse_table_453(t_small_parse_table_array *v)
{
	v->a[9060] = 1;
	v->a[9061] = aux_sym_command_repeat1;
	v->a[9062] = state(762);
	v->a[9063] = 1;
	v->a[9064] = sym_file_redirect;
	v->a[9065] = state(1095);
	v->a[9066] = 1;
	v->a[9067] = sym_pipeline;
	v->a[9068] = state(1282);
	v->a[9069] = 1;
	v->a[9070] = aux_sym_redirected_statement_repeat2;
	v->a[9071] = state(2127);
	v->a[9072] = 1;
	v->a[9073] = sym__statement_not_pipeline;
	v->a[9074] = state(2227);
	v->a[9075] = 1;
	v->a[9076] = sym__statements;
	v->a[9077] = actions(11);
	v->a[9078] = 2;
	v->a[9079] = anon_sym_while;
	small_parse_table_454(v);
}

void	small_parse_table_454(t_small_parse_table_array *v)
{
	v->a[9080] = anon_sym_until;
	v->a[9081] = actions(226);
	v->a[9082] = 2;
	v->a[9083] = anon_sym_LT_AMP_DASH;
	v->a[9084] = anon_sym_GT_AMP_DASH;
	v->a[9085] = actions(228);
	v->a[9086] = 2;
	v->a[9087] = sym_raw_string;
	v->a[9088] = sym_number;
	v->a[9089] = state(382);
	v->a[9090] = 5;
	v->a[9091] = sym_arithmetic_expansion;
	v->a[9092] = sym_string;
	v->a[9093] = sym_simple_expansion;
	v->a[9094] = sym_expansion;
	v->a[9095] = sym_command_substitution;
	v->a[9096] = actions(224);
	v->a[9097] = 6;
	v->a[9098] = anon_sym_LT;
	v->a[9099] = anon_sym_GT;
	small_parse_table_455(v);
}

/* EOF small_parse_table_90.c */
