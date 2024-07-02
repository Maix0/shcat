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
	v->a[15000] = anon_sym_GT_PIPE;
	v->a[15001] = anon_sym_LT_GT;
	v->a[15002] = state(1043);
	v->a[15003] = 12;
	v->a[15004] = sym_redirected_statement;
	v->a[15005] = sym_for_statement;
	v->a[15006] = sym_while_statement;
	v->a[15007] = sym_if_statement;
	v->a[15008] = sym_case_statement;
	v->a[15009] = sym_function_definition;
	v->a[15010] = sym_compound_statement;
	v->a[15011] = sym_subshell;
	v->a[15012] = sym_list;
	v->a[15013] = sym_negated_command;
	v->a[15014] = sym_command;
	v->a[15015] = sym__variable_assignments;
	v->a[15016] = 30;
	v->a[15017] = actions(3);
	v->a[15018] = 1;
	v->a[15019] = sym_comment;
	small_parse_table_751(v);
}

void	small_parse_table_751(t_small_parse_table_array *v)
{
	v->a[15020] = actions(9);
	v->a[15021] = 1;
	v->a[15022] = anon_sym_for;
	v->a[15023] = actions(13);
	v->a[15024] = 1;
	v->a[15025] = anon_sym_if;
	v->a[15026] = actions(15);
	v->a[15027] = 1;
	v->a[15028] = anon_sym_case;
	v->a[15029] = actions(17);
	v->a[15030] = 1;
	v->a[15031] = anon_sym_LPAREN;
	v->a[15032] = actions(19);
	v->a[15033] = 1;
	v->a[15034] = anon_sym_LBRACE;
	v->a[15035] = actions(43);
	v->a[15036] = 1;
	v->a[15037] = sym_word;
	v->a[15038] = actions(51);
	v->a[15039] = 1;
	small_parse_table_752(v);
}

void	small_parse_table_752(t_small_parse_table_array *v)
{
	v->a[15040] = anon_sym_BANG;
	v->a[15041] = actions(55);
	v->a[15042] = 1;
	v->a[15043] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[15044] = actions(57);
	v->a[15045] = 1;
	v->a[15046] = anon_sym_DOLLAR;
	v->a[15047] = actions(59);
	v->a[15048] = 1;
	v->a[15049] = anon_sym_DQUOTE;
	v->a[15050] = actions(63);
	v->a[15051] = 1;
	v->a[15052] = anon_sym_DOLLAR_LBRACE;
	v->a[15053] = actions(65);
	v->a[15054] = 1;
	v->a[15055] = anon_sym_DOLLAR_LPAREN;
	v->a[15056] = actions(67);
	v->a[15057] = 1;
	v->a[15058] = anon_sym_BQUOTE;
	v->a[15059] = actions(69);
	small_parse_table_753(v);
}

void	small_parse_table_753(t_small_parse_table_array *v)
{
	v->a[15060] = 1;
	v->a[15061] = sym_file_descriptor;
	v->a[15062] = actions(71);
	v->a[15063] = 1;
	v->a[15064] = sym_variable_name;
	v->a[15065] = state(104);
	v->a[15066] = 1;
	v->a[15067] = aux_sym__terminated_statement;
	v->a[15068] = state(182);
	v->a[15069] = 1;
	v->a[15070] = sym_command_name;
	v->a[15071] = state(305);
	v->a[15072] = 1;
	v->a[15073] = sym_variable_assignment;
	v->a[15074] = state(584);
	v->a[15075] = 1;
	v->a[15076] = sym_concatenation;
	v->a[15077] = state(620);
	v->a[15078] = 1;
	v->a[15079] = sym_file_redirect;
	small_parse_table_754(v);
}

void	small_parse_table_754(t_small_parse_table_array *v)
{
	v->a[15080] = state(623);
	v->a[15081] = 1;
	v->a[15082] = aux_sym_command_repeat1;
	v->a[15083] = state(1118);
	v->a[15084] = 1;
	v->a[15085] = sym_pipeline;
	v->a[15086] = state(1201);
	v->a[15087] = 1;
	v->a[15088] = aux_sym_redirected_statement_repeat2;
	v->a[15089] = state(1911);
	v->a[15090] = 1;
	v->a[15091] = sym__statement_not_pipeline;
	v->a[15092] = actions(11);
	v->a[15093] = 2;
	v->a[15094] = anon_sym_while;
	v->a[15095] = anon_sym_until;
	v->a[15096] = actions(61);
	v->a[15097] = 2;
	v->a[15098] = sym_raw_string;
	v->a[15099] = sym_number;
	small_parse_table_755(v);
}

/* EOF small_parse_table_150.c */
