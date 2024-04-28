/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2153.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10765(t_small_parse_table_array *v)
{
	v->a[215300] = actions(9302);
	v->a[215301] = 1;
	v->a[215302] = anon_sym_DOLLAR_BQUOTE;
	v->a[215303] = actions(10278);
	v->a[215304] = 1;
	v->a[215305] = aux_sym__simple_variable_name_token1;
	v->a[215306] = state(2801);
	v->a[215307] = 1;
	v->a[215308] = sym__arithmetic_binary_expression;
	v->a[215309] = state(2803);
	v->a[215310] = 1;
	v->a[215311] = sym__arithmetic_ternary_expression;
	v->a[215312] = state(2809);
	v->a[215313] = 1;
	v->a[215314] = sym__arithmetic_unary_expression;
	v->a[215315] = state(2825);
	v->a[215316] = 1;
	v->a[215317] = sym__arithmetic_postfix_expression;
	v->a[215318] = actions(9282);
	v->a[215319] = 2;
	small_parse_table_10766(v);
}

void	small_parse_table_10766(t_small_parse_table_array *v)
{
	v->a[215320] = anon_sym_PLUS_PLUS2;
	v->a[215321] = anon_sym_DASH_DASH2;
	v->a[215322] = actions(9284);
	v->a[215323] = 2;
	v->a[215324] = anon_sym_DASH2;
	v->a[215325] = anon_sym_PLUS2;
	v->a[215326] = state(2758);
	v->a[215327] = 9;
	v->a[215328] = sym_subscript;
	v->a[215329] = sym__arithmetic_expression;
	v->a[215330] = sym__arithmetic_literal;
	v->a[215331] = sym__arithmetic_parenthesized_expression;
	v->a[215332] = sym_string;
	v->a[215333] = sym_number;
	v->a[215334] = sym_simple_expansion;
	v->a[215335] = sym_expansion;
	v->a[215336] = sym_command_substitution;
	v->a[215337] = 21;
	v->a[215338] = actions(71);
	v->a[215339] = 1;
	small_parse_table_10767(v);
}

void	small_parse_table_10767(t_small_parse_table_array *v)
{
	v->a[215340] = sym_comment;
	v->a[215341] = actions(9364);
	v->a[215342] = 1;
	v->a[215343] = anon_sym_LPAREN;
	v->a[215344] = actions(9366);
	v->a[215345] = 1;
	v->a[215346] = anon_sym_BANG;
	v->a[215347] = actions(9372);
	v->a[215348] = 1;
	v->a[215349] = anon_sym_TILDE;
	v->a[215350] = actions(9374);
	v->a[215351] = 1;
	v->a[215352] = anon_sym_DOLLAR;
	v->a[215353] = actions(9376);
	v->a[215354] = 1;
	v->a[215355] = anon_sym_DQUOTE;
	v->a[215356] = actions(9378);
	v->a[215357] = 1;
	v->a[215358] = aux_sym_number_token1;
	v->a[215359] = actions(9380);
	small_parse_table_10768(v);
}

void	small_parse_table_10768(t_small_parse_table_array *v)
{
	v->a[215360] = 1;
	v->a[215361] = aux_sym_number_token2;
	v->a[215362] = actions(9382);
	v->a[215363] = 1;
	v->a[215364] = anon_sym_DOLLAR_LBRACE;
	v->a[215365] = actions(9384);
	v->a[215366] = 1;
	v->a[215367] = anon_sym_DOLLAR_LPAREN;
	v->a[215368] = actions(9386);
	v->a[215369] = 1;
	v->a[215370] = anon_sym_BQUOTE;
	v->a[215371] = actions(9388);
	v->a[215372] = 1;
	v->a[215373] = anon_sym_DOLLAR_BQUOTE;
	v->a[215374] = actions(9392);
	v->a[215375] = 1;
	v->a[215376] = sym_variable_name;
	v->a[215377] = actions(10280);
	v->a[215378] = 1;
	v->a[215379] = aux_sym__simple_variable_name_token1;
	small_parse_table_10769(v);
}

void	small_parse_table_10769(t_small_parse_table_array *v)
{
	v->a[215380] = state(3391);
	v->a[215381] = 1;
	v->a[215382] = sym__arithmetic_binary_expression;
	v->a[215383] = state(3396);
	v->a[215384] = 1;
	v->a[215385] = sym__arithmetic_ternary_expression;
	v->a[215386] = state(3398);
	v->a[215387] = 1;
	v->a[215388] = sym__arithmetic_unary_expression;
	v->a[215389] = state(3400);
	v->a[215390] = 1;
	v->a[215391] = sym__arithmetic_postfix_expression;
	v->a[215392] = actions(9368);
	v->a[215393] = 2;
	v->a[215394] = anon_sym_PLUS_PLUS2;
	v->a[215395] = anon_sym_DASH_DASH2;
	v->a[215396] = actions(9370);
	v->a[215397] = 2;
	v->a[215398] = anon_sym_DASH2;
	v->a[215399] = anon_sym_PLUS2;
	small_parse_table_10770(v);
}

/* EOF small_parse_table_2153.c */
