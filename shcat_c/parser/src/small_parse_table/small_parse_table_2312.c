/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2312.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11560(t_small_parse_table_array *v)
{
	v->a[231200] = actions(9382);
	v->a[231201] = 1;
	v->a[231202] = anon_sym_DOLLAR_LBRACE;
	v->a[231203] = actions(9384);
	v->a[231204] = 1;
	v->a[231205] = anon_sym_DOLLAR_LPAREN;
	v->a[231206] = actions(9386);
	v->a[231207] = 1;
	v->a[231208] = anon_sym_BQUOTE;
	v->a[231209] = actions(9388);
	v->a[231210] = 1;
	v->a[231211] = anon_sym_DOLLAR_BQUOTE;
	v->a[231212] = actions(9392);
	v->a[231213] = 1;
	v->a[231214] = sym_variable_name;
	v->a[231215] = actions(10922);
	v->a[231216] = 1;
	v->a[231217] = aux_sym__simple_variable_name_token1;
	v->a[231218] = state(3391);
	v->a[231219] = 1;
	small_parse_table_11561(v);
}

void	small_parse_table_11561(t_small_parse_table_array *v)
{
	v->a[231220] = sym__arithmetic_binary_expression;
	v->a[231221] = state(3396);
	v->a[231222] = 1;
	v->a[231223] = sym__arithmetic_ternary_expression;
	v->a[231224] = state(3398);
	v->a[231225] = 1;
	v->a[231226] = sym__arithmetic_unary_expression;
	v->a[231227] = state(3400);
	v->a[231228] = 1;
	v->a[231229] = sym__arithmetic_postfix_expression;
	v->a[231230] = actions(9368);
	v->a[231231] = 2;
	v->a[231232] = anon_sym_PLUS_PLUS2;
	v->a[231233] = anon_sym_DASH_DASH2;
	v->a[231234] = actions(9370);
	v->a[231235] = 2;
	v->a[231236] = anon_sym_DASH2;
	v->a[231237] = anon_sym_PLUS2;
	v->a[231238] = state(3273);
	v->a[231239] = 9;
	small_parse_table_11562(v);
}

void	small_parse_table_11562(t_small_parse_table_array *v)
{
	v->a[231240] = sym_subscript;
	v->a[231241] = sym__arithmetic_expression;
	v->a[231242] = sym__arithmetic_literal;
	v->a[231243] = sym__arithmetic_parenthesized_expression;
	v->a[231244] = sym_string;
	v->a[231245] = sym_number;
	v->a[231246] = sym_simple_expansion;
	v->a[231247] = sym_expansion;
	v->a[231248] = sym_command_substitution;
	v->a[231249] = 21;
	v->a[231250] = actions(71);
	v->a[231251] = 1;
	v->a[231252] = sym_comment;
	v->a[231253] = actions(3064);
	v->a[231254] = 1;
	v->a[231255] = sym_variable_name;
	v->a[231256] = actions(4048);
	v->a[231257] = 1;
	v->a[231258] = aux_sym__simple_variable_name_token1;
	v->a[231259] = actions(9278);
	small_parse_table_11563(v);
}

void	small_parse_table_11563(t_small_parse_table_array *v)
{
	v->a[231260] = 1;
	v->a[231261] = anon_sym_LPAREN;
	v->a[231262] = actions(9280);
	v->a[231263] = 1;
	v->a[231264] = anon_sym_BANG;
	v->a[231265] = actions(9286);
	v->a[231266] = 1;
	v->a[231267] = anon_sym_TILDE;
	v->a[231268] = actions(9288);
	v->a[231269] = 1;
	v->a[231270] = anon_sym_DOLLAR;
	v->a[231271] = actions(9290);
	v->a[231272] = 1;
	v->a[231273] = anon_sym_DQUOTE;
	v->a[231274] = actions(9292);
	v->a[231275] = 1;
	v->a[231276] = aux_sym_number_token1;
	v->a[231277] = actions(9294);
	v->a[231278] = 1;
	v->a[231279] = aux_sym_number_token2;
	small_parse_table_11564(v);
}

void	small_parse_table_11564(t_small_parse_table_array *v)
{
	v->a[231280] = actions(9296);
	v->a[231281] = 1;
	v->a[231282] = anon_sym_DOLLAR_LBRACE;
	v->a[231283] = actions(9298);
	v->a[231284] = 1;
	v->a[231285] = anon_sym_DOLLAR_LPAREN;
	v->a[231286] = actions(9300);
	v->a[231287] = 1;
	v->a[231288] = anon_sym_BQUOTE;
	v->a[231289] = actions(9302);
	v->a[231290] = 1;
	v->a[231291] = anon_sym_DOLLAR_BQUOTE;
	v->a[231292] = state(2801);
	v->a[231293] = 1;
	v->a[231294] = sym__arithmetic_binary_expression;
	v->a[231295] = state(2803);
	v->a[231296] = 1;
	v->a[231297] = sym__arithmetic_ternary_expression;
	v->a[231298] = state(2809);
	v->a[231299] = 1;
	small_parse_table_11565(v);
}

/* EOF small_parse_table_2312.c */
