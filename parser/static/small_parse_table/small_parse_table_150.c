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
	v->a[15000] = anon_sym_BQUOTE;
	v->a[15001] = actions(248);
	v->a[15002] = 1;
	v->a[15003] = sym_word;
	v->a[15004] = actions(250);
	v->a[15005] = 1;
	v->a[15006] = anon_sym_BANG;
	v->a[15007] = actions(256);
	v->a[15008] = 1;
	v->a[15009] = sym_raw_string;
	v->a[15010] = actions(258);
	v->a[15011] = 1;
	v->a[15012] = sym_file_descriptor;
	v->a[15013] = actions(260);
	v->a[15014] = 1;
	v->a[15015] = sym_variable_name;
	v->a[15016] = state(141);
	v->a[15017] = 1;
	v->a[15018] = aux_sym__statements_repeat1;
	v->a[15019] = state(175);
	small_parse_table_751(v);
}

void	small_parse_table_751(t_small_parse_table_array *v)
{
	v->a[15020] = 1;
	v->a[15021] = sym_command_name;
	v->a[15022] = state(278);
	v->a[15023] = 1;
	v->a[15024] = sym_variable_assignment;
	v->a[15025] = state(567);
	v->a[15026] = 1;
	v->a[15027] = aux_sym_command_repeat1;
	v->a[15028] = state(582);
	v->a[15029] = 1;
	v->a[15030] = sym_concatenation;
	v->a[15031] = state(736);
	v->a[15032] = 1;
	v->a[15033] = sym_file_redirect;
	v->a[15034] = state(1100);
	v->a[15035] = 1;
	v->a[15036] = sym_pipeline;
	v->a[15037] = state(1196);
	v->a[15038] = 1;
	v->a[15039] = aux_sym_redirected_statement_repeat2;
	small_parse_table_752(v);
}

void	small_parse_table_752(t_small_parse_table_array *v)
{
	v->a[15040] = state(2037);
	v->a[15041] = 1;
	v->a[15042] = sym__statement_not_pipeline;
	v->a[15043] = state(2150);
	v->a[15044] = 1;
	v->a[15045] = sym__statements;
	v->a[15046] = actions(11);
	v->a[15047] = 2;
	v->a[15048] = anon_sym_while;
	v->a[15049] = anon_sym_until;
	v->a[15050] = actions(254);
	v->a[15051] = 2;
	v->a[15052] = anon_sym_LT_AMP_DASH;
	v->a[15053] = anon_sym_GT_AMP_DASH;
	v->a[15054] = state(295);
	v->a[15055] = 6;
	v->a[15056] = sym_arithmetic_expansion;
	v->a[15057] = sym_string;
	v->a[15058] = sym_number;
	v->a[15059] = sym_simple_expansion;
	small_parse_table_753(v);
}

void	small_parse_table_753(t_small_parse_table_array *v)
{
	v->a[15060] = sym_expansion;
	v->a[15061] = sym_command_substitution;
	v->a[15062] = actions(252);
	v->a[15063] = 8;
	v->a[15064] = anon_sym_LT;
	v->a[15065] = anon_sym_GT;
	v->a[15066] = anon_sym_GT_GT;
	v->a[15067] = anon_sym_AMP_GT;
	v->a[15068] = anon_sym_AMP_GT_GT;
	v->a[15069] = anon_sym_LT_AMP;
	v->a[15070] = anon_sym_GT_AMP;
	v->a[15071] = anon_sym_GT_PIPE;
	v->a[15072] = state(1031);
	v->a[15073] = 12;
	v->a[15074] = sym_redirected_statement;
	v->a[15075] = sym_for_statement;
	v->a[15076] = sym_while_statement;
	v->a[15077] = sym_if_statement;
	v->a[15078] = sym_case_statement;
	v->a[15079] = sym_function_definition;
	small_parse_table_754(v);
}

void	small_parse_table_754(t_small_parse_table_array *v)
{
	v->a[15080] = sym_compound_statement;
	v->a[15081] = sym_subshell;
	v->a[15082] = sym_list;
	v->a[15083] = sym_negated_command;
	v->a[15084] = sym_command;
	v->a[15085] = sym_variable_assignments;
	v->a[15086] = 34;
	v->a[15087] = actions(3);
	v->a[15088] = 1;
	v->a[15089] = sym_comment;
	v->a[15090] = actions(9);
	v->a[15091] = 1;
	v->a[15092] = anon_sym_for;
	v->a[15093] = actions(13);
	v->a[15094] = 1;
	v->a[15095] = anon_sym_if;
	v->a[15096] = actions(15);
	v->a[15097] = 1;
	v->a[15098] = anon_sym_case;
	v->a[15099] = actions(17);
	small_parse_table_755(v);
}

/* EOF small_parse_table_150.c */
