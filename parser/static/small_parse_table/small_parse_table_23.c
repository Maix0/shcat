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
	v->a[2300] = sym_variable_name;
	v->a[2301] = actions(125);
	v->a[2302] = 1;
	v->a[2303] = anon_sym_LF;
	v->a[2304] = state(119);
	v->a[2305] = 1;
	v->a[2306] = aux_sym__statements_repeat1;
	v->a[2307] = state(183);
	v->a[2308] = 1;
	v->a[2309] = sym_command_name;
	v->a[2310] = state(323);
	v->a[2311] = 1;
	v->a[2312] = sym_variable_assignment;
	v->a[2313] = state(584);
	v->a[2314] = 1;
	v->a[2315] = aux_sym__case_item_last_repeat2;
	v->a[2316] = state(655);
	v->a[2317] = 1;
	v->a[2318] = aux_sym_command_repeat1;
	v->a[2319] = state(661);
	small_parse_table_116(v);
}

void	small_parse_table_116(t_small_parse_table_array *v)
{
	v->a[2320] = 1;
	v->a[2321] = sym_concatenation;
	v->a[2322] = state(665);
	v->a[2323] = 1;
	v->a[2324] = sym_file_redirect;
	v->a[2325] = state(1141);
	v->a[2326] = 1;
	v->a[2327] = sym_pipeline;
	v->a[2328] = state(1198);
	v->a[2329] = 1;
	v->a[2330] = aux_sym_redirected_statement_repeat2;
	v->a[2331] = state(1901);
	v->a[2332] = 1;
	v->a[2333] = sym__statement_not_pipeline;
	v->a[2334] = state(2082);
	v->a[2335] = 1;
	v->a[2336] = sym__statements;
	v->a[2337] = actions(11);
	v->a[2338] = 2;
	v->a[2339] = anon_sym_while;
	small_parse_table_117(v);
}

void	small_parse_table_117(t_small_parse_table_array *v)
{
	v->a[2340] = anon_sym_until;
	v->a[2341] = actions(61);
	v->a[2342] = 2;
	v->a[2343] = sym_raw_string;
	v->a[2344] = sym_number;
	v->a[2345] = state(455);
	v->a[2346] = 5;
	v->a[2347] = sym_arithmetic_expansion;
	v->a[2348] = sym_string;
	v->a[2349] = sym_simple_expansion;
	v->a[2350] = sym_expansion;
	v->a[2351] = sym_command_substitution;
	v->a[2352] = actions(53);
	v->a[2353] = 7;
	v->a[2354] = anon_sym_LT;
	v->a[2355] = anon_sym_GT;
	v->a[2356] = anon_sym_GT_GT;
	v->a[2357] = anon_sym_LT_AMP;
	v->a[2358] = anon_sym_GT_AMP;
	v->a[2359] = anon_sym_GT_PIPE;
	small_parse_table_118(v);
}

void	small_parse_table_118(t_small_parse_table_array *v)
{
	v->a[2360] = anon_sym_LT_GT;
	v->a[2361] = state(1091);
	v->a[2362] = 12;
	v->a[2363] = sym_redirected_statement;
	v->a[2364] = sym_for_statement;
	v->a[2365] = sym_while_statement;
	v->a[2366] = sym_if_statement;
	v->a[2367] = sym_case_statement;
	v->a[2368] = sym_function_definition;
	v->a[2369] = sym_compound_statement;
	v->a[2370] = sym_subshell;
	v->a[2371] = sym_list;
	v->a[2372] = sym_negated_command;
	v->a[2373] = sym_command;
	v->a[2374] = sym__variable_assignments;
	v->a[2375] = 33;
	v->a[2376] = actions(3);
	v->a[2377] = 1;
	v->a[2378] = sym_comment;
	v->a[2379] = actions(9);
	small_parse_table_119(v);
}

void	small_parse_table_119(t_small_parse_table_array *v)
{
	v->a[2380] = 1;
	v->a[2381] = anon_sym_for;
	v->a[2382] = actions(13);
	v->a[2383] = 1;
	v->a[2384] = anon_sym_if;
	v->a[2385] = actions(15);
	v->a[2386] = 1;
	v->a[2387] = anon_sym_case;
	v->a[2388] = actions(17);
	v->a[2389] = 1;
	v->a[2390] = anon_sym_LPAREN;
	v->a[2391] = actions(19);
	v->a[2392] = 1;
	v->a[2393] = anon_sym_LBRACE;
	v->a[2394] = actions(43);
	v->a[2395] = 1;
	v->a[2396] = sym_word;
	v->a[2397] = actions(51);
	v->a[2398] = 1;
	v->a[2399] = anon_sym_BANG;
	small_parse_table_120(v);
}

/* EOF small_parse_table_23.c */
