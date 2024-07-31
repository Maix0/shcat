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
	v->a[13000] = aux_sym_redirected_statement_repeat2;
	v->a[13001] = state(1609);
	v->a[13002] = 1;
	v->a[13003] = sym__statement_not_pipeline;
	v->a[13004] = actions(11);
	v->a[13005] = 2;
	v->a[13006] = anon_sym_while;
	v->a[13007] = anon_sym_until;
	v->a[13008] = actions(59);
	v->a[13009] = 2;
	v->a[13010] = sym_raw_string;
	v->a[13011] = sym_number;
	v->a[13012] = state(425);
	v->a[13013] = 5;
	v->a[13014] = sym_arithmetic_expansion;
	v->a[13015] = sym_string;
	v->a[13016] = sym_simple_expansion;
	v->a[13017] = sym_expansion;
	v->a[13018] = sym_command_substitution;
	v->a[13019] = actions(51);
	small_parse_table_651(v);
}

void	small_parse_table_651(t_small_parse_table_array *v)
{
	v->a[13020] = 7;
	v->a[13021] = anon_sym_LT;
	v->a[13022] = anon_sym_GT;
	v->a[13023] = anon_sym_GT_GT;
	v->a[13024] = anon_sym_LT_AMP;
	v->a[13025] = anon_sym_GT_AMP;
	v->a[13026] = anon_sym_GT_PIPE;
	v->a[13027] = anon_sym_LT_GT;
	v->a[13028] = state(956);
	v->a[13029] = 12;
	v->a[13030] = sym_redirected_statement;
	v->a[13031] = sym_for_statement;
	v->a[13032] = sym_while_statement;
	v->a[13033] = sym_if_statement;
	v->a[13034] = sym_case_statement;
	v->a[13035] = sym_function_definition;
	v->a[13036] = sym_compound_statement;
	v->a[13037] = sym_subshell;
	v->a[13038] = sym_list;
	v->a[13039] = sym_negated_command;
	small_parse_table_652(v);
}

void	small_parse_table_652(t_small_parse_table_array *v)
{
	v->a[13040] = sym_command;
	v->a[13041] = sym__variable_assignments;
	v->a[13042] = 29;
	v->a[13043] = actions(3);
	v->a[13044] = 1;
	v->a[13045] = sym_comment;
	v->a[13046] = actions(9);
	v->a[13047] = 1;
	v->a[13048] = anon_sym_for;
	v->a[13049] = actions(13);
	v->a[13050] = 1;
	v->a[13051] = anon_sym_if;
	v->a[13052] = actions(15);
	v->a[13053] = 1;
	v->a[13054] = anon_sym_case;
	v->a[13055] = actions(17);
	v->a[13056] = 1;
	v->a[13057] = anon_sym_LPAREN;
	v->a[13058] = actions(19);
	v->a[13059] = 1;
	small_parse_table_653(v);
}

void	small_parse_table_653(t_small_parse_table_array *v)
{
	v->a[13060] = anon_sym_LBRACE;
	v->a[13061] = actions(41);
	v->a[13062] = 1;
	v->a[13063] = sym_word;
	v->a[13064] = actions(49);
	v->a[13065] = 1;
	v->a[13066] = anon_sym_BANG;
	v->a[13067] = actions(53);
	v->a[13068] = 1;
	v->a[13069] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[13070] = actions(55);
	v->a[13071] = 1;
	v->a[13072] = anon_sym_DOLLAR;
	v->a[13073] = actions(57);
	v->a[13074] = 1;
	v->a[13075] = anon_sym_DQUOTE;
	v->a[13076] = actions(61);
	v->a[13077] = 1;
	v->a[13078] = anon_sym_DOLLAR_LBRACE;
	v->a[13079] = actions(63);
	small_parse_table_654(v);
}

void	small_parse_table_654(t_small_parse_table_array *v)
{
	v->a[13080] = 1;
	v->a[13081] = anon_sym_DOLLAR_LPAREN;
	v->a[13082] = actions(65);
	v->a[13083] = 1;
	v->a[13084] = anon_sym_BQUOTE;
	v->a[13085] = actions(67);
	v->a[13086] = 1;
	v->a[13087] = sym_variable_name;
	v->a[13088] = state(102);
	v->a[13089] = 1;
	v->a[13090] = aux_sym__terminated_statement;
	v->a[13091] = state(271);
	v->a[13092] = 1;
	v->a[13093] = sym_command_name;
	v->a[13094] = state(302);
	v->a[13095] = 1;
	v->a[13096] = sym_variable_assignment;
	v->a[13097] = state(482);
	v->a[13098] = 1;
	v->a[13099] = aux_sym_command_repeat1;
	small_parse_table_655(v);
}

/* EOF small_parse_table_130.c */
