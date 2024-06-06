/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1160.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5800(t_small_parse_table_array *v)
{
	v->a[116000] = actions(3499);
	v->a[116001] = 1;
	v->a[116002] = anon_sym_DOLLAR_LPAREN;
	v->a[116003] = actions(3501);
	v->a[116004] = 1;
	v->a[116005] = anon_sym_BQUOTE;
	v->a[116006] = actions(3503);
	v->a[116007] = 1;
	v->a[116008] = anon_sym_DOLLAR_BQUOTE;
	v->a[116009] = actions(3505);
	v->a[116010] = 1;
	v->a[116011] = sym__brace_start;
	v->a[116012] = actions(6290);
	v->a[116013] = 1;
	v->a[116014] = sym_word;
	v->a[116015] = actions(6294);
	v->a[116016] = 1;
	v->a[116017] = sym__special_character;
	v->a[116018] = actions(6298);
	v->a[116019] = 1;
	small_parse_table_5801(v);
}

void	small_parse_table_5801(t_small_parse_table_array *v)
{
	v->a[116020] = sym__comment_word;
	v->a[116021] = actions(6809);
	v->a[116022] = 1;
	v->a[116023] = anon_sym_DOLLAR;
	v->a[116024] = actions(6296);
	v->a[116025] = 3;
	v->a[116026] = sym_test_operator;
	v->a[116027] = sym__bare_dollar;
	v->a[116028] = sym_raw_string;
	v->a[116029] = state(2690);
	v->a[116030] = 7;
	v->a[116031] = sym_arithmetic_expansion;
	v->a[116032] = sym_brace_expression;
	v->a[116033] = sym_string;
	v->a[116034] = sym_number;
	v->a[116035] = sym_simple_expansion;
	v->a[116036] = sym_expansion;
	v->a[116037] = sym_command_substitution;
	v->a[116038] = 16;
	v->a[116039] = actions(3);
	small_parse_table_5802(v);
}

void	small_parse_table_5802(t_small_parse_table_array *v)
{
	v->a[116040] = 1;
	v->a[116041] = sym_comment;
	v->a[116042] = actions(2356);
	v->a[116043] = 1;
	v->a[116044] = anon_sym_DOLLAR;
	v->a[116045] = actions(2362);
	v->a[116046] = 1;
	v->a[116047] = aux_sym_number_token1;
	v->a[116048] = actions(2364);
	v->a[116049] = 1;
	v->a[116050] = aux_sym_number_token2;
	v->a[116051] = actions(2368);
	v->a[116052] = 1;
	v->a[116053] = anon_sym_DOLLAR_LPAREN;
	v->a[116054] = actions(2376);
	v->a[116055] = 1;
	v->a[116056] = sym__brace_start;
	v->a[116057] = actions(6811);
	v->a[116058] = 1;
	v->a[116059] = sym_word;
	small_parse_table_5803(v);
}

void	small_parse_table_5803(t_small_parse_table_array *v)
{
	v->a[116060] = actions(6813);
	v->a[116061] = 1;
	v->a[116062] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[116063] = actions(6815);
	v->a[116064] = 1;
	v->a[116065] = sym__special_character;
	v->a[116066] = actions(6817);
	v->a[116067] = 1;
	v->a[116068] = anon_sym_DQUOTE;
	v->a[116069] = actions(6821);
	v->a[116070] = 1;
	v->a[116071] = anon_sym_DOLLAR_LBRACE;
	v->a[116072] = actions(6823);
	v->a[116073] = 1;
	v->a[116074] = anon_sym_BQUOTE;
	v->a[116075] = actions(6825);
	v->a[116076] = 1;
	v->a[116077] = anon_sym_DOLLAR_BQUOTE;
	v->a[116078] = actions(6827);
	v->a[116079] = 1;
	small_parse_table_5804(v);
}

void	small_parse_table_5804(t_small_parse_table_array *v)
{
	v->a[116080] = sym__comment_word;
	v->a[116081] = actions(6819);
	v->a[116082] = 3;
	v->a[116083] = sym_test_operator;
	v->a[116084] = sym__bare_dollar;
	v->a[116085] = sym_raw_string;
	v->a[116086] = state(2035);
	v->a[116087] = 7;
	v->a[116088] = sym_arithmetic_expansion;
	v->a[116089] = sym_brace_expression;
	v->a[116090] = sym_string;
	v->a[116091] = sym_number;
	v->a[116092] = sym_simple_expansion;
	v->a[116093] = sym_expansion;
	v->a[116094] = sym_command_substitution;
	v->a[116095] = 16;
	v->a[116096] = actions(3);
	v->a[116097] = 1;
	v->a[116098] = sym_comment;
	v->a[116099] = actions(1745);
	small_parse_table_5805(v);
}

/* EOF small_parse_table_1160.c */
