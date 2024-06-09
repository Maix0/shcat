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
	v->a[2300] = anon_sym_GT_AMP;
	v->a[2301] = anon_sym_GT_PIPE;
	v->a[2302] = state(1183);
	v->a[2303] = 12;
	v->a[2304] = sym_redirected_statement;
	v->a[2305] = sym_for_statement;
	v->a[2306] = sym_while_statement;
	v->a[2307] = sym_if_statement;
	v->a[2308] = sym_case_statement;
	v->a[2309] = sym_function_definition;
	v->a[2310] = sym_compound_statement;
	v->a[2311] = sym_subshell;
	v->a[2312] = sym_list;
	v->a[2313] = sym_negated_command;
	v->a[2314] = sym_command;
	v->a[2315] = sym_variable_assignments;
	v->a[2316] = 36;
	v->a[2317] = actions(3);
	v->a[2318] = 1;
	v->a[2319] = sym_comment;
	small_parse_table_116(v);
}

void	small_parse_table_116(t_small_parse_table_array *v)
{
	v->a[2320] = actions(95);
	v->a[2321] = 1;
	v->a[2322] = sym_word;
	v->a[2323] = actions(97);
	v->a[2324] = 1;
	v->a[2325] = anon_sym_for;
	v->a[2326] = actions(101);
	v->a[2327] = 1;
	v->a[2328] = anon_sym_if;
	v->a[2329] = actions(103);
	v->a[2330] = 1;
	v->a[2331] = anon_sym_case;
	v->a[2332] = actions(105);
	v->a[2333] = 1;
	v->a[2334] = anon_sym_LPAREN;
	v->a[2335] = actions(109);
	v->a[2336] = 1;
	v->a[2337] = anon_sym_LBRACE;
	v->a[2338] = actions(111);
	v->a[2339] = 1;
	small_parse_table_117(v);
}

void	small_parse_table_117(t_small_parse_table_array *v)
{
	v->a[2340] = anon_sym_BANG;
	v->a[2341] = actions(117);
	v->a[2342] = 1;
	v->a[2343] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[2344] = actions(119);
	v->a[2345] = 1;
	v->a[2346] = anon_sym_DOLLAR;
	v->a[2347] = actions(121);
	v->a[2348] = 1;
	v->a[2349] = anon_sym_DQUOTE;
	v->a[2350] = actions(123);
	v->a[2351] = 1;
	v->a[2352] = sym_raw_string;
	v->a[2353] = actions(125);
	v->a[2354] = 1;
	v->a[2355] = aux_sym_number_token1;
	v->a[2356] = actions(127);
	v->a[2357] = 1;
	v->a[2358] = aux_sym_number_token2;
	v->a[2359] = actions(129);
	small_parse_table_118(v);
}

void	small_parse_table_118(t_small_parse_table_array *v)
{
	v->a[2360] = 1;
	v->a[2361] = anon_sym_DOLLAR_LBRACE;
	v->a[2362] = actions(131);
	v->a[2363] = 1;
	v->a[2364] = anon_sym_DOLLAR_LPAREN;
	v->a[2365] = actions(133);
	v->a[2366] = 1;
	v->a[2367] = anon_sym_BQUOTE;
	v->a[2368] = actions(135);
	v->a[2369] = 1;
	v->a[2370] = sym_file_descriptor;
	v->a[2371] = actions(137);
	v->a[2372] = 1;
	v->a[2373] = sym_variable_name;
	v->a[2374] = actions(141);
	v->a[2375] = 1;
	v->a[2376] = anon_sym_LF;
	v->a[2377] = state(139);
	v->a[2378] = 1;
	v->a[2379] = aux_sym__statements_repeat1;
	small_parse_table_119(v);
}

void	small_parse_table_119(t_small_parse_table_array *v)
{
	v->a[2380] = state(173);
	v->a[2381] = 1;
	v->a[2382] = sym_command_name;
	v->a[2383] = state(269);
	v->a[2384] = 1;
	v->a[2385] = sym_variable_assignment;
	v->a[2386] = state(663);
	v->a[2387] = 1;
	v->a[2388] = aux_sym_command_repeat1;
	v->a[2389] = state(665);
	v->a[2390] = 1;
	v->a[2391] = sym_concatenation;
	v->a[2392] = state(689);
	v->a[2393] = 1;
	v->a[2394] = aux_sym__case_item_last_repeat2;
	v->a[2395] = state(749);
	v->a[2396] = 1;
	v->a[2397] = sym_file_redirect;
	v->a[2398] = state(1145);
	v->a[2399] = 1;
	small_parse_table_120(v);
}

/* EOF small_parse_table_23.c */
