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
	v->a[2300] = anon_sym_LT_AMP;
	v->a[2301] = anon_sym_GT_AMP;
	v->a[2302] = anon_sym_GT_PIPE;
	v->a[2303] = anon_sym_LT_GT;
	v->a[2304] = state(949);
	v->a[2305] = 12;
	v->a[2306] = sym_redirected_statement;
	v->a[2307] = sym_for_statement;
	v->a[2308] = sym_while_statement;
	v->a[2309] = sym_if_statement;
	v->a[2310] = sym_case_statement;
	v->a[2311] = sym_function_definition;
	v->a[2312] = sym_compound_statement;
	v->a[2313] = sym_subshell;
	v->a[2314] = sym_list;
	v->a[2315] = sym_negated_command;
	v->a[2316] = sym_command;
	v->a[2317] = sym__variable_assignments;
	v->a[2318] = 30;
	v->a[2319] = actions(3);
	small_parse_table_116(v);
}

void	small_parse_table_116(t_small_parse_table_array *v)
{
	v->a[2320] = 1;
	v->a[2321] = sym_comment;
	v->a[2322] = actions(9);
	v->a[2323] = 1;
	v->a[2324] = anon_sym_for;
	v->a[2325] = actions(13);
	v->a[2326] = 1;
	v->a[2327] = anon_sym_if;
	v->a[2328] = actions(15);
	v->a[2329] = 1;
	v->a[2330] = anon_sym_case;
	v->a[2331] = actions(17);
	v->a[2332] = 1;
	v->a[2333] = anon_sym_LPAREN;
	v->a[2334] = actions(19);
	v->a[2335] = 1;
	v->a[2336] = anon_sym_LBRACE;
	v->a[2337] = actions(41);
	v->a[2338] = 1;
	v->a[2339] = sym_word;
	small_parse_table_117(v);
}

void	small_parse_table_117(t_small_parse_table_array *v)
{
	v->a[2340] = actions(49);
	v->a[2341] = 1;
	v->a[2342] = anon_sym_BANG;
	v->a[2343] = actions(53);
	v->a[2344] = 1;
	v->a[2345] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[2346] = actions(55);
	v->a[2347] = 1;
	v->a[2348] = anon_sym_DOLLAR;
	v->a[2349] = actions(57);
	v->a[2350] = 1;
	v->a[2351] = anon_sym_DQUOTE;
	v->a[2352] = actions(61);
	v->a[2353] = 1;
	v->a[2354] = anon_sym_DOLLAR_LBRACE;
	v->a[2355] = actions(63);
	v->a[2356] = 1;
	v->a[2357] = anon_sym_DOLLAR_LPAREN;
	v->a[2358] = actions(65);
	v->a[2359] = 1;
	small_parse_table_118(v);
}

void	small_parse_table_118(t_small_parse_table_array *v)
{
	v->a[2360] = anon_sym_BQUOTE;
	v->a[2361] = actions(67);
	v->a[2362] = 1;
	v->a[2363] = sym_variable_name;
	v->a[2364] = state(24);
	v->a[2365] = 1;
	v->a[2366] = aux_sym__terminated_statement;
	v->a[2367] = state(271);
	v->a[2368] = 1;
	v->a[2369] = sym_command_name;
	v->a[2370] = state(291);
	v->a[2371] = 1;
	v->a[2372] = sym_variable_assignment;
	v->a[2373] = state(482);
	v->a[2374] = 1;
	v->a[2375] = aux_sym_command_repeat1;
	v->a[2376] = state(600);
	v->a[2377] = 1;
	v->a[2378] = sym_file_redirect;
	v->a[2379] = state(602);
	small_parse_table_119(v);
}

void	small_parse_table_119(t_small_parse_table_array *v)
{
	v->a[2380] = 1;
	v->a[2381] = sym_concatenation;
	v->a[2382] = state(992);
	v->a[2383] = 1;
	v->a[2384] = sym_pipeline;
	v->a[2385] = state(1068);
	v->a[2386] = 1;
	v->a[2387] = aux_sym_redirected_statement_repeat2;
	v->a[2388] = state(1609);
	v->a[2389] = 1;
	v->a[2390] = sym__statement_not_pipeline;
	v->a[2391] = actions(11);
	v->a[2392] = 2;
	v->a[2393] = anon_sym_while;
	v->a[2394] = anon_sym_until;
	v->a[2395] = actions(59);
	v->a[2396] = 2;
	v->a[2397] = sym_raw_string;
	v->a[2398] = sym_number;
	v->a[2399] = actions(127);
	small_parse_table_120(v);
}

/* EOF small_parse_table_23.c */
