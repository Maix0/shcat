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
	v->a[2100] = anon_sym_GT_GT;
	v->a[2101] = state(401);
	v->a[2102] = 5;
	v->a[2103] = sym_arithmetic_expansion;
	v->a[2104] = sym_string;
	v->a[2105] = sym_simple_expansion;
	v->a[2106] = sym_expansion;
	v->a[2107] = sym_command_substitution;
	v->a[2108] = state(905);
	v->a[2109] = 12;
	v->a[2110] = sym_redirected_statement;
	v->a[2111] = sym_for_statement;
	v->a[2112] = sym_while_statement;
	v->a[2113] = sym_if_statement;
	v->a[2114] = sym_case_statement;
	v->a[2115] = sym_function_definition;
	v->a[2116] = sym_compound_statement;
	v->a[2117] = sym_subshell;
	v->a[2118] = sym_list;
	v->a[2119] = sym_negated_command;
	small_parse_table_106(v);
}

void	small_parse_table_106(t_small_parse_table_array *v)
{
	v->a[2120] = sym_command;
	v->a[2121] = sym__variable_assignments;
	v->a[2122] = 32;
	v->a[2123] = actions(3);
	v->a[2124] = 1;
	v->a[2125] = sym_comment;
	v->a[2126] = actions(9);
	v->a[2127] = 1;
	v->a[2128] = anon_sym_for;
	v->a[2129] = actions(13);
	v->a[2130] = 1;
	v->a[2131] = anon_sym_if;
	v->a[2132] = actions(15);
	v->a[2133] = 1;
	v->a[2134] = anon_sym_case;
	v->a[2135] = actions(17);
	v->a[2136] = 1;
	v->a[2137] = anon_sym_LPAREN;
	v->a[2138] = actions(19);
	v->a[2139] = 1;
	small_parse_table_107(v);
}

void	small_parse_table_107(t_small_parse_table_array *v)
{
	v->a[2140] = anon_sym_LBRACE;
	v->a[2141] = actions(41);
	v->a[2142] = 1;
	v->a[2143] = sym_word;
	v->a[2144] = actions(49);
	v->a[2145] = 1;
	v->a[2146] = anon_sym_BANG;
	v->a[2147] = actions(53);
	v->a[2148] = 1;
	v->a[2149] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[2150] = actions(55);
	v->a[2151] = 1;
	v->a[2152] = anon_sym_DOLLAR;
	v->a[2153] = actions(57);
	v->a[2154] = 1;
	v->a[2155] = anon_sym_DQUOTE;
	v->a[2156] = actions(61);
	v->a[2157] = 1;
	v->a[2158] = anon_sym_DOLLAR_LBRACE;
	v->a[2159] = actions(63);
	small_parse_table_108(v);
}

void	small_parse_table_108(t_small_parse_table_array *v)
{
	v->a[2160] = 1;
	v->a[2161] = anon_sym_DOLLAR_LPAREN;
	v->a[2162] = actions(65);
	v->a[2163] = 1;
	v->a[2164] = anon_sym_BQUOTE;
	v->a[2165] = actions(67);
	v->a[2166] = 1;
	v->a[2167] = sym_variable_name;
	v->a[2168] = actions(115);
	v->a[2169] = 1;
	v->a[2170] = anon_sym_LF;
	v->a[2171] = state(118);
	v->a[2172] = 1;
	v->a[2173] = aux_sym__statements_repeat1;
	v->a[2174] = state(185);
	v->a[2175] = 1;
	v->a[2176] = sym_command_name;
	v->a[2177] = state(216);
	v->a[2178] = 1;
	v->a[2179] = sym_variable_assignment;
	small_parse_table_109(v);
}

void	small_parse_table_109(t_small_parse_table_array *v)
{
	v->a[2180] = state(326);
	v->a[2181] = 1;
	v->a[2182] = aux_sym__case_item_last_repeat2;
	v->a[2183] = state(411);
	v->a[2184] = 1;
	v->a[2185] = aux_sym_command_repeat1;
	v->a[2186] = state(551);
	v->a[2187] = 1;
	v->a[2188] = sym_file_redirect;
	v->a[2189] = state(555);
	v->a[2190] = 1;
	v->a[2191] = sym_concatenation;
	v->a[2192] = state(991);
	v->a[2193] = 1;
	v->a[2194] = sym_pipeline;
	v->a[2195] = state(1126);
	v->a[2196] = 1;
	v->a[2197] = aux_sym_redirected_statement_repeat2;
	v->a[2198] = state(1561);
	v->a[2199] = 1;
	small_parse_table_110(v);
}

/* EOF small_parse_table_21.c */
