/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1022.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5110(t_small_parse_table_array *v)
{
	v->a[102200] = aux_sym__literal_repeat1;
	v->a[102201] = state(2942);
	v->a[102202] = 1;
	v->a[102203] = sym__expression;
	v->a[102204] = actions(1129);
	v->a[102205] = 2;
	v->a[102206] = anon_sym_LPAREN_LPAREN;
	v->a[102207] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[102208] = actions(1135);
	v->a[102209] = 2;
	v->a[102210] = anon_sym_PLUS_PLUS2;
	v->a[102211] = anon_sym_DASH_DASH2;
	v->a[102212] = actions(1137);
	v->a[102213] = 2;
	v->a[102214] = anon_sym_DASH2;
	v->a[102215] = anon_sym_PLUS2;
	v->a[102216] = actions(1151);
	v->a[102217] = 2;
	v->a[102218] = sym_raw_string;
	v->a[102219] = sym_ansi_c_string;
	small_parse_table_5111(v);
}

void	small_parse_table_5111(t_small_parse_table_array *v)
{
	v->a[102220] = actions(1165);
	v->a[102221] = 2;
	v->a[102222] = anon_sym_LT_LPAREN;
	v->a[102223] = anon_sym_GT_LPAREN;
	v->a[102224] = state(2594);
	v->a[102225] = 6;
	v->a[102226] = sym_binary_expression;
	v->a[102227] = sym_ternary_expression;
	v->a[102228] = sym_unary_expression;
	v->a[102229] = sym_postfix_expression;
	v->a[102230] = sym_parenthesized_expression;
	v->a[102231] = sym_concatenation;
	v->a[102232] = state(2573);
	v->a[102233] = 9;
	v->a[102234] = sym_arithmetic_expansion;
	v->a[102235] = sym_brace_expression;
	v->a[102236] = sym_string;
	v->a[102237] = sym_translated_string;
	v->a[102238] = sym_number;
	v->a[102239] = sym_simple_expansion;
	small_parse_table_5112(v);
}

void	small_parse_table_5112(t_small_parse_table_array *v)
{
	v->a[102240] = sym_expansion;
	v->a[102241] = sym_command_substitution;
	v->a[102242] = sym_process_substitution;
	v->a[102243] = 26;
	v->a[102244] = actions(71);
	v->a[102245] = 1;
	v->a[102246] = sym_comment;
	v->a[102247] = actions(107);
	v->a[102248] = 1;
	v->a[102249] = anon_sym_TILDE;
	v->a[102250] = actions(237);
	v->a[102251] = 1;
	v->a[102252] = sym_word;
	v->a[102253] = actions(248);
	v->a[102254] = 1;
	v->a[102255] = anon_sym_LPAREN;
	v->a[102256] = actions(250);
	v->a[102257] = 1;
	v->a[102258] = anon_sym_BANG;
	v->a[102259] = actions(258);
	small_parse_table_5113(v);
}

void	small_parse_table_5113(t_small_parse_table_array *v)
{
	v->a[102260] = 1;
	v->a[102261] = anon_sym_DOLLAR;
	v->a[102262] = actions(264);
	v->a[102263] = 1;
	v->a[102264] = aux_sym_number_token1;
	v->a[102265] = actions(266);
	v->a[102266] = 1;
	v->a[102267] = aux_sym_number_token2;
	v->a[102268] = actions(270);
	v->a[102269] = 1;
	v->a[102270] = anon_sym_DOLLAR_LPAREN;
	v->a[102271] = actions(282);
	v->a[102272] = 1;
	v->a[102273] = sym_test_operator;
	v->a[102274] = actions(284);
	v->a[102275] = 1;
	v->a[102276] = sym__brace_start;
	v->a[102277] = actions(1075);
	v->a[102278] = 1;
	v->a[102279] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_5114(v);
}

void	small_parse_table_5114(t_small_parse_table_array *v)
{
	v->a[102280] = actions(1079);
	v->a[102281] = 1;
	v->a[102282] = sym__special_character;
	v->a[102283] = actions(1081);
	v->a[102284] = 1;
	v->a[102285] = anon_sym_DQUOTE;
	v->a[102286] = actions(1085);
	v->a[102287] = 1;
	v->a[102288] = anon_sym_DOLLAR_LBRACE;
	v->a[102289] = actions(1087);
	v->a[102290] = 1;
	v->a[102291] = anon_sym_DOLLAR_BQUOTE;
	v->a[102292] = actions(3598);
	v->a[102293] = 1;
	v->a[102294] = anon_sym_BQUOTE;
	v->a[102295] = state(2690);
	v->a[102296] = 1;
	v->a[102297] = aux_sym__literal_repeat1;
	v->a[102298] = state(3100);
	v->a[102299] = 1;
	small_parse_table_5115(v);
}

/* EOF small_parse_table_1022.c */
