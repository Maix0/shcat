/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2112.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10560(t_small_parse_table_array *v)
{
	v->a[211200] = 1;
	v->a[211201] = anon_sym_DOLLAR;
	v->a[211202] = actions(9290);
	v->a[211203] = 1;
	v->a[211204] = anon_sym_DQUOTE;
	v->a[211205] = actions(9292);
	v->a[211206] = 1;
	v->a[211207] = aux_sym_number_token1;
	v->a[211208] = actions(9294);
	v->a[211209] = 1;
	v->a[211210] = aux_sym_number_token2;
	v->a[211211] = actions(9296);
	v->a[211212] = 1;
	v->a[211213] = anon_sym_DOLLAR_LBRACE;
	v->a[211214] = actions(9298);
	v->a[211215] = 1;
	v->a[211216] = anon_sym_DOLLAR_LPAREN;
	v->a[211217] = actions(9300);
	v->a[211218] = 1;
	v->a[211219] = anon_sym_BQUOTE;
	small_parse_table_10561(v);
}

void	small_parse_table_10561(t_small_parse_table_array *v)
{
	v->a[211220] = actions(9302);
	v->a[211221] = 1;
	v->a[211222] = anon_sym_DOLLAR_BQUOTE;
	v->a[211223] = actions(10024);
	v->a[211224] = 1;
	v->a[211225] = aux_sym__simple_variable_name_token1;
	v->a[211226] = state(2801);
	v->a[211227] = 1;
	v->a[211228] = sym__arithmetic_binary_expression;
	v->a[211229] = state(2803);
	v->a[211230] = 1;
	v->a[211231] = sym__arithmetic_ternary_expression;
	v->a[211232] = state(2809);
	v->a[211233] = 1;
	v->a[211234] = sym__arithmetic_unary_expression;
	v->a[211235] = state(2825);
	v->a[211236] = 1;
	v->a[211237] = sym__arithmetic_postfix_expression;
	v->a[211238] = actions(9282);
	v->a[211239] = 2;
	small_parse_table_10562(v);
}

void	small_parse_table_10562(t_small_parse_table_array *v)
{
	v->a[211240] = anon_sym_PLUS_PLUS2;
	v->a[211241] = anon_sym_DASH_DASH2;
	v->a[211242] = actions(9284);
	v->a[211243] = 2;
	v->a[211244] = anon_sym_DASH2;
	v->a[211245] = anon_sym_PLUS2;
	v->a[211246] = state(2792);
	v->a[211247] = 9;
	v->a[211248] = sym_subscript;
	v->a[211249] = sym__arithmetic_expression;
	v->a[211250] = sym__arithmetic_literal;
	v->a[211251] = sym__arithmetic_parenthesized_expression;
	v->a[211252] = sym_string;
	v->a[211253] = sym_number;
	v->a[211254] = sym_simple_expansion;
	v->a[211255] = sym_expansion;
	v->a[211256] = sym_command_substitution;
	v->a[211257] = 21;
	v->a[211258] = actions(71);
	v->a[211259] = 1;
	small_parse_table_10563(v);
}

void	small_parse_table_10563(t_small_parse_table_array *v)
{
	v->a[211260] = sym_comment;
	v->a[211261] = actions(9364);
	v->a[211262] = 1;
	v->a[211263] = anon_sym_LPAREN;
	v->a[211264] = actions(9366);
	v->a[211265] = 1;
	v->a[211266] = anon_sym_BANG;
	v->a[211267] = actions(9372);
	v->a[211268] = 1;
	v->a[211269] = anon_sym_TILDE;
	v->a[211270] = actions(9374);
	v->a[211271] = 1;
	v->a[211272] = anon_sym_DOLLAR;
	v->a[211273] = actions(9376);
	v->a[211274] = 1;
	v->a[211275] = anon_sym_DQUOTE;
	v->a[211276] = actions(9378);
	v->a[211277] = 1;
	v->a[211278] = aux_sym_number_token1;
	v->a[211279] = actions(9380);
	small_parse_table_10564(v);
}

void	small_parse_table_10564(t_small_parse_table_array *v)
{
	v->a[211280] = 1;
	v->a[211281] = aux_sym_number_token2;
	v->a[211282] = actions(9382);
	v->a[211283] = 1;
	v->a[211284] = anon_sym_DOLLAR_LBRACE;
	v->a[211285] = actions(9384);
	v->a[211286] = 1;
	v->a[211287] = anon_sym_DOLLAR_LPAREN;
	v->a[211288] = actions(9386);
	v->a[211289] = 1;
	v->a[211290] = anon_sym_BQUOTE;
	v->a[211291] = actions(9388);
	v->a[211292] = 1;
	v->a[211293] = anon_sym_DOLLAR_BQUOTE;
	v->a[211294] = actions(9392);
	v->a[211295] = 1;
	v->a[211296] = sym_variable_name;
	v->a[211297] = actions(10026);
	v->a[211298] = 1;
	v->a[211299] = aux_sym__simple_variable_name_token1;
	small_parse_table_10565(v);
}

/* EOF small_parse_table_2112.c */
