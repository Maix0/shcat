/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_21.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_105(t_small_parse_table_array *v)
{
	v->a[2100] = aux_sym__literal_repeat1;
	v->a[2101] = state(297);
	v->a[2102] = 2;
	v->a[2103] = sym_concatenation;
	v->a[2104] = aux_sym_for_statement_repeat1;
	v->a[2105] = actions(1182);
	v->a[2106] = 5;
	v->a[2107] = sym_file_descriptor;
	v->a[2108] = sym_variable_name;
	v->a[2109] = sym_test_operator;
	v->a[2110] = sym__brace_start;
	v->a[2111] = aux_sym_heredoc_redirect_token1;
	v->a[2112] = state(577);
	v->a[2113] = 7;
	v->a[2114] = sym_arithmetic_expansion;
	v->a[2115] = sym_brace_expression;
	v->a[2116] = sym_string;
	v->a[2117] = sym_number;
	v->a[2118] = sym_simple_expansion;
	v->a[2119] = sym_expansion;
	small_parse_table_106(v);
}

void	small_parse_table_106(t_small_parse_table_array *v)
{
	v->a[2120] = sym_command_substitution;
	v->a[2121] = actions(1180);
	v->a[2122] = 34;
	v->a[2123] = anon_sym_esac;
	v->a[2124] = anon_sym_PIPE;
	v->a[2125] = anon_sym_SEMI_SEMI;
	v->a[2126] = anon_sym_SEMI_AMP;
	v->a[2127] = anon_sym_SEMI_SEMI_AMP;
	v->a[2128] = anon_sym_PIPE_AMP;
	v->a[2129] = anon_sym_AMP_AMP;
	v->a[2130] = anon_sym_PIPE_PIPE;
	v->a[2131] = anon_sym_LT;
	v->a[2132] = anon_sym_GT;
	v->a[2133] = anon_sym_GT_GT;
	v->a[2134] = anon_sym_AMP_GT;
	v->a[2135] = anon_sym_AMP_GT_GT;
	v->a[2136] = anon_sym_LT_AMP;
	v->a[2137] = anon_sym_GT_AMP;
	v->a[2138] = anon_sym_GT_PIPE;
	v->a[2139] = anon_sym_LT_AMP_DASH;
	small_parse_table_107(v);
}

void	small_parse_table_107(t_small_parse_table_array *v)
{
	v->a[2140] = anon_sym_GT_AMP_DASH;
	v->a[2141] = anon_sym_LT_LT;
	v->a[2142] = anon_sym_LT_LT_DASH;
	v->a[2143] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[2144] = anon_sym_AMP;
	v->a[2145] = anon_sym_DOLLAR;
	v->a[2146] = sym__special_character;
	v->a[2147] = anon_sym_DQUOTE;
	v->a[2148] = sym_raw_string;
	v->a[2149] = aux_sym_number_token1;
	v->a[2150] = aux_sym_number_token2;
	v->a[2151] = anon_sym_DOLLAR_LBRACE;
	v->a[2152] = anon_sym_DOLLAR_LPAREN;
	v->a[2153] = anon_sym_BQUOTE;
	v->a[2154] = anon_sym_DOLLAR_BQUOTE;
	v->a[2155] = sym_word;
	v->a[2156] = anon_sym_SEMI;
	v->a[2157] = 6;
	v->a[2158] = actions(3);
	v->a[2159] = 1;
	small_parse_table_108(v);
}

void	small_parse_table_108(t_small_parse_table_array *v)
{
	v->a[2160] = sym_comment;
	v->a[2161] = actions(1188);
	v->a[2162] = 1;
	v->a[2163] = sym_variable_name;
	v->a[2164] = actions(1186);
	v->a[2165] = 2;
	v->a[2166] = aux_sym__simple_variable_name_token1;
	v->a[2167] = aux_sym__multiline_variable_name_token1;
	v->a[2168] = actions(828);
	v->a[2169] = 5;
	v->a[2170] = sym_file_descriptor;
	v->a[2171] = sym_test_operator;
	v->a[2172] = sym__bare_dollar;
	v->a[2173] = sym__brace_start;
	v->a[2174] = ts_builtin_sym_end;
	v->a[2175] = actions(1184);
	v->a[2176] = 9;
	v->a[2177] = anon_sym_BANG;
	v->a[2178] = anon_sym_DASH;
	v->a[2179] = anon_sym_STAR;
	small_parse_table_109(v);
}

void	small_parse_table_109(t_small_parse_table_array *v)
{
	v->a[2180] = anon_sym_QMARK;
	v->a[2181] = anon_sym_DOLLAR;
	v->a[2182] = anon_sym_POUND;
	v->a[2183] = anon_sym_AT;
	v->a[2184] = anon_sym_0;
	v->a[2185] = anon_sym__;
	v->a[2186] = actions(826);
	v->a[2187] = 32;
	v->a[2188] = anon_sym_LPAREN;
	v->a[2189] = anon_sym_PIPE;
	v->a[2190] = anon_sym_SEMI_SEMI;
	v->a[2191] = anon_sym_PIPE_AMP;
	v->a[2192] = anon_sym_AMP_AMP;
	v->a[2193] = anon_sym_PIPE_PIPE;
	v->a[2194] = anon_sym_LT;
	v->a[2195] = anon_sym_GT;
	v->a[2196] = anon_sym_GT_GT;
	v->a[2197] = anon_sym_AMP_GT;
	v->a[2198] = anon_sym_AMP_GT_GT;
	v->a[2199] = anon_sym_LT_AMP;
	small_parse_table_110(v);
}

/* EOF small_parse_table_21.c */
