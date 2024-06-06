/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1220.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6100(t_small_parse_table_array *v)
{
	v->a[122000] = sym_string;
	v->a[122001] = sym_number;
	v->a[122002] = sym_simple_expansion;
	v->a[122003] = sym_expansion;
	v->a[122004] = sym_command_substitution;
	v->a[122005] = 16;
	v->a[122006] = actions(3);
	v->a[122007] = 1;
	v->a[122008] = sym_comment;
	v->a[122009] = actions(1017);
	v->a[122010] = 1;
	v->a[122011] = aux_sym_number_token1;
	v->a[122012] = actions(1019);
	v->a[122013] = 1;
	v->a[122014] = aux_sym_number_token2;
	v->a[122015] = actions(1023);
	v->a[122016] = 1;
	v->a[122017] = anon_sym_DOLLAR_LPAREN;
	v->a[122018] = actions(1035);
	v->a[122019] = 1;
	small_parse_table_6101(v);
}

void	small_parse_table_6101(t_small_parse_table_array *v)
{
	v->a[122020] = sym__brace_start;
	v->a[122021] = actions(5763);
	v->a[122022] = 1;
	v->a[122023] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[122024] = actions(5767);
	v->a[122025] = 1;
	v->a[122026] = anon_sym_DQUOTE;
	v->a[122027] = actions(5771);
	v->a[122028] = 1;
	v->a[122029] = anon_sym_DOLLAR_LBRACE;
	v->a[122030] = actions(5773);
	v->a[122031] = 1;
	v->a[122032] = anon_sym_BQUOTE;
	v->a[122033] = actions(5775);
	v->a[122034] = 1;
	v->a[122035] = anon_sym_DOLLAR_BQUOTE;
	v->a[122036] = actions(6731);
	v->a[122037] = 1;
	v->a[122038] = sym_word;
	v->a[122039] = actions(6735);
	small_parse_table_6102(v);
}

void	small_parse_table_6102(t_small_parse_table_array *v)
{
	v->a[122040] = 1;
	v->a[122041] = sym__special_character;
	v->a[122042] = actions(6739);
	v->a[122043] = 1;
	v->a[122044] = sym__comment_word;
	v->a[122045] = actions(7053);
	v->a[122046] = 1;
	v->a[122047] = anon_sym_DOLLAR;
	v->a[122048] = actions(6737);
	v->a[122049] = 3;
	v->a[122050] = sym_test_operator;
	v->a[122051] = sym__bare_dollar;
	v->a[122052] = sym_raw_string;
	v->a[122053] = state(872);
	v->a[122054] = 7;
	v->a[122055] = sym_arithmetic_expansion;
	v->a[122056] = sym_brace_expression;
	v->a[122057] = sym_string;
	v->a[122058] = sym_number;
	v->a[122059] = sym_simple_expansion;
	small_parse_table_6103(v);
}

void	small_parse_table_6103(t_small_parse_table_array *v)
{
	v->a[122060] = sym_expansion;
	v->a[122061] = sym_command_substitution;
	v->a[122062] = 16;
	v->a[122063] = actions(3);
	v->a[122064] = 1;
	v->a[122065] = sym_comment;
	v->a[122066] = actions(1017);
	v->a[122067] = 1;
	v->a[122068] = aux_sym_number_token1;
	v->a[122069] = actions(1019);
	v->a[122070] = 1;
	v->a[122071] = aux_sym_number_token2;
	v->a[122072] = actions(1023);
	v->a[122073] = 1;
	v->a[122074] = anon_sym_DOLLAR_LPAREN;
	v->a[122075] = actions(1035);
	v->a[122076] = 1;
	v->a[122077] = sym__brace_start;
	v->a[122078] = actions(5763);
	v->a[122079] = 1;
	small_parse_table_6104(v);
}

void	small_parse_table_6104(t_small_parse_table_array *v)
{
	v->a[122080] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[122081] = actions(5767);
	v->a[122082] = 1;
	v->a[122083] = anon_sym_DQUOTE;
	v->a[122084] = actions(5771);
	v->a[122085] = 1;
	v->a[122086] = anon_sym_DOLLAR_LBRACE;
	v->a[122087] = actions(5773);
	v->a[122088] = 1;
	v->a[122089] = anon_sym_BQUOTE;
	v->a[122090] = actions(5775);
	v->a[122091] = 1;
	v->a[122092] = anon_sym_DOLLAR_BQUOTE;
	v->a[122093] = actions(6731);
	v->a[122094] = 1;
	v->a[122095] = sym_word;
	v->a[122096] = actions(6735);
	v->a[122097] = 1;
	v->a[122098] = sym__special_character;
	v->a[122099] = actions(6739);
	small_parse_table_6105(v);
}

/* EOF small_parse_table_1220.c */
