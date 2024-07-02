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
	v->a[50300] = sym_file_descriptor;
	v->a[50301] = sym_variable_name;
	v->a[50302] = actions(1422);
	v->a[50303] = 23;
	v->a[50304] = anon_sym_for;
	v->a[50305] = anon_sym_while;
	v->a[50306] = anon_sym_until;
	v->a[50307] = anon_sym_if;
	v->a[50308] = anon_sym_case;
	v->a[50309] = anon_sym_LPAREN;
	v->a[50310] = anon_sym_LBRACE;
	v->a[50311] = anon_sym_BANG;
	v->a[50312] = anon_sym_LT;
	v->a[50313] = anon_sym_GT;
	v->a[50314] = anon_sym_GT_GT;
	v->a[50315] = anon_sym_LT_AMP;
	v->a[50316] = anon_sym_GT_AMP;
	v->a[50317] = anon_sym_GT_PIPE;
	v->a[50318] = anon_sym_LT_GT;
	v->a[50319] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_2516(v);
}

void	small_parse_table_2516(t_small_parse_table_array *v)
{
	v->a[50320] = anon_sym_DOLLAR;
	v->a[50321] = anon_sym_DQUOTE;
	v->a[50322] = sym_raw_string;
	v->a[50323] = sym_number;
	v->a[50324] = anon_sym_DOLLAR_LBRACE;
	v->a[50325] = anon_sym_DOLLAR_LPAREN;
	v->a[50326] = sym_word;
	v->a[50327] = 15;
	v->a[50328] = actions(680);
	v->a[50329] = 1;
	v->a[50330] = sym_comment;
	v->a[50331] = actions(1730);
	v->a[50332] = 1;
	v->a[50333] = anon_sym_LPAREN;
	v->a[50334] = actions(1732);
	v->a[50335] = 1;
	v->a[50336] = anon_sym_BANG;
	v->a[50337] = actions(1738);
	v->a[50338] = 1;
	v->a[50339] = anon_sym_TILDE;
	small_parse_table_2517(v);
}

void	small_parse_table_2517(t_small_parse_table_array *v)
{
	v->a[50340] = actions(1740);
	v->a[50341] = 1;
	v->a[50342] = anon_sym_DOLLAR;
	v->a[50343] = actions(1742);
	v->a[50344] = 1;
	v->a[50345] = anon_sym_DQUOTE;
	v->a[50346] = actions(1746);
	v->a[50347] = 1;
	v->a[50348] = anon_sym_DOLLAR_LBRACE;
	v->a[50349] = actions(1748);
	v->a[50350] = 1;
	v->a[50351] = anon_sym_DOLLAR_LPAREN;
	v->a[50352] = actions(1750);
	v->a[50353] = 1;
	v->a[50354] = anon_sym_BQUOTE;
	v->a[50355] = actions(1752);
	v->a[50356] = 1;
	v->a[50357] = sym_variable_name;
	v->a[50358] = actions(1734);
	v->a[50359] = 2;
	small_parse_table_2518(v);
}

void	small_parse_table_2518(t_small_parse_table_array *v)
{
	v->a[50360] = anon_sym_PLUS_PLUS;
	v->a[50361] = anon_sym_DASH_DASH;
	v->a[50362] = actions(1736);
	v->a[50363] = 2;
	v->a[50364] = anon_sym_DASH2;
	v->a[50365] = anon_sym_PLUS2;
	v->a[50366] = actions(1744);
	v->a[50367] = 2;
	v->a[50368] = sym_number;
	v->a[50369] = aux_sym__simple_variable_name_token1;
	v->a[50370] = state(264);
	v->a[50371] = 3;
	v->a[50372] = sym_string;
	v->a[50373] = sym_simple_expansion;
	v->a[50374] = sym_expansion;
	v->a[50375] = state(284);
	v->a[50376] = 8;
	v->a[50377] = sym__arithmetic_expression;
	v->a[50378] = sym_arithmetic_literal;
	v->a[50379] = sym_arithmetic_binary_expression;
	small_parse_table_2519(v);
}

void	small_parse_table_2519(t_small_parse_table_array *v)
{
	v->a[50380] = sym_arithmetic_ternary_expression;
	v->a[50381] = sym_arithmetic_unary_expression;
	v->a[50382] = sym_arithmetic_postfix_expression;
	v->a[50383] = sym_arithmetic_parenthesized_expression;
	v->a[50384] = sym_command_substitution;
	v->a[50385] = 3;
	v->a[50386] = actions(3);
	v->a[50387] = 1;
	v->a[50388] = sym_comment;
	v->a[50389] = actions(1426);
	v->a[50390] = 2;
	v->a[50391] = sym_file_descriptor;
	v->a[50392] = sym_variable_name;
	v->a[50393] = actions(1422);
	v->a[50394] = 24;
	v->a[50395] = anon_sym_for;
	v->a[50396] = anon_sym_while;
	v->a[50397] = anon_sym_until;
	v->a[50398] = anon_sym_if;
	v->a[50399] = anon_sym_case;
	small_parse_table_2520(v);
}

/* EOF small_parse_table_503.c */
