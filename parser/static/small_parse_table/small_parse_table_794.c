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
	v->a[79400] = actions(896);
	v->a[79401] = 1;
	v->a[79402] = anon_sym_DOLLAR;
	v->a[79403] = actions(898);
	v->a[79404] = 1;
	v->a[79405] = anon_sym_DQUOTE;
	v->a[79406] = actions(900);
	v->a[79407] = 1;
	v->a[79408] = anon_sym_DOLLAR_LBRACE;
	v->a[79409] = actions(902);
	v->a[79410] = 1;
	v->a[79411] = anon_sym_DOLLAR_LPAREN;
	v->a[79412] = actions(904);
	v->a[79413] = 1;
	v->a[79414] = anon_sym_BQUOTE;
	v->a[79415] = state(1247);
	v->a[79416] = 2;
	v->a[79417] = sym_concatenation;
	v->a[79418] = aux_sym_for_statement_repeat1;
	v->a[79419] = actions(2260);
	small_parse_table_3971(v);
}

void	small_parse_table_3971(t_small_parse_table_array *v)
{
	v->a[79420] = 3;
	v->a[79421] = sym_raw_string;
	v->a[79422] = sym_number;
	v->a[79423] = sym_word;
	v->a[79424] = state(1543);
	v->a[79425] = 5;
	v->a[79426] = sym_arithmetic_expansion;
	v->a[79427] = sym_string;
	v->a[79428] = sym_simple_expansion;
	v->a[79429] = sym_expansion;
	v->a[79430] = sym_command_substitution;
	v->a[79431] = 10;
	v->a[79432] = actions(3);
	v->a[79433] = 1;
	v->a[79434] = sym_comment;
	v->a[79435] = actions(717);
	v->a[79436] = 1;
	v->a[79437] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[79438] = actions(719);
	v->a[79439] = 1;
	small_parse_table_3972(v);
}

void	small_parse_table_3972(t_small_parse_table_array *v)
{
	v->a[79440] = anon_sym_DOLLAR;
	v->a[79441] = actions(721);
	v->a[79442] = 1;
	v->a[79443] = anon_sym_DQUOTE;
	v->a[79444] = actions(723);
	v->a[79445] = 1;
	v->a[79446] = anon_sym_DOLLAR_LBRACE;
	v->a[79447] = actions(725);
	v->a[79448] = 1;
	v->a[79449] = anon_sym_DOLLAR_LPAREN;
	v->a[79450] = actions(727);
	v->a[79451] = 1;
	v->a[79452] = anon_sym_BQUOTE;
	v->a[79453] = state(219);
	v->a[79454] = 2;
	v->a[79455] = sym_concatenation;
	v->a[79456] = aux_sym_for_statement_repeat1;
	v->a[79457] = actions(715);
	v->a[79458] = 3;
	v->a[79459] = sym_raw_string;
	small_parse_table_3973(v);
}

void	small_parse_table_3973(t_small_parse_table_array *v)
{
	v->a[79460] = sym_number;
	v->a[79461] = sym_word;
	v->a[79462] = state(577);
	v->a[79463] = 5;
	v->a[79464] = sym_arithmetic_expansion;
	v->a[79465] = sym_string;
	v->a[79466] = sym_simple_expansion;
	v->a[79467] = sym_expansion;
	v->a[79468] = sym_command_substitution;
	v->a[79469] = 3;
	v->a[79470] = actions(870);
	v->a[79471] = 1;
	v->a[79472] = sym_comment;
	v->a[79473] = actions(937);
	v->a[79474] = 6;
	v->a[79475] = anon_sym_PIPE;
	v->a[79476] = anon_sym_LT;
	v->a[79477] = anon_sym_GT;
	v->a[79478] = anon_sym_LT_AMP;
	v->a[79479] = anon_sym_GT_AMP;
	small_parse_table_3974(v);
}

void	small_parse_table_3974(t_small_parse_table_array *v)
{
	v->a[79480] = anon_sym_LT_LT;
	v->a[79481] = actions(939);
	v->a[79482] = 10;
	v->a[79483] = sym_file_descriptor;
	v->a[79484] = sym__concat;
	v->a[79485] = anon_sym_AMP_AMP;
	v->a[79486] = anon_sym_PIPE_PIPE;
	v->a[79487] = anon_sym_GT_GT;
	v->a[79488] = anon_sym_GT_PIPE;
	v->a[79489] = anon_sym_LT_AMP_DASH;
	v->a[79490] = anon_sym_GT_AMP_DASH;
	v->a[79491] = anon_sym_LT_LT_DASH;
	v->a[79492] = aux_sym_concatenation_token1;
	v->a[79493] = 10;
	v->a[79494] = actions(3);
	v->a[79495] = 1;
	v->a[79496] = sym_comment;
	v->a[79497] = actions(2587);
	v->a[79498] = 1;
	v->a[79499] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_3975(v);
}

/* EOF small_parse_table_794.c */
