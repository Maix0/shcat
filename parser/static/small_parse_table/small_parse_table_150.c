/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_150.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_750(t_small_parse_table_array *v)
{
	v->a[15000] = 5;
	v->a[15001] = sym_arithmetic_expansion;
	v->a[15002] = sym_string;
	v->a[15003] = sym_simple_expansion;
	v->a[15004] = sym_expansion;
	v->a[15005] = sym_command_substitution;
	v->a[15006] = state(1008);
	v->a[15007] = 7;
	v->a[15008] = sym_for_statement;
	v->a[15009] = sym_while_statement;
	v->a[15010] = sym_if_statement;
	v->a[15011] = sym_compound_statement;
	v->a[15012] = sym_subshell;
	v->a[15013] = sym_command;
	v->a[15014] = sym__variable_assignments;
	v->a[15015] = 23;
	v->a[15016] = actions(3);
	v->a[15017] = 1;
	v->a[15018] = sym_comment;
	v->a[15019] = actions(299);
	small_parse_table_751(v);
}

void	small_parse_table_751(t_small_parse_table_array *v)
{
	v->a[15020] = 1;
	v->a[15021] = anon_sym_for;
	v->a[15022] = actions(303);
	v->a[15023] = 1;
	v->a[15024] = anon_sym_if;
	v->a[15025] = actions(307);
	v->a[15026] = 1;
	v->a[15027] = anon_sym_LPAREN;
	v->a[15028] = actions(309);
	v->a[15029] = 1;
	v->a[15030] = anon_sym_LBRACE;
	v->a[15031] = actions(315);
	v->a[15032] = 1;
	v->a[15033] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[15034] = actions(317);
	v->a[15035] = 1;
	v->a[15036] = anon_sym_DOLLAR;
	v->a[15037] = actions(319);
	v->a[15038] = 1;
	v->a[15039] = anon_sym_DQUOTE;
	small_parse_table_752(v);
}

void	small_parse_table_752(t_small_parse_table_array *v)
{
	v->a[15040] = actions(323);
	v->a[15041] = 1;
	v->a[15042] = anon_sym_DOLLAR_LBRACE;
	v->a[15043] = actions(325);
	v->a[15044] = 1;
	v->a[15045] = anon_sym_DOLLAR_LPAREN;
	v->a[15046] = actions(327);
	v->a[15047] = 1;
	v->a[15048] = anon_sym_BQUOTE;
	v->a[15049] = actions(341);
	v->a[15050] = 1;
	v->a[15051] = sym_variable_name;
	v->a[15052] = state(274);
	v->a[15053] = 1;
	v->a[15054] = sym_command_name;
	v->a[15055] = state(328);
	v->a[15056] = 1;
	v->a[15057] = aux_sym_command_repeat1;
	v->a[15058] = state(707);
	v->a[15059] = 1;
	small_parse_table_753(v);
}

void	small_parse_table_753(t_small_parse_table_array *v)
{
	v->a[15060] = sym_file_redirect;
	v->a[15061] = state(772);
	v->a[15062] = 1;
	v->a[15063] = sym_concatenation;
	v->a[15064] = state(861);
	v->a[15065] = 1;
	v->a[15066] = sym_variable_assignment;
	v->a[15067] = state(1337);
	v->a[15068] = 1;
	v->a[15069] = aux_sym_redirected_statement_repeat2;
	v->a[15070] = actions(301);
	v->a[15071] = 2;
	v->a[15072] = anon_sym_while;
	v->a[15073] = anon_sym_until;
	v->a[15074] = actions(313);
	v->a[15075] = 3;
	v->a[15076] = anon_sym_LT;
	v->a[15077] = anon_sym_GT;
	v->a[15078] = anon_sym_GT_GT;
	v->a[15079] = actions(321);
	small_parse_table_754(v);
}

void	small_parse_table_754(t_small_parse_table_array *v)
{
	v->a[15080] = 3;
	v->a[15081] = sym_raw_string;
	v->a[15082] = sym_number;
	v->a[15083] = sym_word;
	v->a[15084] = state(606);
	v->a[15085] = 5;
	v->a[15086] = sym_arithmetic_expansion;
	v->a[15087] = sym_string;
	v->a[15088] = sym_simple_expansion;
	v->a[15089] = sym_expansion;
	v->a[15090] = sym_command_substitution;
	v->a[15091] = state(1404);
	v->a[15092] = 7;
	v->a[15093] = sym_for_statement;
	v->a[15094] = sym_while_statement;
	v->a[15095] = sym_if_statement;
	v->a[15096] = sym_compound_statement;
	v->a[15097] = sym_subshell;
	v->a[15098] = sym_command;
	v->a[15099] = sym__variable_assignments;
	small_parse_table_755(v);
}

/* EOF small_parse_table_150.c */
