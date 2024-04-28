/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2152.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10760(t_small_parse_table_array *v)
{
	v->a[215200] = 1;
	v->a[215201] = anon_sym_TILDE;
	v->a[215202] = actions(9374);
	v->a[215203] = 1;
	v->a[215204] = anon_sym_DOLLAR;
	v->a[215205] = actions(9376);
	v->a[215206] = 1;
	v->a[215207] = anon_sym_DQUOTE;
	v->a[215208] = actions(9378);
	v->a[215209] = 1;
	v->a[215210] = aux_sym_number_token1;
	v->a[215211] = actions(9380);
	v->a[215212] = 1;
	v->a[215213] = aux_sym_number_token2;
	v->a[215214] = actions(9382);
	v->a[215215] = 1;
	v->a[215216] = anon_sym_DOLLAR_LBRACE;
	v->a[215217] = actions(9384);
	v->a[215218] = 1;
	v->a[215219] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_10761(v);
}

void	small_parse_table_10761(t_small_parse_table_array *v)
{
	v->a[215220] = actions(9386);
	v->a[215221] = 1;
	v->a[215222] = anon_sym_BQUOTE;
	v->a[215223] = actions(9388);
	v->a[215224] = 1;
	v->a[215225] = anon_sym_DOLLAR_BQUOTE;
	v->a[215226] = actions(9392);
	v->a[215227] = 1;
	v->a[215228] = sym_variable_name;
	v->a[215229] = actions(10276);
	v->a[215230] = 1;
	v->a[215231] = aux_sym__simple_variable_name_token1;
	v->a[215232] = state(3391);
	v->a[215233] = 1;
	v->a[215234] = sym__arithmetic_binary_expression;
	v->a[215235] = state(3396);
	v->a[215236] = 1;
	v->a[215237] = sym__arithmetic_ternary_expression;
	v->a[215238] = state(3398);
	v->a[215239] = 1;
	small_parse_table_10762(v);
}

void	small_parse_table_10762(t_small_parse_table_array *v)
{
	v->a[215240] = sym__arithmetic_unary_expression;
	v->a[215241] = state(3400);
	v->a[215242] = 1;
	v->a[215243] = sym__arithmetic_postfix_expression;
	v->a[215244] = actions(9368);
	v->a[215245] = 2;
	v->a[215246] = anon_sym_PLUS_PLUS2;
	v->a[215247] = anon_sym_DASH_DASH2;
	v->a[215248] = actions(9370);
	v->a[215249] = 2;
	v->a[215250] = anon_sym_DASH2;
	v->a[215251] = anon_sym_PLUS2;
	v->a[215252] = state(3328);
	v->a[215253] = 9;
	v->a[215254] = sym_subscript;
	v->a[215255] = sym__arithmetic_expression;
	v->a[215256] = sym__arithmetic_literal;
	v->a[215257] = sym__arithmetic_parenthesized_expression;
	v->a[215258] = sym_string;
	v->a[215259] = sym_number;
	small_parse_table_10763(v);
}

void	small_parse_table_10763(t_small_parse_table_array *v)
{
	v->a[215260] = sym_simple_expansion;
	v->a[215261] = sym_expansion;
	v->a[215262] = sym_command_substitution;
	v->a[215263] = 21;
	v->a[215264] = actions(71);
	v->a[215265] = 1;
	v->a[215266] = sym_comment;
	v->a[215267] = actions(3064);
	v->a[215268] = 1;
	v->a[215269] = sym_variable_name;
	v->a[215270] = actions(9278);
	v->a[215271] = 1;
	v->a[215272] = anon_sym_LPAREN;
	v->a[215273] = actions(9280);
	v->a[215274] = 1;
	v->a[215275] = anon_sym_BANG;
	v->a[215276] = actions(9286);
	v->a[215277] = 1;
	v->a[215278] = anon_sym_TILDE;
	v->a[215279] = actions(9288);
	small_parse_table_10764(v);
}

void	small_parse_table_10764(t_small_parse_table_array *v)
{
	v->a[215280] = 1;
	v->a[215281] = anon_sym_DOLLAR;
	v->a[215282] = actions(9290);
	v->a[215283] = 1;
	v->a[215284] = anon_sym_DQUOTE;
	v->a[215285] = actions(9292);
	v->a[215286] = 1;
	v->a[215287] = aux_sym_number_token1;
	v->a[215288] = actions(9294);
	v->a[215289] = 1;
	v->a[215290] = aux_sym_number_token2;
	v->a[215291] = actions(9296);
	v->a[215292] = 1;
	v->a[215293] = anon_sym_DOLLAR_LBRACE;
	v->a[215294] = actions(9298);
	v->a[215295] = 1;
	v->a[215296] = anon_sym_DOLLAR_LPAREN;
	v->a[215297] = actions(9300);
	v->a[215298] = 1;
	v->a[215299] = anon_sym_BQUOTE;
	small_parse_table_10765(v);
}

/* EOF small_parse_table_2152.c */
