/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_654.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3270(t_small_parse_table_array *v)
{
	v->a[65400] = actions(2245);
	v->a[65401] = 2;
	v->a[65402] = sym_file_descriptor;
	v->a[65403] = aux_sym_heredoc_redirect_token1;
	v->a[65404] = actions(2247);
	v->a[65405] = 15;
	v->a[65406] = anon_sym_esac;
	v->a[65407] = anon_sym_PIPE;
	v->a[65408] = anon_sym_SEMI_SEMI;
	v->a[65409] = anon_sym_AMP_AMP;
	v->a[65410] = anon_sym_PIPE_PIPE;
	v->a[65411] = anon_sym_LT;
	v->a[65412] = anon_sym_GT;
	v->a[65413] = anon_sym_GT_GT;
	v->a[65414] = anon_sym_LT_AMP;
	v->a[65415] = anon_sym_GT_AMP;
	v->a[65416] = anon_sym_GT_PIPE;
	v->a[65417] = anon_sym_LT_GT;
	v->a[65418] = anon_sym_LT_LT;
	v->a[65419] = anon_sym_LT_LT_DASH;
	small_parse_table_3271(v);
}

void	small_parse_table_3271(t_small_parse_table_array *v)
{
	v->a[65420] = anon_sym_SEMI;
	v->a[65421] = 10;
	v->a[65422] = actions(3);
	v->a[65423] = 1;
	v->a[65424] = sym_comment;
	v->a[65425] = actions(429);
	v->a[65426] = 1;
	v->a[65427] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[65428] = actions(433);
	v->a[65429] = 1;
	v->a[65430] = anon_sym_DQUOTE;
	v->a[65431] = actions(435);
	v->a[65432] = 1;
	v->a[65433] = anon_sym_DOLLAR_LBRACE;
	v->a[65434] = actions(437);
	v->a[65435] = 1;
	v->a[65436] = anon_sym_DOLLAR_LPAREN;
	v->a[65437] = actions(439);
	v->a[65438] = 1;
	v->a[65439] = anon_sym_BQUOTE;
	small_parse_table_3272(v);
}

void	small_parse_table_3272(t_small_parse_table_array *v)
{
	v->a[65440] = actions(2571);
	v->a[65441] = 1;
	v->a[65442] = anon_sym_DOLLAR;
	v->a[65443] = actions(2573);
	v->a[65444] = 1;
	v->a[65445] = sym__bare_dollar;
	v->a[65446] = actions(2569);
	v->a[65447] = 5;
	v->a[65448] = aux_sym_concatenation_token1;
	v->a[65449] = sym_raw_string;
	v->a[65450] = sym_number;
	v->a[65451] = sym__comment_word;
	v->a[65452] = sym_word;
	v->a[65453] = state(531);
	v->a[65454] = 5;
	v->a[65455] = sym_arithmetic_expansion;
	v->a[65456] = sym_string;
	v->a[65457] = sym_simple_expansion;
	v->a[65458] = sym_expansion;
	v->a[65459] = sym_command_substitution;
	small_parse_table_3273(v);
}

void	small_parse_table_3273(t_small_parse_table_array *v)
{
	v->a[65460] = 12;
	v->a[65461] = actions(3);
	v->a[65462] = 1;
	v->a[65463] = sym_comment;
	v->a[65464] = actions(2349);
	v->a[65465] = 1;
	v->a[65466] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[65467] = actions(2351);
	v->a[65468] = 1;
	v->a[65469] = anon_sym_DOLLAR;
	v->a[65470] = actions(2353);
	v->a[65471] = 1;
	v->a[65472] = anon_sym_DQUOTE;
	v->a[65473] = actions(2355);
	v->a[65474] = 1;
	v->a[65475] = anon_sym_DOLLAR_LBRACE;
	v->a[65476] = actions(2357);
	v->a[65477] = 1;
	v->a[65478] = anon_sym_DOLLAR_LPAREN;
	v->a[65479] = actions(2359);
	small_parse_table_3274(v);
}

void	small_parse_table_3274(t_small_parse_table_array *v)
{
	v->a[65480] = 1;
	v->a[65481] = anon_sym_BQUOTE;
	v->a[65482] = actions(2577);
	v->a[65483] = 1;
	v->a[65484] = sym__comment_word;
	v->a[65485] = actions(2579);
	v->a[65486] = 1;
	v->a[65487] = sym__empty_value;
	v->a[65488] = state(677);
	v->a[65489] = 1;
	v->a[65490] = sym_concatenation;
	v->a[65491] = actions(2575);
	v->a[65492] = 3;
	v->a[65493] = sym_raw_string;
	v->a[65494] = sym_number;
	v->a[65495] = sym_word;
	v->a[65496] = state(425);
	v->a[65497] = 5;
	v->a[65498] = sym_arithmetic_expansion;
	v->a[65499] = sym_string;
	small_parse_table_3275(v);
}

/* EOF small_parse_table_654.c */
