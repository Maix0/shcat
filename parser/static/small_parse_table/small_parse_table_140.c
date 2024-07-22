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
	v->a[14000] = state(1036);
	v->a[14001] = 1;
	v->a[14002] = sym_list;
	v->a[14003] = state(1038);
	v->a[14004] = 1;
	v->a[14005] = sym_negated_command;
	v->a[14006] = state(1040);
	v->a[14007] = 1;
	v->a[14008] = sym_command;
	v->a[14009] = state(1051);
	v->a[14010] = 1;
	v->a[14011] = sym__variable_assignments;
	v->a[14012] = state(1071);
	v->a[14013] = 1;
	v->a[14014] = sym_case_statement;
	v->a[14015] = state(1078);
	v->a[14016] = 1;
	v->a[14017] = sym_if_statement;
	v->a[14018] = state(1110);
	v->a[14019] = 1;
	small_parse_table_701(v);
}

void	small_parse_table_701(t_small_parse_table_array *v)
{
	v->a[14020] = sym_redirected_statement;
	v->a[14021] = state(1112);
	v->a[14022] = 1;
	v->a[14023] = sym_for_statement;
	v->a[14024] = state(1118);
	v->a[14025] = 1;
	v->a[14026] = sym_while_statement;
	v->a[14027] = state(1152);
	v->a[14028] = 1;
	v->a[14029] = sym_pipeline;
	v->a[14030] = state(1198);
	v->a[14031] = 1;
	v->a[14032] = aux_sym_redirected_statement_repeat2;
	v->a[14033] = state(1901);
	v->a[14034] = 1;
	v->a[14035] = sym__statement_not_pipeline;
	v->a[14036] = actions(11);
	v->a[14037] = 2;
	v->a[14038] = anon_sym_while;
	v->a[14039] = anon_sym_until;
	small_parse_table_702(v);
}

void	small_parse_table_702(t_small_parse_table_array *v)
{
	v->a[14040] = actions(61);
	v->a[14041] = 2;
	v->a[14042] = sym_raw_string;
	v->a[14043] = sym_number;
	v->a[14044] = state(455);
	v->a[14045] = 5;
	v->a[14046] = sym_arithmetic_expansion;
	v->a[14047] = sym_string;
	v->a[14048] = sym_simple_expansion;
	v->a[14049] = sym_expansion;
	v->a[14050] = sym_command_substitution;
	v->a[14051] = actions(53);
	v->a[14052] = 7;
	v->a[14053] = anon_sym_LT;
	v->a[14054] = anon_sym_GT;
	v->a[14055] = anon_sym_GT_GT;
	v->a[14056] = anon_sym_LT_AMP;
	v->a[14057] = anon_sym_GT_AMP;
	v->a[14058] = anon_sym_GT_PIPE;
	v->a[14059] = anon_sym_LT_GT;
	small_parse_table_703(v);
}

void	small_parse_table_703(t_small_parse_table_array *v)
{
	v->a[14060] = 30;
	v->a[14061] = actions(3);
	v->a[14062] = 1;
	v->a[14063] = sym_comment;
	v->a[14064] = actions(9);
	v->a[14065] = 1;
	v->a[14066] = anon_sym_for;
	v->a[14067] = actions(13);
	v->a[14068] = 1;
	v->a[14069] = anon_sym_if;
	v->a[14070] = actions(15);
	v->a[14071] = 1;
	v->a[14072] = anon_sym_case;
	v->a[14073] = actions(17);
	v->a[14074] = 1;
	v->a[14075] = anon_sym_LPAREN;
	v->a[14076] = actions(19);
	v->a[14077] = 1;
	v->a[14078] = anon_sym_LBRACE;
	v->a[14079] = actions(43);
	small_parse_table_704(v);
}

void	small_parse_table_704(t_small_parse_table_array *v)
{
	v->a[14080] = 1;
	v->a[14081] = sym_word;
	v->a[14082] = actions(51);
	v->a[14083] = 1;
	v->a[14084] = anon_sym_BANG;
	v->a[14085] = actions(55);
	v->a[14086] = 1;
	v->a[14087] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[14088] = actions(57);
	v->a[14089] = 1;
	v->a[14090] = anon_sym_DOLLAR;
	v->a[14091] = actions(59);
	v->a[14092] = 1;
	v->a[14093] = anon_sym_DQUOTE;
	v->a[14094] = actions(63);
	v->a[14095] = 1;
	v->a[14096] = anon_sym_DOLLAR_LBRACE;
	v->a[14097] = actions(65);
	v->a[14098] = 1;
	v->a[14099] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_705(v);
}

/* EOF small_parse_table_140.c */
