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
	v->a[2100] = anon_sym_LBRACE;
	v->a[2101] = actions(41);
	v->a[2102] = 1;
	v->a[2103] = sym_word;
	v->a[2104] = actions(49);
	v->a[2105] = 1;
	v->a[2106] = anon_sym_BANG;
	v->a[2107] = actions(53);
	v->a[2108] = 1;
	v->a[2109] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[2110] = actions(55);
	v->a[2111] = 1;
	v->a[2112] = anon_sym_DOLLAR;
	v->a[2113] = actions(57);
	v->a[2114] = 1;
	v->a[2115] = anon_sym_DQUOTE;
	v->a[2116] = actions(61);
	v->a[2117] = 1;
	v->a[2118] = anon_sym_DOLLAR_LBRACE;
	v->a[2119] = actions(63);
	small_parse_table_106(v);
}

void	small_parse_table_106(t_small_parse_table_array *v)
{
	v->a[2120] = 1;
	v->a[2121] = anon_sym_DOLLAR_LPAREN;
	v->a[2122] = actions(65);
	v->a[2123] = 1;
	v->a[2124] = anon_sym_BQUOTE;
	v->a[2125] = actions(67);
	v->a[2126] = 1;
	v->a[2127] = sym_variable_name;
	v->a[2128] = actions(123);
	v->a[2129] = 1;
	v->a[2130] = anon_sym_LF;
	v->a[2131] = state(13);
	v->a[2132] = 1;
	v->a[2133] = aux_sym__case_item_last_repeat2;
	v->a[2134] = state(117);
	v->a[2135] = 1;
	v->a[2136] = aux_sym__statements_repeat1;
	v->a[2137] = state(271);
	v->a[2138] = 1;
	v->a[2139] = sym_command_name;
	small_parse_table_107(v);
}

void	small_parse_table_107(t_small_parse_table_array *v)
{
	v->a[2140] = state(288);
	v->a[2141] = 1;
	v->a[2142] = sym_variable_assignment;
	v->a[2143] = state(482);
	v->a[2144] = 1;
	v->a[2145] = aux_sym_command_repeat1;
	v->a[2146] = state(600);
	v->a[2147] = 1;
	v->a[2148] = sym_file_redirect;
	v->a[2149] = state(602);
	v->a[2150] = 1;
	v->a[2151] = sym_concatenation;
	v->a[2152] = state(1014);
	v->a[2153] = 1;
	v->a[2154] = sym_pipeline;
	v->a[2155] = state(1068);
	v->a[2156] = 1;
	v->a[2157] = aux_sym_redirected_statement_repeat2;
	v->a[2158] = state(1609);
	v->a[2159] = 1;
	small_parse_table_108(v);
}

void	small_parse_table_108(t_small_parse_table_array *v)
{
	v->a[2160] = sym__statement_not_pipeline;
	v->a[2161] = state(1633);
	v->a[2162] = 1;
	v->a[2163] = sym__statements;
	v->a[2164] = actions(11);
	v->a[2165] = 2;
	v->a[2166] = anon_sym_while;
	v->a[2167] = anon_sym_until;
	v->a[2168] = actions(59);
	v->a[2169] = 2;
	v->a[2170] = sym_raw_string;
	v->a[2171] = sym_number;
	v->a[2172] = state(425);
	v->a[2173] = 5;
	v->a[2174] = sym_arithmetic_expansion;
	v->a[2175] = sym_string;
	v->a[2176] = sym_simple_expansion;
	v->a[2177] = sym_expansion;
	v->a[2178] = sym_command_substitution;
	v->a[2179] = actions(51);
	small_parse_table_109(v);
}

void	small_parse_table_109(t_small_parse_table_array *v)
{
	v->a[2180] = 7;
	v->a[2181] = anon_sym_LT;
	v->a[2182] = anon_sym_GT;
	v->a[2183] = anon_sym_GT_GT;
	v->a[2184] = anon_sym_LT_AMP;
	v->a[2185] = anon_sym_GT_AMP;
	v->a[2186] = anon_sym_GT_PIPE;
	v->a[2187] = anon_sym_LT_GT;
	v->a[2188] = state(936);
	v->a[2189] = 12;
	v->a[2190] = sym_redirected_statement;
	v->a[2191] = sym_for_statement;
	v->a[2192] = sym_while_statement;
	v->a[2193] = sym_if_statement;
	v->a[2194] = sym_case_statement;
	v->a[2195] = sym_function_definition;
	v->a[2196] = sym_compound_statement;
	v->a[2197] = sym_subshell;
	v->a[2198] = sym_list;
	v->a[2199] = sym_negated_command;
	small_parse_table_110(v);
}

/* EOF small_parse_table_21.c */
