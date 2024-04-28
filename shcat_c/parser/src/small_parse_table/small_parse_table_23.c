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
	v->a[2300] = sym_subscript;
	v->a[2301] = actions(1753);
	v->a[2302] = 2;
	v->a[2303] = anon_sym_LPAREN_LPAREN;
	v->a[2304] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[2305] = actions(1757);
	v->a[2306] = 2;
	v->a[2307] = sym_file_descriptor;
	v->a[2308] = aux_sym_heredoc_redirect_token1;
	v->a[2309] = actions(1779);
	v->a[2310] = 2;
	v->a[2311] = anon_sym_LT_LPAREN;
	v->a[2312] = anon_sym_GT_LPAREN;
	v->a[2313] = actions(1751);
	v->a[2314] = 3;
	v->a[2315] = sym_raw_string;
	v->a[2316] = sym_ansi_c_string;
	v->a[2317] = sym_word;
	v->a[2318] = state(551);
	v->a[2319] = 3;
	small_parse_table_116(v);
}

void	small_parse_table_116(t_small_parse_table_array *v)
{
	v->a[2320] = sym_variable_assignment;
	v->a[2321] = sym_concatenation;
	v->a[2322] = aux_sym_declaration_command_repeat1;
	v->a[2323] = state(1067);
	v->a[2324] = 9;
	v->a[2325] = sym_arithmetic_expansion;
	v->a[2326] = sym_brace_expression;
	v->a[2327] = sym_string;
	v->a[2328] = sym_translated_string;
	v->a[2329] = sym_number;
	v->a[2330] = sym_simple_expansion;
	v->a[2331] = sym_expansion;
	v->a[2332] = sym_command_substitution;
	v->a[2333] = sym_process_substitution;
	v->a[2334] = actions(1755);
	v->a[2335] = 22;
	v->a[2336] = anon_sym_SEMI;
	v->a[2337] = anon_sym_PIPE_PIPE;
	v->a[2338] = anon_sym_AMP_AMP;
	v->a[2339] = anon_sym_PIPE;
	small_parse_table_117(v);
}

void	small_parse_table_117(t_small_parse_table_array *v)
{
	v->a[2340] = anon_sym_AMP;
	v->a[2341] = anon_sym_LT;
	v->a[2342] = anon_sym_GT;
	v->a[2343] = anon_sym_LT_LT;
	v->a[2344] = anon_sym_GT_GT;
	v->a[2345] = anon_sym_esac;
	v->a[2346] = anon_sym_SEMI_SEMI;
	v->a[2347] = anon_sym_SEMI_AMP;
	v->a[2348] = anon_sym_SEMI_SEMI_AMP;
	v->a[2349] = anon_sym_PIPE_AMP;
	v->a[2350] = anon_sym_AMP_GT;
	v->a[2351] = anon_sym_AMP_GT_GT;
	v->a[2352] = anon_sym_LT_AMP;
	v->a[2353] = anon_sym_GT_AMP;
	v->a[2354] = anon_sym_GT_PIPE;
	v->a[2355] = anon_sym_LT_AMP_DASH;
	v->a[2356] = anon_sym_GT_AMP_DASH;
	v->a[2357] = anon_sym_LT_LT_DASH;
	v->a[2358] = 8;
	v->a[2359] = actions(3);
	small_parse_table_118(v);
}

void	small_parse_table_118(t_small_parse_table_array *v)
{
	v->a[2360] = 1;
	v->a[2361] = sym_comment;
	v->a[2362] = actions(1791);
	v->a[2363] = 1;
	v->a[2364] = anon_sym_DQUOTE;
	v->a[2365] = actions(1795);
	v->a[2366] = 1;
	v->a[2367] = sym_variable_name;
	v->a[2368] = state(998);
	v->a[2369] = 1;
	v->a[2370] = sym_string;
	v->a[2371] = actions(1793);
	v->a[2372] = 2;
	v->a[2373] = aux_sym__simple_variable_name_token1;
	v->a[2374] = aux_sym__multiline_variable_name_token1;
	v->a[2375] = actions(1241);
	v->a[2376] = 4;
	v->a[2377] = sym_file_descriptor;
	v->a[2378] = sym_test_operator;
	v->a[2379] = sym__bare_dollar;
	small_parse_table_119(v);
}

void	small_parse_table_119(t_small_parse_table_array *v)
{
	v->a[2380] = sym__brace_start;
	v->a[2381] = actions(1789);
	v->a[2382] = 9;
	v->a[2383] = anon_sym_DASH;
	v->a[2384] = anon_sym_STAR;
	v->a[2385] = anon_sym_BANG;
	v->a[2386] = anon_sym_QMARK;
	v->a[2387] = anon_sym_DOLLAR;
	v->a[2388] = anon_sym_POUND;
	v->a[2389] = anon_sym_AT2;
	v->a[2390] = anon_sym_0;
	v->a[2391] = anon_sym__;
	v->a[2392] = actions(1239);
	v->a[2393] = 41;
	v->a[2394] = anon_sym_LPAREN_LPAREN;
	v->a[2395] = anon_sym_SEMI;
	v->a[2396] = anon_sym_PIPE_PIPE;
	v->a[2397] = anon_sym_AMP_AMP;
	v->a[2398] = anon_sym_PIPE;
	v->a[2399] = anon_sym_AMP;
	small_parse_table_120(v);
}

/* EOF small_parse_table_23.c */
