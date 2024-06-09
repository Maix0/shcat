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
	v->a[13000] = anon_sym_while;
	v->a[13001] = anon_sym_until;
	v->a[13002] = actions(61);
	v->a[13003] = 2;
	v->a[13004] = anon_sym_LT_AMP_DASH;
	v->a[13005] = anon_sym_GT_AMP_DASH;
	v->a[13006] = state(397);
	v->a[13007] = 6;
	v->a[13008] = sym_arithmetic_expansion;
	v->a[13009] = sym_string;
	v->a[13010] = sym_number;
	v->a[13011] = sym_simple_expansion;
	v->a[13012] = sym_expansion;
	v->a[13013] = sym_command_substitution;
	v->a[13014] = actions(59);
	v->a[13015] = 8;
	v->a[13016] = anon_sym_LT;
	v->a[13017] = anon_sym_GT;
	v->a[13018] = anon_sym_GT_GT;
	v->a[13019] = anon_sym_AMP_GT;
	small_parse_table_651(v);
}

void	small_parse_table_651(t_small_parse_table_array *v)
{
	v->a[13020] = anon_sym_AMP_GT_GT;
	v->a[13021] = anon_sym_LT_AMP;
	v->a[13022] = anon_sym_GT_AMP;
	v->a[13023] = anon_sym_GT_PIPE;
	v->a[13024] = state(1071);
	v->a[13025] = 12;
	v->a[13026] = sym_redirected_statement;
	v->a[13027] = sym_for_statement;
	v->a[13028] = sym_while_statement;
	v->a[13029] = sym_if_statement;
	v->a[13030] = sym_case_statement;
	v->a[13031] = sym_function_definition;
	v->a[13032] = sym_compound_statement;
	v->a[13033] = sym_subshell;
	v->a[13034] = sym_list;
	v->a[13035] = sym_negated_command;
	v->a[13036] = sym_command;
	v->a[13037] = sym_variable_assignments;
	v->a[13038] = 34;
	v->a[13039] = actions(3);
	small_parse_table_652(v);
}

void	small_parse_table_652(t_small_parse_table_array *v)
{
	v->a[13040] = 1;
	v->a[13041] = sym_comment;
	v->a[13042] = actions(9);
	v->a[13043] = 1;
	v->a[13044] = anon_sym_for;
	v->a[13045] = actions(13);
	v->a[13046] = 1;
	v->a[13047] = anon_sym_if;
	v->a[13048] = actions(15);
	v->a[13049] = 1;
	v->a[13050] = anon_sym_case;
	v->a[13051] = actions(17);
	v->a[13052] = 1;
	v->a[13053] = anon_sym_LPAREN;
	v->a[13054] = actions(19);
	v->a[13055] = 1;
	v->a[13056] = anon_sym_LBRACE;
	v->a[13057] = actions(63);
	v->a[13058] = 1;
	v->a[13059] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_653(v);
}

void	small_parse_table_653(t_small_parse_table_array *v)
{
	v->a[13060] = actions(65);
	v->a[13061] = 1;
	v->a[13062] = anon_sym_DOLLAR;
	v->a[13063] = actions(67);
	v->a[13064] = 1;
	v->a[13065] = anon_sym_DQUOTE;
	v->a[13066] = actions(71);
	v->a[13067] = 1;
	v->a[13068] = aux_sym_number_token1;
	v->a[13069] = actions(73);
	v->a[13070] = 1;
	v->a[13071] = aux_sym_number_token2;
	v->a[13072] = actions(75);
	v->a[13073] = 1;
	v->a[13074] = anon_sym_DOLLAR_LBRACE;
	v->a[13075] = actions(77);
	v->a[13076] = 1;
	v->a[13077] = anon_sym_DOLLAR_LPAREN;
	v->a[13078] = actions(79);
	v->a[13079] = 1;
	small_parse_table_654(v);
}

void	small_parse_table_654(t_small_parse_table_array *v)
{
	v->a[13080] = anon_sym_BQUOTE;
	v->a[13081] = actions(248);
	v->a[13082] = 1;
	v->a[13083] = sym_word;
	v->a[13084] = actions(250);
	v->a[13085] = 1;
	v->a[13086] = anon_sym_BANG;
	v->a[13087] = actions(256);
	v->a[13088] = 1;
	v->a[13089] = sym_raw_string;
	v->a[13090] = actions(258);
	v->a[13091] = 1;
	v->a[13092] = sym_file_descriptor;
	v->a[13093] = actions(260);
	v->a[13094] = 1;
	v->a[13095] = sym_variable_name;
	v->a[13096] = state(141);
	v->a[13097] = 1;
	v->a[13098] = aux_sym__statements_repeat1;
	v->a[13099] = state(175);
	small_parse_table_655(v);
}

/* EOF small_parse_table_130.c */
