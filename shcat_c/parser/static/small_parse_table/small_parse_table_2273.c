/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2273.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11365(t_small_parse_table_array *v)
{
	v->a[227300] = 1;
	v->a[227301] = sym_variable_name;
	v->a[227302] = actions(9278);
	v->a[227303] = 1;
	v->a[227304] = anon_sym_LPAREN;
	v->a[227305] = actions(9280);
	v->a[227306] = 1;
	v->a[227307] = anon_sym_BANG;
	v->a[227308] = actions(9286);
	v->a[227309] = 1;
	v->a[227310] = anon_sym_TILDE;
	v->a[227311] = actions(9288);
	v->a[227312] = 1;
	v->a[227313] = anon_sym_DOLLAR;
	v->a[227314] = actions(9290);
	v->a[227315] = 1;
	v->a[227316] = anon_sym_DQUOTE;
	v->a[227317] = actions(9292);
	v->a[227318] = 1;
	v->a[227319] = aux_sym_number_token1;
	small_parse_table_11366(v);
}

void	small_parse_table_11366(t_small_parse_table_array *v)
{
	v->a[227320] = actions(9294);
	v->a[227321] = 1;
	v->a[227322] = aux_sym_number_token2;
	v->a[227323] = actions(9296);
	v->a[227324] = 1;
	v->a[227325] = anon_sym_DOLLAR_LBRACE;
	v->a[227326] = actions(9298);
	v->a[227327] = 1;
	v->a[227328] = anon_sym_DOLLAR_LPAREN;
	v->a[227329] = actions(9300);
	v->a[227330] = 1;
	v->a[227331] = anon_sym_BQUOTE;
	v->a[227332] = actions(9302);
	v->a[227333] = 1;
	v->a[227334] = anon_sym_DOLLAR_BQUOTE;
	v->a[227335] = actions(10798);
	v->a[227336] = 1;
	v->a[227337] = aux_sym__simple_variable_name_token1;
	v->a[227338] = state(2801);
	v->a[227339] = 1;
	small_parse_table_11367(v);
}

void	small_parse_table_11367(t_small_parse_table_array *v)
{
	v->a[227340] = sym__arithmetic_binary_expression;
	v->a[227341] = state(2803);
	v->a[227342] = 1;
	v->a[227343] = sym__arithmetic_ternary_expression;
	v->a[227344] = state(2809);
	v->a[227345] = 1;
	v->a[227346] = sym__arithmetic_unary_expression;
	v->a[227347] = state(2825);
	v->a[227348] = 1;
	v->a[227349] = sym__arithmetic_postfix_expression;
	v->a[227350] = actions(9282);
	v->a[227351] = 2;
	v->a[227352] = anon_sym_PLUS_PLUS2;
	v->a[227353] = anon_sym_DASH_DASH2;
	v->a[227354] = actions(9284);
	v->a[227355] = 2;
	v->a[227356] = anon_sym_DASH2;
	v->a[227357] = anon_sym_PLUS2;
	v->a[227358] = state(2773);
	v->a[227359] = 9;
	small_parse_table_11368(v);
}

void	small_parse_table_11368(t_small_parse_table_array *v)
{
	v->a[227360] = sym_subscript;
	v->a[227361] = sym__arithmetic_expression;
	v->a[227362] = sym__arithmetic_literal;
	v->a[227363] = sym__arithmetic_parenthesized_expression;
	v->a[227364] = sym_string;
	v->a[227365] = sym_number;
	v->a[227366] = sym_simple_expansion;
	v->a[227367] = sym_expansion;
	v->a[227368] = sym_command_substitution;
	v->a[227369] = 21;
	v->a[227370] = actions(71);
	v->a[227371] = 1;
	v->a[227372] = sym_comment;
	v->a[227373] = actions(9364);
	v->a[227374] = 1;
	v->a[227375] = anon_sym_LPAREN;
	v->a[227376] = actions(9366);
	v->a[227377] = 1;
	v->a[227378] = anon_sym_BANG;
	v->a[227379] = actions(9372);
	small_parse_table_11369(v);
}

void	small_parse_table_11369(t_small_parse_table_array *v)
{
	v->a[227380] = 1;
	v->a[227381] = anon_sym_TILDE;
	v->a[227382] = actions(9374);
	v->a[227383] = 1;
	v->a[227384] = anon_sym_DOLLAR;
	v->a[227385] = actions(9376);
	v->a[227386] = 1;
	v->a[227387] = anon_sym_DQUOTE;
	v->a[227388] = actions(9378);
	v->a[227389] = 1;
	v->a[227390] = aux_sym_number_token1;
	v->a[227391] = actions(9380);
	v->a[227392] = 1;
	v->a[227393] = aux_sym_number_token2;
	v->a[227394] = actions(9382);
	v->a[227395] = 1;
	v->a[227396] = anon_sym_DOLLAR_LBRACE;
	v->a[227397] = actions(9384);
	v->a[227398] = 1;
	v->a[227399] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_11370(v);
}

/* EOF small_parse_table_2273.c */
