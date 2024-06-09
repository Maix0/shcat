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
	v->a[14000] = sym_variable_assignment;
	v->a[14001] = state(567);
	v->a[14002] = 1;
	v->a[14003] = aux_sym_command_repeat1;
	v->a[14004] = state(582);
	v->a[14005] = 1;
	v->a[14006] = sym_concatenation;
	v->a[14007] = state(725);
	v->a[14008] = 1;
	v->a[14009] = sym_file_redirect;
	v->a[14010] = state(1100);
	v->a[14011] = 1;
	v->a[14012] = sym_pipeline;
	v->a[14013] = state(1196);
	v->a[14014] = 1;
	v->a[14015] = aux_sym_redirected_statement_repeat2;
	v->a[14016] = state(2037);
	v->a[14017] = 1;
	v->a[14018] = sym__statement_not_pipeline;
	v->a[14019] = state(2141);
	small_parse_table_701(v);
}

void	small_parse_table_701(t_small_parse_table_array *v)
{
	v->a[14020] = 1;
	v->a[14021] = sym__statements;
	v->a[14022] = actions(11);
	v->a[14023] = 2;
	v->a[14024] = anon_sym_while;
	v->a[14025] = anon_sym_until;
	v->a[14026] = actions(254);
	v->a[14027] = 2;
	v->a[14028] = anon_sym_LT_AMP_DASH;
	v->a[14029] = anon_sym_GT_AMP_DASH;
	v->a[14030] = state(295);
	v->a[14031] = 6;
	v->a[14032] = sym_arithmetic_expansion;
	v->a[14033] = sym_string;
	v->a[14034] = sym_number;
	v->a[14035] = sym_simple_expansion;
	v->a[14036] = sym_expansion;
	v->a[14037] = sym_command_substitution;
	v->a[14038] = actions(252);
	v->a[14039] = 8;
	small_parse_table_702(v);
}

void	small_parse_table_702(t_small_parse_table_array *v)
{
	v->a[14040] = anon_sym_LT;
	v->a[14041] = anon_sym_GT;
	v->a[14042] = anon_sym_GT_GT;
	v->a[14043] = anon_sym_AMP_GT;
	v->a[14044] = anon_sym_AMP_GT_GT;
	v->a[14045] = anon_sym_LT_AMP;
	v->a[14046] = anon_sym_GT_AMP;
	v->a[14047] = anon_sym_GT_PIPE;
	v->a[14048] = state(1031);
	v->a[14049] = 12;
	v->a[14050] = sym_redirected_statement;
	v->a[14051] = sym_for_statement;
	v->a[14052] = sym_while_statement;
	v->a[14053] = sym_if_statement;
	v->a[14054] = sym_case_statement;
	v->a[14055] = sym_function_definition;
	v->a[14056] = sym_compound_statement;
	v->a[14057] = sym_subshell;
	v->a[14058] = sym_list;
	v->a[14059] = sym_negated_command;
	small_parse_table_703(v);
}

void	small_parse_table_703(t_small_parse_table_array *v)
{
	v->a[14060] = sym_command;
	v->a[14061] = sym_variable_assignments;
	v->a[14062] = 34;
	v->a[14063] = actions(3);
	v->a[14064] = 1;
	v->a[14065] = sym_comment;
	v->a[14066] = actions(9);
	v->a[14067] = 1;
	v->a[14068] = anon_sym_for;
	v->a[14069] = actions(13);
	v->a[14070] = 1;
	v->a[14071] = anon_sym_if;
	v->a[14072] = actions(15);
	v->a[14073] = 1;
	v->a[14074] = anon_sym_case;
	v->a[14075] = actions(17);
	v->a[14076] = 1;
	v->a[14077] = anon_sym_LPAREN;
	v->a[14078] = actions(19);
	v->a[14079] = 1;
	small_parse_table_704(v);
}

void	small_parse_table_704(t_small_parse_table_array *v)
{
	v->a[14080] = anon_sym_LBRACE;
	v->a[14081] = actions(63);
	v->a[14082] = 1;
	v->a[14083] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[14084] = actions(65);
	v->a[14085] = 1;
	v->a[14086] = anon_sym_DOLLAR;
	v->a[14087] = actions(67);
	v->a[14088] = 1;
	v->a[14089] = anon_sym_DQUOTE;
	v->a[14090] = actions(71);
	v->a[14091] = 1;
	v->a[14092] = aux_sym_number_token1;
	v->a[14093] = actions(73);
	v->a[14094] = 1;
	v->a[14095] = aux_sym_number_token2;
	v->a[14096] = actions(75);
	v->a[14097] = 1;
	v->a[14098] = anon_sym_DOLLAR_LBRACE;
	v->a[14099] = actions(77);
	small_parse_table_705(v);
}

/* EOF small_parse_table_140.c */
