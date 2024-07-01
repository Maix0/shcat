/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_23.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_115(t_small_parse_table_array *v)
{
	v->a[2300] = 1;
	v->a[2301] = anon_sym_BQUOTE;
	v->a[2302] = actions(121);
	v->a[2303] = 1;
	v->a[2304] = sym_file_descriptor;
	v->a[2305] = actions(123);
	v->a[2306] = 1;
	v->a[2307] = sym_variable_name;
	v->a[2308] = state(127);
	v->a[2309] = 1;
	v->a[2310] = aux_sym__statements_repeat1;
	v->a[2311] = state(178);
	v->a[2312] = 1;
	v->a[2313] = sym_command_name;
	v->a[2314] = state(228);
	v->a[2315] = 1;
	v->a[2316] = sym_variable_assignment;
	v->a[2317] = state(592);
	v->a[2318] = 1;
	v->a[2319] = sym_concatenation;
	small_parse_table_116(v);
}

void	small_parse_table_116(t_small_parse_table_array *v)
{
	v->a[2320] = state(641);
	v->a[2321] = 1;
	v->a[2322] = sym_file_redirect;
	v->a[2323] = state(657);
	v->a[2324] = 1;
	v->a[2325] = aux_sym__case_item_last_repeat2;
	v->a[2326] = state(662);
	v->a[2327] = 1;
	v->a[2328] = aux_sym_command_repeat1;
	v->a[2329] = state(1017);
	v->a[2330] = 1;
	v->a[2331] = sym_pipeline;
	v->a[2332] = state(1168);
	v->a[2333] = 1;
	v->a[2334] = aux_sym_redirected_statement_repeat2;
	v->a[2335] = state(1901);
	v->a[2336] = 1;
	v->a[2337] = sym__statement_not_pipeline;
	v->a[2338] = state(1907);
	v->a[2339] = 1;
	small_parse_table_117(v);
}

void	small_parse_table_117(t_small_parse_table_array *v)
{
	v->a[2340] = sym__statements;
	v->a[2341] = actions(91);
	v->a[2342] = 2;
	v->a[2343] = anon_sym_while;
	v->a[2344] = anon_sym_until;
	v->a[2345] = actions(113);
	v->a[2346] = 2;
	v->a[2347] = sym_raw_string;
	v->a[2348] = sym_number;
	v->a[2349] = state(359);
	v->a[2350] = 5;
	v->a[2351] = sym_arithmetic_expansion;
	v->a[2352] = sym_string;
	v->a[2353] = sym_simple_expansion;
	v->a[2354] = sym_expansion;
	v->a[2355] = sym_command_substitution;
	v->a[2356] = actions(105);
	v->a[2357] = 7;
	v->a[2358] = anon_sym_LT;
	v->a[2359] = anon_sym_GT;
	small_parse_table_118(v);
}

void	small_parse_table_118(t_small_parse_table_array *v)
{
	v->a[2360] = anon_sym_GT_GT;
	v->a[2361] = anon_sym_LT_AMP;
	v->a[2362] = anon_sym_GT_AMP;
	v->a[2363] = anon_sym_GT_PIPE;
	v->a[2364] = anon_sym_LT_GT;
	v->a[2365] = state(1005);
	v->a[2366] = 12;
	v->a[2367] = sym_redirected_statement;
	v->a[2368] = sym_for_statement;
	v->a[2369] = sym_while_statement;
	v->a[2370] = sym_if_statement;
	v->a[2371] = sym_case_statement;
	v->a[2372] = sym_function_definition;
	v->a[2373] = sym_compound_statement;
	v->a[2374] = sym_subshell;
	v->a[2375] = sym_list;
	v->a[2376] = sym_negated_command;
	v->a[2377] = sym_command;
	v->a[2378] = sym__variable_assignments;
	v->a[2379] = 33;
	small_parse_table_119(v);
}

void	small_parse_table_119(t_small_parse_table_array *v)
{
	v->a[2380] = actions(3);
	v->a[2381] = 1;
	v->a[2382] = sym_comment;
	v->a[2383] = actions(85);
	v->a[2384] = 1;
	v->a[2385] = anon_sym_LF;
	v->a[2386] = actions(87);
	v->a[2387] = 1;
	v->a[2388] = sym_word;
	v->a[2389] = actions(89);
	v->a[2390] = 1;
	v->a[2391] = anon_sym_for;
	v->a[2392] = actions(93);
	v->a[2393] = 1;
	v->a[2394] = anon_sym_if;
	v->a[2395] = actions(95);
	v->a[2396] = 1;
	v->a[2397] = anon_sym_case;
	v->a[2398] = actions(97);
	v->a[2399] = 1;
	small_parse_table_120(v);
}

/* EOF small_parse_table_23.c */
