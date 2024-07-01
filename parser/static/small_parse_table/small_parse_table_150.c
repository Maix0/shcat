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
	v->a[15000] = 1;
	v->a[15001] = sym_comment;
	v->a[15002] = actions(9);
	v->a[15003] = 1;
	v->a[15004] = anon_sym_for;
	v->a[15005] = actions(13);
	v->a[15006] = 1;
	v->a[15007] = anon_sym_if;
	v->a[15008] = actions(15);
	v->a[15009] = 1;
	v->a[15010] = anon_sym_case;
	v->a[15011] = actions(17);
	v->a[15012] = 1;
	v->a[15013] = anon_sym_LPAREN;
	v->a[15014] = actions(19);
	v->a[15015] = 1;
	v->a[15016] = anon_sym_LBRACE;
	v->a[15017] = actions(45);
	v->a[15018] = 1;
	v->a[15019] = sym_word;
	small_parse_table_751(v);
}

void	small_parse_table_751(t_small_parse_table_array *v)
{
	v->a[15020] = actions(53);
	v->a[15021] = 1;
	v->a[15022] = anon_sym_BANG;
	v->a[15023] = actions(59);
	v->a[15024] = 1;
	v->a[15025] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[15026] = actions(61);
	v->a[15027] = 1;
	v->a[15028] = anon_sym_DOLLAR;
	v->a[15029] = actions(63);
	v->a[15030] = 1;
	v->a[15031] = anon_sym_DQUOTE;
	v->a[15032] = actions(67);
	v->a[15033] = 1;
	v->a[15034] = anon_sym_DOLLAR_LBRACE;
	v->a[15035] = actions(69);
	v->a[15036] = 1;
	v->a[15037] = anon_sym_DOLLAR_LPAREN;
	v->a[15038] = actions(71);
	v->a[15039] = 1;
	small_parse_table_752(v);
}

void	small_parse_table_752(t_small_parse_table_array *v)
{
	v->a[15040] = anon_sym_BQUOTE;
	v->a[15041] = actions(73);
	v->a[15042] = 1;
	v->a[15043] = sym_file_descriptor;
	v->a[15044] = actions(75);
	v->a[15045] = 1;
	v->a[15046] = sym_variable_name;
	v->a[15047] = actions(266);
	v->a[15048] = 1;
	v->a[15049] = anon_sym_done;
	v->a[15050] = state(35);
	v->a[15051] = 1;
	v->a[15052] = aux_sym__terminated_statement;
	v->a[15053] = state(189);
	v->a[15054] = 1;
	v->a[15055] = sym_command_name;
	v->a[15056] = state(291);
	v->a[15057] = 1;
	v->a[15058] = sym_variable_assignment;
	v->a[15059] = state(650);
	small_parse_table_753(v);
}

void	small_parse_table_753(t_small_parse_table_array *v)
{
	v->a[15060] = 1;
	v->a[15061] = sym_concatenation;
	v->a[15062] = state(712);
	v->a[15063] = 1;
	v->a[15064] = sym_file_redirect;
	v->a[15065] = state(713);
	v->a[15066] = 1;
	v->a[15067] = aux_sym_command_repeat1;
	v->a[15068] = state(1251);
	v->a[15069] = 1;
	v->a[15070] = sym_pipeline;
	v->a[15071] = state(1333);
	v->a[15072] = 1;
	v->a[15073] = aux_sym_redirected_statement_repeat2;
	v->a[15074] = state(2103);
	v->a[15075] = 1;
	v->a[15076] = sym__statement_not_pipeline;
	v->a[15077] = actions(11);
	v->a[15078] = 2;
	v->a[15079] = anon_sym_while;
	small_parse_table_754(v);
}

void	small_parse_table_754(t_small_parse_table_array *v)
{
	v->a[15080] = anon_sym_until;
	v->a[15081] = actions(57);
	v->a[15082] = 2;
	v->a[15083] = anon_sym_LT_AMP_DASH;
	v->a[15084] = anon_sym_GT_AMP_DASH;
	v->a[15085] = actions(65);
	v->a[15086] = 2;
	v->a[15087] = sym_raw_string;
	v->a[15088] = sym_number;
	v->a[15089] = state(443);
	v->a[15090] = 5;
	v->a[15091] = sym_arithmetic_expansion;
	v->a[15092] = sym_string;
	v->a[15093] = sym_simple_expansion;
	v->a[15094] = sym_expansion;
	v->a[15095] = sym_command_substitution;
	v->a[15096] = actions(55);
	v->a[15097] = 6;
	v->a[15098] = anon_sym_LT;
	v->a[15099] = anon_sym_GT;
	small_parse_table_755(v);
}

/* EOF small_parse_table_150.c */
