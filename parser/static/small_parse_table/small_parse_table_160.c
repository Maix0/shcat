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
	v->a[16000] = 1;
	v->a[16001] = sym_word;
	v->a[16002] = actions(349);
	v->a[16003] = 1;
	v->a[16004] = anon_sym_BANG;
	v->a[16005] = actions(355);
	v->a[16006] = 1;
	v->a[16007] = sym_file_descriptor;
	v->a[16008] = actions(357);
	v->a[16009] = 1;
	v->a[16010] = sym_variable_name;
	v->a[16011] = state(261);
	v->a[16012] = 1;
	v->a[16013] = sym_command_name;
	v->a[16014] = state(594);
	v->a[16015] = 1;
	v->a[16016] = sym_variable_assignment;
	v->a[16017] = state(603);
	v->a[16018] = 1;
	v->a[16019] = sym_concatenation;
	small_parse_table_801(v);
}

void	small_parse_table_801(t_small_parse_table_array *v)
{
	v->a[16020] = state(644);
	v->a[16021] = 1;
	v->a[16022] = sym_file_redirect;
	v->a[16023] = state(705);
	v->a[16024] = 1;
	v->a[16025] = aux_sym_command_repeat1;
	v->a[16026] = state(1353);
	v->a[16027] = 1;
	v->a[16028] = sym_pipeline;
	v->a[16029] = state(1383);
	v->a[16030] = 1;
	v->a[16031] = aux_sym_redirected_statement_repeat2;
	v->a[16032] = state(1912);
	v->a[16033] = 1;
	v->a[16034] = sym__statement_not_pipeline;
	v->a[16035] = actions(11);
	v->a[16036] = 2;
	v->a[16037] = anon_sym_while;
	v->a[16038] = anon_sym_until;
	v->a[16039] = actions(353);
	small_parse_table_802(v);
}

void	small_parse_table_802(t_small_parse_table_array *v)
{
	v->a[16040] = 2;
	v->a[16041] = sym_raw_string;
	v->a[16042] = sym_number;
	v->a[16043] = state(625);
	v->a[16044] = 5;
	v->a[16045] = sym_arithmetic_expansion;
	v->a[16046] = sym_string;
	v->a[16047] = sym_simple_expansion;
	v->a[16048] = sym_expansion;
	v->a[16049] = sym_command_substitution;
	v->a[16050] = actions(351);
	v->a[16051] = 7;
	v->a[16052] = anon_sym_LT;
	v->a[16053] = anon_sym_GT;
	v->a[16054] = anon_sym_GT_GT;
	v->a[16055] = anon_sym_LT_AMP;
	v->a[16056] = anon_sym_GT_AMP;
	v->a[16057] = anon_sym_GT_PIPE;
	v->a[16058] = anon_sym_LT_GT;
	v->a[16059] = state(1356);
	small_parse_table_803(v);
}

void	small_parse_table_803(t_small_parse_table_array *v)
{
	v->a[16060] = 12;
	v->a[16061] = sym_redirected_statement;
	v->a[16062] = sym_for_statement;
	v->a[16063] = sym_while_statement;
	v->a[16064] = sym_if_statement;
	v->a[16065] = sym_case_statement;
	v->a[16066] = sym_function_definition;
	v->a[16067] = sym_compound_statement;
	v->a[16068] = sym_subshell;
	v->a[16069] = sym_list;
	v->a[16070] = sym_negated_command;
	v->a[16071] = sym_command;
	v->a[16072] = sym__variable_assignments;
	v->a[16073] = 29;
	v->a[16074] = actions(3);
	v->a[16075] = 1;
	v->a[16076] = sym_comment;
	v->a[16077] = actions(9);
	v->a[16078] = 1;
	v->a[16079] = anon_sym_for;
	small_parse_table_804(v);
}

void	small_parse_table_804(t_small_parse_table_array *v)
{
	v->a[16080] = actions(13);
	v->a[16081] = 1;
	v->a[16082] = anon_sym_if;
	v->a[16083] = actions(15);
	v->a[16084] = 1;
	v->a[16085] = anon_sym_case;
	v->a[16086] = actions(17);
	v->a[16087] = 1;
	v->a[16088] = anon_sym_LPAREN;
	v->a[16089] = actions(19);
	v->a[16090] = 1;
	v->a[16091] = anon_sym_LBRACE;
	v->a[16092] = actions(55);
	v->a[16093] = 1;
	v->a[16094] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16095] = actions(57);
	v->a[16096] = 1;
	v->a[16097] = anon_sym_DOLLAR;
	v->a[16098] = actions(59);
	v->a[16099] = 1;
	small_parse_table_805(v);
}

/* EOF small_parse_table_160.c */
