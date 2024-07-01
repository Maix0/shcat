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
	v->a[43400] = actions(3);
	v->a[43401] = 1;
	v->a[43402] = sym_comment;
	v->a[43403] = actions(682);
	v->a[43404] = 1;
	v->a[43405] = anon_sym_PIPE;
	v->a[43406] = actions(690);
	v->a[43407] = 1;
	v->a[43408] = sym_file_descriptor;
	v->a[43409] = actions(1466);
	v->a[43410] = 1;
	v->a[43411] = sym_variable_name;
	v->a[43412] = actions(1500);
	v->a[43413] = 1;
	v->a[43414] = aux_sym_heredoc_redirect_token1;
	v->a[43415] = actions(754);
	v->a[43416] = 2;
	v->a[43417] = anon_sym_LT_LT;
	v->a[43418] = anon_sym_LT_LT_DASH;
	v->a[43419] = actions(1496);
	small_parse_table_2171(v);
}

void	small_parse_table_2171(t_small_parse_table_array *v)
{
	v->a[43420] = 2;
	v->a[43421] = anon_sym_AMP_AMP;
	v->a[43422] = anon_sym_PIPE_PIPE;
	v->a[43423] = state(1407);
	v->a[43424] = 2;
	v->a[43425] = sym_variable_assignment;
	v->a[43426] = aux_sym__variable_assignments_repeat1;
	v->a[43427] = state(1408);
	v->a[43428] = 3;
	v->a[43429] = sym_file_redirect;
	v->a[43430] = sym_heredoc_redirect;
	v->a[43431] = aux_sym_redirected_statement_repeat1;
	v->a[43432] = actions(678);
	v->a[43433] = 17;
	v->a[43434] = anon_sym_LT;
	v->a[43435] = anon_sym_GT;
	v->a[43436] = anon_sym_GT_GT;
	v->a[43437] = anon_sym_LT_AMP;
	v->a[43438] = anon_sym_GT_AMP;
	v->a[43439] = anon_sym_GT_PIPE;
	small_parse_table_2172(v);
}

void	small_parse_table_2172(t_small_parse_table_array *v)
{
	v->a[43440] = anon_sym_LT_AMP_DASH;
	v->a[43441] = anon_sym_GT_AMP_DASH;
	v->a[43442] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[43443] = anon_sym_DOLLAR;
	v->a[43444] = anon_sym_DQUOTE;
	v->a[43445] = sym_raw_string;
	v->a[43446] = sym_number;
	v->a[43447] = anon_sym_DOLLAR_LBRACE;
	v->a[43448] = anon_sym_DOLLAR_LPAREN;
	v->a[43449] = anon_sym_BQUOTE;
	v->a[43450] = sym_word;
	v->a[43451] = 12;
	v->a[43452] = actions(3);
	v->a[43453] = 1;
	v->a[43454] = sym_comment;
	v->a[43455] = actions(602);
	v->a[43456] = 1;
	v->a[43457] = sym_file_descriptor;
	v->a[43458] = actions(1504);
	v->a[43459] = 1;
	small_parse_table_2173(v);
}

void	small_parse_table_2173(t_small_parse_table_array *v)
{
	v->a[43460] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[43461] = actions(1506);
	v->a[43462] = 1;
	v->a[43463] = anon_sym_DOLLAR;
	v->a[43464] = actions(1508);
	v->a[43465] = 1;
	v->a[43466] = anon_sym_DQUOTE;
	v->a[43467] = actions(1510);
	v->a[43468] = 1;
	v->a[43469] = anon_sym_DOLLAR_LBRACE;
	v->a[43470] = actions(1512);
	v->a[43471] = 1;
	v->a[43472] = anon_sym_DOLLAR_LPAREN;
	v->a[43473] = actions(1514);
	v->a[43474] = 1;
	v->a[43475] = anon_sym_BQUOTE;
	v->a[43476] = state(631);
	v->a[43477] = 2;
	v->a[43478] = sym_concatenation;
	v->a[43479] = aux_sym_for_statement_repeat1;
	small_parse_table_2174(v);
}

void	small_parse_table_2174(t_small_parse_table_array *v)
{
	v->a[43480] = actions(1502);
	v->a[43481] = 3;
	v->a[43482] = sym_raw_string;
	v->a[43483] = sym_number;
	v->a[43484] = sym_word;
	v->a[43485] = state(926);
	v->a[43486] = 5;
	v->a[43487] = sym_arithmetic_expansion;
	v->a[43488] = sym_string;
	v->a[43489] = sym_simple_expansion;
	v->a[43490] = sym_expansion;
	v->a[43491] = sym_command_substitution;
	v->a[43492] = actions(604);
	v->a[43493] = 13;
	v->a[43494] = anon_sym_PIPE;
	v->a[43495] = anon_sym_AMP_AMP;
	v->a[43496] = anon_sym_PIPE_PIPE;
	v->a[43497] = anon_sym_LT;
	v->a[43498] = anon_sym_GT;
	v->a[43499] = anon_sym_GT_GT;
	small_parse_table_2175(v);
}

/* EOF small_parse_table_434.c */
