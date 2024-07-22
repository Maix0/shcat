/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_160.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_800(t_small_parse_table_array *v)
{
	v->a[16000] = anon_sym_DOLLAR_LBRACE;
	v->a[16001] = actions(65);
	v->a[16002] = 1;
	v->a[16003] = anon_sym_DOLLAR_LPAREN;
	v->a[16004] = actions(67);
	v->a[16005] = 1;
	v->a[16006] = anon_sym_BQUOTE;
	v->a[16007] = actions(69);
	v->a[16008] = 1;
	v->a[16009] = sym_file_descriptor;
	v->a[16010] = actions(71);
	v->a[16011] = 1;
	v->a[16012] = sym_variable_name;
	v->a[16013] = state(183);
	v->a[16014] = 1;
	v->a[16015] = sym_command_name;
	v->a[16016] = state(352);
	v->a[16017] = 1;
	v->a[16018] = sym_variable_assignment;
	v->a[16019] = state(655);
	small_parse_table_801(v);
}

void	small_parse_table_801(t_small_parse_table_array *v)
{
	v->a[16020] = 1;
	v->a[16021] = aux_sym_command_repeat1;
	v->a[16022] = state(661);
	v->a[16023] = 1;
	v->a[16024] = sym_concatenation;
	v->a[16025] = state(665);
	v->a[16026] = 1;
	v->a[16027] = sym_file_redirect;
	v->a[16028] = state(1190);
	v->a[16029] = 1;
	v->a[16030] = sym_pipeline;
	v->a[16031] = state(1198);
	v->a[16032] = 1;
	v->a[16033] = aux_sym_redirected_statement_repeat2;
	v->a[16034] = state(1901);
	v->a[16035] = 1;
	v->a[16036] = sym__statement_not_pipeline;
	v->a[16037] = actions(11);
	v->a[16038] = 2;
	v->a[16039] = anon_sym_while;
	small_parse_table_802(v);
}

void	small_parse_table_802(t_small_parse_table_array *v)
{
	v->a[16040] = anon_sym_until;
	v->a[16041] = actions(61);
	v->a[16042] = 2;
	v->a[16043] = sym_raw_string;
	v->a[16044] = sym_number;
	v->a[16045] = state(455);
	v->a[16046] = 5;
	v->a[16047] = sym_arithmetic_expansion;
	v->a[16048] = sym_string;
	v->a[16049] = sym_simple_expansion;
	v->a[16050] = sym_expansion;
	v->a[16051] = sym_command_substitution;
	v->a[16052] = actions(53);
	v->a[16053] = 7;
	v->a[16054] = anon_sym_LT;
	v->a[16055] = anon_sym_GT;
	v->a[16056] = anon_sym_GT_GT;
	v->a[16057] = anon_sym_LT_AMP;
	v->a[16058] = anon_sym_GT_AMP;
	v->a[16059] = anon_sym_GT_PIPE;
	small_parse_table_803(v);
}

void	small_parse_table_803(t_small_parse_table_array *v)
{
	v->a[16060] = anon_sym_LT_GT;
	v->a[16061] = state(1191);
	v->a[16062] = 12;
	v->a[16063] = sym_redirected_statement;
	v->a[16064] = sym_for_statement;
	v->a[16065] = sym_while_statement;
	v->a[16066] = sym_if_statement;
	v->a[16067] = sym_case_statement;
	v->a[16068] = sym_function_definition;
	v->a[16069] = sym_compound_statement;
	v->a[16070] = sym_subshell;
	v->a[16071] = sym_list;
	v->a[16072] = sym_negated_command;
	v->a[16073] = sym_command;
	v->a[16074] = sym__variable_assignments;
	v->a[16075] = 28;
	v->a[16076] = actions(3);
	v->a[16077] = 1;
	v->a[16078] = sym_comment;
	v->a[16079] = actions(7);
	small_parse_table_804(v);
}

void	small_parse_table_804(t_small_parse_table_array *v)
{
	v->a[16080] = 1;
	v->a[16081] = sym_word;
	v->a[16082] = actions(9);
	v->a[16083] = 1;
	v->a[16084] = anon_sym_for;
	v->a[16085] = actions(13);
	v->a[16086] = 1;
	v->a[16087] = anon_sym_if;
	v->a[16088] = actions(15);
	v->a[16089] = 1;
	v->a[16090] = anon_sym_case;
	v->a[16091] = actions(17);
	v->a[16092] = 1;
	v->a[16093] = anon_sym_LPAREN;
	v->a[16094] = actions(19);
	v->a[16095] = 1;
	v->a[16096] = anon_sym_LBRACE;
	v->a[16097] = actions(21);
	v->a[16098] = 1;
	v->a[16099] = anon_sym_BANG;
	small_parse_table_805(v);
}

/* EOF small_parse_table_160.c */
