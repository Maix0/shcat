/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_22.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_110(t_small_parse_table_array *v)
{
	v->a[2200] = anon_sym_AMP_GT_GT;
	v->a[2201] = anon_sym_LT_AMP;
	v->a[2202] = anon_sym_GT_AMP;
	v->a[2203] = anon_sym_GT_PIPE;
	v->a[2204] = state(1146);
	v->a[2205] = 12;
	v->a[2206] = sym_redirected_statement;
	v->a[2207] = sym_for_statement;
	v->a[2208] = sym_while_statement;
	v->a[2209] = sym_if_statement;
	v->a[2210] = sym_case_statement;
	v->a[2211] = sym_function_definition;
	v->a[2212] = sym_compound_statement;
	v->a[2213] = sym_subshell;
	v->a[2214] = sym_list;
	v->a[2215] = sym_negated_command;
	v->a[2216] = sym_command;
	v->a[2217] = sym__variable_assignments;
	v->a[2218] = 34;
	v->a[2219] = actions(3);
	small_parse_table_111(v);
}

void	small_parse_table_111(t_small_parse_table_array *v)
{
	v->a[2220] = 1;
	v->a[2221] = sym_comment;
	v->a[2222] = actions(87);
	v->a[2223] = 1;
	v->a[2224] = sym_word;
	v->a[2225] = actions(89);
	v->a[2226] = 1;
	v->a[2227] = anon_sym_for;
	v->a[2228] = actions(93);
	v->a[2229] = 1;
	v->a[2230] = anon_sym_if;
	v->a[2231] = actions(95);
	v->a[2232] = 1;
	v->a[2233] = anon_sym_case;
	v->a[2234] = actions(97);
	v->a[2235] = 1;
	v->a[2236] = anon_sym_LPAREN;
	v->a[2237] = actions(99);
	v->a[2238] = 1;
	v->a[2239] = anon_sym_LF;
	small_parse_table_112(v);
}

void	small_parse_table_112(t_small_parse_table_array *v)
{
	v->a[2240] = actions(101);
	v->a[2241] = 1;
	v->a[2242] = anon_sym_LBRACE;
	v->a[2243] = actions(103);
	v->a[2244] = 1;
	v->a[2245] = anon_sym_BANG;
	v->a[2246] = actions(109);
	v->a[2247] = 1;
	v->a[2248] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[2249] = actions(111);
	v->a[2250] = 1;
	v->a[2251] = anon_sym_DOLLAR;
	v->a[2252] = actions(113);
	v->a[2253] = 1;
	v->a[2254] = anon_sym_DQUOTE;
	v->a[2255] = actions(117);
	v->a[2256] = 1;
	v->a[2257] = anon_sym_DOLLAR_LBRACE;
	v->a[2258] = actions(119);
	v->a[2259] = 1;
	small_parse_table_113(v);
}

void	small_parse_table_113(t_small_parse_table_array *v)
{
	v->a[2260] = anon_sym_DOLLAR_LPAREN;
	v->a[2261] = actions(121);
	v->a[2262] = 1;
	v->a[2263] = anon_sym_BQUOTE;
	v->a[2264] = actions(123);
	v->a[2265] = 1;
	v->a[2266] = sym_file_descriptor;
	v->a[2267] = actions(125);
	v->a[2268] = 1;
	v->a[2269] = sym_variable_name;
	v->a[2270] = state(134);
	v->a[2271] = 1;
	v->a[2272] = aux_sym__statements_repeat1;
	v->a[2273] = state(184);
	v->a[2274] = 1;
	v->a[2275] = sym_command_name;
	v->a[2276] = state(229);
	v->a[2277] = 1;
	v->a[2278] = sym_variable_assignment;
	v->a[2279] = state(622);
	small_parse_table_114(v);
}

void	small_parse_table_114(t_small_parse_table_array *v)
{
	v->a[2280] = 1;
	v->a[2281] = sym_concatenation;
	v->a[2282] = state(709);
	v->a[2283] = 1;
	v->a[2284] = aux_sym__case_item_last_repeat2;
	v->a[2285] = state(727);
	v->a[2286] = 1;
	v->a[2287] = aux_sym_command_repeat1;
	v->a[2288] = state(744);
	v->a[2289] = 1;
	v->a[2290] = sym_file_redirect;
	v->a[2291] = state(1096);
	v->a[2292] = 1;
	v->a[2293] = sym_pipeline;
	v->a[2294] = state(1215);
	v->a[2295] = 1;
	v->a[2296] = aux_sym_redirected_statement_repeat2;
	v->a[2297] = state(2122);
	v->a[2298] = 1;
	v->a[2299] = sym__statement_not_pipeline;
	small_parse_table_115(v);
}

/* EOF small_parse_table_22.c */
