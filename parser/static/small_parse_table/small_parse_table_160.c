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
	v->a[16000] = sym_subshell;
	v->a[16001] = sym_list;
	v->a[16002] = sym_negated_command;
	v->a[16003] = sym_command;
	v->a[16004] = sym__variable_assignments;
	v->a[16005] = 31;
	v->a[16006] = actions(3);
	v->a[16007] = 1;
	v->a[16008] = sym_comment;
	v->a[16009] = actions(9);
	v->a[16010] = 1;
	v->a[16011] = anon_sym_for;
	v->a[16012] = actions(13);
	v->a[16013] = 1;
	v->a[16014] = anon_sym_if;
	v->a[16015] = actions(15);
	v->a[16016] = 1;
	v->a[16017] = anon_sym_case;
	v->a[16018] = actions(17);
	v->a[16019] = 1;
	small_parse_table_801(v);
}

void	small_parse_table_801(t_small_parse_table_array *v)
{
	v->a[16020] = anon_sym_LPAREN;
	v->a[16021] = actions(19);
	v->a[16022] = 1;
	v->a[16023] = anon_sym_LBRACE;
	v->a[16024] = actions(45);
	v->a[16025] = 1;
	v->a[16026] = sym_word;
	v->a[16027] = actions(53);
	v->a[16028] = 1;
	v->a[16029] = anon_sym_BANG;
	v->a[16030] = actions(59);
	v->a[16031] = 1;
	v->a[16032] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16033] = actions(61);
	v->a[16034] = 1;
	v->a[16035] = anon_sym_DOLLAR;
	v->a[16036] = actions(63);
	v->a[16037] = 1;
	v->a[16038] = anon_sym_DQUOTE;
	v->a[16039] = actions(67);
	small_parse_table_802(v);
}

void	small_parse_table_802(t_small_parse_table_array *v)
{
	v->a[16040] = 1;
	v->a[16041] = anon_sym_DOLLAR_LBRACE;
	v->a[16042] = actions(69);
	v->a[16043] = 1;
	v->a[16044] = anon_sym_DOLLAR_LPAREN;
	v->a[16045] = actions(71);
	v->a[16046] = 1;
	v->a[16047] = anon_sym_BQUOTE;
	v->a[16048] = actions(73);
	v->a[16049] = 1;
	v->a[16050] = sym_file_descriptor;
	v->a[16051] = actions(75);
	v->a[16052] = 1;
	v->a[16053] = sym_variable_name;
	v->a[16054] = state(50);
	v->a[16055] = 1;
	v->a[16056] = aux_sym__terminated_statement;
	v->a[16057] = state(187);
	v->a[16058] = 1;
	v->a[16059] = sym_command_name;
	small_parse_table_803(v);
}

void	small_parse_table_803(t_small_parse_table_array *v)
{
	v->a[16060] = state(274);
	v->a[16061] = 1;
	v->a[16062] = sym_variable_assignment;
	v->a[16063] = state(647);
	v->a[16064] = 1;
	v->a[16065] = sym_concatenation;
	v->a[16066] = state(736);
	v->a[16067] = 1;
	v->a[16068] = aux_sym_command_repeat1;
	v->a[16069] = state(738);
	v->a[16070] = 1;
	v->a[16071] = sym_file_redirect;
	v->a[16072] = state(1439);
	v->a[16073] = 1;
	v->a[16074] = sym_pipeline;
	v->a[16075] = state(1460);
	v->a[16076] = 1;
	v->a[16077] = aux_sym_redirected_statement_repeat2;
	v->a[16078] = state(2269);
	v->a[16079] = 1;
	small_parse_table_804(v);
}

void	small_parse_table_804(t_small_parse_table_array *v)
{
	v->a[16080] = sym__statement_not_pipeline;
	v->a[16081] = actions(11);
	v->a[16082] = 2;
	v->a[16083] = anon_sym_while;
	v->a[16084] = anon_sym_until;
	v->a[16085] = actions(57);
	v->a[16086] = 2;
	v->a[16087] = anon_sym_LT_AMP_DASH;
	v->a[16088] = anon_sym_GT_AMP_DASH;
	v->a[16089] = actions(65);
	v->a[16090] = 2;
	v->a[16091] = sym_raw_string;
	v->a[16092] = sym_number;
	v->a[16093] = state(394);
	v->a[16094] = 5;
	v->a[16095] = sym_arithmetic_expansion;
	v->a[16096] = sym_string;
	v->a[16097] = sym_simple_expansion;
	v->a[16098] = sym_expansion;
	v->a[16099] = sym_command_substitution;
	small_parse_table_805(v);
}

/* EOF small_parse_table_160.c */
