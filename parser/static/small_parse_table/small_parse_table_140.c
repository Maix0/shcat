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
	v->a[14000] = actions(65);
	v->a[14001] = 1;
	v->a[14002] = anon_sym_BQUOTE;
	v->a[14003] = actions(297);
	v->a[14004] = 1;
	v->a[14005] = sym_word;
	v->a[14006] = actions(299);
	v->a[14007] = 1;
	v->a[14008] = anon_sym_BANG;
	v->a[14009] = actions(305);
	v->a[14010] = 1;
	v->a[14011] = sym_variable_name;
	v->a[14012] = state(312);
	v->a[14013] = 1;
	v->a[14014] = sym_command_name;
	v->a[14015] = state(417);
	v->a[14016] = 1;
	v->a[14017] = sym_variable_assignment;
	v->a[14018] = state(471);
	v->a[14019] = 1;
	small_parse_table_701(v);
}

void	small_parse_table_701(t_small_parse_table_array *v)
{
	v->a[14020] = aux_sym_command_repeat1;
	v->a[14021] = state(600);
	v->a[14022] = 1;
	v->a[14023] = sym_file_redirect;
	v->a[14024] = state(602);
	v->a[14025] = 1;
	v->a[14026] = sym_concatenation;
	v->a[14027] = state(1201);
	v->a[14028] = 1;
	v->a[14029] = aux_sym_redirected_statement_repeat2;
	v->a[14030] = state(1246);
	v->a[14031] = 1;
	v->a[14032] = sym_pipeline;
	v->a[14033] = actions(11);
	v->a[14034] = 2;
	v->a[14035] = anon_sym_while;
	v->a[14036] = anon_sym_until;
	v->a[14037] = actions(303);
	v->a[14038] = 2;
	v->a[14039] = sym_raw_string;
	small_parse_table_702(v);
}

void	small_parse_table_702(t_small_parse_table_array *v)
{
	v->a[14040] = sym_number;
	v->a[14041] = state(603);
	v->a[14042] = 5;
	v->a[14043] = sym_arithmetic_expansion;
	v->a[14044] = sym_string;
	v->a[14045] = sym_simple_expansion;
	v->a[14046] = sym_expansion;
	v->a[14047] = sym_command_substitution;
	v->a[14048] = actions(301);
	v->a[14049] = 7;
	v->a[14050] = anon_sym_LT;
	v->a[14051] = anon_sym_GT;
	v->a[14052] = anon_sym_GT_GT;
	v->a[14053] = anon_sym_LT_AMP;
	v->a[14054] = anon_sym_GT_AMP;
	v->a[14055] = anon_sym_GT_PIPE;
	v->a[14056] = anon_sym_LT_GT;
	v->a[14057] = state(934);
	v->a[14058] = 13;
	v->a[14059] = sym__statement_not_pipeline;
	small_parse_table_703(v);
}

void	small_parse_table_703(t_small_parse_table_array *v)
{
	v->a[14060] = sym_redirected_statement;
	v->a[14061] = sym_for_statement;
	v->a[14062] = sym_while_statement;
	v->a[14063] = sym_if_statement;
	v->a[14064] = sym_case_statement;
	v->a[14065] = sym_function_definition;
	v->a[14066] = sym_compound_statement;
	v->a[14067] = sym_subshell;
	v->a[14068] = sym_list;
	v->a[14069] = sym_negated_command;
	v->a[14070] = sym_command;
	v->a[14071] = sym__variable_assignments;
	v->a[14072] = 28;
	v->a[14073] = actions(3);
	v->a[14074] = 1;
	v->a[14075] = sym_comment;
	v->a[14076] = actions(9);
	v->a[14077] = 1;
	v->a[14078] = anon_sym_for;
	v->a[14079] = actions(13);
	small_parse_table_704(v);
}

void	small_parse_table_704(t_small_parse_table_array *v)
{
	v->a[14080] = 1;
	v->a[14081] = anon_sym_if;
	v->a[14082] = actions(15);
	v->a[14083] = 1;
	v->a[14084] = anon_sym_case;
	v->a[14085] = actions(17);
	v->a[14086] = 1;
	v->a[14087] = anon_sym_LPAREN;
	v->a[14088] = actions(19);
	v->a[14089] = 1;
	v->a[14090] = anon_sym_LBRACE;
	v->a[14091] = actions(53);
	v->a[14092] = 1;
	v->a[14093] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[14094] = actions(55);
	v->a[14095] = 1;
	v->a[14096] = anon_sym_DOLLAR;
	v->a[14097] = actions(57);
	v->a[14098] = 1;
	v->a[14099] = anon_sym_DQUOTE;
	small_parse_table_705(v);
}

/* EOF small_parse_table_140.c */
