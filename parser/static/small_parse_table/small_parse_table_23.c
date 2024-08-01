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
	v->a[2301] = aux_sym_command_repeat1;
	v->a[2302] = state(551);
	v->a[2303] = 1;
	v->a[2304] = sym_file_redirect;
	v->a[2305] = state(555);
	v->a[2306] = 1;
	v->a[2307] = sym_concatenation;
	v->a[2308] = state(991);
	v->a[2309] = 1;
	v->a[2310] = sym_pipeline;
	v->a[2311] = state(1126);
	v->a[2312] = 1;
	v->a[2313] = aux_sym_redirected_statement_repeat2;
	v->a[2314] = state(1561);
	v->a[2315] = 1;
	v->a[2316] = sym__statement_not_pipeline;
	v->a[2317] = state(1638);
	v->a[2318] = 1;
	v->a[2319] = sym__statements;
	small_parse_table_116(v);
}

void	small_parse_table_116(t_small_parse_table_array *v)
{
	v->a[2320] = actions(11);
	v->a[2321] = 2;
	v->a[2322] = anon_sym_while;
	v->a[2323] = anon_sym_until;
	v->a[2324] = actions(59);
	v->a[2325] = 2;
	v->a[2326] = sym_raw_string;
	v->a[2327] = sym_number;
	v->a[2328] = actions(51);
	v->a[2329] = 3;
	v->a[2330] = anon_sym_LT;
	v->a[2331] = anon_sym_GT;
	v->a[2332] = anon_sym_GT_GT;
	v->a[2333] = state(401);
	v->a[2334] = 5;
	v->a[2335] = sym_arithmetic_expansion;
	v->a[2336] = sym_string;
	v->a[2337] = sym_simple_expansion;
	v->a[2338] = sym_expansion;
	v->a[2339] = sym_command_substitution;
	small_parse_table_117(v);
}

void	small_parse_table_117(t_small_parse_table_array *v)
{
	v->a[2340] = state(972);
	v->a[2341] = 12;
	v->a[2342] = sym_redirected_statement;
	v->a[2343] = sym_for_statement;
	v->a[2344] = sym_while_statement;
	v->a[2345] = sym_if_statement;
	v->a[2346] = sym_case_statement;
	v->a[2347] = sym_function_definition;
	v->a[2348] = sym_compound_statement;
	v->a[2349] = sym_subshell;
	v->a[2350] = sym_list;
	v->a[2351] = sym_negated_command;
	v->a[2352] = sym_command;
	v->a[2353] = sym__variable_assignments;
	v->a[2354] = 32;
	v->a[2355] = actions(3);
	v->a[2356] = 1;
	v->a[2357] = sym_comment;
	v->a[2358] = actions(9);
	v->a[2359] = 1;
	small_parse_table_118(v);
}

void	small_parse_table_118(t_small_parse_table_array *v)
{
	v->a[2360] = anon_sym_for;
	v->a[2361] = actions(13);
	v->a[2362] = 1;
	v->a[2363] = anon_sym_if;
	v->a[2364] = actions(15);
	v->a[2365] = 1;
	v->a[2366] = anon_sym_case;
	v->a[2367] = actions(17);
	v->a[2368] = 1;
	v->a[2369] = anon_sym_LPAREN;
	v->a[2370] = actions(19);
	v->a[2371] = 1;
	v->a[2372] = anon_sym_LBRACE;
	v->a[2373] = actions(41);
	v->a[2374] = 1;
	v->a[2375] = sym_word;
	v->a[2376] = actions(49);
	v->a[2377] = 1;
	v->a[2378] = anon_sym_BANG;
	v->a[2379] = actions(53);
	small_parse_table_119(v);
}

void	small_parse_table_119(t_small_parse_table_array *v)
{
	v->a[2380] = 1;
	v->a[2381] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[2382] = actions(55);
	v->a[2383] = 1;
	v->a[2384] = anon_sym_DOLLAR;
	v->a[2385] = actions(57);
	v->a[2386] = 1;
	v->a[2387] = anon_sym_DQUOTE;
	v->a[2388] = actions(61);
	v->a[2389] = 1;
	v->a[2390] = anon_sym_DOLLAR_LBRACE;
	v->a[2391] = actions(63);
	v->a[2392] = 1;
	v->a[2393] = anon_sym_DOLLAR_LPAREN;
	v->a[2394] = actions(65);
	v->a[2395] = 1;
	v->a[2396] = anon_sym_BQUOTE;
	v->a[2397] = actions(67);
	v->a[2398] = 1;
	v->a[2399] = sym_variable_name;
	small_parse_table_120(v);
}

/* EOF small_parse_table_23.c */
