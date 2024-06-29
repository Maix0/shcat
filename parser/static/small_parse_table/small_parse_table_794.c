/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_794.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3970(t_small_parse_table_array *v)
{
	v->a[79400] = sym_word;
	v->a[79401] = state(1450);
	v->a[79402] = 5;
	v->a[79403] = sym_arithmetic_expansion;
	v->a[79404] = sym_string;
	v->a[79405] = sym_simple_expansion;
	v->a[79406] = sym_expansion;
	v->a[79407] = sym_command_substitution;
	v->a[79408] = 12;
	v->a[79409] = actions(3);
	v->a[79410] = 1;
	v->a[79411] = sym_comment;
	v->a[79412] = actions(2719);
	v->a[79413] = 1;
	v->a[79414] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[79415] = actions(2721);
	v->a[79416] = 1;
	v->a[79417] = anon_sym_DOLLAR;
	v->a[79418] = actions(2723);
	v->a[79419] = 1;
	small_parse_table_3971(v);
}

void	small_parse_table_3971(t_small_parse_table_array *v)
{
	v->a[79420] = anon_sym_DQUOTE;
	v->a[79421] = actions(2725);
	v->a[79422] = 1;
	v->a[79423] = anon_sym_DOLLAR_LBRACE;
	v->a[79424] = actions(2727);
	v->a[79425] = 1;
	v->a[79426] = anon_sym_DOLLAR_LPAREN;
	v->a[79427] = actions(2729);
	v->a[79428] = 1;
	v->a[79429] = anon_sym_BQUOTE;
	v->a[79430] = actions(2731);
	v->a[79431] = 1;
	v->a[79432] = sym__comment_word;
	v->a[79433] = actions(2733);
	v->a[79434] = 1;
	v->a[79435] = sym__empty_value;
	v->a[79436] = state(697);
	v->a[79437] = 1;
	v->a[79438] = sym_concatenation;
	v->a[79439] = actions(2933);
	small_parse_table_3972(v);
}

void	small_parse_table_3972(t_small_parse_table_array *v)
{
	v->a[79440] = 3;
	v->a[79441] = sym_raw_string;
	v->a[79442] = sym_number;
	v->a[79443] = sym_word;
	v->a[79444] = state(799);
	v->a[79445] = 5;
	v->a[79446] = sym_arithmetic_expansion;
	v->a[79447] = sym_string;
	v->a[79448] = sym_simple_expansion;
	v->a[79449] = sym_expansion;
	v->a[79450] = sym_command_substitution;
	v->a[79451] = 10;
	v->a[79452] = actions(3);
	v->a[79453] = 1;
	v->a[79454] = sym_comment;
	v->a[79455] = actions(477);
	v->a[79456] = 1;
	v->a[79457] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[79458] = actions(479);
	v->a[79459] = 1;
	small_parse_table_3973(v);
}

void	small_parse_table_3973(t_small_parse_table_array *v)
{
	v->a[79460] = anon_sym_DOLLAR;
	v->a[79461] = actions(481);
	v->a[79462] = 1;
	v->a[79463] = anon_sym_DQUOTE;
	v->a[79464] = actions(483);
	v->a[79465] = 1;
	v->a[79466] = anon_sym_DOLLAR_LBRACE;
	v->a[79467] = actions(485);
	v->a[79468] = 1;
	v->a[79469] = anon_sym_DOLLAR_LPAREN;
	v->a[79470] = actions(487);
	v->a[79471] = 1;
	v->a[79472] = anon_sym_BQUOTE;
	v->a[79473] = actions(2693);
	v->a[79474] = 1;
	v->a[79475] = sym__bare_dollar;
	v->a[79476] = actions(2689);
	v->a[79477] = 5;
	v->a[79478] = aux_sym_concatenation_token1;
	v->a[79479] = sym_raw_string;
	small_parse_table_3974(v);
}

void	small_parse_table_3974(t_small_parse_table_array *v)
{
	v->a[79480] = sym_number;
	v->a[79481] = sym__comment_word;
	v->a[79482] = sym_word;
	v->a[79483] = state(551);
	v->a[79484] = 5;
	v->a[79485] = sym_arithmetic_expansion;
	v->a[79486] = sym_string;
	v->a[79487] = sym_simple_expansion;
	v->a[79488] = sym_expansion;
	v->a[79489] = sym_command_substitution;
	v->a[79490] = 10;
	v->a[79491] = actions(3);
	v->a[79492] = 1;
	v->a[79493] = sym_comment;
	v->a[79494] = actions(461);
	v->a[79495] = 1;
	v->a[79496] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[79497] = actions(465);
	v->a[79498] = 1;
	v->a[79499] = anon_sym_DQUOTE;
	small_parse_table_3975(v);
}

/* EOF small_parse_table_794.c */
