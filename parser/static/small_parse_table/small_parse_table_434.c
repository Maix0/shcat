/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_434.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2170(t_small_parse_table_array *v)
{
	v->a[43400] = sym_word;
	v->a[43401] = anon_sym_SEMI;
	v->a[43402] = 3;
	v->a[43403] = actions(3);
	v->a[43404] = 1;
	v->a[43405] = sym_comment;
	v->a[43406] = actions(1187);
	v->a[43407] = 2;
	v->a[43408] = sym_file_descriptor;
	v->a[43409] = sym__concat;
	v->a[43410] = actions(1185);
	v->a[43411] = 30;
	v->a[43412] = anon_sym_PIPE;
	v->a[43413] = anon_sym_RPAREN;
	v->a[43414] = anon_sym_SEMI_SEMI;
	v->a[43415] = anon_sym_AMP_AMP;
	v->a[43416] = anon_sym_PIPE_PIPE;
	v->a[43417] = anon_sym_LT;
	v->a[43418] = anon_sym_GT;
	v->a[43419] = anon_sym_GT_GT;
	small_parse_table_2171(v);
}

void	small_parse_table_2171(t_small_parse_table_array *v)
{
	v->a[43420] = anon_sym_AMP_GT;
	v->a[43421] = anon_sym_AMP_GT_GT;
	v->a[43422] = anon_sym_LT_AMP;
	v->a[43423] = anon_sym_GT_AMP;
	v->a[43424] = anon_sym_GT_PIPE;
	v->a[43425] = anon_sym_LT_AMP_DASH;
	v->a[43426] = anon_sym_GT_AMP_DASH;
	v->a[43427] = anon_sym_LT_LT;
	v->a[43428] = anon_sym_LT_LT_DASH;
	v->a[43429] = aux_sym_heredoc_redirect_token1;
	v->a[43430] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[43431] = anon_sym_AMP;
	v->a[43432] = aux_sym_concatenation_token1;
	v->a[43433] = anon_sym_DOLLAR;
	v->a[43434] = anon_sym_DQUOTE;
	v->a[43435] = sym_raw_string;
	v->a[43436] = sym_number;
	v->a[43437] = anon_sym_DOLLAR_LBRACE;
	v->a[43438] = anon_sym_DOLLAR_LPAREN;
	v->a[43439] = anon_sym_BQUOTE;
	small_parse_table_2172(v);
}

void	small_parse_table_2172(t_small_parse_table_array *v)
{
	v->a[43440] = sym_word;
	v->a[43441] = anon_sym_SEMI;
	v->a[43442] = 10;
	v->a[43443] = actions(3);
	v->a[43444] = 1;
	v->a[43445] = sym_comment;
	v->a[43446] = actions(807);
	v->a[43447] = 1;
	v->a[43448] = anon_sym_PIPE;
	v->a[43449] = actions(811);
	v->a[43450] = 1;
	v->a[43451] = sym_file_descriptor;
	v->a[43452] = actions(1504);
	v->a[43453] = 1;
	v->a[43454] = sym_variable_name;
	v->a[43455] = actions(1507);
	v->a[43456] = 1;
	v->a[43457] = aux_sym_heredoc_redirect_token1;
	v->a[43458] = actions(861);
	v->a[43459] = 2;
	small_parse_table_2173(v);
}

void	small_parse_table_2173(t_small_parse_table_array *v)
{
	v->a[43460] = anon_sym_LT_LT;
	v->a[43461] = anon_sym_LT_LT_DASH;
	v->a[43462] = actions(1500);
	v->a[43463] = 2;
	v->a[43464] = anon_sym_AMP_AMP;
	v->a[43465] = anon_sym_PIPE_PIPE;
	v->a[43466] = state(1544);
	v->a[43467] = 2;
	v->a[43468] = sym_variable_assignment;
	v->a[43469] = aux_sym__variable_assignments_repeat1;
	v->a[43470] = state(1546);
	v->a[43471] = 3;
	v->a[43472] = sym_file_redirect;
	v->a[43473] = sym_heredoc_redirect;
	v->a[43474] = aux_sym_redirected_statement_repeat1;
	v->a[43475] = actions(805);
	v->a[43476] = 19;
	v->a[43477] = anon_sym_LT;
	v->a[43478] = anon_sym_GT;
	v->a[43479] = anon_sym_GT_GT;
	small_parse_table_2174(v);
}

void	small_parse_table_2174(t_small_parse_table_array *v)
{
	v->a[43480] = anon_sym_AMP_GT;
	v->a[43481] = anon_sym_AMP_GT_GT;
	v->a[43482] = anon_sym_LT_AMP;
	v->a[43483] = anon_sym_GT_AMP;
	v->a[43484] = anon_sym_GT_PIPE;
	v->a[43485] = anon_sym_LT_AMP_DASH;
	v->a[43486] = anon_sym_GT_AMP_DASH;
	v->a[43487] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[43488] = anon_sym_DOLLAR;
	v->a[43489] = anon_sym_DQUOTE;
	v->a[43490] = sym_raw_string;
	v->a[43491] = sym_number;
	v->a[43492] = anon_sym_DOLLAR_LBRACE;
	v->a[43493] = anon_sym_DOLLAR_LPAREN;
	v->a[43494] = anon_sym_BQUOTE;
	v->a[43495] = sym_word;
	v->a[43496] = 3;
	v->a[43497] = actions(3);
	v->a[43498] = 1;
	v->a[43499] = sym_comment;
	small_parse_table_2175(v);
}

/* EOF small_parse_table_434.c */
