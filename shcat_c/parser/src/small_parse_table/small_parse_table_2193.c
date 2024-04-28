/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2193.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10965(t_small_parse_table_array *v)
{
	v->a[219300] = anon_sym_DOLLAR;
	v->a[219301] = actions(9376);
	v->a[219302] = 1;
	v->a[219303] = anon_sym_DQUOTE;
	v->a[219304] = actions(9378);
	v->a[219305] = 1;
	v->a[219306] = aux_sym_number_token1;
	v->a[219307] = actions(9380);
	v->a[219308] = 1;
	v->a[219309] = aux_sym_number_token2;
	v->a[219310] = actions(9382);
	v->a[219311] = 1;
	v->a[219312] = anon_sym_DOLLAR_LBRACE;
	v->a[219313] = actions(9384);
	v->a[219314] = 1;
	v->a[219315] = anon_sym_DOLLAR_LPAREN;
	v->a[219316] = actions(9386);
	v->a[219317] = 1;
	v->a[219318] = anon_sym_BQUOTE;
	v->a[219319] = actions(9388);
	small_parse_table_10966(v);
}

void	small_parse_table_10966(t_small_parse_table_array *v)
{
	v->a[219320] = 1;
	v->a[219321] = anon_sym_DOLLAR_BQUOTE;
	v->a[219322] = actions(9392);
	v->a[219323] = 1;
	v->a[219324] = sym_variable_name;
	v->a[219325] = actions(10442);
	v->a[219326] = 1;
	v->a[219327] = aux_sym__simple_variable_name_token1;
	v->a[219328] = state(3391);
	v->a[219329] = 1;
	v->a[219330] = sym__arithmetic_binary_expression;
	v->a[219331] = state(3396);
	v->a[219332] = 1;
	v->a[219333] = sym__arithmetic_ternary_expression;
	v->a[219334] = state(3398);
	v->a[219335] = 1;
	v->a[219336] = sym__arithmetic_unary_expression;
	v->a[219337] = state(3400);
	v->a[219338] = 1;
	v->a[219339] = sym__arithmetic_postfix_expression;
	small_parse_table_10967(v);
}

void	small_parse_table_10967(t_small_parse_table_array *v)
{
	v->a[219340] = actions(9368);
	v->a[219341] = 2;
	v->a[219342] = anon_sym_PLUS_PLUS2;
	v->a[219343] = anon_sym_DASH_DASH2;
	v->a[219344] = actions(9370);
	v->a[219345] = 2;
	v->a[219346] = anon_sym_DASH2;
	v->a[219347] = anon_sym_PLUS2;
	v->a[219348] = state(3320);
	v->a[219349] = 9;
	v->a[219350] = sym_subscript;
	v->a[219351] = sym__arithmetic_expression;
	v->a[219352] = sym__arithmetic_literal;
	v->a[219353] = sym__arithmetic_parenthesized_expression;
	v->a[219354] = sym_string;
	v->a[219355] = sym_number;
	v->a[219356] = sym_simple_expansion;
	v->a[219357] = sym_expansion;
	v->a[219358] = sym_command_substitution;
	v->a[219359] = 21;
	small_parse_table_10968(v);
}

void	small_parse_table_10968(t_small_parse_table_array *v)
{
	v->a[219360] = actions(71);
	v->a[219361] = 1;
	v->a[219362] = sym_comment;
	v->a[219363] = actions(3064);
	v->a[219364] = 1;
	v->a[219365] = sym_variable_name;
	v->a[219366] = actions(9278);
	v->a[219367] = 1;
	v->a[219368] = anon_sym_LPAREN;
	v->a[219369] = actions(9280);
	v->a[219370] = 1;
	v->a[219371] = anon_sym_BANG;
	v->a[219372] = actions(9286);
	v->a[219373] = 1;
	v->a[219374] = anon_sym_TILDE;
	v->a[219375] = actions(9288);
	v->a[219376] = 1;
	v->a[219377] = anon_sym_DOLLAR;
	v->a[219378] = actions(9290);
	v->a[219379] = 1;
	small_parse_table_10969(v);
}

void	small_parse_table_10969(t_small_parse_table_array *v)
{
	v->a[219380] = anon_sym_DQUOTE;
	v->a[219381] = actions(9292);
	v->a[219382] = 1;
	v->a[219383] = aux_sym_number_token1;
	v->a[219384] = actions(9294);
	v->a[219385] = 1;
	v->a[219386] = aux_sym_number_token2;
	v->a[219387] = actions(9296);
	v->a[219388] = 1;
	v->a[219389] = anon_sym_DOLLAR_LBRACE;
	v->a[219390] = actions(9298);
	v->a[219391] = 1;
	v->a[219392] = anon_sym_DOLLAR_LPAREN;
	v->a[219393] = actions(9300);
	v->a[219394] = 1;
	v->a[219395] = anon_sym_BQUOTE;
	v->a[219396] = actions(9302);
	v->a[219397] = 1;
	v->a[219398] = anon_sym_DOLLAR_BQUOTE;
	v->a[219399] = actions(10444);
	small_parse_table_10970(v);
}

/* EOF small_parse_table_2193.c */
