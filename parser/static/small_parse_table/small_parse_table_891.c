/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_891.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4455(t_small_parse_table_array *v)
{
	v->a[89100] = aux_sym_number_token1;
	v->a[89101] = aux_sym_number_token2;
	v->a[89102] = anon_sym_DOLLAR_LBRACE;
	v->a[89103] = anon_sym_DOLLAR_LPAREN;
	v->a[89104] = anon_sym_BQUOTE;
	v->a[89105] = anon_sym_DOLLAR_BQUOTE;
	v->a[89106] = sym_word;
	v->a[89107] = anon_sym_SEMI;
	v->a[89108] = 21;
	v->a[89109] = actions(57);
	v->a[89110] = 1;
	v->a[89111] = sym_comment;
	v->a[89112] = actions(4614);
	v->a[89113] = 1;
	v->a[89114] = anon_sym_LPAREN;
	v->a[89115] = actions(4616);
	v->a[89116] = 1;
	v->a[89117] = anon_sym_BANG;
	v->a[89118] = actions(4622);
	v->a[89119] = 1;
	small_parse_table_4456(v);
}

void	small_parse_table_4456(t_small_parse_table_array *v)
{
	v->a[89120] = anon_sym_TILDE;
	v->a[89121] = actions(4624);
	v->a[89122] = 1;
	v->a[89123] = anon_sym_DOLLAR;
	v->a[89124] = actions(4626);
	v->a[89125] = 1;
	v->a[89126] = anon_sym_DQUOTE;
	v->a[89127] = actions(4628);
	v->a[89128] = 1;
	v->a[89129] = aux_sym_number_token1;
	v->a[89130] = actions(4630);
	v->a[89131] = 1;
	v->a[89132] = aux_sym_number_token2;
	v->a[89133] = actions(4632);
	v->a[89134] = 1;
	v->a[89135] = anon_sym_DOLLAR_LBRACE;
	v->a[89136] = actions(4634);
	v->a[89137] = 1;
	v->a[89138] = anon_sym_DOLLAR_LPAREN;
	v->a[89139] = actions(4636);
	small_parse_table_4457(v);
}

void	small_parse_table_4457(t_small_parse_table_array *v)
{
	v->a[89140] = 1;
	v->a[89141] = anon_sym_BQUOTE;
	v->a[89142] = actions(4638);
	v->a[89143] = 1;
	v->a[89144] = anon_sym_DOLLAR_BQUOTE;
	v->a[89145] = actions(4921);
	v->a[89146] = 1;
	v->a[89147] = aux_sym__simple_variable_name_token1;
	v->a[89148] = actions(4923);
	v->a[89149] = 1;
	v->a[89150] = sym_variable_name;
	v->a[89151] = state(1637);
	v->a[89152] = 1;
	v->a[89153] = sym__arithmetic_postfix_expression;
	v->a[89154] = state(1638);
	v->a[89155] = 1;
	v->a[89156] = sym__arithmetic_unary_expression;
	v->a[89157] = state(1640);
	v->a[89158] = 1;
	v->a[89159] = sym__arithmetic_ternary_expression;
	small_parse_table_4458(v);
}

void	small_parse_table_4458(t_small_parse_table_array *v)
{
	v->a[89160] = state(1642);
	v->a[89161] = 1;
	v->a[89162] = sym__arithmetic_binary_expression;
	v->a[89163] = actions(4618);
	v->a[89164] = 2;
	v->a[89165] = anon_sym_PLUS_PLUS;
	v->a[89166] = anon_sym_DASH_DASH;
	v->a[89167] = actions(4620);
	v->a[89168] = 2;
	v->a[89169] = anon_sym_DASH2;
	v->a[89170] = anon_sym_PLUS2;
	v->a[89171] = state(1628);
	v->a[89172] = 8;
	v->a[89173] = sym__arithmetic_expression;
	v->a[89174] = sym__arithmetic_literal;
	v->a[89175] = sym__arithmetic_parenthesized_expression;
	v->a[89176] = sym_string;
	v->a[89177] = sym_number;
	v->a[89178] = sym_simple_expansion;
	v->a[89179] = sym_expansion;
	small_parse_table_4459(v);
}

void	small_parse_table_4459(t_small_parse_table_array *v)
{
	v->a[89180] = sym_command_substitution;
	v->a[89181] = 21;
	v->a[89182] = actions(57);
	v->a[89183] = 1;
	v->a[89184] = sym_comment;
	v->a[89185] = actions(4584);
	v->a[89186] = 1;
	v->a[89187] = anon_sym_LPAREN;
	v->a[89188] = actions(4586);
	v->a[89189] = 1;
	v->a[89190] = anon_sym_BANG;
	v->a[89191] = actions(4592);
	v->a[89192] = 1;
	v->a[89193] = anon_sym_TILDE;
	v->a[89194] = actions(4594);
	v->a[89195] = 1;
	v->a[89196] = anon_sym_DOLLAR;
	v->a[89197] = actions(4596);
	v->a[89198] = 1;
	v->a[89199] = anon_sym_DQUOTE;
	small_parse_table_4460(v);
}

/* EOF small_parse_table_891.c */
