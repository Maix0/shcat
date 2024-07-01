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
	v->a[13000] = anon_sym_if;
	v->a[13001] = actions(15);
	v->a[13002] = 1;
	v->a[13003] = anon_sym_case;
	v->a[13004] = actions(17);
	v->a[13005] = 1;
	v->a[13006] = anon_sym_LPAREN;
	v->a[13007] = actions(19);
	v->a[13008] = 1;
	v->a[13009] = anon_sym_LBRACE;
	v->a[13010] = actions(55);
	v->a[13011] = 1;
	v->a[13012] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[13013] = actions(57);
	v->a[13014] = 1;
	v->a[13015] = anon_sym_DOLLAR;
	v->a[13016] = actions(59);
	v->a[13017] = 1;
	v->a[13018] = anon_sym_DQUOTE;
	v->a[13019] = actions(63);
	small_parse_table_651(v);
}

void	small_parse_table_651(t_small_parse_table_array *v)
{
	v->a[13020] = 1;
	v->a[13021] = anon_sym_DOLLAR_LBRACE;
	v->a[13022] = actions(65);
	v->a[13023] = 1;
	v->a[13024] = anon_sym_DOLLAR_LPAREN;
	v->a[13025] = actions(67);
	v->a[13026] = 1;
	v->a[13027] = anon_sym_BQUOTE;
	v->a[13028] = actions(211);
	v->a[13029] = 1;
	v->a[13030] = sym_word;
	v->a[13031] = actions(213);
	v->a[13032] = 1;
	v->a[13033] = anon_sym_BANG;
	v->a[13034] = actions(219);
	v->a[13035] = 1;
	v->a[13036] = sym_file_descriptor;
	v->a[13037] = actions(221);
	v->a[13038] = 1;
	v->a[13039] = sym_variable_name;
	small_parse_table_652(v);
}

void	small_parse_table_652(t_small_parse_table_array *v)
{
	v->a[13040] = state(125);
	v->a[13041] = 1;
	v->a[13042] = aux_sym__statements_repeat1;
	v->a[13043] = state(173);
	v->a[13044] = 1;
	v->a[13045] = sym_command_name;
	v->a[13046] = state(224);
	v->a[13047] = 1;
	v->a[13048] = sym_variable_assignment;
	v->a[13049] = state(603);
	v->a[13050] = 1;
	v->a[13051] = sym_concatenation;
	v->a[13052] = state(666);
	v->a[13053] = 1;
	v->a[13054] = sym_file_redirect;
	v->a[13055] = state(673);
	v->a[13056] = 1;
	v->a[13057] = aux_sym_command_repeat1;
	v->a[13058] = state(1020);
	v->a[13059] = 1;
	small_parse_table_653(v);
}

void	small_parse_table_653(t_small_parse_table_array *v)
{
	v->a[13060] = sym_pipeline;
	v->a[13061] = state(1136);
	v->a[13062] = 1;
	v->a[13063] = aux_sym_redirected_statement_repeat2;
	v->a[13064] = state(1898);
	v->a[13065] = 1;
	v->a[13066] = sym__statement_not_pipeline;
	v->a[13067] = state(1939);
	v->a[13068] = 1;
	v->a[13069] = sym__statements;
	v->a[13070] = actions(11);
	v->a[13071] = 2;
	v->a[13072] = anon_sym_while;
	v->a[13073] = anon_sym_until;
	v->a[13074] = actions(217);
	v->a[13075] = 2;
	v->a[13076] = sym_raw_string;
	v->a[13077] = sym_number;
	v->a[13078] = state(362);
	v->a[13079] = 5;
	small_parse_table_654(v);
}

void	small_parse_table_654(t_small_parse_table_array *v)
{
	v->a[13080] = sym_arithmetic_expansion;
	v->a[13081] = sym_string;
	v->a[13082] = sym_simple_expansion;
	v->a[13083] = sym_expansion;
	v->a[13084] = sym_command_substitution;
	v->a[13085] = actions(215);
	v->a[13086] = 7;
	v->a[13087] = anon_sym_LT;
	v->a[13088] = anon_sym_GT;
	v->a[13089] = anon_sym_GT_GT;
	v->a[13090] = anon_sym_LT_AMP;
	v->a[13091] = anon_sym_GT_AMP;
	v->a[13092] = anon_sym_GT_PIPE;
	v->a[13093] = anon_sym_LT_GT;
	v->a[13094] = state(1003);
	v->a[13095] = 12;
	v->a[13096] = sym_redirected_statement;
	v->a[13097] = sym_for_statement;
	v->a[13098] = sym_while_statement;
	v->a[13099] = sym_if_statement;
	small_parse_table_655(v);
}

/* EOF small_parse_table_130.c */
