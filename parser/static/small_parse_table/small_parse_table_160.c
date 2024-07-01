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
	v->a[16000] = aux_sym_command_repeat1;
	v->a[16001] = state(712);
	v->a[16002] = 1;
	v->a[16003] = sym_file_redirect;
	v->a[16004] = state(1005);
	v->a[16005] = 1;
	v->a[16006] = sym_compound_statement;
	v->a[16007] = state(1056);
	v->a[16008] = 1;
	v->a[16009] = sym__variable_assignments;
	v->a[16010] = state(1058);
	v->a[16011] = 1;
	v->a[16012] = sym_command;
	v->a[16013] = state(1059);
	v->a[16014] = 1;
	v->a[16015] = sym_negated_command;
	v->a[16016] = state(1062);
	v->a[16017] = 1;
	v->a[16018] = sym_list;
	v->a[16019] = state(1063);
	small_parse_table_801(v);
}

void	small_parse_table_801(t_small_parse_table_array *v)
{
	v->a[16020] = 1;
	v->a[16021] = sym_subshell;
	v->a[16022] = state(1067);
	v->a[16023] = 1;
	v->a[16024] = sym_function_definition;
	v->a[16025] = state(1068);
	v->a[16026] = 1;
	v->a[16027] = sym_case_statement;
	v->a[16028] = state(1069);
	v->a[16029] = 1;
	v->a[16030] = sym_if_statement;
	v->a[16031] = state(1070);
	v->a[16032] = 1;
	v->a[16033] = sym_while_statement;
	v->a[16034] = state(1071);
	v->a[16035] = 1;
	v->a[16036] = sym_for_statement;
	v->a[16037] = state(1072);
	v->a[16038] = 1;
	v->a[16039] = sym_redirected_statement;
	small_parse_table_802(v);
}

void	small_parse_table_802(t_small_parse_table_array *v)
{
	v->a[16040] = state(1142);
	v->a[16041] = 1;
	v->a[16042] = sym_pipeline;
	v->a[16043] = state(1282);
	v->a[16044] = 1;
	v->a[16045] = aux_sym_redirected_statement_repeat2;
	v->a[16046] = state(2127);
	v->a[16047] = 1;
	v->a[16048] = sym__statement_not_pipeline;
	v->a[16049] = actions(11);
	v->a[16050] = 2;
	v->a[16051] = anon_sym_while;
	v->a[16052] = anon_sym_until;
	v->a[16053] = actions(226);
	v->a[16054] = 2;
	v->a[16055] = anon_sym_LT_AMP_DASH;
	v->a[16056] = anon_sym_GT_AMP_DASH;
	v->a[16057] = actions(228);
	v->a[16058] = 2;
	v->a[16059] = sym_raw_string;
	small_parse_table_803(v);
}

void	small_parse_table_803(t_small_parse_table_array *v)
{
	v->a[16060] = sym_number;
	v->a[16061] = state(382);
	v->a[16062] = 5;
	v->a[16063] = sym_arithmetic_expansion;
	v->a[16064] = sym_string;
	v->a[16065] = sym_simple_expansion;
	v->a[16066] = sym_expansion;
	v->a[16067] = sym_command_substitution;
	v->a[16068] = actions(224);
	v->a[16069] = 6;
	v->a[16070] = anon_sym_LT;
	v->a[16071] = anon_sym_GT;
	v->a[16072] = anon_sym_GT_GT;
	v->a[16073] = anon_sym_LT_AMP;
	v->a[16074] = anon_sym_GT_AMP;
	v->a[16075] = anon_sym_GT_PIPE;
	v->a[16076] = 31;
	v->a[16077] = actions(3);
	v->a[16078] = 1;
	v->a[16079] = sym_comment;
	small_parse_table_804(v);
}

void	small_parse_table_804(t_small_parse_table_array *v)
{
	v->a[16080] = actions(9);
	v->a[16081] = 1;
	v->a[16082] = anon_sym_for;
	v->a[16083] = actions(13);
	v->a[16084] = 1;
	v->a[16085] = anon_sym_if;
	v->a[16086] = actions(15);
	v->a[16087] = 1;
	v->a[16088] = anon_sym_case;
	v->a[16089] = actions(17);
	v->a[16090] = 1;
	v->a[16091] = anon_sym_LPAREN;
	v->a[16092] = actions(19);
	v->a[16093] = 1;
	v->a[16094] = anon_sym_LBRACE;
	v->a[16095] = actions(45);
	v->a[16096] = 1;
	v->a[16097] = sym_word;
	v->a[16098] = actions(53);
	v->a[16099] = 1;
	small_parse_table_805(v);
}

/* EOF small_parse_table_160.c */
