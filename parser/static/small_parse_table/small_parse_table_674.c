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
	v->a[67400] = sym_arithmetic_expansion;
	v->a[67401] = sym_string;
	v->a[67402] = sym_simple_expansion;
	v->a[67403] = sym_expansion;
	v->a[67404] = sym_command_substitution;
	v->a[67405] = 12;
	v->a[67406] = actions(3);
	v->a[67407] = 1;
	v->a[67408] = sym_comment;
	v->a[67409] = actions(2331);
	v->a[67410] = 1;
	v->a[67411] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[67412] = actions(2335);
	v->a[67413] = 1;
	v->a[67414] = anon_sym_DQUOTE;
	v->a[67415] = actions(2337);
	v->a[67416] = 1;
	v->a[67417] = anon_sym_DOLLAR_LBRACE;
	v->a[67418] = actions(2339);
	v->a[67419] = 1;
	small_parse_table_3371(v);
}

void	small_parse_table_3371(t_small_parse_table_array *v)
{
	v->a[67420] = anon_sym_DOLLAR_LPAREN;
	v->a[67421] = actions(2341);
	v->a[67422] = 1;
	v->a[67423] = anon_sym_BQUOTE;
	v->a[67424] = actions(2567);
	v->a[67425] = 1;
	v->a[67426] = anon_sym_DOLLAR;
	v->a[67427] = actions(2641);
	v->a[67428] = 1;
	v->a[67429] = sym__comment_word;
	v->a[67430] = actions(2643);
	v->a[67431] = 1;
	v->a[67432] = sym__empty_value;
	v->a[67433] = state(700);
	v->a[67434] = 1;
	v->a[67435] = sym_concatenation;
	v->a[67436] = actions(2689);
	v->a[67437] = 3;
	v->a[67438] = sym_raw_string;
	v->a[67439] = sym_number;
	small_parse_table_3372(v);
}

void	small_parse_table_3372(t_small_parse_table_array *v)
{
	v->a[67440] = sym_word;
	v->a[67441] = state(437);
	v->a[67442] = 5;
	v->a[67443] = sym_arithmetic_expansion;
	v->a[67444] = sym_string;
	v->a[67445] = sym_simple_expansion;
	v->a[67446] = sym_expansion;
	v->a[67447] = sym_command_substitution;
	v->a[67448] = 10;
	v->a[67449] = actions(3);
	v->a[67450] = 1;
	v->a[67451] = sym_comment;
	v->a[67452] = actions(405);
	v->a[67453] = 1;
	v->a[67454] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[67455] = actions(409);
	v->a[67456] = 1;
	v->a[67457] = anon_sym_DQUOTE;
	v->a[67458] = actions(411);
	v->a[67459] = 1;
	small_parse_table_3373(v);
}

void	small_parse_table_3373(t_small_parse_table_array *v)
{
	v->a[67460] = anon_sym_DOLLAR_LBRACE;
	v->a[67461] = actions(413);
	v->a[67462] = 1;
	v->a[67463] = anon_sym_DOLLAR_LPAREN;
	v->a[67464] = actions(415);
	v->a[67465] = 1;
	v->a[67466] = anon_sym_BQUOTE;
	v->a[67467] = actions(2554);
	v->a[67468] = 1;
	v->a[67469] = sym__bare_dollar;
	v->a[67470] = actions(2691);
	v->a[67471] = 1;
	v->a[67472] = anon_sym_DOLLAR;
	v->a[67473] = actions(2552);
	v->a[67474] = 5;
	v->a[67475] = aux_sym_concatenation_token1;
	v->a[67476] = sym_raw_string;
	v->a[67477] = sym_number;
	v->a[67478] = sym__comment_word;
	v->a[67479] = sym_word;
	small_parse_table_3374(v);
}

void	small_parse_table_3374(t_small_parse_table_array *v)
{
	v->a[67480] = state(565);
	v->a[67481] = 5;
	v->a[67482] = sym_arithmetic_expansion;
	v->a[67483] = sym_string;
	v->a[67484] = sym_simple_expansion;
	v->a[67485] = sym_expansion;
	v->a[67486] = sym_command_substitution;
	v->a[67487] = 10;
	v->a[67488] = actions(3);
	v->a[67489] = 1;
	v->a[67490] = sym_comment;
	v->a[67491] = actions(25);
	v->a[67492] = 1;
	v->a[67493] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[67494] = actions(27);
	v->a[67495] = 1;
	v->a[67496] = anon_sym_DOLLAR;
	v->a[67497] = actions(29);
	v->a[67498] = 1;
	v->a[67499] = anon_sym_DQUOTE;
	small_parse_table_3375(v);
}

/* EOF small_parse_table_674.c */
