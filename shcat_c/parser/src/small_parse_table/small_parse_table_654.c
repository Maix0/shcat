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
	v->a[65400] = aux_sym_number_token2;
	v->a[65401] = anon_sym_DOLLAR_LBRACE;
	v->a[65402] = anon_sym_DOLLAR_LPAREN;
	v->a[65403] = anon_sym_BQUOTE;
	v->a[65404] = anon_sym_DOLLAR_BQUOTE;
	v->a[65405] = anon_sym_LT_LPAREN;
	v->a[65406] = anon_sym_GT_LPAREN;
	v->a[65407] = sym_word;
	v->a[65408] = 5;
	v->a[65409] = actions(3);
	v->a[65410] = 1;
	v->a[65411] = sym_comment;
	v->a[65412] = actions(5652);
	v->a[65413] = 1;
	v->a[65414] = sym__special_character;
	v->a[65415] = state(1313);
	v->a[65416] = 1;
	v->a[65417] = aux_sym__literal_repeat1;
	v->a[65418] = actions(4548);
	v->a[65419] = 6;
	small_parse_table_3271(v);
}

void	small_parse_table_3271(t_small_parse_table_array *v)
{
	v->a[65420] = sym_file_descriptor;
	v->a[65421] = sym_test_operator;
	v->a[65422] = sym__bare_dollar;
	v->a[65423] = sym__brace_start;
	v->a[65424] = ts_builtin_sym_end;
	v->a[65425] = aux_sym_heredoc_redirect_token1;
	v->a[65426] = actions(4546);
	v->a[65427] = 38;
	v->a[65428] = anon_sym_LPAREN_LPAREN;
	v->a[65429] = anon_sym_SEMI;
	v->a[65430] = anon_sym_PIPE_PIPE;
	v->a[65431] = anon_sym_AMP_AMP;
	v->a[65432] = anon_sym_PIPE;
	v->a[65433] = anon_sym_AMP;
	v->a[65434] = anon_sym_EQ_EQ;
	v->a[65435] = anon_sym_LT;
	v->a[65436] = anon_sym_GT;
	v->a[65437] = anon_sym_LT_LT;
	v->a[65438] = anon_sym_GT_GT;
	v->a[65439] = anon_sym_SEMI_SEMI;
	small_parse_table_3272(v);
}

void	small_parse_table_3272(t_small_parse_table_array *v)
{
	v->a[65440] = anon_sym_PIPE_AMP;
	v->a[65441] = anon_sym_EQ_TILDE;
	v->a[65442] = anon_sym_AMP_GT;
	v->a[65443] = anon_sym_AMP_GT_GT;
	v->a[65444] = anon_sym_LT_AMP;
	v->a[65445] = anon_sym_GT_AMP;
	v->a[65446] = anon_sym_GT_PIPE;
	v->a[65447] = anon_sym_LT_AMP_DASH;
	v->a[65448] = anon_sym_GT_AMP_DASH;
	v->a[65449] = anon_sym_LT_LT_DASH;
	v->a[65450] = anon_sym_LT_LT_LT;
	v->a[65451] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[65452] = anon_sym_DOLLAR_LBRACK;
	v->a[65453] = anon_sym_DOLLAR;
	v->a[65454] = anon_sym_DQUOTE;
	v->a[65455] = sym_raw_string;
	v->a[65456] = sym_ansi_c_string;
	v->a[65457] = aux_sym_number_token1;
	v->a[65458] = aux_sym_number_token2;
	v->a[65459] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_3273(v);
}

void	small_parse_table_3273(t_small_parse_table_array *v)
{
	v->a[65460] = anon_sym_DOLLAR_LPAREN;
	v->a[65461] = anon_sym_BQUOTE;
	v->a[65462] = anon_sym_DOLLAR_BQUOTE;
	v->a[65463] = anon_sym_LT_LPAREN;
	v->a[65464] = anon_sym_GT_LPAREN;
	v->a[65465] = sym_word;
	v->a[65466] = 3;
	v->a[65467] = actions(3);
	v->a[65468] = 1;
	v->a[65469] = sym_comment;
	v->a[65470] = actions(1350);
	v->a[65471] = 5;
	v->a[65472] = sym_file_descriptor;
	v->a[65473] = sym__concat;
	v->a[65474] = sym_test_operator;
	v->a[65475] = sym__brace_start;
	v->a[65476] = aux_sym_heredoc_redirect_token1;
	v->a[65477] = actions(1348);
	v->a[65478] = 41;
	v->a[65479] = anon_sym_LPAREN_LPAREN;
	small_parse_table_3274(v);
}

void	small_parse_table_3274(t_small_parse_table_array *v)
{
	v->a[65480] = anon_sym_SEMI;
	v->a[65481] = anon_sym_PIPE_PIPE;
	v->a[65482] = anon_sym_AMP_AMP;
	v->a[65483] = anon_sym_PIPE;
	v->a[65484] = anon_sym_AMP;
	v->a[65485] = anon_sym_LT;
	v->a[65486] = anon_sym_GT;
	v->a[65487] = anon_sym_LT_LT;
	v->a[65488] = anon_sym_GT_GT;
	v->a[65489] = anon_sym_esac;
	v->a[65490] = anon_sym_SEMI_SEMI;
	v->a[65491] = anon_sym_SEMI_AMP;
	v->a[65492] = anon_sym_SEMI_SEMI_AMP;
	v->a[65493] = anon_sym_PIPE_AMP;
	v->a[65494] = anon_sym_AMP_GT;
	v->a[65495] = anon_sym_AMP_GT_GT;
	v->a[65496] = anon_sym_LT_AMP;
	v->a[65497] = anon_sym_GT_AMP;
	v->a[65498] = anon_sym_GT_PIPE;
	v->a[65499] = anon_sym_LT_AMP_DASH;
	small_parse_table_3275(v);
}

/* EOF small_parse_table_654.c */
