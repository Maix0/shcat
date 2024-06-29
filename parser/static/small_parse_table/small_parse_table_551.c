/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_551.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2755(t_small_parse_table_array *v)
{
	v->a[55100] = anon_sym_DOLLAR_LBRACE;
	v->a[55101] = actions(1851);
	v->a[55102] = 1;
	v->a[55103] = anon_sym_DOLLAR_LPAREN;
	v->a[55104] = actions(1853);
	v->a[55105] = 1;
	v->a[55106] = anon_sym_BQUOTE;
	v->a[55107] = actions(1855);
	v->a[55108] = 1;
	v->a[55109] = sym_variable_name;
	v->a[55110] = actions(1861);
	v->a[55111] = 1;
	v->a[55112] = anon_sym_RPAREN_RPAREN;
	v->a[55113] = actions(1837);
	v->a[55114] = 2;
	v->a[55115] = anon_sym_PLUS_PLUS;
	v->a[55116] = anon_sym_DASH_DASH;
	v->a[55117] = actions(1839);
	v->a[55118] = 2;
	v->a[55119] = anon_sym_DASH2;
	small_parse_table_2756(v);
}

void	small_parse_table_2756(t_small_parse_table_array *v)
{
	v->a[55120] = anon_sym_PLUS2;
	v->a[55121] = actions(1847);
	v->a[55122] = 2;
	v->a[55123] = sym_number;
	v->a[55124] = aux_sym__simple_variable_name_token1;
	v->a[55125] = state(370);
	v->a[55126] = 3;
	v->a[55127] = sym_string;
	v->a[55128] = sym_simple_expansion;
	v->a[55129] = sym_expansion;
	v->a[55130] = state(433);
	v->a[55131] = 8;
	v->a[55132] = sym__arithmetic_expression;
	v->a[55133] = sym_arithmetic_literal;
	v->a[55134] = sym_arithmetic_binary_expression;
	v->a[55135] = sym_arithmetic_ternary_expression;
	v->a[55136] = sym_arithmetic_unary_expression;
	v->a[55137] = sym_arithmetic_postfix_expression;
	v->a[55138] = sym_arithmetic_parenthesized_expression;
	v->a[55139] = sym_command_substitution;
	small_parse_table_2757(v);
}

void	small_parse_table_2757(t_small_parse_table_array *v)
{
	v->a[55140] = 16;
	v->a[55141] = actions(1074);
	v->a[55142] = 1;
	v->a[55143] = sym_comment;
	v->a[55144] = actions(1831);
	v->a[55145] = 1;
	v->a[55146] = anon_sym_LPAREN;
	v->a[55147] = actions(1833);
	v->a[55148] = 1;
	v->a[55149] = anon_sym_BANG;
	v->a[55150] = actions(1841);
	v->a[55151] = 1;
	v->a[55152] = anon_sym_TILDE;
	v->a[55153] = actions(1843);
	v->a[55154] = 1;
	v->a[55155] = anon_sym_DOLLAR;
	v->a[55156] = actions(1845);
	v->a[55157] = 1;
	v->a[55158] = anon_sym_DQUOTE;
	v->a[55159] = actions(1849);
	small_parse_table_2758(v);
}

void	small_parse_table_2758(t_small_parse_table_array *v)
{
	v->a[55160] = 1;
	v->a[55161] = anon_sym_DOLLAR_LBRACE;
	v->a[55162] = actions(1851);
	v->a[55163] = 1;
	v->a[55164] = anon_sym_DOLLAR_LPAREN;
	v->a[55165] = actions(1853);
	v->a[55166] = 1;
	v->a[55167] = anon_sym_BQUOTE;
	v->a[55168] = actions(1855);
	v->a[55169] = 1;
	v->a[55170] = sym_variable_name;
	v->a[55171] = actions(1863);
	v->a[55172] = 1;
	v->a[55173] = anon_sym_RPAREN_RPAREN;
	v->a[55174] = actions(1837);
	v->a[55175] = 2;
	v->a[55176] = anon_sym_PLUS_PLUS;
	v->a[55177] = anon_sym_DASH_DASH;
	v->a[55178] = actions(1839);
	v->a[55179] = 2;
	small_parse_table_2759(v);
}

void	small_parse_table_2759(t_small_parse_table_array *v)
{
	v->a[55180] = anon_sym_DASH2;
	v->a[55181] = anon_sym_PLUS2;
	v->a[55182] = actions(1847);
	v->a[55183] = 2;
	v->a[55184] = sym_number;
	v->a[55185] = aux_sym__simple_variable_name_token1;
	v->a[55186] = state(370);
	v->a[55187] = 3;
	v->a[55188] = sym_string;
	v->a[55189] = sym_simple_expansion;
	v->a[55190] = sym_expansion;
	v->a[55191] = state(471);
	v->a[55192] = 8;
	v->a[55193] = sym__arithmetic_expression;
	v->a[55194] = sym_arithmetic_literal;
	v->a[55195] = sym_arithmetic_binary_expression;
	v->a[55196] = sym_arithmetic_ternary_expression;
	v->a[55197] = sym_arithmetic_unary_expression;
	v->a[55198] = sym_arithmetic_postfix_expression;
	v->a[55199] = sym_arithmetic_parenthesized_expression;
	small_parse_table_2760(v);
}

/* EOF small_parse_table_551.c */
