/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2121.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10605(t_small_parse_table_array *v)
{
	v->a[212100] = sym_raw_string;
	v->a[212101] = sym_ansi_c_string;
	v->a[212102] = state(2210);
	v->a[212103] = 9;
	v->a[212104] = sym_arithmetic_expansion;
	v->a[212105] = sym_brace_expression;
	v->a[212106] = sym_string;
	v->a[212107] = sym_translated_string;
	v->a[212108] = sym_number;
	v->a[212109] = sym_simple_expansion;
	v->a[212110] = sym_expansion;
	v->a[212111] = sym_command_substitution;
	v->a[212112] = sym_process_substitution;
	v->a[212113] = 21;
	v->a[212114] = actions(71);
	v->a[212115] = 1;
	v->a[212116] = sym_comment;
	v->a[212117] = actions(3064);
	v->a[212118] = 1;
	v->a[212119] = sym_variable_name;
	small_parse_table_10606(v);
}

void	small_parse_table_10606(t_small_parse_table_array *v)
{
	v->a[212120] = actions(3111);
	v->a[212121] = 1;
	v->a[212122] = aux_sym__simple_variable_name_token1;
	v->a[212123] = actions(9278);
	v->a[212124] = 1;
	v->a[212125] = anon_sym_LPAREN;
	v->a[212126] = actions(9280);
	v->a[212127] = 1;
	v->a[212128] = anon_sym_BANG;
	v->a[212129] = actions(9286);
	v->a[212130] = 1;
	v->a[212131] = anon_sym_TILDE;
	v->a[212132] = actions(9288);
	v->a[212133] = 1;
	v->a[212134] = anon_sym_DOLLAR;
	v->a[212135] = actions(9290);
	v->a[212136] = 1;
	v->a[212137] = anon_sym_DQUOTE;
	v->a[212138] = actions(9292);
	v->a[212139] = 1;
	small_parse_table_10607(v);
}

void	small_parse_table_10607(t_small_parse_table_array *v)
{
	v->a[212140] = aux_sym_number_token1;
	v->a[212141] = actions(9294);
	v->a[212142] = 1;
	v->a[212143] = aux_sym_number_token2;
	v->a[212144] = actions(9296);
	v->a[212145] = 1;
	v->a[212146] = anon_sym_DOLLAR_LBRACE;
	v->a[212147] = actions(9298);
	v->a[212148] = 1;
	v->a[212149] = anon_sym_DOLLAR_LPAREN;
	v->a[212150] = actions(9300);
	v->a[212151] = 1;
	v->a[212152] = anon_sym_BQUOTE;
	v->a[212153] = actions(9302);
	v->a[212154] = 1;
	v->a[212155] = anon_sym_DOLLAR_BQUOTE;
	v->a[212156] = state(2801);
	v->a[212157] = 1;
	v->a[212158] = sym__arithmetic_binary_expression;
	v->a[212159] = state(2803);
	small_parse_table_10608(v);
}

void	small_parse_table_10608(t_small_parse_table_array *v)
{
	v->a[212160] = 1;
	v->a[212161] = sym__arithmetic_ternary_expression;
	v->a[212162] = state(2809);
	v->a[212163] = 1;
	v->a[212164] = sym__arithmetic_unary_expression;
	v->a[212165] = state(2825);
	v->a[212166] = 1;
	v->a[212167] = sym__arithmetic_postfix_expression;
	v->a[212168] = actions(9282);
	v->a[212169] = 2;
	v->a[212170] = anon_sym_PLUS_PLUS2;
	v->a[212171] = anon_sym_DASH_DASH2;
	v->a[212172] = actions(9284);
	v->a[212173] = 2;
	v->a[212174] = anon_sym_DASH2;
	v->a[212175] = anon_sym_PLUS2;
	v->a[212176] = state(2799);
	v->a[212177] = 9;
	v->a[212178] = sym_subscript;
	v->a[212179] = sym__arithmetic_expression;
	small_parse_table_10609(v);
}

void	small_parse_table_10609(t_small_parse_table_array *v)
{
	v->a[212180] = sym__arithmetic_literal;
	v->a[212181] = sym__arithmetic_parenthesized_expression;
	v->a[212182] = sym_string;
	v->a[212183] = sym_number;
	v->a[212184] = sym_simple_expansion;
	v->a[212185] = sym_expansion;
	v->a[212186] = sym_command_substitution;
	v->a[212187] = 21;
	v->a[212188] = actions(71);
	v->a[212189] = 1;
	v->a[212190] = sym_comment;
	v->a[212191] = actions(9364);
	v->a[212192] = 1;
	v->a[212193] = anon_sym_LPAREN;
	v->a[212194] = actions(9366);
	v->a[212195] = 1;
	v->a[212196] = anon_sym_BANG;
	v->a[212197] = actions(9372);
	v->a[212198] = 1;
	v->a[212199] = anon_sym_TILDE;
	small_parse_table_10610(v);
}

/* EOF small_parse_table_2121.c */
