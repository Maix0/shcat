/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_861.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4305(t_small_parse_table_array *v)
{
	v->a[86100] = sym_variable_name;
	v->a[86101] = sym_test_operator;
	v->a[86102] = sym__brace_start;
	v->a[86103] = anon_sym_GT_GT;
	v->a[86104] = anon_sym_AMP_GT_GT;
	v->a[86105] = anon_sym_GT_PIPE;
	v->a[86106] = anon_sym_LT_AMP_DASH;
	v->a[86107] = anon_sym_GT_AMP_DASH;
	v->a[86108] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[86109] = sym__special_character;
	v->a[86110] = anon_sym_DQUOTE;
	v->a[86111] = sym_raw_string;
	v->a[86112] = anon_sym_DOLLAR_LBRACE;
	v->a[86113] = anon_sym_DOLLAR_BQUOTE;
	v->a[86114] = 21;
	v->a[86115] = actions(57);
	v->a[86116] = 1;
	v->a[86117] = sym_comment;
	v->a[86118] = actions(4614);
	v->a[86119] = 1;
	small_parse_table_4306(v);
}

void	small_parse_table_4306(t_small_parse_table_array *v)
{
	v->a[86120] = anon_sym_LPAREN;
	v->a[86121] = actions(4616);
	v->a[86122] = 1;
	v->a[86123] = anon_sym_BANG;
	v->a[86124] = actions(4622);
	v->a[86125] = 1;
	v->a[86126] = anon_sym_TILDE;
	v->a[86127] = actions(4624);
	v->a[86128] = 1;
	v->a[86129] = anon_sym_DOLLAR;
	v->a[86130] = actions(4626);
	v->a[86131] = 1;
	v->a[86132] = anon_sym_DQUOTE;
	v->a[86133] = actions(4628);
	v->a[86134] = 1;
	v->a[86135] = aux_sym_number_token1;
	v->a[86136] = actions(4630);
	v->a[86137] = 1;
	v->a[86138] = aux_sym_number_token2;
	v->a[86139] = actions(4632);
	small_parse_table_4307(v);
}

void	small_parse_table_4307(t_small_parse_table_array *v)
{
	v->a[86140] = 1;
	v->a[86141] = anon_sym_DOLLAR_LBRACE;
	v->a[86142] = actions(4634);
	v->a[86143] = 1;
	v->a[86144] = anon_sym_DOLLAR_LPAREN;
	v->a[86145] = actions(4636);
	v->a[86146] = 1;
	v->a[86147] = anon_sym_BQUOTE;
	v->a[86148] = actions(4638);
	v->a[86149] = 1;
	v->a[86150] = anon_sym_DOLLAR_BQUOTE;
	v->a[86151] = actions(4801);
	v->a[86152] = 1;
	v->a[86153] = aux_sym__simple_variable_name_token1;
	v->a[86154] = actions(4803);
	v->a[86155] = 1;
	v->a[86156] = sym_variable_name;
	v->a[86157] = state(1637);
	v->a[86158] = 1;
	v->a[86159] = sym__arithmetic_postfix_expression;
	small_parse_table_4308(v);
}

void	small_parse_table_4308(t_small_parse_table_array *v)
{
	v->a[86160] = state(1638);
	v->a[86161] = 1;
	v->a[86162] = sym__arithmetic_unary_expression;
	v->a[86163] = state(1640);
	v->a[86164] = 1;
	v->a[86165] = sym__arithmetic_ternary_expression;
	v->a[86166] = state(1642);
	v->a[86167] = 1;
	v->a[86168] = sym__arithmetic_binary_expression;
	v->a[86169] = actions(4618);
	v->a[86170] = 2;
	v->a[86171] = anon_sym_PLUS_PLUS;
	v->a[86172] = anon_sym_DASH_DASH;
	v->a[86173] = actions(4620);
	v->a[86174] = 2;
	v->a[86175] = anon_sym_DASH2;
	v->a[86176] = anon_sym_PLUS2;
	v->a[86177] = state(1607);
	v->a[86178] = 8;
	v->a[86179] = sym__arithmetic_expression;
	small_parse_table_4309(v);
}

void	small_parse_table_4309(t_small_parse_table_array *v)
{
	v->a[86180] = sym__arithmetic_literal;
	v->a[86181] = sym__arithmetic_parenthesized_expression;
	v->a[86182] = sym_string;
	v->a[86183] = sym_number;
	v->a[86184] = sym_simple_expansion;
	v->a[86185] = sym_expansion;
	v->a[86186] = sym_command_substitution;
	v->a[86187] = 5;
	v->a[86188] = actions(57);
	v->a[86189] = 1;
	v->a[86190] = sym_comment;
	v->a[86191] = state(1780);
	v->a[86192] = 1;
	v->a[86193] = aux_sym_concatenation_repeat1;
	v->a[86194] = actions(4795);
	v->a[86195] = 2;
	v->a[86196] = sym__concat;
	v->a[86197] = aux_sym_concatenation_token1;
	v->a[86198] = actions(2662);
	v->a[86199] = 11;
	small_parse_table_4310(v);
}

/* EOF small_parse_table_861.c */
