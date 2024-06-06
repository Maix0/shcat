/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1180.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5900(t_small_parse_table_array *v)
{
	v->a[118000] = 1;
	v->a[118001] = sym_word;
	v->a[118002] = actions(6935);
	v->a[118003] = 1;
	v->a[118004] = sym__special_character;
	v->a[118005] = actions(6939);
	v->a[118006] = 1;
	v->a[118007] = sym__comment_word;
	v->a[118008] = actions(6937);
	v->a[118009] = 3;
	v->a[118010] = sym_test_operator;
	v->a[118011] = sym__bare_dollar;
	v->a[118012] = sym_raw_string;
	v->a[118013] = state(842);
	v->a[118014] = 7;
	v->a[118015] = sym_arithmetic_expansion;
	v->a[118016] = sym_brace_expression;
	v->a[118017] = sym_string;
	v->a[118018] = sym_number;
	v->a[118019] = sym_simple_expansion;
	small_parse_table_5901(v);
}

void	small_parse_table_5901(t_small_parse_table_array *v)
{
	v->a[118020] = sym_expansion;
	v->a[118021] = sym_command_substitution;
	v->a[118022] = 16;
	v->a[118023] = actions(3);
	v->a[118024] = 1;
	v->a[118025] = sym_comment;
	v->a[118026] = actions(3483);
	v->a[118027] = 1;
	v->a[118028] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[118029] = actions(3485);
	v->a[118030] = 1;
	v->a[118031] = anon_sym_DOLLAR;
	v->a[118032] = actions(3489);
	v->a[118033] = 1;
	v->a[118034] = anon_sym_DQUOTE;
	v->a[118035] = actions(3493);
	v->a[118036] = 1;
	v->a[118037] = aux_sym_number_token1;
	v->a[118038] = actions(3495);
	v->a[118039] = 1;
	small_parse_table_5902(v);
}

void	small_parse_table_5902(t_small_parse_table_array *v)
{
	v->a[118040] = aux_sym_number_token2;
	v->a[118041] = actions(3497);
	v->a[118042] = 1;
	v->a[118043] = anon_sym_DOLLAR_LBRACE;
	v->a[118044] = actions(3499);
	v->a[118045] = 1;
	v->a[118046] = anon_sym_DOLLAR_LPAREN;
	v->a[118047] = actions(3501);
	v->a[118048] = 1;
	v->a[118049] = anon_sym_BQUOTE;
	v->a[118050] = actions(3503);
	v->a[118051] = 1;
	v->a[118052] = anon_sym_DOLLAR_BQUOTE;
	v->a[118053] = actions(3505);
	v->a[118054] = 1;
	v->a[118055] = sym__brace_start;
	v->a[118056] = actions(6290);
	v->a[118057] = 1;
	v->a[118058] = sym_word;
	v->a[118059] = actions(6294);
	small_parse_table_5903(v);
}

void	small_parse_table_5903(t_small_parse_table_array *v)
{
	v->a[118060] = 1;
	v->a[118061] = sym__special_character;
	v->a[118062] = actions(6298);
	v->a[118063] = 1;
	v->a[118064] = sym__comment_word;
	v->a[118065] = actions(6296);
	v->a[118066] = 3;
	v->a[118067] = sym_test_operator;
	v->a[118068] = sym__bare_dollar;
	v->a[118069] = sym_raw_string;
	v->a[118070] = state(2690);
	v->a[118071] = 7;
	v->a[118072] = sym_arithmetic_expansion;
	v->a[118073] = sym_brace_expression;
	v->a[118074] = sym_string;
	v->a[118075] = sym_number;
	v->a[118076] = sym_simple_expansion;
	v->a[118077] = sym_expansion;
	v->a[118078] = sym_command_substitution;
	v->a[118079] = 16;
	small_parse_table_5904(v);
}

void	small_parse_table_5904(t_small_parse_table_array *v)
{
	v->a[118080] = actions(3);
	v->a[118081] = 1;
	v->a[118082] = sym_comment;
	v->a[118083] = actions(2307);
	v->a[118084] = 1;
	v->a[118085] = anon_sym_DOLLAR;
	v->a[118086] = actions(2313);
	v->a[118087] = 1;
	v->a[118088] = aux_sym_number_token1;
	v->a[118089] = actions(2315);
	v->a[118090] = 1;
	v->a[118091] = aux_sym_number_token2;
	v->a[118092] = actions(2319);
	v->a[118093] = 1;
	v->a[118094] = anon_sym_DOLLAR_LPAREN;
	v->a[118095] = actions(2327);
	v->a[118096] = 1;
	v->a[118097] = sym__brace_start;
	v->a[118098] = actions(5954);
	v->a[118099] = 1;
	small_parse_table_5905(v);
}

/* EOF small_parse_table_1180.c */
