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
	v->a[65400] = 1;
	v->a[65401] = aux_sym_concatenation_repeat1;
	v->a[65402] = actions(2664);
	v->a[65403] = 4;
	v->a[65404] = sym_file_descriptor;
	v->a[65405] = sym_test_operator;
	v->a[65406] = sym__brace_start;
	v->a[65407] = aux_sym_heredoc_redirect_token1;
	v->a[65408] = actions(2662);
	v->a[65409] = 28;
	v->a[65410] = anon_sym_PIPE;
	v->a[65411] = anon_sym_PIPE_AMP;
	v->a[65412] = anon_sym_AMP_AMP;
	v->a[65413] = anon_sym_PIPE_PIPE;
	v->a[65414] = anon_sym_LT;
	v->a[65415] = anon_sym_GT;
	v->a[65416] = anon_sym_GT_GT;
	v->a[65417] = anon_sym_AMP_GT;
	v->a[65418] = anon_sym_AMP_GT_GT;
	v->a[65419] = anon_sym_LT_AMP;
	small_parse_table_3271(v);
}

void	small_parse_table_3271(t_small_parse_table_array *v)
{
	v->a[65420] = anon_sym_GT_AMP;
	v->a[65421] = anon_sym_GT_PIPE;
	v->a[65422] = anon_sym_LT_AMP_DASH;
	v->a[65423] = anon_sym_GT_AMP_DASH;
	v->a[65424] = anon_sym_LT_LT;
	v->a[65425] = anon_sym_LT_LT_DASH;
	v->a[65426] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[65427] = anon_sym_DOLLAR;
	v->a[65428] = sym__special_character;
	v->a[65429] = anon_sym_DQUOTE;
	v->a[65430] = sym_raw_string;
	v->a[65431] = aux_sym_number_token1;
	v->a[65432] = aux_sym_number_token2;
	v->a[65433] = anon_sym_DOLLAR_LBRACE;
	v->a[65434] = anon_sym_DOLLAR_LPAREN;
	v->a[65435] = anon_sym_BQUOTE;
	v->a[65436] = anon_sym_DOLLAR_BQUOTE;
	v->a[65437] = sym_word;
	v->a[65438] = 19;
	v->a[65439] = actions(57);
	small_parse_table_3272(v);
}

void	small_parse_table_3272(t_small_parse_table_array *v)
{
	v->a[65440] = 1;
	v->a[65441] = sym_comment;
	v->a[65442] = actions(4120);
	v->a[65443] = 1;
	v->a[65444] = anon_sym_PIPE;
	v->a[65445] = actions(4122);
	v->a[65446] = 1;
	v->a[65447] = anon_sym_AMP_AMP;
	v->a[65448] = actions(4124);
	v->a[65449] = 1;
	v->a[65450] = anon_sym_PIPE_PIPE;
	v->a[65451] = actions(4126);
	v->a[65452] = 1;
	v->a[65453] = anon_sym_EQ;
	v->a[65454] = actions(4132);
	v->a[65455] = 1;
	v->a[65456] = anon_sym_COMMA;
	v->a[65457] = actions(4138);
	v->a[65458] = 1;
	v->a[65459] = anon_sym_CARET;
	small_parse_table_3273(v);
}

void	small_parse_table_3273(t_small_parse_table_array *v)
{
	v->a[65460] = actions(4140);
	v->a[65461] = 1;
	v->a[65462] = anon_sym_AMP;
	v->a[65463] = actions(4150);
	v->a[65464] = 1;
	v->a[65465] = anon_sym_QMARK;
	v->a[65466] = actions(4189);
	v->a[65467] = 1;
	v->a[65468] = anon_sym_RPAREN_RPAREN;
	v->a[65469] = state(3500);
	v->a[65470] = 1;
	v->a[65471] = aux_sym_arithmetic_expansion_repeat1;
	v->a[65472] = actions(4128);
	v->a[65473] = 2;
	v->a[65474] = anon_sym_LT;
	v->a[65475] = anon_sym_GT;
	v->a[65476] = actions(4130);
	v->a[65477] = 2;
	v->a[65478] = anon_sym_GT_GT;
	v->a[65479] = anon_sym_LT_LT;
	small_parse_table_3274(v);
}

void	small_parse_table_3274(t_small_parse_table_array *v)
{
	v->a[65480] = actions(4142);
	v->a[65481] = 2;
	v->a[65482] = anon_sym_EQ_EQ;
	v->a[65483] = anon_sym_BANG_EQ;
	v->a[65484] = actions(4144);
	v->a[65485] = 2;
	v->a[65486] = anon_sym_LT_EQ;
	v->a[65487] = anon_sym_GT_EQ;
	v->a[65488] = actions(4146);
	v->a[65489] = 2;
	v->a[65490] = anon_sym_PLUS;
	v->a[65491] = anon_sym_DASH;
	v->a[65492] = actions(4152);
	v->a[65493] = 2;
	v->a[65494] = anon_sym_PLUS_PLUS2;
	v->a[65495] = anon_sym_DASH_DASH2;
	v->a[65496] = actions(4148);
	v->a[65497] = 3;
	v->a[65498] = anon_sym_STAR;
	v->a[65499] = anon_sym_SLASH;
	small_parse_table_3275(v);
}

/* EOF small_parse_table_654.c */
