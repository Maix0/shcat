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
	v->a[43400] = actions(1474);
	v->a[43401] = 1;
	v->a[43402] = sym_variable_name;
	v->a[43403] = actions(804);
	v->a[43404] = 2;
	v->a[43405] = anon_sym_LT_LT;
	v->a[43406] = anon_sym_LT_LT_DASH;
	v->a[43407] = actions(1470);
	v->a[43408] = 2;
	v->a[43409] = anon_sym_AMP_AMP;
	v->a[43410] = anon_sym_PIPE_PIPE;
	v->a[43411] = state(1404);
	v->a[43412] = 2;
	v->a[43413] = sym_variable_assignment;
	v->a[43414] = aux_sym__variable_assignments_repeat1;
	v->a[43415] = state(1397);
	v->a[43416] = 3;
	v->a[43417] = sym_file_redirect;
	v->a[43418] = sym_heredoc_redirect;
	v->a[43419] = aux_sym_redirected_statement_repeat1;
	small_parse_table_2171(v);
}

void	small_parse_table_2171(t_small_parse_table_array *v)
{
	v->a[43420] = actions(762);
	v->a[43421] = 19;
	v->a[43422] = anon_sym_LT;
	v->a[43423] = anon_sym_GT;
	v->a[43424] = anon_sym_GT_GT;
	v->a[43425] = anon_sym_AMP_GT;
	v->a[43426] = anon_sym_AMP_GT_GT;
	v->a[43427] = anon_sym_LT_AMP;
	v->a[43428] = anon_sym_GT_AMP;
	v->a[43429] = anon_sym_GT_PIPE;
	v->a[43430] = anon_sym_LT_AMP_DASH;
	v->a[43431] = anon_sym_GT_AMP_DASH;
	v->a[43432] = anon_sym_DOLLAR_LPAREN_LPAREN;
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
	v->a[43441] = 7;
	v->a[43442] = actions(3);
	v->a[43443] = 1;
	v->a[43444] = sym_comment;
	v->a[43445] = actions(875);
	v->a[43446] = 1;
	v->a[43447] = sym_file_descriptor;
	v->a[43448] = actions(1474);
	v->a[43449] = 1;
	v->a[43450] = sym_variable_name;
	v->a[43451] = state(1404);
	v->a[43452] = 2;
	v->a[43453] = sym_variable_assignment;
	v->a[43454] = aux_sym__variable_assignments_repeat1;
	v->a[43455] = state(1397);
	v->a[43456] = 3;
	v->a[43457] = sym_file_redirect;
	v->a[43458] = sym_heredoc_redirect;
	v->a[43459] = aux_sym_redirected_statement_repeat1;
	small_parse_table_2173(v);
}

void	small_parse_table_2173(t_small_parse_table_array *v)
{
	v->a[43460] = actions(762);
	v->a[43461] = 9;
	v->a[43462] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[43463] = anon_sym_DOLLAR;
	v->a[43464] = anon_sym_DQUOTE;
	v->a[43465] = sym_raw_string;
	v->a[43466] = sym_number;
	v->a[43467] = anon_sym_DOLLAR_LBRACE;
	v->a[43468] = anon_sym_DOLLAR_LPAREN;
	v->a[43469] = anon_sym_BQUOTE;
	v->a[43470] = sym_word;
	v->a[43471] = actions(766);
	v->a[43472] = 16;
	v->a[43473] = anon_sym_PIPE;
	v->a[43474] = anon_sym_AMP_AMP;
	v->a[43475] = anon_sym_PIPE_PIPE;
	v->a[43476] = anon_sym_LT;
	v->a[43477] = anon_sym_GT;
	v->a[43478] = anon_sym_GT_GT;
	v->a[43479] = anon_sym_AMP_GT;
	small_parse_table_2174(v);
}

void	small_parse_table_2174(t_small_parse_table_array *v)
{
	v->a[43480] = anon_sym_AMP_GT_GT;
	v->a[43481] = anon_sym_LT_AMP;
	v->a[43482] = anon_sym_GT_AMP;
	v->a[43483] = anon_sym_GT_PIPE;
	v->a[43484] = anon_sym_LT_AMP_DASH;
	v->a[43485] = anon_sym_GT_AMP_DASH;
	v->a[43486] = anon_sym_LT_LT;
	v->a[43487] = anon_sym_LT_LT_DASH;
	v->a[43488] = aux_sym_heredoc_redirect_token1;
	v->a[43489] = 10;
	v->a[43490] = actions(3);
	v->a[43491] = 1;
	v->a[43492] = sym_comment;
	v->a[43493] = actions(766);
	v->a[43494] = 1;
	v->a[43495] = anon_sym_PIPE;
	v->a[43496] = actions(774);
	v->a[43497] = 1;
	v->a[43498] = sym_file_descriptor;
	v->a[43499] = actions(1474);
	small_parse_table_2175(v);
}

/* EOF small_parse_table_434.c */
