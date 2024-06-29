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
	v->a[2100] = actions(15);
	v->a[2101] = 1;
	v->a[2102] = anon_sym_case;
	v->a[2103] = actions(17);
	v->a[2104] = 1;
	v->a[2105] = anon_sym_LPAREN;
	v->a[2106] = actions(19);
	v->a[2107] = 1;
	v->a[2108] = anon_sym_LBRACE;
	v->a[2109] = actions(45);
	v->a[2110] = 1;
	v->a[2111] = sym_word;
	v->a[2112] = actions(53);
	v->a[2113] = 1;
	v->a[2114] = anon_sym_BANG;
	v->a[2115] = actions(59);
	v->a[2116] = 1;
	v->a[2117] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[2118] = actions(61);
	v->a[2119] = 1;
	small_parse_table_106(v);
}

void	small_parse_table_106(t_small_parse_table_array *v)
{
	v->a[2120] = anon_sym_DOLLAR;
	v->a[2121] = actions(63);
	v->a[2122] = 1;
	v->a[2123] = anon_sym_DQUOTE;
	v->a[2124] = actions(67);
	v->a[2125] = 1;
	v->a[2126] = anon_sym_DOLLAR_LBRACE;
	v->a[2127] = actions(69);
	v->a[2128] = 1;
	v->a[2129] = anon_sym_DOLLAR_LPAREN;
	v->a[2130] = actions(71);
	v->a[2131] = 1;
	v->a[2132] = anon_sym_BQUOTE;
	v->a[2133] = actions(73);
	v->a[2134] = 1;
	v->a[2135] = sym_file_descriptor;
	v->a[2136] = actions(75);
	v->a[2137] = 1;
	v->a[2138] = sym_variable_name;
	v->a[2139] = actions(137);
	small_parse_table_107(v);
}

void	small_parse_table_107(t_small_parse_table_array *v)
{
	v->a[2140] = 1;
	v->a[2141] = anon_sym_LF;
	v->a[2142] = state(13);
	v->a[2143] = 1;
	v->a[2144] = aux_sym__case_item_last_repeat2;
	v->a[2145] = state(130);
	v->a[2146] = 1;
	v->a[2147] = aux_sym__statements_repeat1;
	v->a[2148] = state(191);
	v->a[2149] = 1;
	v->a[2150] = sym_command_name;
	v->a[2151] = state(262);
	v->a[2152] = 1;
	v->a[2153] = sym_variable_assignment;
	v->a[2154] = state(624);
	v->a[2155] = 1;
	v->a[2156] = sym_concatenation;
	v->a[2157] = state(726);
	v->a[2158] = 1;
	v->a[2159] = sym_file_redirect;
	small_parse_table_108(v);
}

void	small_parse_table_108(t_small_parse_table_array *v)
{
	v->a[2160] = state(733);
	v->a[2161] = 1;
	v->a[2162] = aux_sym_command_repeat1;
	v->a[2163] = state(1216);
	v->a[2164] = 1;
	v->a[2165] = sym_pipeline;
	v->a[2166] = state(1307);
	v->a[2167] = 1;
	v->a[2168] = aux_sym_redirected_statement_repeat2;
	v->a[2169] = state(2117);
	v->a[2170] = 1;
	v->a[2171] = sym__statement_not_pipeline;
	v->a[2172] = state(2172);
	v->a[2173] = 1;
	v->a[2174] = sym__statements;
	v->a[2175] = actions(11);
	v->a[2176] = 2;
	v->a[2177] = anon_sym_while;
	v->a[2178] = anon_sym_until;
	v->a[2179] = actions(57);
	small_parse_table_109(v);
}

void	small_parse_table_109(t_small_parse_table_array *v)
{
	v->a[2180] = 2;
	v->a[2181] = anon_sym_LT_AMP_DASH;
	v->a[2182] = anon_sym_GT_AMP_DASH;
	v->a[2183] = actions(65);
	v->a[2184] = 2;
	v->a[2185] = sym_raw_string;
	v->a[2186] = sym_number;
	v->a[2187] = state(420);
	v->a[2188] = 5;
	v->a[2189] = sym_arithmetic_expansion;
	v->a[2190] = sym_string;
	v->a[2191] = sym_simple_expansion;
	v->a[2192] = sym_expansion;
	v->a[2193] = sym_command_substitution;
	v->a[2194] = actions(55);
	v->a[2195] = 8;
	v->a[2196] = anon_sym_LT;
	v->a[2197] = anon_sym_GT;
	v->a[2198] = anon_sym_GT_GT;
	v->a[2199] = anon_sym_AMP_GT;
	small_parse_table_110(v);
}

/* EOF small_parse_table_21.c */
