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
	v->a[2100] = actions(190);
	v->a[2101] = 1;
	v->a[2102] = sym_file_descriptor;
	v->a[2103] = actions(192);
	v->a[2104] = 1;
	v->a[2105] = sym_variable_name;
	v->a[2106] = state(140);
	v->a[2107] = 1;
	v->a[2108] = aux_sym__statements_repeat1;
	v->a[2109] = state(186);
	v->a[2110] = 1;
	v->a[2111] = sym_command_name;
	v->a[2112] = state(213);
	v->a[2113] = 1;
	v->a[2114] = sym_variable_assignment;
	v->a[2115] = state(636);
	v->a[2116] = 1;
	v->a[2117] = sym_concatenation;
	v->a[2118] = state(677);
	v->a[2119] = 1;
	small_parse_table_106(v);
}

void	small_parse_table_106(t_small_parse_table_array *v)
{
	v->a[2120] = sym_file_redirect;
	v->a[2121] = state(678);
	v->a[2122] = 1;
	v->a[2123] = aux_sym__case_item_last_repeat2;
	v->a[2124] = state(752);
	v->a[2125] = 1;
	v->a[2126] = aux_sym_command_repeat1;
	v->a[2127] = state(1133);
	v->a[2128] = 1;
	v->a[2129] = sym_pipeline;
	v->a[2130] = state(1226);
	v->a[2131] = 1;
	v->a[2132] = aux_sym_redirected_statement_repeat2;
	v->a[2133] = state(2111);
	v->a[2134] = 1;
	v->a[2135] = sym__statement_not_pipeline;
	v->a[2136] = state(2124);
	v->a[2137] = 1;
	v->a[2138] = sym__statements;
	v->a[2139] = actions(160);
	small_parse_table_107(v);
}

void	small_parse_table_107(t_small_parse_table_array *v)
{
	v->a[2140] = 2;
	v->a[2141] = anon_sym_while;
	v->a[2142] = anon_sym_until;
	v->a[2143] = actions(174);
	v->a[2144] = 2;
	v->a[2145] = anon_sym_LT_AMP_DASH;
	v->a[2146] = anon_sym_GT_AMP_DASH;
	v->a[2147] = actions(182);
	v->a[2148] = 2;
	v->a[2149] = sym_raw_string;
	v->a[2150] = sym_number;
	v->a[2151] = state(385);
	v->a[2152] = 5;
	v->a[2153] = sym_arithmetic_expansion;
	v->a[2154] = sym_string;
	v->a[2155] = sym_simple_expansion;
	v->a[2156] = sym_expansion;
	v->a[2157] = sym_command_substitution;
	v->a[2158] = actions(172);
	v->a[2159] = 6;
	small_parse_table_108(v);
}

void	small_parse_table_108(t_small_parse_table_array *v)
{
	v->a[2160] = anon_sym_LT;
	v->a[2161] = anon_sym_GT;
	v->a[2162] = anon_sym_GT_GT;
	v->a[2163] = anon_sym_LT_AMP;
	v->a[2164] = anon_sym_GT_AMP;
	v->a[2165] = anon_sym_GT_PIPE;
	v->a[2166] = state(1075);
	v->a[2167] = 12;
	v->a[2168] = sym_redirected_statement;
	v->a[2169] = sym_for_statement;
	v->a[2170] = sym_while_statement;
	v->a[2171] = sym_if_statement;
	v->a[2172] = sym_case_statement;
	v->a[2173] = sym_function_definition;
	v->a[2174] = sym_compound_statement;
	v->a[2175] = sym_subshell;
	v->a[2176] = sym_list;
	v->a[2177] = sym_negated_command;
	v->a[2178] = sym_command;
	v->a[2179] = sym__variable_assignments;
	small_parse_table_109(v);
}

void	small_parse_table_109(t_small_parse_table_array *v)
{
	v->a[2180] = 34;
	v->a[2181] = actions(3);
	v->a[2182] = 1;
	v->a[2183] = sym_comment;
	v->a[2184] = actions(9);
	v->a[2185] = 1;
	v->a[2186] = anon_sym_for;
	v->a[2187] = actions(13);
	v->a[2188] = 1;
	v->a[2189] = anon_sym_if;
	v->a[2190] = actions(15);
	v->a[2191] = 1;
	v->a[2192] = anon_sym_case;
	v->a[2193] = actions(17);
	v->a[2194] = 1;
	v->a[2195] = anon_sym_LPAREN;
	v->a[2196] = actions(19);
	v->a[2197] = 1;
	v->a[2198] = anon_sym_LBRACE;
	v->a[2199] = actions(45);
	small_parse_table_110(v);
}

/* EOF small_parse_table_21.c */
