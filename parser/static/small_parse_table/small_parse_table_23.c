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
	v->a[2300] = anon_sym_GT;
	v->a[2301] = anon_sym_GT_GT;
	v->a[2302] = anon_sym_AMP_GT;
	v->a[2303] = anon_sym_AMP_GT_GT;
	v->a[2304] = anon_sym_LT_AMP;
	v->a[2305] = anon_sym_GT_AMP;
	v->a[2306] = anon_sym_GT_PIPE;
	v->a[2307] = anon_sym_LT_AMP_DASH;
	v->a[2308] = anon_sym_GT_AMP_DASH;
	v->a[2309] = anon_sym_LT_LT;
	v->a[2310] = anon_sym_LT_LT_DASH;
	v->a[2311] = anon_sym_AMP;
	v->a[2312] = anon_sym_SEMI;
	v->a[2313] = 21;
	v->a[2314] = actions(3);
	v->a[2315] = 1;
	v->a[2316] = sym_comment;
	v->a[2317] = actions(1071);
	v->a[2318] = 1;
	v->a[2319] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_116(v);
}

void	small_parse_table_116(t_small_parse_table_array *v)
{
	v->a[2320] = actions(1073);
	v->a[2321] = 1;
	v->a[2322] = anon_sym_DOLLAR;
	v->a[2323] = actions(1075);
	v->a[2324] = 1;
	v->a[2325] = sym__special_character;
	v->a[2326] = actions(1077);
	v->a[2327] = 1;
	v->a[2328] = anon_sym_DQUOTE;
	v->a[2329] = actions(1079);
	v->a[2330] = 1;
	v->a[2331] = aux_sym_number_token1;
	v->a[2332] = actions(1081);
	v->a[2333] = 1;
	v->a[2334] = aux_sym_number_token2;
	v->a[2335] = actions(1083);
	v->a[2336] = 1;
	v->a[2337] = anon_sym_DOLLAR_LBRACE;
	v->a[2338] = actions(1085);
	v->a[2339] = 1;
	small_parse_table_117(v);
}

void	small_parse_table_117(t_small_parse_table_array *v)
{
	v->a[2340] = anon_sym_DOLLAR_LPAREN;
	v->a[2341] = actions(1087);
	v->a[2342] = 1;
	v->a[2343] = anon_sym_BQUOTE;
	v->a[2344] = actions(1089);
	v->a[2345] = 1;
	v->a[2346] = anon_sym_DOLLAR_BQUOTE;
	v->a[2347] = actions(1093);
	v->a[2348] = 1;
	v->a[2349] = sym_variable_name;
	v->a[2350] = actions(1095);
	v->a[2351] = 1;
	v->a[2352] = sym_test_operator;
	v->a[2353] = actions(1097);
	v->a[2354] = 1;
	v->a[2355] = sym__brace_start;
	v->a[2356] = actions(1236);
	v->a[2357] = 1;
	v->a[2358] = aux_sym__simple_variable_name_token1;
	v->a[2359] = state(1062);
	small_parse_table_118(v);
}

void	small_parse_table_118(t_small_parse_table_array *v)
{
	v->a[2360] = 1;
	v->a[2361] = aux_sym__literal_repeat1;
	v->a[2362] = actions(1069);
	v->a[2363] = 2;
	v->a[2364] = sym_raw_string;
	v->a[2365] = sym_word;
	v->a[2366] = actions(727);
	v->a[2367] = 3;
	v->a[2368] = sym_file_descriptor;
	v->a[2369] = ts_builtin_sym_end;
	v->a[2370] = aux_sym_heredoc_redirect_token1;
	v->a[2371] = state(279);
	v->a[2372] = 3;
	v->a[2373] = sym_variable_assignment;
	v->a[2374] = sym_concatenation;
	v->a[2375] = aux_sym_declaration_command_repeat1;
	v->a[2376] = state(693);
	v->a[2377] = 7;
	v->a[2378] = sym_arithmetic_expansion;
	v->a[2379] = sym_brace_expression;
	small_parse_table_119(v);
}

void	small_parse_table_119(t_small_parse_table_array *v)
{
	v->a[2380] = sym_string;
	v->a[2381] = sym_number;
	v->a[2382] = sym_simple_expansion;
	v->a[2383] = sym_expansion;
	v->a[2384] = sym_command_substitution;
	v->a[2385] = actions(725);
	v->a[2386] = 19;
	v->a[2387] = anon_sym_PIPE;
	v->a[2388] = anon_sym_SEMI_SEMI;
	v->a[2389] = anon_sym_PIPE_AMP;
	v->a[2390] = anon_sym_AMP_AMP;
	v->a[2391] = anon_sym_PIPE_PIPE;
	v->a[2392] = anon_sym_LT;
	v->a[2393] = anon_sym_GT;
	v->a[2394] = anon_sym_GT_GT;
	v->a[2395] = anon_sym_AMP_GT;
	v->a[2396] = anon_sym_AMP_GT_GT;
	v->a[2397] = anon_sym_LT_AMP;
	v->a[2398] = anon_sym_GT_AMP;
	v->a[2399] = anon_sym_GT_PIPE;
	small_parse_table_120(v);
}

/* EOF small_parse_table_23.c */
