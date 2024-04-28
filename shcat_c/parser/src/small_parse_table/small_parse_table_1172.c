/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1172.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5860(t_small_parse_table_array *v)
{
	v->a[117200] = sym_simple_expansion;
	v->a[117201] = sym_expansion;
	v->a[117202] = sym_command_substitution;
	v->a[117203] = sym_process_substitution;
	v->a[117204] = 26;
	v->a[117205] = actions(71);
	v->a[117206] = 1;
	v->a[117207] = sym_comment;
	v->a[117208] = actions(107);
	v->a[117209] = 1;
	v->a[117210] = anon_sym_TILDE;
	v->a[117211] = actions(237);
	v->a[117212] = 1;
	v->a[117213] = sym_word;
	v->a[117214] = actions(248);
	v->a[117215] = 1;
	v->a[117216] = anon_sym_LPAREN;
	v->a[117217] = actions(250);
	v->a[117218] = 1;
	v->a[117219] = anon_sym_BANG;
	small_parse_table_5861(v);
}

void	small_parse_table_5861(t_small_parse_table_array *v)
{
	v->a[117220] = actions(258);
	v->a[117221] = 1;
	v->a[117222] = anon_sym_DOLLAR;
	v->a[117223] = actions(264);
	v->a[117224] = 1;
	v->a[117225] = aux_sym_number_token1;
	v->a[117226] = actions(266);
	v->a[117227] = 1;
	v->a[117228] = aux_sym_number_token2;
	v->a[117229] = actions(270);
	v->a[117230] = 1;
	v->a[117231] = anon_sym_DOLLAR_LPAREN;
	v->a[117232] = actions(282);
	v->a[117233] = 1;
	v->a[117234] = sym_test_operator;
	v->a[117235] = actions(284);
	v->a[117236] = 1;
	v->a[117237] = sym__brace_start;
	v->a[117238] = actions(1075);
	v->a[117239] = 1;
	small_parse_table_5862(v);
}

void	small_parse_table_5862(t_small_parse_table_array *v)
{
	v->a[117240] = anon_sym_DOLLAR_LBRACK;
	v->a[117241] = actions(1079);
	v->a[117242] = 1;
	v->a[117243] = sym__special_character;
	v->a[117244] = actions(1081);
	v->a[117245] = 1;
	v->a[117246] = anon_sym_DQUOTE;
	v->a[117247] = actions(1085);
	v->a[117248] = 1;
	v->a[117249] = anon_sym_DOLLAR_LBRACE;
	v->a[117250] = actions(1087);
	v->a[117251] = 1;
	v->a[117252] = anon_sym_DOLLAR_BQUOTE;
	v->a[117253] = actions(3598);
	v->a[117254] = 1;
	v->a[117255] = anon_sym_BQUOTE;
	v->a[117256] = state(2690);
	v->a[117257] = 1;
	v->a[117258] = aux_sym__literal_repeat1;
	v->a[117259] = state(3077);
	small_parse_table_5863(v);
}

void	small_parse_table_5863(t_small_parse_table_array *v)
{
	v->a[117260] = 1;
	v->a[117261] = sym__expression;
	v->a[117262] = actions(103);
	v->a[117263] = 2;
	v->a[117264] = anon_sym_PLUS_PLUS2;
	v->a[117265] = anon_sym_DASH_DASH2;
	v->a[117266] = actions(105);
	v->a[117267] = 2;
	v->a[117268] = anon_sym_DASH2;
	v->a[117269] = anon_sym_PLUS2;
	v->a[117270] = actions(1073);
	v->a[117271] = 2;
	v->a[117272] = anon_sym_LPAREN_LPAREN;
	v->a[117273] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[117274] = actions(1083);
	v->a[117275] = 2;
	v->a[117276] = sym_raw_string;
	v->a[117277] = sym_ansi_c_string;
	v->a[117278] = actions(1089);
	v->a[117279] = 2;
	small_parse_table_5864(v);
}

void	small_parse_table_5864(t_small_parse_table_array *v)
{
	v->a[117280] = anon_sym_LT_LPAREN;
	v->a[117281] = anon_sym_GT_LPAREN;
	v->a[117282] = state(3053);
	v->a[117283] = 6;
	v->a[117284] = sym_binary_expression;
	v->a[117285] = sym_ternary_expression;
	v->a[117286] = sym_unary_expression;
	v->a[117287] = sym_postfix_expression;
	v->a[117288] = sym_parenthesized_expression;
	v->a[117289] = sym_concatenation;
	v->a[117290] = state(2500);
	v->a[117291] = 9;
	v->a[117292] = sym_arithmetic_expansion;
	v->a[117293] = sym_brace_expression;
	v->a[117294] = sym_string;
	v->a[117295] = sym_translated_string;
	v->a[117296] = sym_number;
	v->a[117297] = sym_simple_expansion;
	v->a[117298] = sym_expansion;
	v->a[117299] = sym_command_substitution;
	small_parse_table_5865(v);
}

/* EOF small_parse_table_1172.c */
