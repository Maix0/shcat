/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_130.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_650(t_small_parse_table_array *v)
{
	v->a[13000] = anon_sym_BQUOTE;
	v->a[13001] = actions(73);
	v->a[13002] = 1;
	v->a[13003] = sym_file_descriptor;
	v->a[13004] = actions(75);
	v->a[13005] = 1;
	v->a[13006] = sym_variable_name;
	v->a[13007] = actions(262);
	v->a[13008] = 1;
	v->a[13009] = anon_sym_fi;
	v->a[13010] = state(76);
	v->a[13011] = 1;
	v->a[13012] = aux_sym__terminated_statement;
	v->a[13013] = state(189);
	v->a[13014] = 1;
	v->a[13015] = sym_command_name;
	v->a[13016] = state(307);
	v->a[13017] = 1;
	v->a[13018] = sym_variable_assignment;
	v->a[13019] = state(650);
	small_parse_table_651(v);
}

void	small_parse_table_651(t_small_parse_table_array *v)
{
	v->a[13020] = 1;
	v->a[13021] = sym_concatenation;
	v->a[13022] = state(712);
	v->a[13023] = 1;
	v->a[13024] = sym_file_redirect;
	v->a[13025] = state(713);
	v->a[13026] = 1;
	v->a[13027] = aux_sym_command_repeat1;
	v->a[13028] = state(1205);
	v->a[13029] = 1;
	v->a[13030] = sym_pipeline;
	v->a[13031] = state(1333);
	v->a[13032] = 1;
	v->a[13033] = aux_sym_redirected_statement_repeat2;
	v->a[13034] = state(2103);
	v->a[13035] = 1;
	v->a[13036] = sym__statement_not_pipeline;
	v->a[13037] = actions(11);
	v->a[13038] = 2;
	v->a[13039] = anon_sym_while;
	small_parse_table_652(v);
}

void	small_parse_table_652(t_small_parse_table_array *v)
{
	v->a[13040] = anon_sym_until;
	v->a[13041] = actions(57);
	v->a[13042] = 2;
	v->a[13043] = anon_sym_LT_AMP_DASH;
	v->a[13044] = anon_sym_GT_AMP_DASH;
	v->a[13045] = actions(65);
	v->a[13046] = 2;
	v->a[13047] = sym_raw_string;
	v->a[13048] = sym_number;
	v->a[13049] = state(443);
	v->a[13050] = 5;
	v->a[13051] = sym_arithmetic_expansion;
	v->a[13052] = sym_string;
	v->a[13053] = sym_simple_expansion;
	v->a[13054] = sym_expansion;
	v->a[13055] = sym_command_substitution;
	v->a[13056] = actions(55);
	v->a[13057] = 6;
	v->a[13058] = anon_sym_LT;
	v->a[13059] = anon_sym_GT;
	small_parse_table_653(v);
}

void	small_parse_table_653(t_small_parse_table_array *v)
{
	v->a[13060] = anon_sym_GT_GT;
	v->a[13061] = anon_sym_LT_AMP;
	v->a[13062] = anon_sym_GT_AMP;
	v->a[13063] = anon_sym_GT_PIPE;
	v->a[13064] = state(1173);
	v->a[13065] = 12;
	v->a[13066] = sym_redirected_statement;
	v->a[13067] = sym_for_statement;
	v->a[13068] = sym_while_statement;
	v->a[13069] = sym_if_statement;
	v->a[13070] = sym_case_statement;
	v->a[13071] = sym_function_definition;
	v->a[13072] = sym_compound_statement;
	v->a[13073] = sym_subshell;
	v->a[13074] = sym_list;
	v->a[13075] = sym_negated_command;
	v->a[13076] = sym_command;
	v->a[13077] = sym__variable_assignments;
	v->a[13078] = 32;
	v->a[13079] = actions(3);
	small_parse_table_654(v);
}

void	small_parse_table_654(t_small_parse_table_array *v)
{
	v->a[13080] = 1;
	v->a[13081] = sym_comment;
	v->a[13082] = actions(9);
	v->a[13083] = 1;
	v->a[13084] = anon_sym_for;
	v->a[13085] = actions(13);
	v->a[13086] = 1;
	v->a[13087] = anon_sym_if;
	v->a[13088] = actions(15);
	v->a[13089] = 1;
	v->a[13090] = anon_sym_case;
	v->a[13091] = actions(17);
	v->a[13092] = 1;
	v->a[13093] = anon_sym_LPAREN;
	v->a[13094] = actions(19);
	v->a[13095] = 1;
	v->a[13096] = anon_sym_LBRACE;
	v->a[13097] = actions(59);
	v->a[13098] = 1;
	v->a[13099] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_655(v);
}

/* EOF small_parse_table_130.c */
