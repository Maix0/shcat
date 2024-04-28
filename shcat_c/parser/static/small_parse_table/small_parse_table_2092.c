/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2092.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10460(t_small_parse_table_array *v)
{
	v->a[209200] = state(1921);
	v->a[209201] = 9;
	v->a[209202] = sym_arithmetic_expansion;
	v->a[209203] = sym_brace_expression;
	v->a[209204] = sym_string;
	v->a[209205] = sym_translated_string;
	v->a[209206] = sym_number;
	v->a[209207] = sym_simple_expansion;
	v->a[209208] = sym_expansion;
	v->a[209209] = sym_command_substitution;
	v->a[209210] = sym_process_substitution;
	v->a[209211] = 21;
	v->a[209212] = actions(71);
	v->a[209213] = 1;
	v->a[209214] = sym_comment;
	v->a[209215] = actions(9364);
	v->a[209216] = 1;
	v->a[209217] = anon_sym_LPAREN;
	v->a[209218] = actions(9366);
	v->a[209219] = 1;
	small_parse_table_10461(v);
}

void	small_parse_table_10461(t_small_parse_table_array *v)
{
	v->a[209220] = anon_sym_BANG;
	v->a[209221] = actions(9372);
	v->a[209222] = 1;
	v->a[209223] = anon_sym_TILDE;
	v->a[209224] = actions(9374);
	v->a[209225] = 1;
	v->a[209226] = anon_sym_DOLLAR;
	v->a[209227] = actions(9376);
	v->a[209228] = 1;
	v->a[209229] = anon_sym_DQUOTE;
	v->a[209230] = actions(9378);
	v->a[209231] = 1;
	v->a[209232] = aux_sym_number_token1;
	v->a[209233] = actions(9380);
	v->a[209234] = 1;
	v->a[209235] = aux_sym_number_token2;
	v->a[209236] = actions(9382);
	v->a[209237] = 1;
	v->a[209238] = anon_sym_DOLLAR_LBRACE;
	v->a[209239] = actions(9384);
	small_parse_table_10462(v);
}

void	small_parse_table_10462(t_small_parse_table_array *v)
{
	v->a[209240] = 1;
	v->a[209241] = anon_sym_DOLLAR_LPAREN;
	v->a[209242] = actions(9386);
	v->a[209243] = 1;
	v->a[209244] = anon_sym_BQUOTE;
	v->a[209245] = actions(9388);
	v->a[209246] = 1;
	v->a[209247] = anon_sym_DOLLAR_BQUOTE;
	v->a[209248] = actions(9392);
	v->a[209249] = 1;
	v->a[209250] = sym_variable_name;
	v->a[209251] = actions(9858);
	v->a[209252] = 1;
	v->a[209253] = aux_sym__simple_variable_name_token1;
	v->a[209254] = state(3391);
	v->a[209255] = 1;
	v->a[209256] = sym__arithmetic_binary_expression;
	v->a[209257] = state(3396);
	v->a[209258] = 1;
	v->a[209259] = sym__arithmetic_ternary_expression;
	small_parse_table_10463(v);
}

void	small_parse_table_10463(t_small_parse_table_array *v)
{
	v->a[209260] = state(3398);
	v->a[209261] = 1;
	v->a[209262] = sym__arithmetic_unary_expression;
	v->a[209263] = state(3400);
	v->a[209264] = 1;
	v->a[209265] = sym__arithmetic_postfix_expression;
	v->a[209266] = actions(9368);
	v->a[209267] = 2;
	v->a[209268] = anon_sym_PLUS_PLUS2;
	v->a[209269] = anon_sym_DASH_DASH2;
	v->a[209270] = actions(9370);
	v->a[209271] = 2;
	v->a[209272] = anon_sym_DASH2;
	v->a[209273] = anon_sym_PLUS2;
	v->a[209274] = state(3364);
	v->a[209275] = 9;
	v->a[209276] = sym_subscript;
	v->a[209277] = sym__arithmetic_expression;
	v->a[209278] = sym__arithmetic_literal;
	v->a[209279] = sym__arithmetic_parenthesized_expression;
	small_parse_table_10464(v);
}

void	small_parse_table_10464(t_small_parse_table_array *v)
{
	v->a[209280] = sym_string;
	v->a[209281] = sym_number;
	v->a[209282] = sym_simple_expansion;
	v->a[209283] = sym_expansion;
	v->a[209284] = sym_command_substitution;
	v->a[209285] = 18;
	v->a[209286] = actions(3);
	v->a[209287] = 1;
	v->a[209288] = sym_comment;
	v->a[209289] = actions(7958);
	v->a[209290] = 1;
	v->a[209291] = anon_sym_DOLLAR_LBRACK;
	v->a[209292] = actions(7964);
	v->a[209293] = 1;
	v->a[209294] = anon_sym_DQUOTE;
	v->a[209295] = actions(7968);
	v->a[209296] = 1;
	v->a[209297] = aux_sym_number_token1;
	v->a[209298] = actions(7970);
	v->a[209299] = 1;
	small_parse_table_10465(v);
}

/* EOF small_parse_table_2092.c */
