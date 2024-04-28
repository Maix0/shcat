/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2814.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_14070(t_small_parse_table_array *v)
{
	v->a[281400] = actions(4552);
	v->a[281401] = 7;
	v->a[281402] = anon_sym_PIPE;
	v->a[281403] = anon_sym_LT;
	v->a[281404] = anon_sym_GT;
	v->a[281405] = anon_sym_LT_LT;
	v->a[281406] = anon_sym_AMP_GT;
	v->a[281407] = anon_sym_LT_AMP;
	v->a[281408] = anon_sym_GT_AMP;
	v->a[281409] = actions(4554);
	v->a[281410] = 11;
	v->a[281411] = sym_file_descriptor;
	v->a[281412] = anon_sym_PIPE_PIPE;
	v->a[281413] = anon_sym_AMP_AMP;
	v->a[281414] = anon_sym_GT_GT;
	v->a[281415] = anon_sym_PIPE_AMP;
	v->a[281416] = anon_sym_RBRACK;
	v->a[281417] = anon_sym_AMP_GT_GT;
	v->a[281418] = anon_sym_GT_PIPE;
	v->a[281419] = anon_sym_LT_AMP_DASH;
	small_parse_table_14071(v);
}

void	small_parse_table_14071(t_small_parse_table_array *v)
{
	v->a[281420] = anon_sym_GT_AMP_DASH;
	v->a[281421] = anon_sym_LT_LT_DASH;
	v->a[281422] = 3;
	v->a[281423] = actions(71);
	v->a[281424] = 1;
	v->a[281425] = sym_comment;
	v->a[281426] = actions(1356);
	v->a[281427] = 7;
	v->a[281428] = anon_sym_PIPE;
	v->a[281429] = anon_sym_LT;
	v->a[281430] = anon_sym_GT;
	v->a[281431] = anon_sym_LT_LT;
	v->a[281432] = anon_sym_AMP_GT;
	v->a[281433] = anon_sym_LT_AMP;
	v->a[281434] = anon_sym_GT_AMP;
	v->a[281435] = actions(1358);
	v->a[281436] = 14;
	v->a[281437] = sym_file_descriptor;
	v->a[281438] = sym__concat;
	v->a[281439] = anon_sym_PIPE_PIPE;
	small_parse_table_14072(v);
}

void	small_parse_table_14072(t_small_parse_table_array *v)
{
	v->a[281440] = anon_sym_AMP_AMP;
	v->a[281441] = anon_sym_GT_GT;
	v->a[281442] = anon_sym_PIPE_AMP;
	v->a[281443] = anon_sym_RBRACK;
	v->a[281444] = anon_sym_AMP_GT_GT;
	v->a[281445] = anon_sym_GT_PIPE;
	v->a[281446] = anon_sym_LT_AMP_DASH;
	v->a[281447] = anon_sym_GT_AMP_DASH;
	v->a[281448] = anon_sym_LT_LT_DASH;
	v->a[281449] = anon_sym_LT_LT_LT;
	v->a[281450] = aux_sym_concatenation_token1;
	v->a[281451] = 3;
	v->a[281452] = actions(71);
	v->a[281453] = 1;
	v->a[281454] = sym_comment;
	v->a[281455] = actions(12664);
	v->a[281456] = 6;
	v->a[281457] = anon_sym_LPAREN;
	v->a[281458] = anon_sym_DOLLAR;
	v->a[281459] = aux_sym_number_token1;
	small_parse_table_14073(v);
}

void	small_parse_table_14073(t_small_parse_table_array *v)
{
	v->a[281460] = aux_sym_number_token2;
	v->a[281461] = anon_sym_DOLLAR_LPAREN;
	v->a[281462] = sym_word;
	v->a[281463] = actions(12666);
	v->a[281464] = 15;
	v->a[281465] = sym_test_operator;
	v->a[281466] = sym_extglob_pattern;
	v->a[281467] = sym__brace_start;
	v->a[281468] = anon_sym_LPAREN_LPAREN;
	v->a[281469] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[281470] = anon_sym_DOLLAR_LBRACK;
	v->a[281471] = sym__special_character;
	v->a[281472] = anon_sym_DQUOTE;
	v->a[281473] = sym_raw_string;
	v->a[281474] = sym_ansi_c_string;
	v->a[281475] = anon_sym_DOLLAR_LBRACE;
	v->a[281476] = anon_sym_BQUOTE;
	v->a[281477] = anon_sym_DOLLAR_BQUOTE;
	v->a[281478] = anon_sym_LT_LPAREN;
	v->a[281479] = anon_sym_GT_LPAREN;
	small_parse_table_14074(v);
}

void	small_parse_table_14074(t_small_parse_table_array *v)
{
	v->a[281480] = 3;
	v->a[281481] = actions(71);
	v->a[281482] = 1;
	v->a[281483] = sym_comment;
	v->a[281484] = actions(12708);
	v->a[281485] = 6;
	v->a[281486] = anon_sym_LPAREN;
	v->a[281487] = anon_sym_DOLLAR;
	v->a[281488] = aux_sym_number_token1;
	v->a[281489] = aux_sym_number_token2;
	v->a[281490] = anon_sym_DOLLAR_LPAREN;
	v->a[281491] = sym_word;
	v->a[281492] = actions(12710);
	v->a[281493] = 15;
	v->a[281494] = sym_test_operator;
	v->a[281495] = sym_extglob_pattern;
	v->a[281496] = sym__brace_start;
	v->a[281497] = anon_sym_LPAREN_LPAREN;
	v->a[281498] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[281499] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_14075(v);
}

/* EOF small_parse_table_2814.c */
