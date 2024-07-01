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
	v->a[50300] = sym_number;
	v->a[50301] = aux_sym__simple_variable_name_token1;
	v->a[50302] = state(260);
	v->a[50303] = 3;
	v->a[50304] = sym_string;
	v->a[50305] = sym_simple_expansion;
	v->a[50306] = sym_expansion;
	v->a[50307] = state(312);
	v->a[50308] = 8;
	v->a[50309] = sym__arithmetic_expression;
	v->a[50310] = sym_arithmetic_literal;
	v->a[50311] = sym_arithmetic_binary_expression;
	v->a[50312] = sym_arithmetic_ternary_expression;
	v->a[50313] = sym_arithmetic_unary_expression;
	v->a[50314] = sym_arithmetic_postfix_expression;
	v->a[50315] = sym_arithmetic_parenthesized_expression;
	v->a[50316] = sym_command_substitution;
	v->a[50317] = 15;
	v->a[50318] = actions(664);
	v->a[50319] = 1;
	small_parse_table_2516(v);
}

void	small_parse_table_2516(t_small_parse_table_array *v)
{
	v->a[50320] = sym_comment;
	v->a[50321] = actions(1740);
	v->a[50322] = 1;
	v->a[50323] = anon_sym_LPAREN;
	v->a[50324] = actions(1742);
	v->a[50325] = 1;
	v->a[50326] = anon_sym_BANG;
	v->a[50327] = actions(1748);
	v->a[50328] = 1;
	v->a[50329] = anon_sym_TILDE;
	v->a[50330] = actions(1750);
	v->a[50331] = 1;
	v->a[50332] = anon_sym_DOLLAR;
	v->a[50333] = actions(1752);
	v->a[50334] = 1;
	v->a[50335] = anon_sym_DQUOTE;
	v->a[50336] = actions(1756);
	v->a[50337] = 1;
	v->a[50338] = anon_sym_DOLLAR_LBRACE;
	v->a[50339] = actions(1758);
	small_parse_table_2517(v);
}

void	small_parse_table_2517(t_small_parse_table_array *v)
{
	v->a[50340] = 1;
	v->a[50341] = anon_sym_DOLLAR_LPAREN;
	v->a[50342] = actions(1760);
	v->a[50343] = 1;
	v->a[50344] = anon_sym_BQUOTE;
	v->a[50345] = actions(1762);
	v->a[50346] = 1;
	v->a[50347] = sym_variable_name;
	v->a[50348] = actions(1744);
	v->a[50349] = 2;
	v->a[50350] = anon_sym_PLUS_PLUS;
	v->a[50351] = anon_sym_DASH_DASH;
	v->a[50352] = actions(1746);
	v->a[50353] = 2;
	v->a[50354] = anon_sym_DASH2;
	v->a[50355] = anon_sym_PLUS2;
	v->a[50356] = actions(1754);
	v->a[50357] = 2;
	v->a[50358] = sym_number;
	v->a[50359] = aux_sym__simple_variable_name_token1;
	small_parse_table_2518(v);
}

void	small_parse_table_2518(t_small_parse_table_array *v)
{
	v->a[50360] = state(260);
	v->a[50361] = 3;
	v->a[50362] = sym_string;
	v->a[50363] = sym_simple_expansion;
	v->a[50364] = sym_expansion;
	v->a[50365] = state(313);
	v->a[50366] = 8;
	v->a[50367] = sym__arithmetic_expression;
	v->a[50368] = sym_arithmetic_literal;
	v->a[50369] = sym_arithmetic_binary_expression;
	v->a[50370] = sym_arithmetic_ternary_expression;
	v->a[50371] = sym_arithmetic_unary_expression;
	v->a[50372] = sym_arithmetic_postfix_expression;
	v->a[50373] = sym_arithmetic_parenthesized_expression;
	v->a[50374] = sym_command_substitution;
	v->a[50375] = 15;
	v->a[50376] = actions(664);
	v->a[50377] = 1;
	v->a[50378] = sym_comment;
	v->a[50379] = actions(1740);
	small_parse_table_2519(v);
}

void	small_parse_table_2519(t_small_parse_table_array *v)
{
	v->a[50380] = 1;
	v->a[50381] = anon_sym_LPAREN;
	v->a[50382] = actions(1742);
	v->a[50383] = 1;
	v->a[50384] = anon_sym_BANG;
	v->a[50385] = actions(1748);
	v->a[50386] = 1;
	v->a[50387] = anon_sym_TILDE;
	v->a[50388] = actions(1750);
	v->a[50389] = 1;
	v->a[50390] = anon_sym_DOLLAR;
	v->a[50391] = actions(1752);
	v->a[50392] = 1;
	v->a[50393] = anon_sym_DQUOTE;
	v->a[50394] = actions(1756);
	v->a[50395] = 1;
	v->a[50396] = anon_sym_DOLLAR_LBRACE;
	v->a[50397] = actions(1758);
	v->a[50398] = 1;
	v->a[50399] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2520(v);
}

/* EOF small_parse_table_503.c */
