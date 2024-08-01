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
	v->a[13000] = sym_concatenation;
	v->a[13001] = state(1059);
	v->a[13002] = 1;
	v->a[13003] = sym_pipeline;
	v->a[13004] = state(1126);
	v->a[13005] = 1;
	v->a[13006] = aux_sym_redirected_statement_repeat2;
	v->a[13007] = state(1561);
	v->a[13008] = 1;
	v->a[13009] = sym__statement_not_pipeline;
	v->a[13010] = actions(11);
	v->a[13011] = 2;
	v->a[13012] = anon_sym_while;
	v->a[13013] = anon_sym_until;
	v->a[13014] = actions(59);
	v->a[13015] = 2;
	v->a[13016] = sym_raw_string;
	v->a[13017] = sym_number;
	v->a[13018] = actions(51);
	v->a[13019] = 3;
	small_parse_table_651(v);
}

void	small_parse_table_651(t_small_parse_table_array *v)
{
	v->a[13020] = anon_sym_LT;
	v->a[13021] = anon_sym_GT;
	v->a[13022] = anon_sym_GT_GT;
	v->a[13023] = state(401);
	v->a[13024] = 5;
	v->a[13025] = sym_arithmetic_expansion;
	v->a[13026] = sym_string;
	v->a[13027] = sym_simple_expansion;
	v->a[13028] = sym_expansion;
	v->a[13029] = sym_command_substitution;
	v->a[13030] = state(949);
	v->a[13031] = 12;
	v->a[13032] = sym_redirected_statement;
	v->a[13033] = sym_for_statement;
	v->a[13034] = sym_while_statement;
	v->a[13035] = sym_if_statement;
	v->a[13036] = sym_case_statement;
	v->a[13037] = sym_function_definition;
	v->a[13038] = sym_compound_statement;
	v->a[13039] = sym_subshell;
	small_parse_table_652(v);
}

void	small_parse_table_652(t_small_parse_table_array *v)
{
	v->a[13040] = sym_list;
	v->a[13041] = sym_negated_command;
	v->a[13042] = sym_command;
	v->a[13043] = sym__variable_assignments;
	v->a[13044] = 40;
	v->a[13045] = actions(3);
	v->a[13046] = 1;
	v->a[13047] = sym_comment;
	v->a[13048] = actions(9);
	v->a[13049] = 1;
	v->a[13050] = anon_sym_for;
	v->a[13051] = actions(13);
	v->a[13052] = 1;
	v->a[13053] = anon_sym_if;
	v->a[13054] = actions(15);
	v->a[13055] = 1;
	v->a[13056] = anon_sym_case;
	v->a[13057] = actions(17);
	v->a[13058] = 1;
	v->a[13059] = anon_sym_LPAREN;
	small_parse_table_653(v);
}

void	small_parse_table_653(t_small_parse_table_array *v)
{
	v->a[13060] = actions(19);
	v->a[13061] = 1;
	v->a[13062] = anon_sym_LBRACE;
	v->a[13063] = actions(41);
	v->a[13064] = 1;
	v->a[13065] = sym_word;
	v->a[13066] = actions(49);
	v->a[13067] = 1;
	v->a[13068] = anon_sym_BANG;
	v->a[13069] = actions(53);
	v->a[13070] = 1;
	v->a[13071] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[13072] = actions(55);
	v->a[13073] = 1;
	v->a[13074] = anon_sym_DOLLAR;
	v->a[13075] = actions(57);
	v->a[13076] = 1;
	v->a[13077] = anon_sym_DQUOTE;
	v->a[13078] = actions(61);
	v->a[13079] = 1;
	small_parse_table_654(v);
}

void	small_parse_table_654(t_small_parse_table_array *v)
{
	v->a[13080] = anon_sym_DOLLAR_LBRACE;
	v->a[13081] = actions(63);
	v->a[13082] = 1;
	v->a[13083] = anon_sym_DOLLAR_LPAREN;
	v->a[13084] = actions(65);
	v->a[13085] = 1;
	v->a[13086] = anon_sym_BQUOTE;
	v->a[13087] = actions(67);
	v->a[13088] = 1;
	v->a[13089] = sym_variable_name;
	v->a[13090] = state(109);
	v->a[13091] = 1;
	v->a[13092] = aux_sym__statements_repeat1;
	v->a[13093] = state(185);
	v->a[13094] = 1;
	v->a[13095] = sym_command_name;
	v->a[13096] = state(215);
	v->a[13097] = 1;
	v->a[13098] = sym_variable_assignment;
	v->a[13099] = state(411);
	small_parse_table_655(v);
}

/* EOF small_parse_table_130.c */
