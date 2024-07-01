/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_522.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2610(t_small_parse_table_array *v)
{
	v->a[52200] = actions(1003);
	v->a[52201] = 24;
	v->a[52202] = anon_sym_LPAREN;
	v->a[52203] = anon_sym_PIPE;
	v->a[52204] = anon_sym_AMP_AMP;
	v->a[52205] = anon_sym_PIPE_PIPE;
	v->a[52206] = anon_sym_LT;
	v->a[52207] = anon_sym_GT;
	v->a[52208] = anon_sym_GT_GT;
	v->a[52209] = anon_sym_LT_AMP;
	v->a[52210] = anon_sym_GT_AMP;
	v->a[52211] = anon_sym_GT_PIPE;
	v->a[52212] = anon_sym_LT_AMP_DASH;
	v->a[52213] = anon_sym_GT_AMP_DASH;
	v->a[52214] = anon_sym_LT_LT;
	v->a[52215] = anon_sym_LT_LT_DASH;
	v->a[52216] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[52217] = aux_sym_concatenation_token1;
	v->a[52218] = anon_sym_DOLLAR;
	v->a[52219] = anon_sym_DQUOTE;
	small_parse_table_2611(v);
}

void	small_parse_table_2611(t_small_parse_table_array *v)
{
	v->a[52220] = sym_raw_string;
	v->a[52221] = sym_number;
	v->a[52222] = anon_sym_DOLLAR_LBRACE;
	v->a[52223] = anon_sym_DOLLAR_LPAREN;
	v->a[52224] = anon_sym_BQUOTE;
	v->a[52225] = sym_word;
	v->a[52226] = 16;
	v->a[52227] = actions(870);
	v->a[52228] = 1;
	v->a[52229] = sym_comment;
	v->a[52230] = actions(1744);
	v->a[52231] = 1;
	v->a[52232] = anon_sym_LPAREN;
	v->a[52233] = actions(1746);
	v->a[52234] = 1;
	v->a[52235] = anon_sym_BANG;
	v->a[52236] = actions(1754);
	v->a[52237] = 1;
	v->a[52238] = anon_sym_TILDE;
	v->a[52239] = actions(1756);
	small_parse_table_2612(v);
}

void	small_parse_table_2612(t_small_parse_table_array *v)
{
	v->a[52240] = 1;
	v->a[52241] = anon_sym_DOLLAR;
	v->a[52242] = actions(1758);
	v->a[52243] = 1;
	v->a[52244] = anon_sym_DQUOTE;
	v->a[52245] = actions(1762);
	v->a[52246] = 1;
	v->a[52247] = anon_sym_DOLLAR_LBRACE;
	v->a[52248] = actions(1764);
	v->a[52249] = 1;
	v->a[52250] = anon_sym_DOLLAR_LPAREN;
	v->a[52251] = actions(1766);
	v->a[52252] = 1;
	v->a[52253] = anon_sym_BQUOTE;
	v->a[52254] = actions(1768);
	v->a[52255] = 1;
	v->a[52256] = sym_variable_name;
	v->a[52257] = actions(1838);
	v->a[52258] = 1;
	v->a[52259] = anon_sym_RPAREN_RPAREN;
	small_parse_table_2613(v);
}

void	small_parse_table_2613(t_small_parse_table_array *v)
{
	v->a[52260] = actions(1750);
	v->a[52261] = 2;
	v->a[52262] = anon_sym_PLUS_PLUS;
	v->a[52263] = anon_sym_DASH_DASH;
	v->a[52264] = actions(1752);
	v->a[52265] = 2;
	v->a[52266] = anon_sym_DASH2;
	v->a[52267] = anon_sym_PLUS2;
	v->a[52268] = actions(1760);
	v->a[52269] = 2;
	v->a[52270] = sym_number;
	v->a[52271] = aux_sym__simple_variable_name_token1;
	v->a[52272] = state(271);
	v->a[52273] = 3;
	v->a[52274] = sym_string;
	v->a[52275] = sym_simple_expansion;
	v->a[52276] = sym_expansion;
	v->a[52277] = state(332);
	v->a[52278] = 8;
	v->a[52279] = sym__arithmetic_expression;
	small_parse_table_2614(v);
}

void	small_parse_table_2614(t_small_parse_table_array *v)
{
	v->a[52280] = sym_arithmetic_literal;
	v->a[52281] = sym_arithmetic_binary_expression;
	v->a[52282] = sym_arithmetic_ternary_expression;
	v->a[52283] = sym_arithmetic_unary_expression;
	v->a[52284] = sym_arithmetic_postfix_expression;
	v->a[52285] = sym_arithmetic_parenthesized_expression;
	v->a[52286] = sym_command_substitution;
	v->a[52287] = 18;
	v->a[52288] = actions(3);
	v->a[52289] = 1;
	v->a[52290] = sym_comment;
	v->a[52291] = actions(1774);
	v->a[52292] = 1;
	v->a[52293] = anon_sym_LPAREN;
	v->a[52294] = actions(1778);
	v->a[52295] = 1;
	v->a[52296] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[52297] = actions(1780);
	v->a[52298] = 1;
	v->a[52299] = anon_sym_DOLLAR;
	small_parse_table_2615(v);
}

/* EOF small_parse_table_522.c */
