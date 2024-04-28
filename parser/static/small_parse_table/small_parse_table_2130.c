/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2130.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10650(t_small_parse_table_array *v)
{
	v->a[213000] = anon_sym_DOLLAR_LPAREN;
	v->a[213001] = actions(9300);
	v->a[213002] = 1;
	v->a[213003] = anon_sym_BQUOTE;
	v->a[213004] = actions(9302);
	v->a[213005] = 1;
	v->a[213006] = anon_sym_DOLLAR_BQUOTE;
	v->a[213007] = actions(10154);
	v->a[213008] = 1;
	v->a[213009] = aux_sym__simple_variable_name_token1;
	v->a[213010] = state(2801);
	v->a[213011] = 1;
	v->a[213012] = sym__arithmetic_binary_expression;
	v->a[213013] = state(2803);
	v->a[213014] = 1;
	v->a[213015] = sym__arithmetic_ternary_expression;
	v->a[213016] = state(2809);
	v->a[213017] = 1;
	v->a[213018] = sym__arithmetic_unary_expression;
	v->a[213019] = state(2825);
	small_parse_table_10651(v);
}

void	small_parse_table_10651(t_small_parse_table_array *v)
{
	v->a[213020] = 1;
	v->a[213021] = sym__arithmetic_postfix_expression;
	v->a[213022] = actions(9282);
	v->a[213023] = 2;
	v->a[213024] = anon_sym_PLUS_PLUS2;
	v->a[213025] = anon_sym_DASH_DASH2;
	v->a[213026] = actions(9284);
	v->a[213027] = 2;
	v->a[213028] = anon_sym_DASH2;
	v->a[213029] = anon_sym_PLUS2;
	v->a[213030] = state(3195);
	v->a[213031] = 9;
	v->a[213032] = sym_subscript;
	v->a[213033] = sym__arithmetic_expression;
	v->a[213034] = sym__arithmetic_literal;
	v->a[213035] = sym__arithmetic_parenthesized_expression;
	v->a[213036] = sym_string;
	v->a[213037] = sym_number;
	v->a[213038] = sym_simple_expansion;
	v->a[213039] = sym_expansion;
	small_parse_table_10652(v);
}

void	small_parse_table_10652(t_small_parse_table_array *v)
{
	v->a[213040] = sym_command_substitution;
	v->a[213041] = 18;
	v->a[213042] = actions(3);
	v->a[213043] = 1;
	v->a[213044] = sym_comment;
	v->a[213045] = actions(1420);
	v->a[213046] = 1;
	v->a[213047] = aux_sym_number_token1;
	v->a[213048] = actions(1422);
	v->a[213049] = 1;
	v->a[213050] = aux_sym_number_token2;
	v->a[213051] = actions(1426);
	v->a[213052] = 1;
	v->a[213053] = anon_sym_DOLLAR_LPAREN;
	v->a[213054] = actions(1438);
	v->a[213055] = 1;
	v->a[213056] = sym__brace_start;
	v->a[213057] = actions(9094);
	v->a[213058] = 1;
	v->a[213059] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_10653(v);
}

void	small_parse_table_10653(t_small_parse_table_array *v)
{
	v->a[213060] = actions(9098);
	v->a[213061] = 1;
	v->a[213062] = anon_sym_DQUOTE;
	v->a[213063] = actions(9102);
	v->a[213064] = 1;
	v->a[213065] = anon_sym_DOLLAR_LBRACE;
	v->a[213066] = actions(9104);
	v->a[213067] = 1;
	v->a[213068] = anon_sym_BQUOTE;
	v->a[213069] = actions(9106);
	v->a[213070] = 1;
	v->a[213071] = anon_sym_DOLLAR_BQUOTE;
	v->a[213072] = actions(10120);
	v->a[213073] = 1;
	v->a[213074] = sym_word;
	v->a[213075] = actions(10128);
	v->a[213076] = 1;
	v->a[213077] = sym__comment_word;
	v->a[213078] = actions(10156);
	v->a[213079] = 1;
	small_parse_table_10654(v);
}

void	small_parse_table_10654(t_small_parse_table_array *v)
{
	v->a[213080] = anon_sym_DOLLAR;
	v->a[213081] = actions(9092);
	v->a[213082] = 2;
	v->a[213083] = anon_sym_LPAREN_LPAREN;
	v->a[213084] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[213085] = actions(9108);
	v->a[213086] = 2;
	v->a[213087] = anon_sym_LT_LPAREN;
	v->a[213088] = anon_sym_GT_LPAREN;
	v->a[213089] = actions(10124);
	v->a[213090] = 2;
	v->a[213091] = sym_test_operator;
	v->a[213092] = sym__special_character;
	v->a[213093] = actions(10126);
	v->a[213094] = 3;
	v->a[213095] = sym__bare_dollar;
	v->a[213096] = sym_raw_string;
	v->a[213097] = sym_ansi_c_string;
	v->a[213098] = state(910);
	v->a[213099] = 9;
	small_parse_table_10655(v);
}

/* EOF small_parse_table_2130.c */
