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
	v->a[14000] = 27;
	v->a[14001] = actions(3);
	v->a[14002] = 1;
	v->a[14003] = sym_comment;
	v->a[14004] = actions(297);
	v->a[14005] = 1;
	v->a[14006] = sym_word;
	v->a[14007] = actions(299);
	v->a[14008] = 1;
	v->a[14009] = anon_sym_for;
	v->a[14010] = actions(303);
	v->a[14011] = 1;
	v->a[14012] = anon_sym_if;
	v->a[14013] = actions(305);
	v->a[14014] = 1;
	v->a[14015] = anon_sym_case;
	v->a[14016] = actions(307);
	v->a[14017] = 1;
	v->a[14018] = anon_sym_LPAREN;
	v->a[14019] = actions(309);
	small_parse_table_701(v);
}

void	small_parse_table_701(t_small_parse_table_array *v)
{
	v->a[14020] = 1;
	v->a[14021] = anon_sym_LBRACE;
	v->a[14022] = actions(311);
	v->a[14023] = 1;
	v->a[14024] = anon_sym_BANG;
	v->a[14025] = actions(315);
	v->a[14026] = 1;
	v->a[14027] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[14028] = actions(317);
	v->a[14029] = 1;
	v->a[14030] = anon_sym_DOLLAR;
	v->a[14031] = actions(319);
	v->a[14032] = 1;
	v->a[14033] = anon_sym_DQUOTE;
	v->a[14034] = actions(323);
	v->a[14035] = 1;
	v->a[14036] = anon_sym_DOLLAR_LBRACE;
	v->a[14037] = actions(325);
	v->a[14038] = 1;
	v->a[14039] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_702(v);
}

void	small_parse_table_702(t_small_parse_table_array *v)
{
	v->a[14040] = actions(327);
	v->a[14041] = 1;
	v->a[14042] = anon_sym_BQUOTE;
	v->a[14043] = actions(329);
	v->a[14044] = 1;
	v->a[14045] = sym_variable_name;
	v->a[14046] = state(274);
	v->a[14047] = 1;
	v->a[14048] = sym_command_name;
	v->a[14049] = state(328);
	v->a[14050] = 1;
	v->a[14051] = aux_sym_command_repeat1;
	v->a[14052] = state(439);
	v->a[14053] = 1;
	v->a[14054] = sym_variable_assignment;
	v->a[14055] = state(707);
	v->a[14056] = 1;
	v->a[14057] = sym_file_redirect;
	v->a[14058] = state(772);
	v->a[14059] = 1;
	small_parse_table_703(v);
}

void	small_parse_table_703(t_small_parse_table_array *v)
{
	v->a[14060] = sym_concatenation;
	v->a[14061] = state(1326);
	v->a[14062] = 1;
	v->a[14063] = sym_pipeline;
	v->a[14064] = state(1343);
	v->a[14065] = 1;
	v->a[14066] = aux_sym_redirected_statement_repeat2;
	v->a[14067] = actions(301);
	v->a[14068] = 2;
	v->a[14069] = anon_sym_while;
	v->a[14070] = anon_sym_until;
	v->a[14071] = actions(321);
	v->a[14072] = 2;
	v->a[14073] = sym_raw_string;
	v->a[14074] = sym_number;
	v->a[14075] = actions(313);
	v->a[14076] = 3;
	v->a[14077] = anon_sym_LT;
	v->a[14078] = anon_sym_GT;
	v->a[14079] = anon_sym_GT_GT;
	small_parse_table_704(v);
}

void	small_parse_table_704(t_small_parse_table_array *v)
{
	v->a[14080] = state(606);
	v->a[14081] = 5;
	v->a[14082] = sym_arithmetic_expansion;
	v->a[14083] = sym_string;
	v->a[14084] = sym_simple_expansion;
	v->a[14085] = sym_expansion;
	v->a[14086] = sym_command_substitution;
	v->a[14087] = state(1383);
	v->a[14088] = 13;
	v->a[14089] = sym__statement_not_pipeline;
	v->a[14090] = sym_redirected_statement;
	v->a[14091] = sym_for_statement;
	v->a[14092] = sym_while_statement;
	v->a[14093] = sym_if_statement;
	v->a[14094] = sym_case_statement;
	v->a[14095] = sym_function_definition;
	v->a[14096] = sym_compound_statement;
	v->a[14097] = sym_subshell;
	v->a[14098] = sym_list;
	v->a[14099] = sym_negated_command;
	small_parse_table_705(v);
}

/* EOF small_parse_table_140.c */
