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
	v->a[15000] = 2;
	v->a[15001] = anon_sym_while;
	v->a[15002] = anon_sym_until;
	v->a[15003] = actions(331);
	v->a[15004] = 2;
	v->a[15005] = sym_raw_string;
	v->a[15006] = sym_number;
	v->a[15007] = state(635);
	v->a[15008] = 5;
	v->a[15009] = sym_arithmetic_expansion;
	v->a[15010] = sym_string;
	v->a[15011] = sym_simple_expansion;
	v->a[15012] = sym_expansion;
	v->a[15013] = sym_command_substitution;
	v->a[15014] = actions(323);
	v->a[15015] = 7;
	v->a[15016] = anon_sym_LT;
	v->a[15017] = anon_sym_GT;
	v->a[15018] = anon_sym_GT_GT;
	v->a[15019] = anon_sym_LT_AMP;
	small_parse_table_751(v);
}

void	small_parse_table_751(t_small_parse_table_array *v)
{
	v->a[15020] = anon_sym_GT_AMP;
	v->a[15021] = anon_sym_GT_PIPE;
	v->a[15022] = anon_sym_LT_GT;
	v->a[15023] = state(1301);
	v->a[15024] = 13;
	v->a[15025] = sym__statement_not_pipeline;
	v->a[15026] = sym_redirected_statement;
	v->a[15027] = sym_for_statement;
	v->a[15028] = sym_while_statement;
	v->a[15029] = sym_if_statement;
	v->a[15030] = sym_case_statement;
	v->a[15031] = sym_function_definition;
	v->a[15032] = sym_compound_statement;
	v->a[15033] = sym_subshell;
	v->a[15034] = sym_list;
	v->a[15035] = sym_negated_command;
	v->a[15036] = sym_command;
	v->a[15037] = sym__variable_assignments;
	v->a[15038] = 28;
	v->a[15039] = actions(3);
	small_parse_table_752(v);
}

void	small_parse_table_752(t_small_parse_table_array *v)
{
	v->a[15040] = 1;
	v->a[15041] = sym_comment;
	v->a[15042] = actions(9);
	v->a[15043] = 1;
	v->a[15044] = anon_sym_for;
	v->a[15045] = actions(13);
	v->a[15046] = 1;
	v->a[15047] = anon_sym_if;
	v->a[15048] = actions(15);
	v->a[15049] = 1;
	v->a[15050] = anon_sym_case;
	v->a[15051] = actions(17);
	v->a[15052] = 1;
	v->a[15053] = anon_sym_LPAREN;
	v->a[15054] = actions(19);
	v->a[15055] = 1;
	v->a[15056] = anon_sym_LBRACE;
	v->a[15057] = actions(53);
	v->a[15058] = 1;
	v->a[15059] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_753(v);
}

void	small_parse_table_753(t_small_parse_table_array *v)
{
	v->a[15060] = actions(55);
	v->a[15061] = 1;
	v->a[15062] = anon_sym_DOLLAR;
	v->a[15063] = actions(57);
	v->a[15064] = 1;
	v->a[15065] = anon_sym_DQUOTE;
	v->a[15066] = actions(61);
	v->a[15067] = 1;
	v->a[15068] = anon_sym_DOLLAR_LBRACE;
	v->a[15069] = actions(63);
	v->a[15070] = 1;
	v->a[15071] = anon_sym_DOLLAR_LPAREN;
	v->a[15072] = actions(65);
	v->a[15073] = 1;
	v->a[15074] = anon_sym_BQUOTE;
	v->a[15075] = actions(206);
	v->a[15076] = 1;
	v->a[15077] = sym_word;
	v->a[15078] = actions(208);
	v->a[15079] = 1;
	small_parse_table_754(v);
}

void	small_parse_table_754(t_small_parse_table_array *v)
{
	v->a[15080] = anon_sym_BANG;
	v->a[15081] = actions(214);
	v->a[15082] = 1;
	v->a[15083] = sym_variable_name;
	v->a[15084] = state(227);
	v->a[15085] = 1;
	v->a[15086] = sym_command_name;
	v->a[15087] = state(285);
	v->a[15088] = 1;
	v->a[15089] = sym_variable_assignment;
	v->a[15090] = state(506);
	v->a[15091] = 1;
	v->a[15092] = aux_sym_command_repeat1;
	v->a[15093] = state(600);
	v->a[15094] = 1;
	v->a[15095] = sym_file_redirect;
	v->a[15096] = state(602);
	v->a[15097] = 1;
	v->a[15098] = sym_concatenation;
	v->a[15099] = state(930);
	small_parse_table_755(v);
}

/* EOF small_parse_table_150.c */
