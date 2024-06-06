/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_901.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4505(t_small_parse_table_array *v)
{
	v->a[90100] = 1;
	v->a[90101] = sym_comment;
	v->a[90102] = actions(4584);
	v->a[90103] = 1;
	v->a[90104] = anon_sym_LPAREN;
	v->a[90105] = actions(4586);
	v->a[90106] = 1;
	v->a[90107] = anon_sym_BANG;
	v->a[90108] = actions(4592);
	v->a[90109] = 1;
	v->a[90110] = anon_sym_TILDE;
	v->a[90111] = actions(4594);
	v->a[90112] = 1;
	v->a[90113] = anon_sym_DOLLAR;
	v->a[90114] = actions(4596);
	v->a[90115] = 1;
	v->a[90116] = anon_sym_DQUOTE;
	v->a[90117] = actions(4598);
	v->a[90118] = 1;
	v->a[90119] = aux_sym_number_token1;
	small_parse_table_4506(v);
}

void	small_parse_table_4506(t_small_parse_table_array *v)
{
	v->a[90120] = actions(4600);
	v->a[90121] = 1;
	v->a[90122] = aux_sym_number_token2;
	v->a[90123] = actions(4602);
	v->a[90124] = 1;
	v->a[90125] = anon_sym_DOLLAR_LBRACE;
	v->a[90126] = actions(4604);
	v->a[90127] = 1;
	v->a[90128] = anon_sym_DOLLAR_LPAREN;
	v->a[90129] = actions(4606);
	v->a[90130] = 1;
	v->a[90131] = anon_sym_BQUOTE;
	v->a[90132] = actions(4608);
	v->a[90133] = 1;
	v->a[90134] = anon_sym_DOLLAR_BQUOTE;
	v->a[90135] = actions(4973);
	v->a[90136] = 1;
	v->a[90137] = aux_sym__simple_variable_name_token1;
	v->a[90138] = actions(4975);
	v->a[90139] = 1;
	small_parse_table_4507(v);
}

void	small_parse_table_4507(t_small_parse_table_array *v)
{
	v->a[90140] = sym_variable_name;
	v->a[90141] = state(1476);
	v->a[90142] = 1;
	v->a[90143] = sym__arithmetic_postfix_expression;
	v->a[90144] = state(1478);
	v->a[90145] = 1;
	v->a[90146] = sym__arithmetic_unary_expression;
	v->a[90147] = state(1490);
	v->a[90148] = 1;
	v->a[90149] = sym__arithmetic_ternary_expression;
	v->a[90150] = state(1511);
	v->a[90151] = 1;
	v->a[90152] = sym__arithmetic_binary_expression;
	v->a[90153] = actions(4588);
	v->a[90154] = 2;
	v->a[90155] = anon_sym_PLUS_PLUS;
	v->a[90156] = anon_sym_DASH_DASH;
	v->a[90157] = actions(4590);
	v->a[90158] = 2;
	v->a[90159] = anon_sym_DASH2;
	small_parse_table_4508(v);
}

void	small_parse_table_4508(t_small_parse_table_array *v)
{
	v->a[90160] = anon_sym_PLUS2;
	v->a[90161] = state(1385);
	v->a[90162] = 8;
	v->a[90163] = sym__arithmetic_expression;
	v->a[90164] = sym__arithmetic_literal;
	v->a[90165] = sym__arithmetic_parenthesized_expression;
	v->a[90166] = sym_string;
	v->a[90167] = sym_number;
	v->a[90168] = sym_simple_expansion;
	v->a[90169] = sym_expansion;
	v->a[90170] = sym_command_substitution;
	v->a[90171] = 21;
	v->a[90172] = actions(57);
	v->a[90173] = 1;
	v->a[90174] = sym_comment;
	v->a[90175] = actions(4584);
	v->a[90176] = 1;
	v->a[90177] = anon_sym_LPAREN;
	v->a[90178] = actions(4586);
	v->a[90179] = 1;
	small_parse_table_4509(v);
}

void	small_parse_table_4509(t_small_parse_table_array *v)
{
	v->a[90180] = anon_sym_BANG;
	v->a[90181] = actions(4592);
	v->a[90182] = 1;
	v->a[90183] = anon_sym_TILDE;
	v->a[90184] = actions(4594);
	v->a[90185] = 1;
	v->a[90186] = anon_sym_DOLLAR;
	v->a[90187] = actions(4596);
	v->a[90188] = 1;
	v->a[90189] = anon_sym_DQUOTE;
	v->a[90190] = actions(4598);
	v->a[90191] = 1;
	v->a[90192] = aux_sym_number_token1;
	v->a[90193] = actions(4600);
	v->a[90194] = 1;
	v->a[90195] = aux_sym_number_token2;
	v->a[90196] = actions(4602);
	v->a[90197] = 1;
	v->a[90198] = anon_sym_DOLLAR_LBRACE;
	v->a[90199] = actions(4604);
	small_parse_table_4510(v);
}

/* EOF small_parse_table_901.c */
