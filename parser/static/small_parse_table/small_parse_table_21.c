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
	v->a[2100] = 5;
	v->a[2101] = sym_arithmetic_expansion;
	v->a[2102] = sym_string;
	v->a[2103] = sym_simple_expansion;
	v->a[2104] = sym_expansion;
	v->a[2105] = sym_command_substitution;
	v->a[2106] = actions(157);
	v->a[2107] = 7;
	v->a[2108] = anon_sym_LT;
	v->a[2109] = anon_sym_GT;
	v->a[2110] = anon_sym_GT_GT;
	v->a[2111] = anon_sym_LT_AMP;
	v->a[2112] = anon_sym_GT_AMP;
	v->a[2113] = anon_sym_GT_PIPE;
	v->a[2114] = anon_sym_LT_GT;
	v->a[2115] = state(1075);
	v->a[2116] = 12;
	v->a[2117] = sym_redirected_statement;
	v->a[2118] = sym_for_statement;
	v->a[2119] = sym_while_statement;
	small_parse_table_106(v);
}

void	small_parse_table_106(t_small_parse_table_array *v)
{
	v->a[2120] = sym_if_statement;
	v->a[2121] = sym_case_statement;
	v->a[2122] = sym_function_definition;
	v->a[2123] = sym_compound_statement;
	v->a[2124] = sym_subshell;
	v->a[2125] = sym_list;
	v->a[2126] = sym_negated_command;
	v->a[2127] = sym_command;
	v->a[2128] = sym__variable_assignments;
	v->a[2129] = 33;
	v->a[2130] = actions(3);
	v->a[2131] = 1;
	v->a[2132] = sym_comment;
	v->a[2133] = actions(9);
	v->a[2134] = 1;
	v->a[2135] = anon_sym_for;
	v->a[2136] = actions(13);
	v->a[2137] = 1;
	v->a[2138] = anon_sym_if;
	v->a[2139] = actions(15);
	small_parse_table_107(v);
}

void	small_parse_table_107(t_small_parse_table_array *v)
{
	v->a[2140] = 1;
	v->a[2141] = anon_sym_case;
	v->a[2142] = actions(17);
	v->a[2143] = 1;
	v->a[2144] = anon_sym_LPAREN;
	v->a[2145] = actions(19);
	v->a[2146] = 1;
	v->a[2147] = anon_sym_LBRACE;
	v->a[2148] = actions(43);
	v->a[2149] = 1;
	v->a[2150] = sym_word;
	v->a[2151] = actions(51);
	v->a[2152] = 1;
	v->a[2153] = anon_sym_BANG;
	v->a[2154] = actions(55);
	v->a[2155] = 1;
	v->a[2156] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[2157] = actions(57);
	v->a[2158] = 1;
	v->a[2159] = anon_sym_DOLLAR;
	small_parse_table_108(v);
}

void	small_parse_table_108(t_small_parse_table_array *v)
{
	v->a[2160] = actions(59);
	v->a[2161] = 1;
	v->a[2162] = anon_sym_DQUOTE;
	v->a[2163] = actions(63);
	v->a[2164] = 1;
	v->a[2165] = anon_sym_DOLLAR_LBRACE;
	v->a[2166] = actions(65);
	v->a[2167] = 1;
	v->a[2168] = anon_sym_DOLLAR_LPAREN;
	v->a[2169] = actions(67);
	v->a[2170] = 1;
	v->a[2171] = anon_sym_BQUOTE;
	v->a[2172] = actions(69);
	v->a[2173] = 1;
	v->a[2174] = sym_file_descriptor;
	v->a[2175] = actions(71);
	v->a[2176] = 1;
	v->a[2177] = sym_variable_name;
	v->a[2178] = actions(125);
	v->a[2179] = 1;
	small_parse_table_109(v);
}

void	small_parse_table_109(t_small_parse_table_array *v)
{
	v->a[2180] = anon_sym_LF;
	v->a[2181] = state(119);
	v->a[2182] = 1;
	v->a[2183] = aux_sym__statements_repeat1;
	v->a[2184] = state(183);
	v->a[2185] = 1;
	v->a[2186] = sym_command_name;
	v->a[2187] = state(323);
	v->a[2188] = 1;
	v->a[2189] = sym_variable_assignment;
	v->a[2190] = state(584);
	v->a[2191] = 1;
	v->a[2192] = aux_sym__case_item_last_repeat2;
	v->a[2193] = state(655);
	v->a[2194] = 1;
	v->a[2195] = aux_sym_command_repeat1;
	v->a[2196] = state(661);
	v->a[2197] = 1;
	v->a[2198] = sym_concatenation;
	v->a[2199] = state(665);
	small_parse_table_110(v);
}

/* EOF small_parse_table_21.c */
