/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_591.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2955(t_small_parse_table_array *v)
{
	v->a[59100] = anon_sym_BQUOTE;
	v->a[59101] = actions(1855);
	v->a[59102] = 1;
	v->a[59103] = sym_variable_name;
	v->a[59104] = actions(1837);
	v->a[59105] = 2;
	v->a[59106] = anon_sym_PLUS_PLUS;
	v->a[59107] = anon_sym_DASH_DASH;
	v->a[59108] = actions(1839);
	v->a[59109] = 2;
	v->a[59110] = anon_sym_DASH2;
	v->a[59111] = anon_sym_PLUS2;
	v->a[59112] = actions(1847);
	v->a[59113] = 2;
	v->a[59114] = sym_number;
	v->a[59115] = aux_sym__simple_variable_name_token1;
	v->a[59116] = state(370);
	v->a[59117] = 3;
	v->a[59118] = sym_string;
	v->a[59119] = sym_simple_expansion;
	small_parse_table_2956(v);
}

void	small_parse_table_2956(t_small_parse_table_array *v)
{
	v->a[59120] = sym_expansion;
	v->a[59121] = state(412);
	v->a[59122] = 8;
	v->a[59123] = sym__arithmetic_expression;
	v->a[59124] = sym_arithmetic_literal;
	v->a[59125] = sym_arithmetic_binary_expression;
	v->a[59126] = sym_arithmetic_ternary_expression;
	v->a[59127] = sym_arithmetic_unary_expression;
	v->a[59128] = sym_arithmetic_postfix_expression;
	v->a[59129] = sym_arithmetic_parenthesized_expression;
	v->a[59130] = sym_command_substitution;
	v->a[59131] = 15;
	v->a[59132] = actions(1074);
	v->a[59133] = 1;
	v->a[59134] = sym_comment;
	v->a[59135] = actions(1831);
	v->a[59136] = 1;
	v->a[59137] = anon_sym_LPAREN;
	v->a[59138] = actions(1833);
	v->a[59139] = 1;
	small_parse_table_2957(v);
}

void	small_parse_table_2957(t_small_parse_table_array *v)
{
	v->a[59140] = anon_sym_BANG;
	v->a[59141] = actions(1841);
	v->a[59142] = 1;
	v->a[59143] = anon_sym_TILDE;
	v->a[59144] = actions(1843);
	v->a[59145] = 1;
	v->a[59146] = anon_sym_DOLLAR;
	v->a[59147] = actions(1845);
	v->a[59148] = 1;
	v->a[59149] = anon_sym_DQUOTE;
	v->a[59150] = actions(1849);
	v->a[59151] = 1;
	v->a[59152] = anon_sym_DOLLAR_LBRACE;
	v->a[59153] = actions(1851);
	v->a[59154] = 1;
	v->a[59155] = anon_sym_DOLLAR_LPAREN;
	v->a[59156] = actions(1853);
	v->a[59157] = 1;
	v->a[59158] = anon_sym_BQUOTE;
	v->a[59159] = actions(1855);
	small_parse_table_2958(v);
}

void	small_parse_table_2958(t_small_parse_table_array *v)
{
	v->a[59160] = 1;
	v->a[59161] = sym_variable_name;
	v->a[59162] = actions(1837);
	v->a[59163] = 2;
	v->a[59164] = anon_sym_PLUS_PLUS;
	v->a[59165] = anon_sym_DASH_DASH;
	v->a[59166] = actions(1839);
	v->a[59167] = 2;
	v->a[59168] = anon_sym_DASH2;
	v->a[59169] = anon_sym_PLUS2;
	v->a[59170] = actions(1847);
	v->a[59171] = 2;
	v->a[59172] = sym_number;
	v->a[59173] = aux_sym__simple_variable_name_token1;
	v->a[59174] = state(370);
	v->a[59175] = 3;
	v->a[59176] = sym_string;
	v->a[59177] = sym_simple_expansion;
	v->a[59178] = sym_expansion;
	v->a[59179] = state(411);
	small_parse_table_2959(v);
}

void	small_parse_table_2959(t_small_parse_table_array *v)
{
	v->a[59180] = 8;
	v->a[59181] = sym__arithmetic_expression;
	v->a[59182] = sym_arithmetic_literal;
	v->a[59183] = sym_arithmetic_binary_expression;
	v->a[59184] = sym_arithmetic_ternary_expression;
	v->a[59185] = sym_arithmetic_unary_expression;
	v->a[59186] = sym_arithmetic_postfix_expression;
	v->a[59187] = sym_arithmetic_parenthesized_expression;
	v->a[59188] = sym_command_substitution;
	v->a[59189] = 3;
	v->a[59190] = actions(3);
	v->a[59191] = 1;
	v->a[59192] = sym_comment;
	v->a[59193] = actions(1088);
	v->a[59194] = 5;
	v->a[59195] = sym_file_descriptor;
	v->a[59196] = sym__concat;
	v->a[59197] = sym_variable_name;
	v->a[59198] = ts_builtin_sym_end;
	v->a[59199] = aux_sym_heredoc_redirect_token1;
	small_parse_table_2960(v);
}

/* EOF small_parse_table_591.c */
