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
	v->a[15000] = 32;
	v->a[15001] = actions(3);
	v->a[15002] = 1;
	v->a[15003] = sym_comment;
	v->a[15004] = actions(9);
	v->a[15005] = 1;
	v->a[15006] = anon_sym_for;
	v->a[15007] = actions(13);
	v->a[15008] = 1;
	v->a[15009] = anon_sym_if;
	v->a[15010] = actions(15);
	v->a[15011] = 1;
	v->a[15012] = anon_sym_case;
	v->a[15013] = actions(17);
	v->a[15014] = 1;
	v->a[15015] = anon_sym_LPAREN;
	v->a[15016] = actions(19);
	v->a[15017] = 1;
	v->a[15018] = anon_sym_LBRACE;
	v->a[15019] = actions(59);
	small_parse_table_751(v);
}

void	small_parse_table_751(t_small_parse_table_array *v)
{
	v->a[15020] = 1;
	v->a[15021] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[15022] = actions(61);
	v->a[15023] = 1;
	v->a[15024] = anon_sym_DOLLAR;
	v->a[15025] = actions(63);
	v->a[15026] = 1;
	v->a[15027] = anon_sym_DQUOTE;
	v->a[15028] = actions(67);
	v->a[15029] = 1;
	v->a[15030] = anon_sym_DOLLAR_LBRACE;
	v->a[15031] = actions(69);
	v->a[15032] = 1;
	v->a[15033] = anon_sym_DOLLAR_LPAREN;
	v->a[15034] = actions(71);
	v->a[15035] = 1;
	v->a[15036] = anon_sym_BQUOTE;
	v->a[15037] = actions(220);
	v->a[15038] = 1;
	v->a[15039] = sym_word;
	small_parse_table_752(v);
}

void	small_parse_table_752(t_small_parse_table_array *v)
{
	v->a[15040] = actions(222);
	v->a[15041] = 1;
	v->a[15042] = anon_sym_BANG;
	v->a[15043] = actions(230);
	v->a[15044] = 1;
	v->a[15045] = sym_file_descriptor;
	v->a[15046] = actions(232);
	v->a[15047] = 1;
	v->a[15048] = sym_variable_name;
	v->a[15049] = state(138);
	v->a[15050] = 1;
	v->a[15051] = aux_sym__statements_repeat1;
	v->a[15052] = state(185);
	v->a[15053] = 1;
	v->a[15054] = sym_command_name;
	v->a[15055] = state(235);
	v->a[15056] = 1;
	v->a[15057] = sym_variable_assignment;
	v->a[15058] = state(624);
	v->a[15059] = 1;
	small_parse_table_753(v);
}

void	small_parse_table_753(t_small_parse_table_array *v)
{
	v->a[15060] = sym_concatenation;
	v->a[15061] = state(730);
	v->a[15062] = 1;
	v->a[15063] = sym_file_redirect;
	v->a[15064] = state(765);
	v->a[15065] = 1;
	v->a[15066] = aux_sym_command_repeat1;
	v->a[15067] = state(1110);
	v->a[15068] = 1;
	v->a[15069] = sym_pipeline;
	v->a[15070] = state(1188);
	v->a[15071] = 1;
	v->a[15072] = aux_sym_redirected_statement_repeat2;
	v->a[15073] = state(2115);
	v->a[15074] = 1;
	v->a[15075] = sym__statement_not_pipeline;
	v->a[15076] = state(2316);
	v->a[15077] = 1;
	v->a[15078] = sym__statements;
	v->a[15079] = actions(11);
	small_parse_table_754(v);
}

void	small_parse_table_754(t_small_parse_table_array *v)
{
	v->a[15080] = 2;
	v->a[15081] = anon_sym_while;
	v->a[15082] = anon_sym_until;
	v->a[15083] = actions(226);
	v->a[15084] = 2;
	v->a[15085] = anon_sym_LT_AMP_DASH;
	v->a[15086] = anon_sym_GT_AMP_DASH;
	v->a[15087] = actions(228);
	v->a[15088] = 2;
	v->a[15089] = sym_raw_string;
	v->a[15090] = sym_number;
	v->a[15091] = state(299);
	v->a[15092] = 5;
	v->a[15093] = sym_arithmetic_expansion;
	v->a[15094] = sym_string;
	v->a[15095] = sym_simple_expansion;
	v->a[15096] = sym_expansion;
	v->a[15097] = sym_command_substitution;
	v->a[15098] = actions(224);
	v->a[15099] = 8;
	small_parse_table_755(v);
}

/* EOF small_parse_table_150.c */
