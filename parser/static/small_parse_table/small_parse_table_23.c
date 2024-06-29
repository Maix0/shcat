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
	v->a[2300] = state(2126);
	v->a[2301] = 1;
	v->a[2302] = sym__statements;
	v->a[2303] = actions(91);
	v->a[2304] = 2;
	v->a[2305] = anon_sym_while;
	v->a[2306] = anon_sym_until;
	v->a[2307] = actions(107);
	v->a[2308] = 2;
	v->a[2309] = anon_sym_LT_AMP_DASH;
	v->a[2310] = anon_sym_GT_AMP_DASH;
	v->a[2311] = actions(115);
	v->a[2312] = 2;
	v->a[2313] = sym_raw_string;
	v->a[2314] = sym_number;
	v->a[2315] = state(289);
	v->a[2316] = 5;
	v->a[2317] = sym_arithmetic_expansion;
	v->a[2318] = sym_string;
	v->a[2319] = sym_simple_expansion;
	small_parse_table_116(v);
}

void	small_parse_table_116(t_small_parse_table_array *v)
{
	v->a[2320] = sym_expansion;
	v->a[2321] = sym_command_substitution;
	v->a[2322] = actions(105);
	v->a[2323] = 8;
	v->a[2324] = anon_sym_LT;
	v->a[2325] = anon_sym_GT;
	v->a[2326] = anon_sym_GT_GT;
	v->a[2327] = anon_sym_AMP_GT;
	v->a[2328] = anon_sym_AMP_GT_GT;
	v->a[2329] = anon_sym_LT_AMP;
	v->a[2330] = anon_sym_GT_AMP;
	v->a[2331] = anon_sym_GT_PIPE;
	v->a[2332] = state(1086);
	v->a[2333] = 12;
	v->a[2334] = sym_redirected_statement;
	v->a[2335] = sym_for_statement;
	v->a[2336] = sym_while_statement;
	v->a[2337] = sym_if_statement;
	v->a[2338] = sym_case_statement;
	v->a[2339] = sym_function_definition;
	small_parse_table_117(v);
}

void	small_parse_table_117(t_small_parse_table_array *v)
{
	v->a[2340] = sym_compound_statement;
	v->a[2341] = sym_subshell;
	v->a[2342] = sym_list;
	v->a[2343] = sym_negated_command;
	v->a[2344] = sym_command;
	v->a[2345] = sym__variable_assignments;
	v->a[2346] = 34;
	v->a[2347] = actions(3);
	v->a[2348] = 1;
	v->a[2349] = sym_comment;
	v->a[2350] = actions(9);
	v->a[2351] = 1;
	v->a[2352] = anon_sym_for;
	v->a[2353] = actions(13);
	v->a[2354] = 1;
	v->a[2355] = anon_sym_if;
	v->a[2356] = actions(15);
	v->a[2357] = 1;
	v->a[2358] = anon_sym_case;
	v->a[2359] = actions(17);
	small_parse_table_118(v);
}

void	small_parse_table_118(t_small_parse_table_array *v)
{
	v->a[2360] = 1;
	v->a[2361] = anon_sym_LPAREN;
	v->a[2362] = actions(19);
	v->a[2363] = 1;
	v->a[2364] = anon_sym_LBRACE;
	v->a[2365] = actions(45);
	v->a[2366] = 1;
	v->a[2367] = sym_word;
	v->a[2368] = actions(53);
	v->a[2369] = 1;
	v->a[2370] = anon_sym_BANG;
	v->a[2371] = actions(59);
	v->a[2372] = 1;
	v->a[2373] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[2374] = actions(61);
	v->a[2375] = 1;
	v->a[2376] = anon_sym_DOLLAR;
	v->a[2377] = actions(63);
	v->a[2378] = 1;
	v->a[2379] = anon_sym_DQUOTE;
	small_parse_table_119(v);
}

void	small_parse_table_119(t_small_parse_table_array *v)
{
	v->a[2380] = actions(67);
	v->a[2381] = 1;
	v->a[2382] = anon_sym_DOLLAR_LBRACE;
	v->a[2383] = actions(69);
	v->a[2384] = 1;
	v->a[2385] = anon_sym_DOLLAR_LPAREN;
	v->a[2386] = actions(71);
	v->a[2387] = 1;
	v->a[2388] = anon_sym_BQUOTE;
	v->a[2389] = actions(73);
	v->a[2390] = 1;
	v->a[2391] = sym_file_descriptor;
	v->a[2392] = actions(75);
	v->a[2393] = 1;
	v->a[2394] = sym_variable_name;
	v->a[2395] = actions(139);
	v->a[2396] = 1;
	v->a[2397] = anon_sym_LF;
	v->a[2398] = state(17);
	v->a[2399] = 1;
	small_parse_table_120(v);
}

/* EOF small_parse_table_23.c */
