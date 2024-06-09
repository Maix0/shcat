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
	v->a[79400] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[79401] = actions(1481);
	v->a[79402] = 1;
	v->a[79403] = anon_sym_DOLLAR;
	v->a[79404] = actions(1483);
	v->a[79405] = 1;
	v->a[79406] = anon_sym_DQUOTE;
	v->a[79407] = actions(1485);
	v->a[79408] = 1;
	v->a[79409] = aux_sym_number_token1;
	v->a[79410] = actions(1487);
	v->a[79411] = 1;
	v->a[79412] = aux_sym_number_token2;
	v->a[79413] = actions(1489);
	v->a[79414] = 1;
	v->a[79415] = anon_sym_DOLLAR_LBRACE;
	v->a[79416] = actions(1491);
	v->a[79417] = 1;
	v->a[79418] = anon_sym_DOLLAR_LPAREN;
	v->a[79419] = actions(1493);
	small_parse_table_3971(v);
}

void	small_parse_table_3971(t_small_parse_table_array *v)
{
	v->a[79420] = 1;
	v->a[79421] = anon_sym_BQUOTE;
	v->a[79422] = actions(3232);
	v->a[79423] = 1;
	v->a[79424] = sym__bare_dollar;
	v->a[79425] = actions(3228);
	v->a[79426] = 3;
	v->a[79427] = sym_raw_string;
	v->a[79428] = sym__comment_word;
	v->a[79429] = sym_word;
	v->a[79430] = state(891);
	v->a[79431] = 6;
	v->a[79432] = sym_arithmetic_expansion;
	v->a[79433] = sym_string;
	v->a[79434] = sym_number;
	v->a[79435] = sym_simple_expansion;
	v->a[79436] = sym_expansion;
	v->a[79437] = sym_command_substitution;
	v->a[79438] = 12;
	v->a[79439] = actions(3);
	small_parse_table_3972(v);
}

void	small_parse_table_3972(t_small_parse_table_array *v)
{
	v->a[79440] = 1;
	v->a[79441] = sym_comment;
	v->a[79442] = actions(905);
	v->a[79443] = 1;
	v->a[79444] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[79445] = actions(909);
	v->a[79446] = 1;
	v->a[79447] = anon_sym_DQUOTE;
	v->a[79448] = actions(911);
	v->a[79449] = 1;
	v->a[79450] = aux_sym_number_token1;
	v->a[79451] = actions(913);
	v->a[79452] = 1;
	v->a[79453] = aux_sym_number_token2;
	v->a[79454] = actions(915);
	v->a[79455] = 1;
	v->a[79456] = anon_sym_DOLLAR_LBRACE;
	v->a[79457] = actions(917);
	v->a[79458] = 1;
	v->a[79459] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_3973(v);
}

void	small_parse_table_3973(t_small_parse_table_array *v)
{
	v->a[79460] = actions(919);
	v->a[79461] = 1;
	v->a[79462] = anon_sym_BQUOTE;
	v->a[79463] = actions(3077);
	v->a[79464] = 1;
	v->a[79465] = sym__bare_dollar;
	v->a[79466] = actions(3282);
	v->a[79467] = 1;
	v->a[79468] = anon_sym_DOLLAR;
	v->a[79469] = actions(3075);
	v->a[79470] = 3;
	v->a[79471] = sym_raw_string;
	v->a[79472] = sym__comment_word;
	v->a[79473] = sym_word;
	v->a[79474] = state(981);
	v->a[79475] = 6;
	v->a[79476] = sym_arithmetic_expansion;
	v->a[79477] = sym_string;
	v->a[79478] = sym_number;
	v->a[79479] = sym_simple_expansion;
	small_parse_table_3974(v);
}

void	small_parse_table_3974(t_small_parse_table_array *v)
{
	v->a[79480] = sym_expansion;
	v->a[79481] = sym_command_substitution;
	v->a[79482] = 12;
	v->a[79483] = actions(3);
	v->a[79484] = 1;
	v->a[79485] = sym_comment;
	v->a[79486] = actions(933);
	v->a[79487] = 1;
	v->a[79488] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[79489] = actions(937);
	v->a[79490] = 1;
	v->a[79491] = anon_sym_DQUOTE;
	v->a[79492] = actions(939);
	v->a[79493] = 1;
	v->a[79494] = aux_sym_number_token1;
	v->a[79495] = actions(941);
	v->a[79496] = 1;
	v->a[79497] = aux_sym_number_token2;
	v->a[79498] = actions(943);
	v->a[79499] = 1;
	small_parse_table_3975(v);
}

/* EOF small_parse_table_794.c */
