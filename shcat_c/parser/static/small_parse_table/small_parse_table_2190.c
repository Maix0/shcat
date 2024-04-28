/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2190.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10950(t_small_parse_table_array *v)
{
	v->a[219000] = sym_string;
	v->a[219001] = sym_translated_string;
	v->a[219002] = sym_number;
	v->a[219003] = sym_simple_expansion;
	v->a[219004] = sym_expansion;
	v->a[219005] = sym_command_substitution;
	v->a[219006] = sym_process_substitution;
	v->a[219007] = 18;
	v->a[219008] = actions(3);
	v->a[219009] = 1;
	v->a[219010] = sym_comment;
	v->a[219011] = actions(258);
	v->a[219012] = 1;
	v->a[219013] = anon_sym_DOLLAR;
	v->a[219014] = actions(264);
	v->a[219015] = 1;
	v->a[219016] = aux_sym_number_token1;
	v->a[219017] = actions(266);
	v->a[219018] = 1;
	v->a[219019] = aux_sym_number_token2;
	small_parse_table_10951(v);
}

void	small_parse_table_10951(t_small_parse_table_array *v)
{
	v->a[219020] = actions(270);
	v->a[219021] = 1;
	v->a[219022] = anon_sym_DOLLAR_LPAREN;
	v->a[219023] = actions(284);
	v->a[219024] = 1;
	v->a[219025] = sym__brace_start;
	v->a[219026] = actions(1075);
	v->a[219027] = 1;
	v->a[219028] = anon_sym_DOLLAR_LBRACK;
	v->a[219029] = actions(1081);
	v->a[219030] = 1;
	v->a[219031] = anon_sym_DQUOTE;
	v->a[219032] = actions(1085);
	v->a[219033] = 1;
	v->a[219034] = anon_sym_DOLLAR_LBRACE;
	v->a[219035] = actions(1087);
	v->a[219036] = 1;
	v->a[219037] = anon_sym_DOLLAR_BQUOTE;
	v->a[219038] = actions(3598);
	v->a[219039] = 1;
	small_parse_table_10952(v);
}

void	small_parse_table_10952(t_small_parse_table_array *v)
{
	v->a[219040] = anon_sym_BQUOTE;
	v->a[219041] = actions(10428);
	v->a[219042] = 1;
	v->a[219043] = sym_word;
	v->a[219044] = actions(10434);
	v->a[219045] = 1;
	v->a[219046] = sym__comment_word;
	v->a[219047] = actions(1073);
	v->a[219048] = 2;
	v->a[219049] = anon_sym_LPAREN_LPAREN;
	v->a[219050] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[219051] = actions(1089);
	v->a[219052] = 2;
	v->a[219053] = anon_sym_LT_LPAREN;
	v->a[219054] = anon_sym_GT_LPAREN;
	v->a[219055] = actions(10430);
	v->a[219056] = 2;
	v->a[219057] = sym_test_operator;
	v->a[219058] = sym__special_character;
	v->a[219059] = actions(10432);
	small_parse_table_10953(v);
}

void	small_parse_table_10953(t_small_parse_table_array *v)
{
	v->a[219060] = 3;
	v->a[219061] = sym__bare_dollar;
	v->a[219062] = sym_raw_string;
	v->a[219063] = sym_ansi_c_string;
	v->a[219064] = state(2732);
	v->a[219065] = 9;
	v->a[219066] = sym_arithmetic_expansion;
	v->a[219067] = sym_brace_expression;
	v->a[219068] = sym_string;
	v->a[219069] = sym_translated_string;
	v->a[219070] = sym_number;
	v->a[219071] = sym_simple_expansion;
	v->a[219072] = sym_expansion;
	v->a[219073] = sym_command_substitution;
	v->a[219074] = sym_process_substitution;
	v->a[219075] = 18;
	v->a[219076] = actions(3);
	v->a[219077] = 1;
	v->a[219078] = sym_comment;
	v->a[219079] = actions(2341);
	small_parse_table_10954(v);
}

void	small_parse_table_10954(t_small_parse_table_array *v)
{
	v->a[219080] = 1;
	v->a[219081] = aux_sym_number_token1;
	v->a[219082] = actions(2343);
	v->a[219083] = 1;
	v->a[219084] = aux_sym_number_token2;
	v->a[219085] = actions(2347);
	v->a[219086] = 1;
	v->a[219087] = anon_sym_DOLLAR_LPAREN;
	v->a[219088] = actions(2357);
	v->a[219089] = 1;
	v->a[219090] = sym__brace_start;
	v->a[219091] = actions(9010);
	v->a[219092] = 1;
	v->a[219093] = anon_sym_DOLLAR_LBRACK;
	v->a[219094] = actions(9014);
	v->a[219095] = 1;
	v->a[219096] = anon_sym_DQUOTE;
	v->a[219097] = actions(9018);
	v->a[219098] = 1;
	v->a[219099] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_10955(v);
}

/* EOF small_parse_table_2190.c */
