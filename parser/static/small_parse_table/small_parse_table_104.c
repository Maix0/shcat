/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_104.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_520(t_small_parse_table_array *v)
{
	v->a[10400] = anon_sym_LT_AMP;
	v->a[10401] = anon_sym_GT_AMP;
	v->a[10402] = anon_sym_GT_PIPE;
	v->a[10403] = anon_sym_LT_AMP_DASH;
	v->a[10404] = anon_sym_GT_AMP_DASH;
	v->a[10405] = anon_sym_LT_LT;
	v->a[10406] = anon_sym_LT_LT_DASH;
	v->a[10407] = anon_sym_AMP;
	v->a[10408] = anon_sym_SEMI;
	v->a[10409] = 19;
	v->a[10410] = actions(3);
	v->a[10411] = 1;
	v->a[10412] = sym_comment;
	v->a[10413] = actions(2205);
	v->a[10414] = 1;
	v->a[10415] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[10416] = actions(2208);
	v->a[10417] = 1;
	v->a[10418] = anon_sym_DOLLAR;
	v->a[10419] = actions(2211);
	small_parse_table_521(v);
}

void	small_parse_table_521(t_small_parse_table_array *v)
{
	v->a[10420] = 1;
	v->a[10421] = sym__special_character;
	v->a[10422] = actions(2214);
	v->a[10423] = 1;
	v->a[10424] = anon_sym_DQUOTE;
	v->a[10425] = actions(2217);
	v->a[10426] = 1;
	v->a[10427] = aux_sym_number_token1;
	v->a[10428] = actions(2220);
	v->a[10429] = 1;
	v->a[10430] = aux_sym_number_token2;
	v->a[10431] = actions(2223);
	v->a[10432] = 1;
	v->a[10433] = anon_sym_DOLLAR_LBRACE;
	v->a[10434] = actions(2226);
	v->a[10435] = 1;
	v->a[10436] = anon_sym_DOLLAR_LPAREN;
	v->a[10437] = actions(2229);
	v->a[10438] = 1;
	v->a[10439] = anon_sym_BQUOTE;
	small_parse_table_522(v);
}

void	small_parse_table_522(t_small_parse_table_array *v)
{
	v->a[10440] = actions(2232);
	v->a[10441] = 1;
	v->a[10442] = anon_sym_DOLLAR_BQUOTE;
	v->a[10443] = actions(2235);
	v->a[10444] = 1;
	v->a[10445] = sym_test_operator;
	v->a[10446] = actions(2238);
	v->a[10447] = 1;
	v->a[10448] = sym__brace_start;
	v->a[10449] = state(1270);
	v->a[10450] = 1;
	v->a[10451] = aux_sym__literal_repeat1;
	v->a[10452] = actions(1287);
	v->a[10453] = 2;
	v->a[10454] = sym_file_descriptor;
	v->a[10455] = aux_sym_heredoc_redirect_token1;
	v->a[10456] = actions(2202);
	v->a[10457] = 2;
	v->a[10458] = sym_raw_string;
	v->a[10459] = sym_word;
	small_parse_table_523(v);
}

void	small_parse_table_523(t_small_parse_table_array *v)
{
	v->a[10460] = state(393);
	v->a[10461] = 2;
	v->a[10462] = sym_concatenation;
	v->a[10463] = aux_sym_for_statement_repeat1;
	v->a[10464] = state(1069);
	v->a[10465] = 7;
	v->a[10466] = sym_arithmetic_expansion;
	v->a[10467] = sym_brace_expression;
	v->a[10468] = sym_string;
	v->a[10469] = sym_number;
	v->a[10470] = sym_simple_expansion;
	v->a[10471] = sym_expansion;
	v->a[10472] = sym_command_substitution;
	v->a[10473] = actions(1285);
	v->a[10474] = 20;
	v->a[10475] = anon_sym_PIPE;
	v->a[10476] = anon_sym_RPAREN;
	v->a[10477] = anon_sym_SEMI_SEMI;
	v->a[10478] = anon_sym_PIPE_AMP;
	v->a[10479] = anon_sym_AMP_AMP;
	small_parse_table_524(v);
}

void	small_parse_table_524(t_small_parse_table_array *v)
{
	v->a[10480] = anon_sym_PIPE_PIPE;
	v->a[10481] = anon_sym_LT;
	v->a[10482] = anon_sym_GT;
	v->a[10483] = anon_sym_GT_GT;
	v->a[10484] = anon_sym_AMP_GT;
	v->a[10485] = anon_sym_AMP_GT_GT;
	v->a[10486] = anon_sym_LT_AMP;
	v->a[10487] = anon_sym_GT_AMP;
	v->a[10488] = anon_sym_GT_PIPE;
	v->a[10489] = anon_sym_LT_AMP_DASH;
	v->a[10490] = anon_sym_GT_AMP_DASH;
	v->a[10491] = anon_sym_LT_LT;
	v->a[10492] = anon_sym_LT_LT_DASH;
	v->a[10493] = anon_sym_AMP;
	v->a[10494] = anon_sym_SEMI;
	v->a[10495] = 19;
	v->a[10496] = actions(3);
	v->a[10497] = 1;
	v->a[10498] = sym_comment;
	v->a[10499] = actions(2244);
	small_parse_table_525(v);
}

/* EOF small_parse_table_104.c */
