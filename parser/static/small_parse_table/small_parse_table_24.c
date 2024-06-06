/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_24.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_120(t_small_parse_table_array *v)
{
	v->a[2400] = anon_sym_LT_AMP_DASH;
	v->a[2401] = anon_sym_GT_AMP_DASH;
	v->a[2402] = anon_sym_LT_LT;
	v->a[2403] = anon_sym_LT_LT_DASH;
	v->a[2404] = anon_sym_AMP;
	v->a[2405] = anon_sym_SEMI;
	v->a[2406] = 6;
	v->a[2407] = actions(3);
	v->a[2408] = 1;
	v->a[2409] = sym_comment;
	v->a[2410] = actions(1242);
	v->a[2411] = 1;
	v->a[2412] = sym_variable_name;
	v->a[2413] = actions(1240);
	v->a[2414] = 2;
	v->a[2415] = aux_sym__simple_variable_name_token1;
	v->a[2416] = aux_sym__multiline_variable_name_token1;
	v->a[2417] = actions(828);
	v->a[2418] = 4;
	v->a[2419] = sym_file_descriptor;
	small_parse_table_121(v);
}

void	small_parse_table_121(t_small_parse_table_array *v)
{
	v->a[2420] = sym_test_operator;
	v->a[2421] = sym__bare_dollar;
	v->a[2422] = sym__brace_start;
	v->a[2423] = actions(1238);
	v->a[2424] = 9;
	v->a[2425] = anon_sym_BANG;
	v->a[2426] = anon_sym_DASH;
	v->a[2427] = anon_sym_STAR;
	v->a[2428] = anon_sym_QMARK;
	v->a[2429] = anon_sym_DOLLAR;
	v->a[2430] = anon_sym_POUND;
	v->a[2431] = anon_sym_AT;
	v->a[2432] = anon_sym_0;
	v->a[2433] = anon_sym__;
	v->a[2434] = actions(826);
	v->a[2435] = 33;
	v->a[2436] = anon_sym_PIPE;
	v->a[2437] = anon_sym_SEMI_SEMI;
	v->a[2438] = anon_sym_SEMI_AMP;
	v->a[2439] = anon_sym_SEMI_SEMI_AMP;
	small_parse_table_122(v);
}

void	small_parse_table_122(t_small_parse_table_array *v)
{
	v->a[2440] = anon_sym_PIPE_AMP;
	v->a[2441] = anon_sym_AMP_AMP;
	v->a[2442] = anon_sym_PIPE_PIPE;
	v->a[2443] = anon_sym_LT;
	v->a[2444] = anon_sym_GT;
	v->a[2445] = anon_sym_GT_GT;
	v->a[2446] = anon_sym_AMP_GT;
	v->a[2447] = anon_sym_AMP_GT_GT;
	v->a[2448] = anon_sym_LT_AMP;
	v->a[2449] = anon_sym_GT_AMP;
	v->a[2450] = anon_sym_GT_PIPE;
	v->a[2451] = anon_sym_LT_AMP_DASH;
	v->a[2452] = anon_sym_GT_AMP_DASH;
	v->a[2453] = anon_sym_LT_LT;
	v->a[2454] = anon_sym_LT_LT_DASH;
	v->a[2455] = aux_sym_heredoc_redirect_token1;
	v->a[2456] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[2457] = anon_sym_AMP;
	v->a[2458] = sym__special_character;
	v->a[2459] = anon_sym_DQUOTE;
	small_parse_table_123(v);
}

void	small_parse_table_123(t_small_parse_table_array *v)
{
	v->a[2460] = sym_raw_string;
	v->a[2461] = aux_sym_number_token1;
	v->a[2462] = aux_sym_number_token2;
	v->a[2463] = anon_sym_DOLLAR_LBRACE;
	v->a[2464] = anon_sym_DOLLAR_LPAREN;
	v->a[2465] = anon_sym_BQUOTE;
	v->a[2466] = anon_sym_DOLLAR_BQUOTE;
	v->a[2467] = sym_word;
	v->a[2468] = anon_sym_SEMI;
	v->a[2469] = 6;
	v->a[2470] = actions(3);
	v->a[2471] = 1;
	v->a[2472] = sym_comment;
	v->a[2473] = actions(959);
	v->a[2474] = 1;
	v->a[2475] = sym_variable_name;
	v->a[2476] = actions(957);
	v->a[2477] = 2;
	v->a[2478] = aux_sym__simple_variable_name_token1;
	v->a[2479] = aux_sym__multiline_variable_name_token1;
	small_parse_table_124(v);
}

void	small_parse_table_124(t_small_parse_table_array *v)
{
	v->a[2480] = actions(828);
	v->a[2481] = 3;
	v->a[2482] = sym_file_descriptor;
	v->a[2483] = sym_test_operator;
	v->a[2484] = sym__brace_start;
	v->a[2485] = actions(955);
	v->a[2486] = 9;
	v->a[2487] = anon_sym_BANG;
	v->a[2488] = anon_sym_DASH;
	v->a[2489] = anon_sym_STAR;
	v->a[2490] = anon_sym_QMARK;
	v->a[2491] = anon_sym_DOLLAR;
	v->a[2492] = anon_sym_POUND;
	v->a[2493] = anon_sym_AT;
	v->a[2494] = anon_sym_0;
	v->a[2495] = anon_sym__;
	v->a[2496] = actions(826);
	v->a[2497] = 34;
	v->a[2498] = anon_sym_esac;
	v->a[2499] = anon_sym_PIPE;
	small_parse_table_125(v);
}

/* EOF small_parse_table_24.c */
