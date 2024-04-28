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
	v->a[10400] = anon_sym_AMP_GT_GT;
	v->a[10401] = anon_sym_LT_AMP;
	v->a[10402] = anon_sym_GT_AMP;
	v->a[10403] = anon_sym_GT_PIPE;
	v->a[10404] = anon_sym_LT_AMP_DASH;
	v->a[10405] = anon_sym_GT_AMP_DASH;
	v->a[10406] = anon_sym_LT_LT_DASH;
	v->a[10407] = 8;
	v->a[10408] = actions(3);
	v->a[10409] = 1;
	v->a[10410] = sym_comment;
	v->a[10411] = actions(2608);
	v->a[10412] = 1;
	v->a[10413] = anon_sym_DQUOTE;
	v->a[10414] = actions(2778);
	v->a[10415] = 1;
	v->a[10416] = sym_variable_name;
	v->a[10417] = state(1525);
	v->a[10418] = 1;
	v->a[10419] = sym_string;
	small_parse_table_521(v);
}

void	small_parse_table_521(t_small_parse_table_array *v)
{
	v->a[10420] = actions(2776);
	v->a[10421] = 2;
	v->a[10422] = aux_sym__simple_variable_name_token1;
	v->a[10423] = aux_sym__multiline_variable_name_token1;
	v->a[10424] = actions(1235);
	v->a[10425] = 3;
	v->a[10426] = sym_file_descriptor;
	v->a[10427] = sym_test_operator;
	v->a[10428] = sym__brace_start;
	v->a[10429] = actions(2774);
	v->a[10430] = 9;
	v->a[10431] = anon_sym_DASH;
	v->a[10432] = anon_sym_STAR;
	v->a[10433] = anon_sym_BANG;
	v->a[10434] = anon_sym_QMARK;
	v->a[10435] = anon_sym_DOLLAR;
	v->a[10436] = anon_sym_POUND;
	v->a[10437] = anon_sym_AT2;
	v->a[10438] = anon_sym_0;
	v->a[10439] = anon_sym__;
	small_parse_table_522(v);
}

void	small_parse_table_522(t_small_parse_table_array *v)
{
	v->a[10440] = actions(1227);
	v->a[10441] = 38;
	v->a[10442] = anon_sym_LPAREN_LPAREN;
	v->a[10443] = anon_sym_SEMI;
	v->a[10444] = anon_sym_PIPE_PIPE;
	v->a[10445] = anon_sym_AMP_AMP;
	v->a[10446] = anon_sym_PIPE;
	v->a[10447] = anon_sym_AMP;
	v->a[10448] = anon_sym_LT;
	v->a[10449] = anon_sym_GT;
	v->a[10450] = anon_sym_LT_LT;
	v->a[10451] = anon_sym_GT_GT;
	v->a[10452] = anon_sym_esac;
	v->a[10453] = anon_sym_SEMI_SEMI;
	v->a[10454] = anon_sym_SEMI_AMP;
	v->a[10455] = anon_sym_SEMI_SEMI_AMP;
	v->a[10456] = anon_sym_PIPE_AMP;
	v->a[10457] = anon_sym_AMP_GT;
	v->a[10458] = anon_sym_AMP_GT_GT;
	v->a[10459] = anon_sym_LT_AMP;
	small_parse_table_523(v);
}

void	small_parse_table_523(t_small_parse_table_array *v)
{
	v->a[10460] = anon_sym_GT_AMP;
	v->a[10461] = anon_sym_GT_PIPE;
	v->a[10462] = anon_sym_LT_AMP_DASH;
	v->a[10463] = anon_sym_GT_AMP_DASH;
	v->a[10464] = anon_sym_LT_LT_DASH;
	v->a[10465] = aux_sym_heredoc_redirect_token1;
	v->a[10466] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[10467] = anon_sym_DOLLAR_LBRACK;
	v->a[10468] = sym__special_character;
	v->a[10469] = sym_raw_string;
	v->a[10470] = sym_ansi_c_string;
	v->a[10471] = aux_sym_number_token1;
	v->a[10472] = aux_sym_number_token2;
	v->a[10473] = anon_sym_DOLLAR_LBRACE;
	v->a[10474] = anon_sym_DOLLAR_LPAREN;
	v->a[10475] = anon_sym_BQUOTE;
	v->a[10476] = anon_sym_DOLLAR_BQUOTE;
	v->a[10477] = anon_sym_LT_LPAREN;
	v->a[10478] = anon_sym_GT_LPAREN;
	v->a[10479] = sym_word;
	small_parse_table_524(v);
}

void	small_parse_table_524(t_small_parse_table_array *v)
{
	v->a[10480] = 21;
	v->a[10481] = actions(3);
	v->a[10482] = 1;
	v->a[10483] = sym_comment;
	v->a[10484] = actions(2861);
	v->a[10485] = 1;
	v->a[10486] = anon_sym_DOLLAR_LBRACK;
	v->a[10487] = actions(2863);
	v->a[10488] = 1;
	v->a[10489] = anon_sym_DOLLAR;
	v->a[10490] = actions(2865);
	v->a[10491] = 1;
	v->a[10492] = sym__special_character;
	v->a[10493] = actions(2867);
	v->a[10494] = 1;
	v->a[10495] = anon_sym_DQUOTE;
	v->a[10496] = actions(2869);
	v->a[10497] = 1;
	v->a[10498] = aux_sym_number_token1;
	v->a[10499] = actions(2871);
	small_parse_table_525(v);
}

/* EOF small_parse_table_104.c */
