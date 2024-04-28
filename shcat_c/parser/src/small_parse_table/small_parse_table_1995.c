/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1995.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9975(t_small_parse_table_array *v)
{
	v->a[199500] = anon_sym_GT_LPAREN;
	v->a[199501] = actions(9040);
	v->a[199502] = 2;
	v->a[199503] = sym_raw_string;
	v->a[199504] = sym_ansi_c_string;
	v->a[199505] = state(614);
	v->a[199506] = 2;
	v->a[199507] = sym_concatenation;
	v->a[199508] = aux_sym_for_statement_repeat1;
	v->a[199509] = state(1269);
	v->a[199510] = 9;
	v->a[199511] = sym_arithmetic_expansion;
	v->a[199512] = sym_brace_expression;
	v->a[199513] = sym_string;
	v->a[199514] = sym_translated_string;
	v->a[199515] = sym_number;
	v->a[199516] = sym_simple_expansion;
	v->a[199517] = sym_expansion;
	v->a[199518] = sym_command_substitution;
	v->a[199519] = sym_process_substitution;
	small_parse_table_9976(v);
}

void	small_parse_table_9976(t_small_parse_table_array *v)
{
	v->a[199520] = 20;
	v->a[199521] = actions(71);
	v->a[199522] = 1;
	v->a[199523] = sym_comment;
	v->a[199524] = actions(3333);
	v->a[199525] = 1;
	v->a[199526] = sym_word;
	v->a[199527] = actions(3339);
	v->a[199528] = 1;
	v->a[199529] = anon_sym_DOLLAR;
	v->a[199530] = actions(3343);
	v->a[199531] = 1;
	v->a[199532] = aux_sym_number_token1;
	v->a[199533] = actions(3345);
	v->a[199534] = 1;
	v->a[199535] = aux_sym_number_token2;
	v->a[199536] = actions(3349);
	v->a[199537] = 1;
	v->a[199538] = anon_sym_DOLLAR_LPAREN;
	v->a[199539] = actions(3357);
	small_parse_table_9977(v);
}

void	small_parse_table_9977(t_small_parse_table_array *v)
{
	v->a[199540] = 1;
	v->a[199541] = sym_test_operator;
	v->a[199542] = actions(3359);
	v->a[199543] = 1;
	v->a[199544] = sym__brace_start;
	v->a[199545] = actions(9046);
	v->a[199546] = 1;
	v->a[199547] = anon_sym_DOLLAR_LBRACK;
	v->a[199548] = actions(9048);
	v->a[199549] = 1;
	v->a[199550] = sym__special_character;
	v->a[199551] = actions(9050);
	v->a[199552] = 1;
	v->a[199553] = anon_sym_DQUOTE;
	v->a[199554] = actions(9054);
	v->a[199555] = 1;
	v->a[199556] = anon_sym_DOLLAR_LBRACE;
	v->a[199557] = actions(9056);
	v->a[199558] = 1;
	v->a[199559] = anon_sym_BQUOTE;
	small_parse_table_9978(v);
}

void	small_parse_table_9978(t_small_parse_table_array *v)
{
	v->a[199560] = actions(9058);
	v->a[199561] = 1;
	v->a[199562] = anon_sym_DOLLAR_BQUOTE;
	v->a[199563] = state(2147);
	v->a[199564] = 1;
	v->a[199565] = aux_sym__literal_repeat1;
	v->a[199566] = actions(9044);
	v->a[199567] = 2;
	v->a[199568] = anon_sym_LPAREN_LPAREN;
	v->a[199569] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[199570] = actions(9052);
	v->a[199571] = 2;
	v->a[199572] = sym_raw_string;
	v->a[199573] = sym_ansi_c_string;
	v->a[199574] = actions(9060);
	v->a[199575] = 2;
	v->a[199576] = anon_sym_LT_LPAREN;
	v->a[199577] = anon_sym_GT_LPAREN;
	v->a[199578] = state(707);
	v->a[199579] = 2;
	small_parse_table_9979(v);
}

void	small_parse_table_9979(t_small_parse_table_array *v)
{
	v->a[199580] = sym_concatenation;
	v->a[199581] = aux_sym_for_statement_repeat1;
	v->a[199582] = state(1526);
	v->a[199583] = 9;
	v->a[199584] = sym_arithmetic_expansion;
	v->a[199585] = sym_brace_expression;
	v->a[199586] = sym_string;
	v->a[199587] = sym_translated_string;
	v->a[199588] = sym_number;
	v->a[199589] = sym_simple_expansion;
	v->a[199590] = sym_expansion;
	v->a[199591] = sym_command_substitution;
	v->a[199592] = sym_process_substitution;
	v->a[199593] = 20;
	v->a[199594] = actions(71);
	v->a[199595] = 1;
	v->a[199596] = sym_comment;
	v->a[199597] = actions(2568);
	v->a[199598] = 1;
	v->a[199599] = sym_word;
	small_parse_table_9980(v);
}

/* EOF small_parse_table_1995.c */
