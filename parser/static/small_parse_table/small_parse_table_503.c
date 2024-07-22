/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_503.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2515(t_small_parse_table_array *v)
{
	v->a[50300] = actions(1694);
	v->a[50301] = 1;
	v->a[50302] = anon_sym_BANG;
	v->a[50303] = actions(1700);
	v->a[50304] = 1;
	v->a[50305] = anon_sym_TILDE;
	v->a[50306] = actions(1702);
	v->a[50307] = 1;
	v->a[50308] = anon_sym_DOLLAR;
	v->a[50309] = actions(1704);
	v->a[50310] = 1;
	v->a[50311] = anon_sym_DQUOTE;
	v->a[50312] = actions(1708);
	v->a[50313] = 1;
	v->a[50314] = anon_sym_DOLLAR_LBRACE;
	v->a[50315] = actions(1710);
	v->a[50316] = 1;
	v->a[50317] = anon_sym_DOLLAR_LPAREN;
	v->a[50318] = actions(1712);
	v->a[50319] = 1;
	small_parse_table_2516(v);
}

void	small_parse_table_2516(t_small_parse_table_array *v)
{
	v->a[50320] = anon_sym_BQUOTE;
	v->a[50321] = actions(1714);
	v->a[50322] = 1;
	v->a[50323] = sym_variable_name;
	v->a[50324] = actions(1696);
	v->a[50325] = 2;
	v->a[50326] = anon_sym_PLUS_PLUS;
	v->a[50327] = anon_sym_DASH_DASH;
	v->a[50328] = actions(1698);
	v->a[50329] = 2;
	v->a[50330] = anon_sym_DASH2;
	v->a[50331] = anon_sym_PLUS2;
	v->a[50332] = actions(1706);
	v->a[50333] = 2;
	v->a[50334] = sym_number;
	v->a[50335] = aux_sym__simple_variable_name_token1;
	v->a[50336] = state(238);
	v->a[50337] = 3;
	v->a[50338] = sym_string;
	v->a[50339] = sym_simple_expansion;
	small_parse_table_2517(v);
}

void	small_parse_table_2517(t_small_parse_table_array *v)
{
	v->a[50340] = sym_expansion;
	v->a[50341] = state(258);
	v->a[50342] = 8;
	v->a[50343] = sym__arithmetic_expression;
	v->a[50344] = sym_arithmetic_literal;
	v->a[50345] = sym_arithmetic_binary_expression;
	v->a[50346] = sym_arithmetic_ternary_expression;
	v->a[50347] = sym_arithmetic_unary_expression;
	v->a[50348] = sym_arithmetic_postfix_expression;
	v->a[50349] = sym_arithmetic_parenthesized_expression;
	v->a[50350] = sym_command_substitution;
	v->a[50351] = 15;
	v->a[50352] = actions(501);
	v->a[50353] = 1;
	v->a[50354] = sym_comment;
	v->a[50355] = actions(1692);
	v->a[50356] = 1;
	v->a[50357] = anon_sym_LPAREN;
	v->a[50358] = actions(1694);
	v->a[50359] = 1;
	small_parse_table_2518(v);
}

void	small_parse_table_2518(t_small_parse_table_array *v)
{
	v->a[50360] = anon_sym_BANG;
	v->a[50361] = actions(1700);
	v->a[50362] = 1;
	v->a[50363] = anon_sym_TILDE;
	v->a[50364] = actions(1702);
	v->a[50365] = 1;
	v->a[50366] = anon_sym_DOLLAR;
	v->a[50367] = actions(1704);
	v->a[50368] = 1;
	v->a[50369] = anon_sym_DQUOTE;
	v->a[50370] = actions(1708);
	v->a[50371] = 1;
	v->a[50372] = anon_sym_DOLLAR_LBRACE;
	v->a[50373] = actions(1710);
	v->a[50374] = 1;
	v->a[50375] = anon_sym_DOLLAR_LPAREN;
	v->a[50376] = actions(1712);
	v->a[50377] = 1;
	v->a[50378] = anon_sym_BQUOTE;
	v->a[50379] = actions(1714);
	small_parse_table_2519(v);
}

void	small_parse_table_2519(t_small_parse_table_array *v)
{
	v->a[50380] = 1;
	v->a[50381] = sym_variable_name;
	v->a[50382] = actions(1696);
	v->a[50383] = 2;
	v->a[50384] = anon_sym_PLUS_PLUS;
	v->a[50385] = anon_sym_DASH_DASH;
	v->a[50386] = actions(1698);
	v->a[50387] = 2;
	v->a[50388] = anon_sym_DASH2;
	v->a[50389] = anon_sym_PLUS2;
	v->a[50390] = actions(1706);
	v->a[50391] = 2;
	v->a[50392] = sym_number;
	v->a[50393] = aux_sym__simple_variable_name_token1;
	v->a[50394] = state(238);
	v->a[50395] = 3;
	v->a[50396] = sym_string;
	v->a[50397] = sym_simple_expansion;
	v->a[50398] = sym_expansion;
	v->a[50399] = state(271);
	small_parse_table_2520(v);
}

/* EOF small_parse_table_503.c */
