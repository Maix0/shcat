/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2262.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11310(t_small_parse_table_array *v)
{
	v->a[226200] = actions(10750);
	v->a[226201] = 2;
	v->a[226202] = sym_raw_string;
	v->a[226203] = sym_ansi_c_string;
	v->a[226204] = state(1529);
	v->a[226205] = 9;
	v->a[226206] = sym_arithmetic_expansion;
	v->a[226207] = sym_brace_expression;
	v->a[226208] = sym_string;
	v->a[226209] = sym_translated_string;
	v->a[226210] = sym_number;
	v->a[226211] = sym_simple_expansion;
	v->a[226212] = sym_expansion;
	v->a[226213] = sym_command_substitution;
	v->a[226214] = sym_process_substitution;
	v->a[226215] = 21;
	v->a[226216] = actions(71);
	v->a[226217] = 1;
	v->a[226218] = sym_comment;
	v->a[226219] = actions(3602);
	small_parse_table_11311(v);
}

void	small_parse_table_11311(t_small_parse_table_array *v)
{
	v->a[226220] = 1;
	v->a[226221] = sym_variable_name;
	v->a[226222] = actions(9898);
	v->a[226223] = 1;
	v->a[226224] = anon_sym_LPAREN;
	v->a[226225] = actions(9900);
	v->a[226226] = 1;
	v->a[226227] = anon_sym_BANG;
	v->a[226228] = actions(9906);
	v->a[226229] = 1;
	v->a[226230] = anon_sym_TILDE;
	v->a[226231] = actions(9908);
	v->a[226232] = 1;
	v->a[226233] = anon_sym_DOLLAR;
	v->a[226234] = actions(9910);
	v->a[226235] = 1;
	v->a[226236] = anon_sym_DQUOTE;
	v->a[226237] = actions(9912);
	v->a[226238] = 1;
	v->a[226239] = aux_sym_number_token1;
	small_parse_table_11312(v);
}

void	small_parse_table_11312(t_small_parse_table_array *v)
{
	v->a[226240] = actions(9914);
	v->a[226241] = 1;
	v->a[226242] = aux_sym_number_token2;
	v->a[226243] = actions(9916);
	v->a[226244] = 1;
	v->a[226245] = anon_sym_DOLLAR_LBRACE;
	v->a[226246] = actions(9918);
	v->a[226247] = 1;
	v->a[226248] = anon_sym_DOLLAR_LPAREN;
	v->a[226249] = actions(9920);
	v->a[226250] = 1;
	v->a[226251] = anon_sym_BQUOTE;
	v->a[226252] = actions(9922);
	v->a[226253] = 1;
	v->a[226254] = anon_sym_DOLLAR_BQUOTE;
	v->a[226255] = actions(10754);
	v->a[226256] = 1;
	v->a[226257] = aux_sym__simple_variable_name_token1;
	v->a[226258] = state(3359);
	v->a[226259] = 1;
	small_parse_table_11313(v);
}

void	small_parse_table_11313(t_small_parse_table_array *v)
{
	v->a[226260] = sym__arithmetic_postfix_expression;
	v->a[226261] = state(3361);
	v->a[226262] = 1;
	v->a[226263] = sym__arithmetic_unary_expression;
	v->a[226264] = state(3367);
	v->a[226265] = 1;
	v->a[226266] = sym__arithmetic_ternary_expression;
	v->a[226267] = state(3375);
	v->a[226268] = 1;
	v->a[226269] = sym__arithmetic_binary_expression;
	v->a[226270] = actions(9902);
	v->a[226271] = 2;
	v->a[226272] = anon_sym_PLUS_PLUS2;
	v->a[226273] = anon_sym_DASH_DASH2;
	v->a[226274] = actions(9904);
	v->a[226275] = 2;
	v->a[226276] = anon_sym_DASH2;
	v->a[226277] = anon_sym_PLUS2;
	v->a[226278] = state(3242);
	v->a[226279] = 9;
	small_parse_table_11314(v);
}

void	small_parse_table_11314(t_small_parse_table_array *v)
{
	v->a[226280] = sym_subscript;
	v->a[226281] = sym__arithmetic_expression;
	v->a[226282] = sym__arithmetic_literal;
	v->a[226283] = sym__arithmetic_parenthesized_expression;
	v->a[226284] = sym_string;
	v->a[226285] = sym_number;
	v->a[226286] = sym_simple_expansion;
	v->a[226287] = sym_expansion;
	v->a[226288] = sym_command_substitution;
	v->a[226289] = 21;
	v->a[226290] = actions(71);
	v->a[226291] = 1;
	v->a[226292] = sym_comment;
	v->a[226293] = actions(3602);
	v->a[226294] = 1;
	v->a[226295] = sym_variable_name;
	v->a[226296] = actions(9898);
	v->a[226297] = 1;
	v->a[226298] = anon_sym_LPAREN;
	v->a[226299] = actions(9900);
	small_parse_table_11315(v);
}

/* EOF small_parse_table_2262.c */
