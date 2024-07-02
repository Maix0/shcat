/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_684.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3420(t_small_parse_table_array *v)
{
	v->a[68400] = 1;
	v->a[68401] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[68402] = actions(2362);
	v->a[68403] = 1;
	v->a[68404] = anon_sym_DQUOTE;
	v->a[68405] = actions(2364);
	v->a[68406] = 1;
	v->a[68407] = anon_sym_DOLLAR_LBRACE;
	v->a[68408] = actions(2366);
	v->a[68409] = 1;
	v->a[68410] = anon_sym_DOLLAR_LPAREN;
	v->a[68411] = actions(2368);
	v->a[68412] = 1;
	v->a[68413] = anon_sym_BQUOTE;
	v->a[68414] = actions(2370);
	v->a[68415] = 1;
	v->a[68416] = sym__bare_dollar;
	v->a[68417] = actions(2705);
	v->a[68418] = 1;
	v->a[68419] = anon_sym_DOLLAR;
	small_parse_table_3421(v);
}

void	small_parse_table_3421(t_small_parse_table_array *v)
{
	v->a[68420] = actions(2356);
	v->a[68421] = 5;
	v->a[68422] = aux_sym_concatenation_token1;
	v->a[68423] = sym_raw_string;
	v->a[68424] = sym_number;
	v->a[68425] = sym__comment_word;
	v->a[68426] = sym_word;
	v->a[68427] = state(1120);
	v->a[68428] = 5;
	v->a[68429] = sym_arithmetic_expansion;
	v->a[68430] = sym_string;
	v->a[68431] = sym_simple_expansion;
	v->a[68432] = sym_expansion;
	v->a[68433] = sym_command_substitution;
	v->a[68434] = 12;
	v->a[68435] = actions(3);
	v->a[68436] = 1;
	v->a[68437] = sym_comment;
	v->a[68438] = actions(2336);
	v->a[68439] = 1;
	small_parse_table_3422(v);
}

void	small_parse_table_3422(t_small_parse_table_array *v)
{
	v->a[68440] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[68441] = actions(2338);
	v->a[68442] = 1;
	v->a[68443] = anon_sym_DOLLAR;
	v->a[68444] = actions(2340);
	v->a[68445] = 1;
	v->a[68446] = anon_sym_DQUOTE;
	v->a[68447] = actions(2342);
	v->a[68448] = 1;
	v->a[68449] = anon_sym_DOLLAR_LBRACE;
	v->a[68450] = actions(2344);
	v->a[68451] = 1;
	v->a[68452] = anon_sym_DOLLAR_LPAREN;
	v->a[68453] = actions(2346);
	v->a[68454] = 1;
	v->a[68455] = anon_sym_BQUOTE;
	v->a[68456] = actions(2516);
	v->a[68457] = 1;
	v->a[68458] = sym__comment_word;
	v->a[68459] = actions(2518);
	small_parse_table_3423(v);
}

void	small_parse_table_3423(t_small_parse_table_array *v)
{
	v->a[68460] = 1;
	v->a[68461] = sym__empty_value;
	v->a[68462] = state(1025);
	v->a[68463] = 1;
	v->a[68464] = sym_concatenation;
	v->a[68465] = actions(2707);
	v->a[68466] = 3;
	v->a[68467] = sym_raw_string;
	v->a[68468] = sym_number;
	v->a[68469] = sym_word;
	v->a[68470] = state(1065);
	v->a[68471] = 5;
	v->a[68472] = sym_arithmetic_expansion;
	v->a[68473] = sym_string;
	v->a[68474] = sym_simple_expansion;
	v->a[68475] = sym_expansion;
	v->a[68476] = sym_command_substitution;
	v->a[68477] = 10;
	v->a[68478] = actions(3);
	v->a[68479] = 1;
	small_parse_table_3424(v);
}

void	small_parse_table_3424(t_small_parse_table_array *v)
{
	v->a[68480] = sym_comment;
	v->a[68481] = actions(1067);
	v->a[68482] = 1;
	v->a[68483] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[68484] = actions(1071);
	v->a[68485] = 1;
	v->a[68486] = anon_sym_DQUOTE;
	v->a[68487] = actions(1073);
	v->a[68488] = 1;
	v->a[68489] = anon_sym_DOLLAR_LBRACE;
	v->a[68490] = actions(1075);
	v->a[68491] = 1;
	v->a[68492] = anon_sym_DOLLAR_LPAREN;
	v->a[68493] = actions(1077);
	v->a[68494] = 1;
	v->a[68495] = anon_sym_BQUOTE;
	v->a[68496] = actions(2551);
	v->a[68497] = 1;
	v->a[68498] = sym__bare_dollar;
	v->a[68499] = actions(2709);
	small_parse_table_3425(v);
}

/* EOF small_parse_table_684.c */
