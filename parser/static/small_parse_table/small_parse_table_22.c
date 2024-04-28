/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_22.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_110(t_small_parse_table_array *v)
{
	v->a[2200] = anon_sym_EQ_EQ;
	v->a[2201] = anon_sym_EQ_TILDE;
	v->a[2202] = actions(1472);
	v->a[2203] = 2;
	v->a[2204] = anon_sym_LT_LPAREN;
	v->a[2205] = anon_sym_GT_LPAREN;
	v->a[2206] = actions(1615);
	v->a[2207] = 2;
	v->a[2208] = sym_file_descriptor;
	v->a[2209] = aux_sym_heredoc_redirect_token1;
	v->a[2210] = actions(1444);
	v->a[2211] = 3;
	v->a[2212] = sym_raw_string;
	v->a[2213] = sym_ansi_c_string;
	v->a[2214] = sym_word;
	v->a[2215] = state(985);
	v->a[2216] = 9;
	v->a[2217] = sym_arithmetic_expansion;
	v->a[2218] = sym_brace_expression;
	v->a[2219] = sym_string;
	small_parse_table_111(v);
}

void	small_parse_table_111(t_small_parse_table_array *v)
{
	v->a[2220] = sym_translated_string;
	v->a[2221] = sym_number;
	v->a[2222] = sym_simple_expansion;
	v->a[2223] = sym_expansion;
	v->a[2224] = sym_command_substitution;
	v->a[2225] = sym_process_substitution;
	v->a[2226] = actions(1613);
	v->a[2227] = 21;
	v->a[2228] = anon_sym_SEMI;
	v->a[2229] = anon_sym_PIPE_PIPE;
	v->a[2230] = anon_sym_AMP_AMP;
	v->a[2231] = anon_sym_PIPE;
	v->a[2232] = anon_sym_AMP;
	v->a[2233] = anon_sym_LT;
	v->a[2234] = anon_sym_GT;
	v->a[2235] = anon_sym_LT_LT;
	v->a[2236] = anon_sym_GT_GT;
	v->a[2237] = anon_sym_SEMI_SEMI;
	v->a[2238] = anon_sym_SEMI_AMP;
	v->a[2239] = anon_sym_SEMI_SEMI_AMP;
	small_parse_table_112(v);
}

void	small_parse_table_112(t_small_parse_table_array *v)
{
	v->a[2240] = anon_sym_PIPE_AMP;
	v->a[2241] = anon_sym_AMP_GT;
	v->a[2242] = anon_sym_AMP_GT_GT;
	v->a[2243] = anon_sym_LT_AMP;
	v->a[2244] = anon_sym_GT_AMP;
	v->a[2245] = anon_sym_GT_PIPE;
	v->a[2246] = anon_sym_LT_AMP_DASH;
	v->a[2247] = anon_sym_GT_AMP_DASH;
	v->a[2248] = anon_sym_LT_LT_DASH;
	v->a[2249] = 24;
	v->a[2250] = actions(3);
	v->a[2251] = 1;
	v->a[2252] = sym_comment;
	v->a[2253] = actions(1759);
	v->a[2254] = 1;
	v->a[2255] = anon_sym_DOLLAR_LBRACK;
	v->a[2256] = actions(1761);
	v->a[2257] = 1;
	v->a[2258] = anon_sym_DOLLAR;
	v->a[2259] = actions(1763);
	small_parse_table_113(v);
}

void	small_parse_table_113(t_small_parse_table_array *v)
{
	v->a[2260] = 1;
	v->a[2261] = sym__special_character;
	v->a[2262] = actions(1765);
	v->a[2263] = 1;
	v->a[2264] = anon_sym_DQUOTE;
	v->a[2265] = actions(1767);
	v->a[2266] = 1;
	v->a[2267] = aux_sym_number_token1;
	v->a[2268] = actions(1769);
	v->a[2269] = 1;
	v->a[2270] = aux_sym_number_token2;
	v->a[2271] = actions(1771);
	v->a[2272] = 1;
	v->a[2273] = anon_sym_DOLLAR_LBRACE;
	v->a[2274] = actions(1773);
	v->a[2275] = 1;
	v->a[2276] = anon_sym_DOLLAR_LPAREN;
	v->a[2277] = actions(1775);
	v->a[2278] = 1;
	v->a[2279] = anon_sym_BQUOTE;
	small_parse_table_114(v);
}

void	small_parse_table_114(t_small_parse_table_array *v)
{
	v->a[2280] = actions(1777);
	v->a[2281] = 1;
	v->a[2282] = anon_sym_DOLLAR_BQUOTE;
	v->a[2283] = actions(1781);
	v->a[2284] = 1;
	v->a[2285] = aux_sym__simple_variable_name_token1;
	v->a[2286] = actions(1783);
	v->a[2287] = 1;
	v->a[2288] = sym_variable_name;
	v->a[2289] = actions(1785);
	v->a[2290] = 1;
	v->a[2291] = sym_test_operator;
	v->a[2292] = actions(1787);
	v->a[2293] = 1;
	v->a[2294] = sym__brace_start;
	v->a[2295] = state(1368);
	v->a[2296] = 1;
	v->a[2297] = aux_sym__literal_repeat1;
	v->a[2298] = state(6750);
	v->a[2299] = 1;
	small_parse_table_115(v);
}

/* EOF small_parse_table_22.c */
