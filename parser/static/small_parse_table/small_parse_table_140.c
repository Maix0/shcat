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
	v->a[14000] = anon_sym_until;
	v->a[14001] = actions(57);
	v->a[14002] = 2;
	v->a[14003] = anon_sym_LT_AMP_DASH;
	v->a[14004] = anon_sym_GT_AMP_DASH;
	v->a[14005] = actions(65);
	v->a[14006] = 2;
	v->a[14007] = sym_raw_string;
	v->a[14008] = sym_number;
	v->a[14009] = state(443);
	v->a[14010] = 5;
	v->a[14011] = sym_arithmetic_expansion;
	v->a[14012] = sym_string;
	v->a[14013] = sym_simple_expansion;
	v->a[14014] = sym_expansion;
	v->a[14015] = sym_command_substitution;
	v->a[14016] = actions(55);
	v->a[14017] = 6;
	v->a[14018] = anon_sym_LT;
	v->a[14019] = anon_sym_GT;
	small_parse_table_701(v);
}

void	small_parse_table_701(t_small_parse_table_array *v)
{
	v->a[14020] = anon_sym_GT_GT;
	v->a[14021] = anon_sym_LT_AMP;
	v->a[14022] = anon_sym_GT_AMP;
	v->a[14023] = anon_sym_GT_PIPE;
	v->a[14024] = state(1030);
	v->a[14025] = 12;
	v->a[14026] = sym_redirected_statement;
	v->a[14027] = sym_for_statement;
	v->a[14028] = sym_while_statement;
	v->a[14029] = sym_if_statement;
	v->a[14030] = sym_case_statement;
	v->a[14031] = sym_function_definition;
	v->a[14032] = sym_compound_statement;
	v->a[14033] = sym_subshell;
	v->a[14034] = sym_list;
	v->a[14035] = sym_negated_command;
	v->a[14036] = sym_command;
	v->a[14037] = sym__variable_assignments;
	v->a[14038] = 32;
	v->a[14039] = actions(3);
	small_parse_table_702(v);
}

void	small_parse_table_702(t_small_parse_table_array *v)
{
	v->a[14040] = 1;
	v->a[14041] = sym_comment;
	v->a[14042] = actions(89);
	v->a[14043] = 1;
	v->a[14044] = sym_word;
	v->a[14045] = actions(92);
	v->a[14046] = 1;
	v->a[14047] = anon_sym_for;
	v->a[14048] = actions(98);
	v->a[14049] = 1;
	v->a[14050] = anon_sym_if;
	v->a[14051] = actions(101);
	v->a[14052] = 1;
	v->a[14053] = anon_sym_do;
	v->a[14054] = actions(103);
	v->a[14055] = 1;
	v->a[14056] = anon_sym_case;
	v->a[14057] = actions(106);
	v->a[14058] = 1;
	v->a[14059] = anon_sym_LPAREN;
	small_parse_table_703(v);
}

void	small_parse_table_703(t_small_parse_table_array *v)
{
	v->a[14060] = actions(109);
	v->a[14061] = 1;
	v->a[14062] = anon_sym_LBRACE;
	v->a[14063] = actions(112);
	v->a[14064] = 1;
	v->a[14065] = anon_sym_BANG;
	v->a[14066] = actions(121);
	v->a[14067] = 1;
	v->a[14068] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[14069] = actions(124);
	v->a[14070] = 1;
	v->a[14071] = anon_sym_DOLLAR;
	v->a[14072] = actions(127);
	v->a[14073] = 1;
	v->a[14074] = anon_sym_DQUOTE;
	v->a[14075] = actions(133);
	v->a[14076] = 1;
	v->a[14077] = anon_sym_DOLLAR_LBRACE;
	v->a[14078] = actions(136);
	v->a[14079] = 1;
	small_parse_table_704(v);
}

void	small_parse_table_704(t_small_parse_table_array *v)
{
	v->a[14080] = anon_sym_DOLLAR_LPAREN;
	v->a[14081] = actions(139);
	v->a[14082] = 1;
	v->a[14083] = anon_sym_BQUOTE;
	v->a[14084] = actions(142);
	v->a[14085] = 1;
	v->a[14086] = sym_file_descriptor;
	v->a[14087] = actions(145);
	v->a[14088] = 1;
	v->a[14089] = sym_variable_name;
	v->a[14090] = state(117);
	v->a[14091] = 1;
	v->a[14092] = aux_sym__terminated_statement;
	v->a[14093] = state(189);
	v->a[14094] = 1;
	v->a[14095] = sym_command_name;
	v->a[14096] = state(296);
	v->a[14097] = 1;
	v->a[14098] = sym_variable_assignment;
	v->a[14099] = state(650);
	small_parse_table_705(v);
}

/* EOF small_parse_table_140.c */
