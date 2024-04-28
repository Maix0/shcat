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
	v->a[2400] = anon_sym_EQ_EQ;
	v->a[2401] = anon_sym_LT;
	v->a[2402] = anon_sym_GT;
	v->a[2403] = anon_sym_LT_LT;
	v->a[2404] = anon_sym_GT_GT;
	v->a[2405] = anon_sym_LPAREN;
	v->a[2406] = anon_sym_SEMI_SEMI;
	v->a[2407] = anon_sym_SEMI_AMP;
	v->a[2408] = anon_sym_SEMI_SEMI_AMP;
	v->a[2409] = anon_sym_PIPE_AMP;
	v->a[2410] = anon_sym_EQ_TILDE;
	v->a[2411] = anon_sym_AMP_GT;
	v->a[2412] = anon_sym_AMP_GT_GT;
	v->a[2413] = anon_sym_LT_AMP;
	v->a[2414] = anon_sym_GT_AMP;
	v->a[2415] = anon_sym_GT_PIPE;
	v->a[2416] = anon_sym_LT_AMP_DASH;
	v->a[2417] = anon_sym_GT_AMP_DASH;
	v->a[2418] = anon_sym_LT_LT_DASH;
	v->a[2419] = aux_sym_heredoc_redirect_token1;
	small_parse_table_121(v);
}

void	small_parse_table_121(t_small_parse_table_array *v)
{
	v->a[2420] = anon_sym_LT_LT_LT;
	v->a[2421] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[2422] = anon_sym_DOLLAR_LBRACK;
	v->a[2423] = sym__special_character;
	v->a[2424] = sym_raw_string;
	v->a[2425] = sym_ansi_c_string;
	v->a[2426] = aux_sym_number_token1;
	v->a[2427] = aux_sym_number_token2;
	v->a[2428] = anon_sym_DOLLAR_LBRACE;
	v->a[2429] = anon_sym_DOLLAR_LPAREN;
	v->a[2430] = anon_sym_BQUOTE;
	v->a[2431] = anon_sym_DOLLAR_BQUOTE;
	v->a[2432] = anon_sym_LT_LPAREN;
	v->a[2433] = anon_sym_GT_LPAREN;
	v->a[2434] = sym_word;
	v->a[2435] = 8;
	v->a[2436] = actions(3);
	v->a[2437] = 1;
	v->a[2438] = sym_comment;
	v->a[2439] = actions(1791);
	small_parse_table_122(v);
}

void	small_parse_table_122(t_small_parse_table_array *v)
{
	v->a[2440] = 1;
	v->a[2441] = anon_sym_DQUOTE;
	v->a[2442] = actions(1795);
	v->a[2443] = 1;
	v->a[2444] = sym_variable_name;
	v->a[2445] = state(998);
	v->a[2446] = 1;
	v->a[2447] = sym_string;
	v->a[2448] = actions(1793);
	v->a[2449] = 2;
	v->a[2450] = aux_sym__simple_variable_name_token1;
	v->a[2451] = aux_sym__multiline_variable_name_token1;
	v->a[2452] = actions(1235);
	v->a[2453] = 4;
	v->a[2454] = sym_file_descriptor;
	v->a[2455] = sym_test_operator;
	v->a[2456] = sym__bare_dollar;
	v->a[2457] = sym__brace_start;
	v->a[2458] = actions(1789);
	v->a[2459] = 9;
	small_parse_table_123(v);
}

void	small_parse_table_123(t_small_parse_table_array *v)
{
	v->a[2460] = anon_sym_DASH;
	v->a[2461] = anon_sym_STAR;
	v->a[2462] = anon_sym_BANG;
	v->a[2463] = anon_sym_QMARK;
	v->a[2464] = anon_sym_DOLLAR;
	v->a[2465] = anon_sym_POUND;
	v->a[2466] = anon_sym_AT2;
	v->a[2467] = anon_sym_0;
	v->a[2468] = anon_sym__;
	v->a[2469] = actions(1227);
	v->a[2470] = 41;
	v->a[2471] = anon_sym_LPAREN_LPAREN;
	v->a[2472] = anon_sym_SEMI;
	v->a[2473] = anon_sym_PIPE_PIPE;
	v->a[2474] = anon_sym_AMP_AMP;
	v->a[2475] = anon_sym_PIPE;
	v->a[2476] = anon_sym_AMP;
	v->a[2477] = anon_sym_EQ_EQ;
	v->a[2478] = anon_sym_LT;
	v->a[2479] = anon_sym_GT;
	small_parse_table_124(v);
}

void	small_parse_table_124(t_small_parse_table_array *v)
{
	v->a[2480] = anon_sym_LT_LT;
	v->a[2481] = anon_sym_GT_GT;
	v->a[2482] = anon_sym_LPAREN;
	v->a[2483] = anon_sym_SEMI_SEMI;
	v->a[2484] = anon_sym_SEMI_AMP;
	v->a[2485] = anon_sym_SEMI_SEMI_AMP;
	v->a[2486] = anon_sym_PIPE_AMP;
	v->a[2487] = anon_sym_EQ_TILDE;
	v->a[2488] = anon_sym_AMP_GT;
	v->a[2489] = anon_sym_AMP_GT_GT;
	v->a[2490] = anon_sym_LT_AMP;
	v->a[2491] = anon_sym_GT_AMP;
	v->a[2492] = anon_sym_GT_PIPE;
	v->a[2493] = anon_sym_LT_AMP_DASH;
	v->a[2494] = anon_sym_GT_AMP_DASH;
	v->a[2495] = anon_sym_LT_LT_DASH;
	v->a[2496] = aux_sym_heredoc_redirect_token1;
	v->a[2497] = anon_sym_LT_LT_LT;
	v->a[2498] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[2499] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_125(v);
}

/* EOF small_parse_table_24.c */
