/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2122.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10610(t_small_parse_table_array *v)
{
	v->a[212200] = actions(9374);
	v->a[212201] = 1;
	v->a[212202] = anon_sym_DOLLAR;
	v->a[212203] = actions(9376);
	v->a[212204] = 1;
	v->a[212205] = anon_sym_DQUOTE;
	v->a[212206] = actions(9378);
	v->a[212207] = 1;
	v->a[212208] = aux_sym_number_token1;
	v->a[212209] = actions(9380);
	v->a[212210] = 1;
	v->a[212211] = aux_sym_number_token2;
	v->a[212212] = actions(9382);
	v->a[212213] = 1;
	v->a[212214] = anon_sym_DOLLAR_LBRACE;
	v->a[212215] = actions(9384);
	v->a[212216] = 1;
	v->a[212217] = anon_sym_DOLLAR_LPAREN;
	v->a[212218] = actions(9386);
	v->a[212219] = 1;
	small_parse_table_10611(v);
}

void	small_parse_table_10611(t_small_parse_table_array *v)
{
	v->a[212220] = anon_sym_BQUOTE;
	v->a[212221] = actions(9388);
	v->a[212222] = 1;
	v->a[212223] = anon_sym_DOLLAR_BQUOTE;
	v->a[212224] = actions(9392);
	v->a[212225] = 1;
	v->a[212226] = sym_variable_name;
	v->a[212227] = actions(10080);
	v->a[212228] = 1;
	v->a[212229] = aux_sym__simple_variable_name_token1;
	v->a[212230] = state(3391);
	v->a[212231] = 1;
	v->a[212232] = sym__arithmetic_binary_expression;
	v->a[212233] = state(3396);
	v->a[212234] = 1;
	v->a[212235] = sym__arithmetic_ternary_expression;
	v->a[212236] = state(3398);
	v->a[212237] = 1;
	v->a[212238] = sym__arithmetic_unary_expression;
	v->a[212239] = state(3400);
	small_parse_table_10612(v);
}

void	small_parse_table_10612(t_small_parse_table_array *v)
{
	v->a[212240] = 1;
	v->a[212241] = sym__arithmetic_postfix_expression;
	v->a[212242] = actions(9368);
	v->a[212243] = 2;
	v->a[212244] = anon_sym_PLUS_PLUS2;
	v->a[212245] = anon_sym_DASH_DASH2;
	v->a[212246] = actions(9370);
	v->a[212247] = 2;
	v->a[212248] = anon_sym_DASH2;
	v->a[212249] = anon_sym_PLUS2;
	v->a[212250] = state(3435);
	v->a[212251] = 9;
	v->a[212252] = sym_subscript;
	v->a[212253] = sym__arithmetic_expression;
	v->a[212254] = sym__arithmetic_literal;
	v->a[212255] = sym__arithmetic_parenthesized_expression;
	v->a[212256] = sym_string;
	v->a[212257] = sym_number;
	v->a[212258] = sym_simple_expansion;
	v->a[212259] = sym_expansion;
	small_parse_table_10613(v);
}

void	small_parse_table_10613(t_small_parse_table_array *v)
{
	v->a[212260] = sym_command_substitution;
	v->a[212261] = 20;
	v->a[212262] = actions(71);
	v->a[212263] = 1;
	v->a[212264] = sym_comment;
	v->a[212265] = actions(1454);
	v->a[212266] = 1;
	v->a[212267] = anon_sym_DOLLAR;
	v->a[212268] = actions(1460);
	v->a[212269] = 1;
	v->a[212270] = aux_sym_number_token1;
	v->a[212271] = actions(1462);
	v->a[212272] = 1;
	v->a[212273] = aux_sym_number_token2;
	v->a[212274] = actions(1466);
	v->a[212275] = 1;
	v->a[212276] = anon_sym_DOLLAR_LPAREN;
	v->a[212277] = actions(1478);
	v->a[212278] = 1;
	v->a[212279] = sym__brace_start;
	small_parse_table_10614(v);
}

void	small_parse_table_10614(t_small_parse_table_array *v)
{
	v->a[212280] = actions(8878);
	v->a[212281] = 1;
	v->a[212282] = anon_sym_DOLLAR_LBRACK;
	v->a[212283] = actions(8880);
	v->a[212284] = 1;
	v->a[212285] = sym__special_character;
	v->a[212286] = actions(8882);
	v->a[212287] = 1;
	v->a[212288] = anon_sym_DQUOTE;
	v->a[212289] = actions(8886);
	v->a[212290] = 1;
	v->a[212291] = anon_sym_DOLLAR_LBRACE;
	v->a[212292] = actions(8888);
	v->a[212293] = 1;
	v->a[212294] = anon_sym_BQUOTE;
	v->a[212295] = actions(8890);
	v->a[212296] = 1;
	v->a[212297] = anon_sym_DOLLAR_BQUOTE;
	v->a[212298] = actions(10082);
	v->a[212299] = 1;
	small_parse_table_10615(v);
}

/* EOF small_parse_table_2122.c */
