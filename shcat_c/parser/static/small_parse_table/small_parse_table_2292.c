/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2292.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11460(t_small_parse_table_array *v)
{
	v->a[229200] = 1;
	v->a[229201] = anon_sym_BANG;
	v->a[229202] = actions(9286);
	v->a[229203] = 1;
	v->a[229204] = anon_sym_TILDE;
	v->a[229205] = actions(9288);
	v->a[229206] = 1;
	v->a[229207] = anon_sym_DOLLAR;
	v->a[229208] = actions(9290);
	v->a[229209] = 1;
	v->a[229210] = anon_sym_DQUOTE;
	v->a[229211] = actions(9292);
	v->a[229212] = 1;
	v->a[229213] = aux_sym_number_token1;
	v->a[229214] = actions(9294);
	v->a[229215] = 1;
	v->a[229216] = aux_sym_number_token2;
	v->a[229217] = actions(9296);
	v->a[229218] = 1;
	v->a[229219] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_11461(v);
}

void	small_parse_table_11461(t_small_parse_table_array *v)
{
	v->a[229220] = actions(9298);
	v->a[229221] = 1;
	v->a[229222] = anon_sym_DOLLAR_LPAREN;
	v->a[229223] = actions(9300);
	v->a[229224] = 1;
	v->a[229225] = anon_sym_BQUOTE;
	v->a[229226] = actions(9302);
	v->a[229227] = 1;
	v->a[229228] = anon_sym_DOLLAR_BQUOTE;
	v->a[229229] = actions(10866);
	v->a[229230] = 1;
	v->a[229231] = aux_sym__simple_variable_name_token1;
	v->a[229232] = state(2801);
	v->a[229233] = 1;
	v->a[229234] = sym__arithmetic_binary_expression;
	v->a[229235] = state(2803);
	v->a[229236] = 1;
	v->a[229237] = sym__arithmetic_ternary_expression;
	v->a[229238] = state(2809);
	v->a[229239] = 1;
	small_parse_table_11462(v);
}

void	small_parse_table_11462(t_small_parse_table_array *v)
{
	v->a[229240] = sym__arithmetic_unary_expression;
	v->a[229241] = state(2825);
	v->a[229242] = 1;
	v->a[229243] = sym__arithmetic_postfix_expression;
	v->a[229244] = actions(9282);
	v->a[229245] = 2;
	v->a[229246] = anon_sym_PLUS_PLUS2;
	v->a[229247] = anon_sym_DASH_DASH2;
	v->a[229248] = actions(9284);
	v->a[229249] = 2;
	v->a[229250] = anon_sym_DASH2;
	v->a[229251] = anon_sym_PLUS2;
	v->a[229252] = state(2921);
	v->a[229253] = 9;
	v->a[229254] = sym_subscript;
	v->a[229255] = sym__arithmetic_expression;
	v->a[229256] = sym__arithmetic_literal;
	v->a[229257] = sym__arithmetic_parenthesized_expression;
	v->a[229258] = sym_string;
	v->a[229259] = sym_number;
	small_parse_table_11463(v);
}

void	small_parse_table_11463(t_small_parse_table_array *v)
{
	v->a[229260] = sym_simple_expansion;
	v->a[229261] = sym_expansion;
	v->a[229262] = sym_command_substitution;
	v->a[229263] = 21;
	v->a[229264] = actions(71);
	v->a[229265] = 1;
	v->a[229266] = sym_comment;
	v->a[229267] = actions(9364);
	v->a[229268] = 1;
	v->a[229269] = anon_sym_LPAREN;
	v->a[229270] = actions(9366);
	v->a[229271] = 1;
	v->a[229272] = anon_sym_BANG;
	v->a[229273] = actions(9372);
	v->a[229274] = 1;
	v->a[229275] = anon_sym_TILDE;
	v->a[229276] = actions(9374);
	v->a[229277] = 1;
	v->a[229278] = anon_sym_DOLLAR;
	v->a[229279] = actions(9376);
	small_parse_table_11464(v);
}

void	small_parse_table_11464(t_small_parse_table_array *v)
{
	v->a[229280] = 1;
	v->a[229281] = anon_sym_DQUOTE;
	v->a[229282] = actions(9378);
	v->a[229283] = 1;
	v->a[229284] = aux_sym_number_token1;
	v->a[229285] = actions(9380);
	v->a[229286] = 1;
	v->a[229287] = aux_sym_number_token2;
	v->a[229288] = actions(9382);
	v->a[229289] = 1;
	v->a[229290] = anon_sym_DOLLAR_LBRACE;
	v->a[229291] = actions(9384);
	v->a[229292] = 1;
	v->a[229293] = anon_sym_DOLLAR_LPAREN;
	v->a[229294] = actions(9386);
	v->a[229295] = 1;
	v->a[229296] = anon_sym_BQUOTE;
	v->a[229297] = actions(9388);
	v->a[229298] = 1;
	v->a[229299] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_11465(v);
}

/* EOF small_parse_table_2292.c */
