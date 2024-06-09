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
	v->a[2100] = anon_sym_DOLLAR_LPAREN;
	v->a[2101] = actions(79);
	v->a[2102] = 1;
	v->a[2103] = anon_sym_BQUOTE;
	v->a[2104] = actions(81);
	v->a[2105] = 1;
	v->a[2106] = sym_file_descriptor;
	v->a[2107] = actions(83);
	v->a[2108] = 1;
	v->a[2109] = sym_variable_name;
	v->a[2110] = actions(147);
	v->a[2111] = 1;
	v->a[2112] = anon_sym_LF;
	v->a[2113] = state(26);
	v->a[2114] = 1;
	v->a[2115] = aux_sym__case_item_last_repeat2;
	v->a[2116] = state(131);
	v->a[2117] = 1;
	v->a[2118] = aux_sym__statements_repeat1;
	v->a[2119] = state(190);
	small_parse_table_106(v);
}

void	small_parse_table_106(t_small_parse_table_array *v)
{
	v->a[2120] = 1;
	v->a[2121] = sym_command_name;
	v->a[2122] = state(314);
	v->a[2123] = 1;
	v->a[2124] = sym_variable_assignment;
	v->a[2125] = state(582);
	v->a[2126] = 1;
	v->a[2127] = sym_concatenation;
	v->a[2128] = state(587);
	v->a[2129] = 1;
	v->a[2130] = aux_sym_command_repeat1;
	v->a[2131] = state(718);
	v->a[2132] = 1;
	v->a[2133] = sym_file_redirect;
	v->a[2134] = state(1211);
	v->a[2135] = 1;
	v->a[2136] = sym_pipeline;
	v->a[2137] = state(1213);
	v->a[2138] = 1;
	v->a[2139] = aux_sym_redirected_statement_repeat2;
	small_parse_table_107(v);
}

void	small_parse_table_107(t_small_parse_table_array *v)
{
	v->a[2140] = state(2035);
	v->a[2141] = 1;
	v->a[2142] = sym__statement_not_pipeline;
	v->a[2143] = state(2086);
	v->a[2144] = 1;
	v->a[2145] = sym__statements;
	v->a[2146] = actions(11);
	v->a[2147] = 2;
	v->a[2148] = anon_sym_while;
	v->a[2149] = anon_sym_until;
	v->a[2150] = actions(61);
	v->a[2151] = 2;
	v->a[2152] = anon_sym_LT_AMP_DASH;
	v->a[2153] = anon_sym_GT_AMP_DASH;
	v->a[2154] = state(397);
	v->a[2155] = 6;
	v->a[2156] = sym_arithmetic_expansion;
	v->a[2157] = sym_string;
	v->a[2158] = sym_number;
	v->a[2159] = sym_simple_expansion;
	small_parse_table_108(v);
}

void	small_parse_table_108(t_small_parse_table_array *v)
{
	v->a[2160] = sym_expansion;
	v->a[2161] = sym_command_substitution;
	v->a[2162] = actions(59);
	v->a[2163] = 8;
	v->a[2164] = anon_sym_LT;
	v->a[2165] = anon_sym_GT;
	v->a[2166] = anon_sym_GT_GT;
	v->a[2167] = anon_sym_AMP_GT;
	v->a[2168] = anon_sym_AMP_GT_GT;
	v->a[2169] = anon_sym_LT_AMP;
	v->a[2170] = anon_sym_GT_AMP;
	v->a[2171] = anon_sym_GT_PIPE;
	v->a[2172] = state(1140);
	v->a[2173] = 12;
	v->a[2174] = sym_redirected_statement;
	v->a[2175] = sym_for_statement;
	v->a[2176] = sym_while_statement;
	v->a[2177] = sym_if_statement;
	v->a[2178] = sym_case_statement;
	v->a[2179] = sym_function_definition;
	small_parse_table_109(v);
}

void	small_parse_table_109(t_small_parse_table_array *v)
{
	v->a[2180] = sym_compound_statement;
	v->a[2181] = sym_subshell;
	v->a[2182] = sym_list;
	v->a[2183] = sym_negated_command;
	v->a[2184] = sym_command;
	v->a[2185] = sym_variable_assignments;
	v->a[2186] = 34;
	v->a[2187] = actions(3);
	v->a[2188] = 1;
	v->a[2189] = sym_comment;
	v->a[2190] = actions(9);
	v->a[2191] = 1;
	v->a[2192] = anon_sym_for;
	v->a[2193] = actions(13);
	v->a[2194] = 1;
	v->a[2195] = anon_sym_if;
	v->a[2196] = actions(15);
	v->a[2197] = 1;
	v->a[2198] = anon_sym_case;
	v->a[2199] = actions(17);
	small_parse_table_110(v);
}

/* EOF small_parse_table_21.c */
