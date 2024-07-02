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
	v->a[2100] = 2;
	v->a[2101] = sym_raw_string;
	v->a[2102] = sym_number;
	v->a[2103] = state(433);
	v->a[2104] = 5;
	v->a[2105] = sym_arithmetic_expansion;
	v->a[2106] = sym_string;
	v->a[2107] = sym_simple_expansion;
	v->a[2108] = sym_expansion;
	v->a[2109] = sym_command_substitution;
	v->a[2110] = actions(53);
	v->a[2111] = 7;
	v->a[2112] = anon_sym_LT;
	v->a[2113] = anon_sym_GT;
	v->a[2114] = anon_sym_GT_GT;
	v->a[2115] = anon_sym_LT_AMP;
	v->a[2116] = anon_sym_GT_AMP;
	v->a[2117] = anon_sym_GT_PIPE;
	v->a[2118] = anon_sym_LT_GT;
	v->a[2119] = state(1088);
	small_parse_table_106(v);
}

void	small_parse_table_106(t_small_parse_table_array *v)
{
	v->a[2120] = 12;
	v->a[2121] = sym_redirected_statement;
	v->a[2122] = sym_for_statement;
	v->a[2123] = sym_while_statement;
	v->a[2124] = sym_if_statement;
	v->a[2125] = sym_case_statement;
	v->a[2126] = sym_function_definition;
	v->a[2127] = sym_compound_statement;
	v->a[2128] = sym_subshell;
	v->a[2129] = sym_list;
	v->a[2130] = sym_negated_command;
	v->a[2131] = sym_command;
	v->a[2132] = sym__variable_assignments;
	v->a[2133] = 31;
	v->a[2134] = actions(3);
	v->a[2135] = 1;
	v->a[2136] = sym_comment;
	v->a[2137] = actions(9);
	v->a[2138] = 1;
	v->a[2139] = anon_sym_for;
	small_parse_table_107(v);
}

void	small_parse_table_107(t_small_parse_table_array *v)
{
	v->a[2140] = actions(13);
	v->a[2141] = 1;
	v->a[2142] = anon_sym_if;
	v->a[2143] = actions(15);
	v->a[2144] = 1;
	v->a[2145] = anon_sym_case;
	v->a[2146] = actions(17);
	v->a[2147] = 1;
	v->a[2148] = anon_sym_LPAREN;
	v->a[2149] = actions(19);
	v->a[2150] = 1;
	v->a[2151] = anon_sym_LBRACE;
	v->a[2152] = actions(43);
	v->a[2153] = 1;
	v->a[2154] = sym_word;
	v->a[2155] = actions(51);
	v->a[2156] = 1;
	v->a[2157] = anon_sym_BANG;
	v->a[2158] = actions(55);
	v->a[2159] = 1;
	small_parse_table_108(v);
}

void	small_parse_table_108(t_small_parse_table_array *v)
{
	v->a[2160] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[2161] = actions(57);
	v->a[2162] = 1;
	v->a[2163] = anon_sym_DOLLAR;
	v->a[2164] = actions(59);
	v->a[2165] = 1;
	v->a[2166] = anon_sym_DQUOTE;
	v->a[2167] = actions(63);
	v->a[2168] = 1;
	v->a[2169] = anon_sym_DOLLAR_LBRACE;
	v->a[2170] = actions(65);
	v->a[2171] = 1;
	v->a[2172] = anon_sym_DOLLAR_LPAREN;
	v->a[2173] = actions(67);
	v->a[2174] = 1;
	v->a[2175] = anon_sym_BQUOTE;
	v->a[2176] = actions(69);
	v->a[2177] = 1;
	v->a[2178] = sym_file_descriptor;
	v->a[2179] = actions(71);
	small_parse_table_109(v);
}

void	small_parse_table_109(t_small_parse_table_array *v)
{
	v->a[2180] = 1;
	v->a[2181] = sym_variable_name;
	v->a[2182] = state(28);
	v->a[2183] = 1;
	v->a[2184] = aux_sym__terminated_statement;
	v->a[2185] = state(182);
	v->a[2186] = 1;
	v->a[2187] = sym_command_name;
	v->a[2188] = state(342);
	v->a[2189] = 1;
	v->a[2190] = sym_variable_assignment;
	v->a[2191] = state(584);
	v->a[2192] = 1;
	v->a[2193] = sym_concatenation;
	v->a[2194] = state(620);
	v->a[2195] = 1;
	v->a[2196] = sym_file_redirect;
	v->a[2197] = state(623);
	v->a[2198] = 1;
	v->a[2199] = aux_sym_command_repeat1;
	small_parse_table_110(v);
}

/* EOF small_parse_table_21.c */
