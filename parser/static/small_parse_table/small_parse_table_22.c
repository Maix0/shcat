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
	v->a[2200] = anon_sym_GT_AMP;
	v->a[2201] = anon_sym_GT_PIPE;
	v->a[2202] = anon_sym_LT_AMP_DASH;
	v->a[2203] = anon_sym_GT_AMP_DASH;
	v->a[2204] = anon_sym_LT_LT;
	v->a[2205] = anon_sym_LT_LT_DASH;
	v->a[2206] = aux_sym_heredoc_redirect_token1;
	v->a[2207] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[2208] = anon_sym_AMP;
	v->a[2209] = sym__special_character;
	v->a[2210] = anon_sym_DQUOTE;
	v->a[2211] = sym_raw_string;
	v->a[2212] = aux_sym_number_token1;
	v->a[2213] = aux_sym_number_token2;
	v->a[2214] = anon_sym_DOLLAR_LBRACE;
	v->a[2215] = anon_sym_DOLLAR_LPAREN;
	v->a[2216] = anon_sym_BQUOTE;
	v->a[2217] = anon_sym_DOLLAR_BQUOTE;
	v->a[2218] = sym_word;
	v->a[2219] = anon_sym_SEMI;
	small_parse_table_111(v);
}

void	small_parse_table_111(t_small_parse_table_array *v)
{
	v->a[2220] = 21;
	v->a[2221] = actions(3);
	v->a[2222] = 1;
	v->a[2223] = sym_comment;
	v->a[2224] = actions(1197);
	v->a[2225] = 1;
	v->a[2226] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[2227] = actions(1200);
	v->a[2228] = 1;
	v->a[2229] = anon_sym_DOLLAR;
	v->a[2230] = actions(1203);
	v->a[2231] = 1;
	v->a[2232] = sym__special_character;
	v->a[2233] = actions(1206);
	v->a[2234] = 1;
	v->a[2235] = anon_sym_DQUOTE;
	v->a[2236] = actions(1209);
	v->a[2237] = 1;
	v->a[2238] = aux_sym_number_token1;
	v->a[2239] = actions(1212);
	small_parse_table_112(v);
}

void	small_parse_table_112(t_small_parse_table_array *v)
{
	v->a[2240] = 1;
	v->a[2241] = aux_sym_number_token2;
	v->a[2242] = actions(1215);
	v->a[2243] = 1;
	v->a[2244] = anon_sym_DOLLAR_LBRACE;
	v->a[2245] = actions(1218);
	v->a[2246] = 1;
	v->a[2247] = anon_sym_DOLLAR_LPAREN;
	v->a[2248] = actions(1221);
	v->a[2249] = 1;
	v->a[2250] = anon_sym_BQUOTE;
	v->a[2251] = actions(1224);
	v->a[2252] = 1;
	v->a[2253] = anon_sym_DOLLAR_BQUOTE;
	v->a[2254] = actions(1227);
	v->a[2255] = 1;
	v->a[2256] = sym_test_operator;
	v->a[2257] = actions(1230);
	v->a[2258] = 1;
	v->a[2259] = sym__bare_dollar;
	small_parse_table_113(v);
}

void	small_parse_table_113(t_small_parse_table_array *v)
{
	v->a[2260] = actions(1233);
	v->a[2261] = 1;
	v->a[2262] = sym__brace_start;
	v->a[2263] = state(284);
	v->a[2264] = 1;
	v->a[2265] = aux_sym_command_repeat2;
	v->a[2266] = state(901);
	v->a[2267] = 1;
	v->a[2268] = aux_sym__literal_repeat1;
	v->a[2269] = state(1121);
	v->a[2270] = 1;
	v->a[2271] = sym_concatenation;
	v->a[2272] = actions(1190);
	v->a[2273] = 2;
	v->a[2274] = sym_raw_string;
	v->a[2275] = sym_word;
	v->a[2276] = actions(1195);
	v->a[2277] = 2;
	v->a[2278] = sym_file_descriptor;
	v->a[2279] = aux_sym_heredoc_redirect_token1;
	small_parse_table_114(v);
}

void	small_parse_table_114(t_small_parse_table_array *v)
{
	v->a[2280] = state(555);
	v->a[2281] = 7;
	v->a[2282] = sym_arithmetic_expansion;
	v->a[2283] = sym_brace_expression;
	v->a[2284] = sym_string;
	v->a[2285] = sym_number;
	v->a[2286] = sym_simple_expansion;
	v->a[2287] = sym_expansion;
	v->a[2288] = sym_command_substitution;
	v->a[2289] = actions(1193);
	v->a[2290] = 22;
	v->a[2291] = anon_sym_esac;
	v->a[2292] = anon_sym_PIPE;
	v->a[2293] = anon_sym_SEMI_SEMI;
	v->a[2294] = anon_sym_SEMI_AMP;
	v->a[2295] = anon_sym_SEMI_SEMI_AMP;
	v->a[2296] = anon_sym_PIPE_AMP;
	v->a[2297] = anon_sym_AMP_AMP;
	v->a[2298] = anon_sym_PIPE_PIPE;
	v->a[2299] = anon_sym_LT;
	small_parse_table_115(v);
}

/* EOF small_parse_table_22.c */
