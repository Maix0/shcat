/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2504.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_12520(t_small_parse_table_array *v)
{
	v->a[250400] = anon_sym_LT;
	v->a[250401] = anon_sym_GT;
	v->a[250402] = anon_sym_GT_GT;
	v->a[250403] = anon_sym_AMP_GT;
	v->a[250404] = anon_sym_AMP_GT_GT;
	v->a[250405] = anon_sym_LT_AMP;
	v->a[250406] = anon_sym_GT_AMP;
	v->a[250407] = anon_sym_GT_PIPE;
	v->a[250408] = 3;
	v->a[250409] = actions(3);
	v->a[250410] = 1;
	v->a[250411] = sym_comment;
	v->a[250412] = actions(1302);
	v->a[250413] = 4;
	v->a[250414] = sym_file_descriptor;
	v->a[250415] = sym__concat;
	v->a[250416] = sym_variable_name;
	v->a[250417] = aux_sym_heredoc_redirect_token1;
	v->a[250418] = actions(1300);
	v->a[250419] = 22;
	small_parse_table_12521(v);
}

void	small_parse_table_12521(t_small_parse_table_array *v)
{
	v->a[250420] = anon_sym_SEMI;
	v->a[250421] = anon_sym_PIPE_PIPE;
	v->a[250422] = anon_sym_AMP_AMP;
	v->a[250423] = anon_sym_PIPE;
	v->a[250424] = anon_sym_AMP;
	v->a[250425] = anon_sym_LT;
	v->a[250426] = anon_sym_GT;
	v->a[250427] = anon_sym_LT_LT;
	v->a[250428] = anon_sym_GT_GT;
	v->a[250429] = anon_sym_SEMI_SEMI;
	v->a[250430] = anon_sym_SEMI_AMP;
	v->a[250431] = anon_sym_SEMI_SEMI_AMP;
	v->a[250432] = anon_sym_PIPE_AMP;
	v->a[250433] = anon_sym_AMP_GT;
	v->a[250434] = anon_sym_AMP_GT_GT;
	v->a[250435] = anon_sym_LT_AMP;
	v->a[250436] = anon_sym_GT_AMP;
	v->a[250437] = anon_sym_GT_PIPE;
	v->a[250438] = anon_sym_LT_AMP_DASH;
	v->a[250439] = anon_sym_GT_AMP_DASH;
	small_parse_table_12522(v);
}

void	small_parse_table_12522(t_small_parse_table_array *v)
{
	v->a[250440] = anon_sym_LT_LT_DASH;
	v->a[250441] = aux_sym_concatenation_token1;
	v->a[250442] = 6;
	v->a[250443] = actions(3);
	v->a[250444] = 1;
	v->a[250445] = sym_comment;
	v->a[250446] = actions(11568);
	v->a[250447] = 1;
	v->a[250448] = aux_sym_concatenation_token1;
	v->a[250449] = actions(11583);
	v->a[250450] = 1;
	v->a[250451] = sym__concat;
	v->a[250452] = state(4422);
	v->a[250453] = 1;
	v->a[250454] = aux_sym_concatenation_repeat1;
	v->a[250455] = actions(1263);
	v->a[250456] = 3;
	v->a[250457] = sym_test_operator;
	v->a[250458] = sym__brace_start;
	v->a[250459] = aux_sym_heredoc_redirect_token1;
	small_parse_table_12523(v);
}

void	small_parse_table_12523(t_small_parse_table_array *v)
{
	v->a[250460] = actions(1261);
	v->a[250461] = 20;
	v->a[250462] = anon_sym_LPAREN_LPAREN;
	v->a[250463] = anon_sym_SEMI;
	v->a[250464] = anon_sym_AMP;
	v->a[250465] = anon_sym_SEMI_SEMI;
	v->a[250466] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[250467] = anon_sym_DOLLAR_LBRACK;
	v->a[250468] = anon_sym_DOLLAR;
	v->a[250469] = sym__special_character;
	v->a[250470] = anon_sym_DQUOTE;
	v->a[250471] = sym_raw_string;
	v->a[250472] = sym_ansi_c_string;
	v->a[250473] = aux_sym_number_token1;
	v->a[250474] = aux_sym_number_token2;
	v->a[250475] = anon_sym_DOLLAR_LBRACE;
	v->a[250476] = anon_sym_DOLLAR_LPAREN;
	v->a[250477] = anon_sym_BQUOTE;
	v->a[250478] = anon_sym_DOLLAR_BQUOTE;
	v->a[250479] = anon_sym_LT_LPAREN;
	small_parse_table_12524(v);
}

void	small_parse_table_12524(t_small_parse_table_array *v)
{
	v->a[250480] = anon_sym_GT_LPAREN;
	v->a[250481] = sym_word;
	v->a[250482] = 5;
	v->a[250483] = actions(3);
	v->a[250484] = 1;
	v->a[250485] = sym_comment;
	v->a[250486] = actions(11617);
	v->a[250487] = 1;
	v->a[250488] = sym__special_character;
	v->a[250489] = state(4498);
	v->a[250490] = 1;
	v->a[250491] = aux_sym__literal_repeat1;
	v->a[250492] = actions(4469);
	v->a[250493] = 2;
	v->a[250494] = sym_file_descriptor;
	v->a[250495] = aux_sym_heredoc_redirect_token1;
	v->a[250496] = actions(4467);
	v->a[250497] = 22;
	v->a[250498] = anon_sym_SEMI;
	v->a[250499] = anon_sym_PIPE_PIPE;
	small_parse_table_12525(v);
}

/* EOF small_parse_table_2504.c */
