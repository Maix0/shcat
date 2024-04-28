/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2032.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10160(t_small_parse_table_array *v)
{
	v->a[203200] = 1;
	v->a[203201] = anon_sym_DOLLAR_BQUOTE;
	v->a[203202] = actions(8026);
	v->a[203203] = 1;
	v->a[203204] = sym__brace_start;
	v->a[203205] = actions(9356);
	v->a[203206] = 1;
	v->a[203207] = sym_word;
	v->a[203208] = actions(9362);
	v->a[203209] = 1;
	v->a[203210] = sym__comment_word;
	v->a[203211] = actions(7992);
	v->a[203212] = 2;
	v->a[203213] = anon_sym_LPAREN_LPAREN;
	v->a[203214] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[203215] = actions(8018);
	v->a[203216] = 2;
	v->a[203217] = anon_sym_LT_LPAREN;
	v->a[203218] = anon_sym_GT_LPAREN;
	v->a[203219] = actions(9358);
	small_parse_table_10161(v);
}

void	small_parse_table_10161(t_small_parse_table_array *v)
{
	v->a[203220] = 2;
	v->a[203221] = sym_test_operator;
	v->a[203222] = sym__special_character;
	v->a[203223] = actions(9360);
	v->a[203224] = 3;
	v->a[203225] = sym__bare_dollar;
	v->a[203226] = sym_raw_string;
	v->a[203227] = sym_ansi_c_string;
	v->a[203228] = state(3510);
	v->a[203229] = 9;
	v->a[203230] = sym_arithmetic_expansion;
	v->a[203231] = sym_brace_expression;
	v->a[203232] = sym_string;
	v->a[203233] = sym_translated_string;
	v->a[203234] = sym_number;
	v->a[203235] = sym_simple_expansion;
	v->a[203236] = sym_expansion;
	v->a[203237] = sym_command_substitution;
	v->a[203238] = sym_process_substitution;
	v->a[203239] = 21;
	small_parse_table_10162(v);
}

void	small_parse_table_10162(t_small_parse_table_array *v)
{
	v->a[203240] = actions(71);
	v->a[203241] = 1;
	v->a[203242] = sym_comment;
	v->a[203243] = actions(9364);
	v->a[203244] = 1;
	v->a[203245] = anon_sym_LPAREN;
	v->a[203246] = actions(9366);
	v->a[203247] = 1;
	v->a[203248] = anon_sym_BANG;
	v->a[203249] = actions(9372);
	v->a[203250] = 1;
	v->a[203251] = anon_sym_TILDE;
	v->a[203252] = actions(9374);
	v->a[203253] = 1;
	v->a[203254] = anon_sym_DOLLAR;
	v->a[203255] = actions(9376);
	v->a[203256] = 1;
	v->a[203257] = anon_sym_DQUOTE;
	v->a[203258] = actions(9378);
	v->a[203259] = 1;
	small_parse_table_10163(v);
}

void	small_parse_table_10163(t_small_parse_table_array *v)
{
	v->a[203260] = aux_sym_number_token1;
	v->a[203261] = actions(9380);
	v->a[203262] = 1;
	v->a[203263] = aux_sym_number_token2;
	v->a[203264] = actions(9382);
	v->a[203265] = 1;
	v->a[203266] = anon_sym_DOLLAR_LBRACE;
	v->a[203267] = actions(9384);
	v->a[203268] = 1;
	v->a[203269] = anon_sym_DOLLAR_LPAREN;
	v->a[203270] = actions(9386);
	v->a[203271] = 1;
	v->a[203272] = anon_sym_BQUOTE;
	v->a[203273] = actions(9388);
	v->a[203274] = 1;
	v->a[203275] = anon_sym_DOLLAR_BQUOTE;
	v->a[203276] = actions(9390);
	v->a[203277] = 1;
	v->a[203278] = aux_sym__simple_variable_name_token1;
	v->a[203279] = actions(9392);
	small_parse_table_10164(v);
}

void	small_parse_table_10164(t_small_parse_table_array *v)
{
	v->a[203280] = 1;
	v->a[203281] = sym_variable_name;
	v->a[203282] = state(3391);
	v->a[203283] = 1;
	v->a[203284] = sym__arithmetic_binary_expression;
	v->a[203285] = state(3396);
	v->a[203286] = 1;
	v->a[203287] = sym__arithmetic_ternary_expression;
	v->a[203288] = state(3398);
	v->a[203289] = 1;
	v->a[203290] = sym__arithmetic_unary_expression;
	v->a[203291] = state(3400);
	v->a[203292] = 1;
	v->a[203293] = sym__arithmetic_postfix_expression;
	v->a[203294] = actions(9368);
	v->a[203295] = 2;
	v->a[203296] = anon_sym_PLUS_PLUS2;
	v->a[203297] = anon_sym_DASH_DASH2;
	v->a[203298] = actions(9370);
	v->a[203299] = 2;
	small_parse_table_10165(v);
}

/* EOF small_parse_table_2032.c */
