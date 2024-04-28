/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2385.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11925(t_small_parse_table_array *v)
{
	v->a[238500] = actions(10282);
	v->a[238501] = 1;
	v->a[238502] = sym_word;
	v->a[238503] = actions(10288);
	v->a[238504] = 1;
	v->a[238505] = sym__comment_word;
	v->a[238506] = actions(11214);
	v->a[238507] = 1;
	v->a[238508] = anon_sym_DOLLAR;
	v->a[238509] = actions(8302);
	v->a[238510] = 2;
	v->a[238511] = anon_sym_LPAREN_LPAREN;
	v->a[238512] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[238513] = actions(8328);
	v->a[238514] = 2;
	v->a[238515] = anon_sym_LT_LPAREN;
	v->a[238516] = anon_sym_GT_LPAREN;
	v->a[238517] = actions(10284);
	v->a[238518] = 2;
	v->a[238519] = sym_test_operator;
	small_parse_table_11926(v);
}

void	small_parse_table_11926(t_small_parse_table_array *v)
{
	v->a[238520] = sym__special_character;
	v->a[238521] = actions(10286);
	v->a[238522] = 3;
	v->a[238523] = sym__bare_dollar;
	v->a[238524] = sym_raw_string;
	v->a[238525] = sym_ansi_c_string;
	v->a[238526] = state(5428);
	v->a[238527] = 9;
	v->a[238528] = sym_arithmetic_expansion;
	v->a[238529] = sym_brace_expression;
	v->a[238530] = sym_string;
	v->a[238531] = sym_translated_string;
	v->a[238532] = sym_number;
	v->a[238533] = sym_simple_expansion;
	v->a[238534] = sym_expansion;
	v->a[238535] = sym_command_substitution;
	v->a[238536] = sym_process_substitution;
	v->a[238537] = 21;
	v->a[238538] = actions(71);
	v->a[238539] = 1;
	small_parse_table_11927(v);
}

void	small_parse_table_11927(t_small_parse_table_array *v)
{
	v->a[238540] = sym_comment;
	v->a[238541] = actions(9364);
	v->a[238542] = 1;
	v->a[238543] = anon_sym_LPAREN;
	v->a[238544] = actions(9366);
	v->a[238545] = 1;
	v->a[238546] = anon_sym_BANG;
	v->a[238547] = actions(9372);
	v->a[238548] = 1;
	v->a[238549] = anon_sym_TILDE;
	v->a[238550] = actions(9374);
	v->a[238551] = 1;
	v->a[238552] = anon_sym_DOLLAR;
	v->a[238553] = actions(9376);
	v->a[238554] = 1;
	v->a[238555] = anon_sym_DQUOTE;
	v->a[238556] = actions(9378);
	v->a[238557] = 1;
	v->a[238558] = aux_sym_number_token1;
	v->a[238559] = actions(9380);
	small_parse_table_11928(v);
}

void	small_parse_table_11928(t_small_parse_table_array *v)
{
	v->a[238560] = 1;
	v->a[238561] = aux_sym_number_token2;
	v->a[238562] = actions(9382);
	v->a[238563] = 1;
	v->a[238564] = anon_sym_DOLLAR_LBRACE;
	v->a[238565] = actions(9384);
	v->a[238566] = 1;
	v->a[238567] = anon_sym_DOLLAR_LPAREN;
	v->a[238568] = actions(9386);
	v->a[238569] = 1;
	v->a[238570] = anon_sym_BQUOTE;
	v->a[238571] = actions(9388);
	v->a[238572] = 1;
	v->a[238573] = anon_sym_DOLLAR_BQUOTE;
	v->a[238574] = actions(9392);
	v->a[238575] = 1;
	v->a[238576] = sym_variable_name;
	v->a[238577] = actions(11216);
	v->a[238578] = 1;
	v->a[238579] = aux_sym__simple_variable_name_token1;
	small_parse_table_11929(v);
}

void	small_parse_table_11929(t_small_parse_table_array *v)
{
	v->a[238580] = state(3391);
	v->a[238581] = 1;
	v->a[238582] = sym__arithmetic_binary_expression;
	v->a[238583] = state(3396);
	v->a[238584] = 1;
	v->a[238585] = sym__arithmetic_ternary_expression;
	v->a[238586] = state(3398);
	v->a[238587] = 1;
	v->a[238588] = sym__arithmetic_unary_expression;
	v->a[238589] = state(3400);
	v->a[238590] = 1;
	v->a[238591] = sym__arithmetic_postfix_expression;
	v->a[238592] = actions(9368);
	v->a[238593] = 2;
	v->a[238594] = anon_sym_PLUS_PLUS2;
	v->a[238595] = anon_sym_DASH_DASH2;
	v->a[238596] = actions(9370);
	v->a[238597] = 2;
	v->a[238598] = anon_sym_DASH2;
	v->a[238599] = anon_sym_PLUS2;
	small_parse_table_11930(v);
}

/* EOF small_parse_table_2385.c */
