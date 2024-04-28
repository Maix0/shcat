/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2192.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10960(t_small_parse_table_array *v)
{
	v->a[219200] = state(1037);
	v->a[219201] = 9;
	v->a[219202] = sym_arithmetic_expansion;
	v->a[219203] = sym_brace_expression;
	v->a[219204] = sym_string;
	v->a[219205] = sym_translated_string;
	v->a[219206] = sym_number;
	v->a[219207] = sym_simple_expansion;
	v->a[219208] = sym_expansion;
	v->a[219209] = sym_command_substitution;
	v->a[219210] = sym_process_substitution;
	v->a[219211] = 21;
	v->a[219212] = actions(71);
	v->a[219213] = 1;
	v->a[219214] = sym_comment;
	v->a[219215] = actions(3064);
	v->a[219216] = 1;
	v->a[219217] = sym_variable_name;
	v->a[219218] = actions(9278);
	v->a[219219] = 1;
	small_parse_table_10961(v);
}

void	small_parse_table_10961(t_small_parse_table_array *v)
{
	v->a[219220] = anon_sym_LPAREN;
	v->a[219221] = actions(9280);
	v->a[219222] = 1;
	v->a[219223] = anon_sym_BANG;
	v->a[219224] = actions(9286);
	v->a[219225] = 1;
	v->a[219226] = anon_sym_TILDE;
	v->a[219227] = actions(9288);
	v->a[219228] = 1;
	v->a[219229] = anon_sym_DOLLAR;
	v->a[219230] = actions(9290);
	v->a[219231] = 1;
	v->a[219232] = anon_sym_DQUOTE;
	v->a[219233] = actions(9292);
	v->a[219234] = 1;
	v->a[219235] = aux_sym_number_token1;
	v->a[219236] = actions(9294);
	v->a[219237] = 1;
	v->a[219238] = aux_sym_number_token2;
	v->a[219239] = actions(9296);
	small_parse_table_10962(v);
}

void	small_parse_table_10962(t_small_parse_table_array *v)
{
	v->a[219240] = 1;
	v->a[219241] = anon_sym_DOLLAR_LBRACE;
	v->a[219242] = actions(9298);
	v->a[219243] = 1;
	v->a[219244] = anon_sym_DOLLAR_LPAREN;
	v->a[219245] = actions(9300);
	v->a[219246] = 1;
	v->a[219247] = anon_sym_BQUOTE;
	v->a[219248] = actions(9302);
	v->a[219249] = 1;
	v->a[219250] = anon_sym_DOLLAR_BQUOTE;
	v->a[219251] = actions(10440);
	v->a[219252] = 1;
	v->a[219253] = aux_sym__simple_variable_name_token1;
	v->a[219254] = state(2801);
	v->a[219255] = 1;
	v->a[219256] = sym__arithmetic_binary_expression;
	v->a[219257] = state(2803);
	v->a[219258] = 1;
	v->a[219259] = sym__arithmetic_ternary_expression;
	small_parse_table_10963(v);
}

void	small_parse_table_10963(t_small_parse_table_array *v)
{
	v->a[219260] = state(2809);
	v->a[219261] = 1;
	v->a[219262] = sym__arithmetic_unary_expression;
	v->a[219263] = state(2825);
	v->a[219264] = 1;
	v->a[219265] = sym__arithmetic_postfix_expression;
	v->a[219266] = actions(9282);
	v->a[219267] = 2;
	v->a[219268] = anon_sym_PLUS_PLUS2;
	v->a[219269] = anon_sym_DASH_DASH2;
	v->a[219270] = actions(9284);
	v->a[219271] = 2;
	v->a[219272] = anon_sym_DASH2;
	v->a[219273] = anon_sym_PLUS2;
	v->a[219274] = state(2761);
	v->a[219275] = 9;
	v->a[219276] = sym_subscript;
	v->a[219277] = sym__arithmetic_expression;
	v->a[219278] = sym__arithmetic_literal;
	v->a[219279] = sym__arithmetic_parenthesized_expression;
	small_parse_table_10964(v);
}

void	small_parse_table_10964(t_small_parse_table_array *v)
{
	v->a[219280] = sym_string;
	v->a[219281] = sym_number;
	v->a[219282] = sym_simple_expansion;
	v->a[219283] = sym_expansion;
	v->a[219284] = sym_command_substitution;
	v->a[219285] = 21;
	v->a[219286] = actions(71);
	v->a[219287] = 1;
	v->a[219288] = sym_comment;
	v->a[219289] = actions(9364);
	v->a[219290] = 1;
	v->a[219291] = anon_sym_LPAREN;
	v->a[219292] = actions(9366);
	v->a[219293] = 1;
	v->a[219294] = anon_sym_BANG;
	v->a[219295] = actions(9372);
	v->a[219296] = 1;
	v->a[219297] = anon_sym_TILDE;
	v->a[219298] = actions(9374);
	v->a[219299] = 1;
	small_parse_table_10965(v);
}

/* EOF small_parse_table_2192.c */
