/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_674.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3370(t_small_parse_table_array *v)
{
	v->a[67400] = aux_sym_concatenation_token1;
	v->a[67401] = sym_raw_string;
	v->a[67402] = sym_number;
	v->a[67403] = sym__comment_word;
	v->a[67404] = sym_word;
	v->a[67405] = state(589);
	v->a[67406] = 5;
	v->a[67407] = sym_arithmetic_expansion;
	v->a[67408] = sym_string;
	v->a[67409] = sym_simple_expansion;
	v->a[67410] = sym_expansion;
	v->a[67411] = sym_command_substitution;
	v->a[67412] = 12;
	v->a[67413] = actions(3);
	v->a[67414] = 1;
	v->a[67415] = sym_comment;
	v->a[67416] = actions(2444);
	v->a[67417] = 1;
	v->a[67418] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[67419] = actions(2448);
	small_parse_table_3371(v);
}

void	small_parse_table_3371(t_small_parse_table_array *v)
{
	v->a[67420] = 1;
	v->a[67421] = anon_sym_DQUOTE;
	v->a[67422] = actions(2450);
	v->a[67423] = 1;
	v->a[67424] = anon_sym_DOLLAR_LBRACE;
	v->a[67425] = actions(2452);
	v->a[67426] = 1;
	v->a[67427] = anon_sym_DOLLAR_LPAREN;
	v->a[67428] = actions(2454);
	v->a[67429] = 1;
	v->a[67430] = anon_sym_BQUOTE;
	v->a[67431] = actions(2553);
	v->a[67432] = 1;
	v->a[67433] = anon_sym_DOLLAR;
	v->a[67434] = actions(2596);
	v->a[67435] = 1;
	v->a[67436] = sym__comment_word;
	v->a[67437] = actions(2598);
	v->a[67438] = 1;
	v->a[67439] = sym__empty_value;
	small_parse_table_3372(v);
}

void	small_parse_table_3372(t_small_parse_table_array *v)
{
	v->a[67440] = state(664);
	v->a[67441] = 1;
	v->a[67442] = sym_concatenation;
	v->a[67443] = actions(2594);
	v->a[67444] = 3;
	v->a[67445] = sym_raw_string;
	v->a[67446] = sym_number;
	v->a[67447] = sym_word;
	v->a[67448] = state(712);
	v->a[67449] = 5;
	v->a[67450] = sym_arithmetic_expansion;
	v->a[67451] = sym_string;
	v->a[67452] = sym_simple_expansion;
	v->a[67453] = sym_expansion;
	v->a[67454] = sym_command_substitution;
	v->a[67455] = 8;
	v->a[67456] = actions(3);
	v->a[67457] = 1;
	v->a[67458] = sym_comment;
	v->a[67459] = actions(692);
	small_parse_table_3373(v);
}

void	small_parse_table_3373(t_small_parse_table_array *v)
{
	v->a[67460] = 1;
	v->a[67461] = anon_sym_PIPE;
	v->a[67462] = actions(2602);
	v->a[67463] = 1;
	v->a[67464] = aux_sym_heredoc_redirect_token1;
	v->a[67465] = actions(2604);
	v->a[67466] = 1;
	v->a[67467] = sym_file_descriptor;
	v->a[67468] = actions(700);
	v->a[67469] = 2;
	v->a[67470] = anon_sym_LT_LT;
	v->a[67471] = anon_sym_LT_LT_DASH;
	v->a[67472] = actions(1416);
	v->a[67473] = 2;
	v->a[67474] = anon_sym_AMP_AMP;
	v->a[67475] = anon_sym_PIPE_PIPE;
	v->a[67476] = state(1354);
	v->a[67477] = 3;
	v->a[67478] = sym_file_redirect;
	v->a[67479] = sym_heredoc_redirect;
	small_parse_table_3374(v);
}

void	small_parse_table_3374(t_small_parse_table_array *v)
{
	v->a[67480] = aux_sym_redirected_statement_repeat1;
	v->a[67481] = actions(2600);
	v->a[67482] = 7;
	v->a[67483] = anon_sym_LT;
	v->a[67484] = anon_sym_GT;
	v->a[67485] = anon_sym_GT_GT;
	v->a[67486] = anon_sym_LT_AMP;
	v->a[67487] = anon_sym_GT_AMP;
	v->a[67488] = anon_sym_GT_PIPE;
	v->a[67489] = anon_sym_LT_GT;
	v->a[67490] = 12;
	v->a[67491] = actions(3);
	v->a[67492] = 1;
	v->a[67493] = sym_comment;
	v->a[67494] = actions(1067);
	v->a[67495] = 1;
	v->a[67496] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[67497] = actions(1069);
	v->a[67498] = 1;
	v->a[67499] = anon_sym_DOLLAR;
	small_parse_table_3375(v);
}

/* EOF small_parse_table_674.c */
