/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2252.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11260(t_small_parse_table_array *v)
{
	v->a[225200] = sym_word;
	v->a[225201] = actions(10478);
	v->a[225202] = 1;
	v->a[225203] = sym__comment_word;
	v->a[225204] = actions(10704);
	v->a[225205] = 1;
	v->a[225206] = anon_sym_DOLLAR;
	v->a[225207] = actions(8368);
	v->a[225208] = 2;
	v->a[225209] = anon_sym_LPAREN_LPAREN;
	v->a[225210] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[225211] = actions(8394);
	v->a[225212] = 2;
	v->a[225213] = anon_sym_LT_LPAREN;
	v->a[225214] = anon_sym_GT_LPAREN;
	v->a[225215] = actions(10474);
	v->a[225216] = 2;
	v->a[225217] = sym_test_operator;
	v->a[225218] = sym__special_character;
	v->a[225219] = actions(10476);
	small_parse_table_11261(v);
}

void	small_parse_table_11261(t_small_parse_table_array *v)
{
	v->a[225220] = 3;
	v->a[225221] = sym__bare_dollar;
	v->a[225222] = sym_raw_string;
	v->a[225223] = sym_ansi_c_string;
	v->a[225224] = state(4285);
	v->a[225225] = 9;
	v->a[225226] = sym_arithmetic_expansion;
	v->a[225227] = sym_brace_expression;
	v->a[225228] = sym_string;
	v->a[225229] = sym_translated_string;
	v->a[225230] = sym_number;
	v->a[225231] = sym_simple_expansion;
	v->a[225232] = sym_expansion;
	v->a[225233] = sym_command_substitution;
	v->a[225234] = sym_process_substitution;
	v->a[225235] = 20;
	v->a[225236] = actions(71);
	v->a[225237] = 1;
	v->a[225238] = sym_comment;
	v->a[225239] = actions(9758);
	small_parse_table_11262(v);
}

void	small_parse_table_11262(t_small_parse_table_array *v)
{
	v->a[225240] = 1;
	v->a[225241] = anon_sym_DOLLAR_LBRACK;
	v->a[225242] = actions(9760);
	v->a[225243] = 1;
	v->a[225244] = anon_sym_DOLLAR;
	v->a[225245] = actions(9764);
	v->a[225246] = 1;
	v->a[225247] = anon_sym_DQUOTE;
	v->a[225248] = actions(9768);
	v->a[225249] = 1;
	v->a[225250] = aux_sym_number_token1;
	v->a[225251] = actions(9770);
	v->a[225252] = 1;
	v->a[225253] = aux_sym_number_token2;
	v->a[225254] = actions(9772);
	v->a[225255] = 1;
	v->a[225256] = anon_sym_DOLLAR_LBRACE;
	v->a[225257] = actions(9774);
	v->a[225258] = 1;
	v->a[225259] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_11263(v);
}

void	small_parse_table_11263(t_small_parse_table_array *v)
{
	v->a[225260] = actions(9776);
	v->a[225261] = 1;
	v->a[225262] = anon_sym_BQUOTE;
	v->a[225263] = actions(9778);
	v->a[225264] = 1;
	v->a[225265] = anon_sym_DOLLAR_BQUOTE;
	v->a[225266] = actions(9784);
	v->a[225267] = 1;
	v->a[225268] = sym__brace_start;
	v->a[225269] = actions(10052);
	v->a[225270] = 1;
	v->a[225271] = sym__special_character;
	v->a[225272] = actions(10706);
	v->a[225273] = 1;
	v->a[225274] = sym_word;
	v->a[225275] = actions(10710);
	v->a[225276] = 1;
	v->a[225277] = sym_test_operator;
	v->a[225278] = state(6213);
	v->a[225279] = 1;
	small_parse_table_11264(v);
}

void	small_parse_table_11264(t_small_parse_table_array *v)
{
	v->a[225280] = aux_sym__literal_repeat1;
	v->a[225281] = state(6413);
	v->a[225282] = 1;
	v->a[225283] = sym_concatenation;
	v->a[225284] = actions(9756);
	v->a[225285] = 2;
	v->a[225286] = anon_sym_LPAREN_LPAREN;
	v->a[225287] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[225288] = actions(9780);
	v->a[225289] = 2;
	v->a[225290] = anon_sym_LT_LPAREN;
	v->a[225291] = anon_sym_GT_LPAREN;
	v->a[225292] = actions(10708);
	v->a[225293] = 2;
	v->a[225294] = sym_raw_string;
	v->a[225295] = sym_ansi_c_string;
	v->a[225296] = state(6199);
	v->a[225297] = 9;
	v->a[225298] = sym_arithmetic_expansion;
	v->a[225299] = sym_brace_expression;
	small_parse_table_11265(v);
}

/* EOF small_parse_table_2252.c */
