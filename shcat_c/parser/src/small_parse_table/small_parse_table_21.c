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
	v->a[2100] = aux_sym_declaration_command_repeat1;
	v->a[2101] = state(1067);
	v->a[2102] = 9;
	v->a[2103] = sym_arithmetic_expansion;
	v->a[2104] = sym_brace_expression;
	v->a[2105] = sym_string;
	v->a[2106] = sym_translated_string;
	v->a[2107] = sym_number;
	v->a[2108] = sym_simple_expansion;
	v->a[2109] = sym_expansion;
	v->a[2110] = sym_command_substitution;
	v->a[2111] = sym_process_substitution;
	v->a[2112] = actions(1702);
	v->a[2113] = 22;
	v->a[2114] = anon_sym_SEMI;
	v->a[2115] = anon_sym_PIPE_PIPE;
	v->a[2116] = anon_sym_AMP_AMP;
	v->a[2117] = anon_sym_PIPE;
	v->a[2118] = anon_sym_AMP;
	v->a[2119] = anon_sym_LT;
	small_parse_table_106(v);
}

void	small_parse_table_106(t_small_parse_table_array *v)
{
	v->a[2120] = anon_sym_GT;
	v->a[2121] = anon_sym_LT_LT;
	v->a[2122] = anon_sym_GT_GT;
	v->a[2123] = anon_sym_esac;
	v->a[2124] = anon_sym_SEMI_SEMI;
	v->a[2125] = anon_sym_SEMI_AMP;
	v->a[2126] = anon_sym_SEMI_SEMI_AMP;
	v->a[2127] = anon_sym_PIPE_AMP;
	v->a[2128] = anon_sym_AMP_GT;
	v->a[2129] = anon_sym_AMP_GT_GT;
	v->a[2130] = anon_sym_LT_AMP;
	v->a[2131] = anon_sym_GT_AMP;
	v->a[2132] = anon_sym_GT_PIPE;
	v->a[2133] = anon_sym_LT_AMP_DASH;
	v->a[2134] = anon_sym_GT_AMP_DASH;
	v->a[2135] = anon_sym_LT_LT_DASH;
	v->a[2136] = 26;
	v->a[2137] = actions(3);
	v->a[2138] = 1;
	v->a[2139] = sym_comment;
	small_parse_table_107(v);
}

void	small_parse_table_107(t_small_parse_table_array *v)
{
	v->a[2140] = actions(1450);
	v->a[2141] = 1;
	v->a[2142] = anon_sym_LT_LT_LT;
	v->a[2143] = actions(1452);
	v->a[2144] = 1;
	v->a[2145] = anon_sym_DOLLAR_LBRACK;
	v->a[2146] = actions(1454);
	v->a[2147] = 1;
	v->a[2148] = anon_sym_DOLLAR;
	v->a[2149] = actions(1456);
	v->a[2150] = 1;
	v->a[2151] = sym__special_character;
	v->a[2152] = actions(1458);
	v->a[2153] = 1;
	v->a[2154] = anon_sym_DQUOTE;
	v->a[2155] = actions(1460);
	v->a[2156] = 1;
	v->a[2157] = aux_sym_number_token1;
	v->a[2158] = actions(1462);
	v->a[2159] = 1;
	small_parse_table_108(v);
}

void	small_parse_table_108(t_small_parse_table_array *v)
{
	v->a[2160] = aux_sym_number_token2;
	v->a[2161] = actions(1464);
	v->a[2162] = 1;
	v->a[2163] = anon_sym_DOLLAR_LBRACE;
	v->a[2164] = actions(1466);
	v->a[2165] = 1;
	v->a[2166] = anon_sym_DOLLAR_LPAREN;
	v->a[2167] = actions(1468);
	v->a[2168] = 1;
	v->a[2169] = anon_sym_BQUOTE;
	v->a[2170] = actions(1470);
	v->a[2171] = 1;
	v->a[2172] = anon_sym_DOLLAR_BQUOTE;
	v->a[2173] = actions(1474);
	v->a[2174] = 1;
	v->a[2175] = sym_test_operator;
	v->a[2176] = actions(1476);
	v->a[2177] = 1;
	v->a[2178] = sym__bare_dollar;
	v->a[2179] = actions(1478);
	small_parse_table_109(v);
}

void	small_parse_table_109(t_small_parse_table_array *v)
{
	v->a[2180] = 1;
	v->a[2181] = sym__brace_start;
	v->a[2182] = state(541);
	v->a[2183] = 1;
	v->a[2184] = aux_sym_command_repeat2;
	v->a[2185] = state(1175);
	v->a[2186] = 1;
	v->a[2187] = aux_sym__literal_repeat1;
	v->a[2188] = state(1328);
	v->a[2189] = 1;
	v->a[2190] = sym_concatenation;
	v->a[2191] = state(1329);
	v->a[2192] = 1;
	v->a[2193] = sym_herestring_redirect;
	v->a[2194] = actions(1446);
	v->a[2195] = 2;
	v->a[2196] = anon_sym_LPAREN_LPAREN;
	v->a[2197] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[2198] = actions(1448);
	v->a[2199] = 2;
	small_parse_table_110(v);
}

/* EOF small_parse_table_21.c */
