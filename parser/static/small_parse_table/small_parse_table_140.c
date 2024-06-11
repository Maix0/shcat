/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_140.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_700(t_small_parse_table_array *v)
{
	v->a[14000] = actions(55);
	v->a[14001] = 8;
	v->a[14002] = anon_sym_LT;
	v->a[14003] = anon_sym_GT;
	v->a[14004] = anon_sym_GT_GT;
	v->a[14005] = anon_sym_AMP_GT;
	v->a[14006] = anon_sym_AMP_GT_GT;
	v->a[14007] = anon_sym_LT_AMP;
	v->a[14008] = anon_sym_GT_AMP;
	v->a[14009] = anon_sym_GT_PIPE;
	v->a[14010] = state(1211);
	v->a[14011] = 12;
	v->a[14012] = sym_redirected_statement;
	v->a[14013] = sym_for_statement;
	v->a[14014] = sym_while_statement;
	v->a[14015] = sym_if_statement;
	v->a[14016] = sym_case_statement;
	v->a[14017] = sym_function_definition;
	v->a[14018] = sym_compound_statement;
	v->a[14019] = sym_subshell;
	small_parse_table_701(v);
}

void	small_parse_table_701(t_small_parse_table_array *v)
{
	v->a[14020] = sym_list;
	v->a[14021] = sym_negated_command;
	v->a[14022] = sym_command;
	v->a[14023] = sym_variable_assignments;
	v->a[14024] = 32;
	v->a[14025] = actions(3);
	v->a[14026] = 1;
	v->a[14027] = sym_comment;
	v->a[14028] = actions(9);
	v->a[14029] = 1;
	v->a[14030] = anon_sym_for;
	v->a[14031] = actions(13);
	v->a[14032] = 1;
	v->a[14033] = anon_sym_if;
	v->a[14034] = actions(15);
	v->a[14035] = 1;
	v->a[14036] = anon_sym_case;
	v->a[14037] = actions(17);
	v->a[14038] = 1;
	v->a[14039] = anon_sym_LPAREN;
	small_parse_table_702(v);
}

void	small_parse_table_702(t_small_parse_table_array *v)
{
	v->a[14040] = actions(19);
	v->a[14041] = 1;
	v->a[14042] = anon_sym_LBRACE;
	v->a[14043] = actions(59);
	v->a[14044] = 1;
	v->a[14045] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[14046] = actions(61);
	v->a[14047] = 1;
	v->a[14048] = anon_sym_DOLLAR;
	v->a[14049] = actions(63);
	v->a[14050] = 1;
	v->a[14051] = anon_sym_DQUOTE;
	v->a[14052] = actions(67);
	v->a[14053] = 1;
	v->a[14054] = anon_sym_DOLLAR_LBRACE;
	v->a[14055] = actions(69);
	v->a[14056] = 1;
	v->a[14057] = anon_sym_DOLLAR_LPAREN;
	v->a[14058] = actions(71);
	v->a[14059] = 1;
	small_parse_table_703(v);
}

void	small_parse_table_703(t_small_parse_table_array *v)
{
	v->a[14060] = anon_sym_BQUOTE;
	v->a[14061] = actions(220);
	v->a[14062] = 1;
	v->a[14063] = sym_word;
	v->a[14064] = actions(222);
	v->a[14065] = 1;
	v->a[14066] = anon_sym_BANG;
	v->a[14067] = actions(230);
	v->a[14068] = 1;
	v->a[14069] = sym_file_descriptor;
	v->a[14070] = actions(232);
	v->a[14071] = 1;
	v->a[14072] = sym_variable_name;
	v->a[14073] = state(126);
	v->a[14074] = 1;
	v->a[14075] = aux_sym__statements_repeat1;
	v->a[14076] = state(184);
	v->a[14077] = 1;
	v->a[14078] = sym_command_name;
	v->a[14079] = state(268);
	small_parse_table_704(v);
}

void	small_parse_table_704(t_small_parse_table_array *v)
{
	v->a[14080] = 1;
	v->a[14081] = sym_variable_assignment;
	v->a[14082] = state(647);
	v->a[14083] = 1;
	v->a[14084] = sym_concatenation;
	v->a[14085] = state(814);
	v->a[14086] = 1;
	v->a[14087] = sym_file_redirect;
	v->a[14088] = state(828);
	v->a[14089] = 1;
	v->a[14090] = aux_sym_command_repeat1;
	v->a[14091] = state(1314);
	v->a[14092] = 1;
	v->a[14093] = sym_pipeline;
	v->a[14094] = state(1331);
	v->a[14095] = 1;
	v->a[14096] = aux_sym_redirected_statement_repeat2;
	v->a[14097] = state(2252);
	v->a[14098] = 1;
	v->a[14099] = sym__statement_not_pipeline;
	small_parse_table_705(v);
}

/* EOF small_parse_table_140.c */
