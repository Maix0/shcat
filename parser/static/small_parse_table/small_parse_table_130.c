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
	v->a[13000] = 1;
	v->a[13001] = sym__statement_not_pipeline;
	v->a[13002] = state(2235);
	v->a[13003] = 1;
	v->a[13004] = sym__statements;
	v->a[13005] = actions(11);
	v->a[13006] = 2;
	v->a[13007] = anon_sym_while;
	v->a[13008] = anon_sym_until;
	v->a[13009] = actions(57);
	v->a[13010] = 2;
	v->a[13011] = anon_sym_LT_AMP_DASH;
	v->a[13012] = anon_sym_GT_AMP_DASH;
	v->a[13013] = actions(65);
	v->a[13014] = 2;
	v->a[13015] = sym_raw_string;
	v->a[13016] = sym_number;
	v->a[13017] = state(420);
	v->a[13018] = 5;
	v->a[13019] = sym_arithmetic_expansion;
	small_parse_table_651(v);
}

void	small_parse_table_651(t_small_parse_table_array *v)
{
	v->a[13020] = sym_string;
	v->a[13021] = sym_simple_expansion;
	v->a[13022] = sym_expansion;
	v->a[13023] = sym_command_substitution;
	v->a[13024] = actions(55);
	v->a[13025] = 8;
	v->a[13026] = anon_sym_LT;
	v->a[13027] = anon_sym_GT;
	v->a[13028] = anon_sym_GT_GT;
	v->a[13029] = anon_sym_AMP_GT;
	v->a[13030] = anon_sym_AMP_GT_GT;
	v->a[13031] = anon_sym_LT_AMP;
	v->a[13032] = anon_sym_GT_AMP;
	v->a[13033] = anon_sym_GT_PIPE;
	v->a[13034] = state(1057);
	v->a[13035] = 12;
	v->a[13036] = sym_redirected_statement;
	v->a[13037] = sym_for_statement;
	v->a[13038] = sym_while_statement;
	v->a[13039] = sym_if_statement;
	small_parse_table_652(v);
}

void	small_parse_table_652(t_small_parse_table_array *v)
{
	v->a[13040] = sym_case_statement;
	v->a[13041] = sym_function_definition;
	v->a[13042] = sym_compound_statement;
	v->a[13043] = sym_subshell;
	v->a[13044] = sym_list;
	v->a[13045] = sym_negated_command;
	v->a[13046] = sym_command;
	v->a[13047] = sym__variable_assignments;
	v->a[13048] = 32;
	v->a[13049] = actions(3);
	v->a[13050] = 1;
	v->a[13051] = sym_comment;
	v->a[13052] = actions(9);
	v->a[13053] = 1;
	v->a[13054] = anon_sym_for;
	v->a[13055] = actions(13);
	v->a[13056] = 1;
	v->a[13057] = anon_sym_if;
	v->a[13058] = actions(15);
	v->a[13059] = 1;
	small_parse_table_653(v);
}

void	small_parse_table_653(t_small_parse_table_array *v)
{
	v->a[13060] = anon_sym_case;
	v->a[13061] = actions(17);
	v->a[13062] = 1;
	v->a[13063] = anon_sym_LPAREN;
	v->a[13064] = actions(19);
	v->a[13065] = 1;
	v->a[13066] = anon_sym_LBRACE;
	v->a[13067] = actions(59);
	v->a[13068] = 1;
	v->a[13069] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[13070] = actions(61);
	v->a[13071] = 1;
	v->a[13072] = anon_sym_DOLLAR;
	v->a[13073] = actions(63);
	v->a[13074] = 1;
	v->a[13075] = anon_sym_DQUOTE;
	v->a[13076] = actions(67);
	v->a[13077] = 1;
	v->a[13078] = anon_sym_DOLLAR_LBRACE;
	v->a[13079] = actions(69);
	small_parse_table_654(v);
}

void	small_parse_table_654(t_small_parse_table_array *v)
{
	v->a[13080] = 1;
	v->a[13081] = anon_sym_DOLLAR_LPAREN;
	v->a[13082] = actions(71);
	v->a[13083] = 1;
	v->a[13084] = anon_sym_BQUOTE;
	v->a[13085] = actions(73);
	v->a[13086] = 1;
	v->a[13087] = sym_file_descriptor;
	v->a[13088] = actions(75);
	v->a[13089] = 1;
	v->a[13090] = sym_variable_name;
	v->a[13091] = actions(234);
	v->a[13092] = 1;
	v->a[13093] = sym_word;
	v->a[13094] = actions(236);
	v->a[13095] = 1;
	v->a[13096] = anon_sym_BANG;
	v->a[13097] = state(129);
	v->a[13098] = 1;
	v->a[13099] = aux_sym__statements_repeat1;
	small_parse_table_655(v);
}

/* EOF small_parse_table_130.c */
