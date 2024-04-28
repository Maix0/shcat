/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1982.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9910(t_small_parse_table_array *v)
{
	v->a[198200] = anon_sym_BQUOTE;
	v->a[198201] = actions(8956);
	v->a[198202] = 1;
	v->a[198203] = anon_sym_DOLLAR_BQUOTE;
	v->a[198204] = state(3469);
	v->a[198205] = 1;
	v->a[198206] = aux_sym__literal_repeat1;
	v->a[198207] = actions(8942);
	v->a[198208] = 2;
	v->a[198209] = anon_sym_LPAREN_LPAREN;
	v->a[198210] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[198211] = actions(8950);
	v->a[198212] = 2;
	v->a[198213] = sym_raw_string;
	v->a[198214] = sym_ansi_c_string;
	v->a[198215] = actions(8958);
	v->a[198216] = 2;
	v->a[198217] = anon_sym_LT_LPAREN;
	v->a[198218] = anon_sym_GT_LPAREN;
	v->a[198219] = state(1332);
	small_parse_table_9911(v);
}

void	small_parse_table_9911(t_small_parse_table_array *v)
{
	v->a[198220] = 2;
	v->a[198221] = sym_concatenation;
	v->a[198222] = aux_sym_for_statement_repeat1;
	v->a[198223] = state(3093);
	v->a[198224] = 9;
	v->a[198225] = sym_arithmetic_expansion;
	v->a[198226] = sym_brace_expression;
	v->a[198227] = sym_string;
	v->a[198228] = sym_translated_string;
	v->a[198229] = sym_number;
	v->a[198230] = sym_simple_expansion;
	v->a[198231] = sym_expansion;
	v->a[198232] = sym_command_substitution;
	v->a[198233] = sym_process_substitution;
	v->a[198234] = 20;
	v->a[198235] = actions(71);
	v->a[198236] = 1;
	v->a[198237] = sym_comment;
	v->a[198238] = actions(2598);
	v->a[198239] = 1;
	small_parse_table_9912(v);
}

void	small_parse_table_9912(t_small_parse_table_array *v)
{
	v->a[198240] = sym_word;
	v->a[198241] = actions(2604);
	v->a[198242] = 1;
	v->a[198243] = anon_sym_DOLLAR;
	v->a[198244] = actions(2610);
	v->a[198245] = 1;
	v->a[198246] = aux_sym_number_token1;
	v->a[198247] = actions(2612);
	v->a[198248] = 1;
	v->a[198249] = aux_sym_number_token2;
	v->a[198250] = actions(2616);
	v->a[198251] = 1;
	v->a[198252] = anon_sym_DOLLAR_LPAREN;
	v->a[198253] = actions(2624);
	v->a[198254] = 1;
	v->a[198255] = sym_test_operator;
	v->a[198256] = actions(2626);
	v->a[198257] = 1;
	v->a[198258] = sym__brace_start;
	v->a[198259] = actions(8962);
	small_parse_table_9913(v);
}

void	small_parse_table_9913(t_small_parse_table_array *v)
{
	v->a[198260] = 1;
	v->a[198261] = anon_sym_DOLLAR_LBRACK;
	v->a[198262] = actions(8964);
	v->a[198263] = 1;
	v->a[198264] = sym__special_character;
	v->a[198265] = actions(8966);
	v->a[198266] = 1;
	v->a[198267] = anon_sym_DQUOTE;
	v->a[198268] = actions(8970);
	v->a[198269] = 1;
	v->a[198270] = anon_sym_DOLLAR_LBRACE;
	v->a[198271] = actions(8972);
	v->a[198272] = 1;
	v->a[198273] = anon_sym_BQUOTE;
	v->a[198274] = actions(8974);
	v->a[198275] = 1;
	v->a[198276] = anon_sym_DOLLAR_BQUOTE;
	v->a[198277] = state(1803);
	v->a[198278] = 1;
	v->a[198279] = aux_sym__literal_repeat1;
	small_parse_table_9914(v);
}

void	small_parse_table_9914(t_small_parse_table_array *v)
{
	v->a[198280] = actions(8960);
	v->a[198281] = 2;
	v->a[198282] = anon_sym_LPAREN_LPAREN;
	v->a[198283] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[198284] = actions(8968);
	v->a[198285] = 2;
	v->a[198286] = sym_raw_string;
	v->a[198287] = sym_ansi_c_string;
	v->a[198288] = actions(8976);
	v->a[198289] = 2;
	v->a[198290] = anon_sym_LT_LPAREN;
	v->a[198291] = anon_sym_GT_LPAREN;
	v->a[198292] = state(657);
	v->a[198293] = 2;
	v->a[198294] = sym_concatenation;
	v->a[198295] = aux_sym_for_statement_repeat1;
	v->a[198296] = state(1381);
	v->a[198297] = 9;
	v->a[198298] = sym_arithmetic_expansion;
	v->a[198299] = sym_brace_expression;
	small_parse_table_9915(v);
}

/* EOF small_parse_table_1982.c */
