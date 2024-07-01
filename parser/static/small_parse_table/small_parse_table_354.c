/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_354.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1770(t_small_parse_table_array *v)
{
	v->a[35400] = 2;
	v->a[35401] = anon_sym_LT_AMP_DASH;
	v->a[35402] = anon_sym_GT_AMP_DASH;
	v->a[35403] = actions(33);
	v->a[35404] = 3;
	v->a[35405] = sym_raw_string;
	v->a[35406] = sym_number;
	v->a[35407] = sym_word;
	v->a[35408] = state(323);
	v->a[35409] = 5;
	v->a[35410] = sym_arithmetic_expansion;
	v->a[35411] = sym_string;
	v->a[35412] = sym_simple_expansion;
	v->a[35413] = sym_expansion;
	v->a[35414] = sym_command_substitution;
	v->a[35415] = actions(1252);
	v->a[35416] = 6;
	v->a[35417] = anon_sym_LT;
	v->a[35418] = anon_sym_GT;
	v->a[35419] = anon_sym_GT_GT;
	small_parse_table_1771(v);
}

void	small_parse_table_1771(t_small_parse_table_array *v)
{
	v->a[35420] = anon_sym_LT_AMP;
	v->a[35421] = anon_sym_GT_AMP;
	v->a[35422] = anon_sym_GT_PIPE;
	v->a[35423] = 21;
	v->a[35424] = actions(3);
	v->a[35425] = 1;
	v->a[35426] = sym_comment;
	v->a[35427] = actions(17);
	v->a[35428] = 1;
	v->a[35429] = anon_sym_LPAREN;
	v->a[35430] = actions(59);
	v->a[35431] = 1;
	v->a[35432] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[35433] = actions(61);
	v->a[35434] = 1;
	v->a[35435] = anon_sym_DOLLAR;
	v->a[35436] = actions(63);
	v->a[35437] = 1;
	v->a[35438] = anon_sym_DQUOTE;
	v->a[35439] = actions(67);
	small_parse_table_1772(v);
}

void	small_parse_table_1772(t_small_parse_table_array *v)
{
	v->a[35440] = 1;
	v->a[35441] = anon_sym_DOLLAR_LBRACE;
	v->a[35442] = actions(69);
	v->a[35443] = 1;
	v->a[35444] = anon_sym_DOLLAR_LPAREN;
	v->a[35445] = actions(71);
	v->a[35446] = 1;
	v->a[35447] = anon_sym_BQUOTE;
	v->a[35448] = actions(375);
	v->a[35449] = 1;
	v->a[35450] = sym_variable_name;
	v->a[35451] = actions(1256);
	v->a[35452] = 1;
	v->a[35453] = sym_file_descriptor;
	v->a[35454] = state(308);
	v->a[35455] = 1;
	v->a[35456] = sym_command_name;
	v->a[35457] = state(650);
	v->a[35458] = 1;
	v->a[35459] = sym_concatenation;
	small_parse_table_1773(v);
}

void	small_parse_table_1773(t_small_parse_table_array *v)
{
	v->a[35460] = state(669);
	v->a[35461] = 1;
	v->a[35462] = aux_sym_command_repeat1;
	v->a[35463] = state(714);
	v->a[35464] = 1;
	v->a[35465] = sym_variable_assignment;
	v->a[35466] = state(1216);
	v->a[35467] = 1;
	v->a[35468] = sym_subshell;
	v->a[35469] = state(1220);
	v->a[35470] = 1;
	v->a[35471] = sym_command;
	v->a[35472] = state(1385);
	v->a[35473] = 1;
	v->a[35474] = sym_file_redirect;
	v->a[35475] = actions(1254);
	v->a[35476] = 2;
	v->a[35477] = anon_sym_LT_AMP_DASH;
	v->a[35478] = anon_sym_GT_AMP_DASH;
	v->a[35479] = actions(371);
	small_parse_table_1774(v);
}

void	small_parse_table_1774(t_small_parse_table_array *v)
{
	v->a[35480] = 3;
	v->a[35481] = sym_raw_string;
	v->a[35482] = sym_number;
	v->a[35483] = sym_word;
	v->a[35484] = state(711);
	v->a[35485] = 5;
	v->a[35486] = sym_arithmetic_expansion;
	v->a[35487] = sym_string;
	v->a[35488] = sym_simple_expansion;
	v->a[35489] = sym_expansion;
	v->a[35490] = sym_command_substitution;
	v->a[35491] = actions(1252);
	v->a[35492] = 6;
	v->a[35493] = anon_sym_LT;
	v->a[35494] = anon_sym_GT;
	v->a[35495] = anon_sym_GT_GT;
	v->a[35496] = anon_sym_LT_AMP;
	v->a[35497] = anon_sym_GT_AMP;
	v->a[35498] = anon_sym_GT_PIPE;
	v->a[35499] = 6;
	small_parse_table_1775(v);
}

/* EOF small_parse_table_354.c */
