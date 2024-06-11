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
	v->a[35400] = anon_sym_LT_EQ;
	v->a[35401] = anon_sym_GT_EQ;
	v->a[35402] = anon_sym_QMARK;
	v->a[35403] = anon_sym_PLUS_PLUS2;
	v->a[35404] = anon_sym_DASH_DASH2;
	v->a[35405] = 17;
	v->a[35406] = actions(1094);
	v->a[35407] = 1;
	v->a[35408] = sym_comment;
	v->a[35409] = actions(1108);
	v->a[35410] = 1;
	v->a[35411] = anon_sym_PIPE;
	v->a[35412] = actions(1110);
	v->a[35413] = 1;
	v->a[35414] = anon_sym_AMP_AMP;
	v->a[35415] = actions(1112);
	v->a[35416] = 1;
	v->a[35417] = anon_sym_CARET;
	v->a[35418] = actions(1114);
	v->a[35419] = 1;
	small_parse_table_1771(v);
}

void	small_parse_table_1771(t_small_parse_table_array *v)
{
	v->a[35420] = anon_sym_AMP;
	v->a[35421] = actions(1126);
	v->a[35422] = 1;
	v->a[35423] = anon_sym_PIPE_PIPE;
	v->a[35424] = actions(1128);
	v->a[35425] = 1;
	v->a[35426] = anon_sym_QMARK;
	v->a[35427] = actions(1155);
	v->a[35428] = 1;
	v->a[35429] = anon_sym_EQ;
	v->a[35430] = actions(1336);
	v->a[35431] = 1;
	v->a[35432] = anon_sym_RPAREN_RPAREN;
	v->a[35433] = actions(1082);
	v->a[35434] = 2;
	v->a[35435] = anon_sym_LT;
	v->a[35436] = anon_sym_GT;
	v->a[35437] = actions(1084);
	v->a[35438] = 2;
	v->a[35439] = anon_sym_GT_GT;
	small_parse_table_1772(v);
}

void	small_parse_table_1772(t_small_parse_table_array *v)
{
	v->a[35440] = anon_sym_LT_LT;
	v->a[35441] = actions(1086);
	v->a[35442] = 2;
	v->a[35443] = anon_sym_LT_EQ;
	v->a[35444] = anon_sym_GT_EQ;
	v->a[35445] = actions(1088);
	v->a[35446] = 2;
	v->a[35447] = anon_sym_PLUS;
	v->a[35448] = anon_sym_DASH;
	v->a[35449] = actions(1092);
	v->a[35450] = 2;
	v->a[35451] = anon_sym_PLUS_PLUS2;
	v->a[35452] = anon_sym_DASH_DASH2;
	v->a[35453] = actions(1116);
	v->a[35454] = 2;
	v->a[35455] = anon_sym_EQ_EQ;
	v->a[35456] = anon_sym_BANG_EQ;
	v->a[35457] = actions(1090);
	v->a[35458] = 3;
	v->a[35459] = anon_sym_STAR;
	small_parse_table_1773(v);
}

void	small_parse_table_1773(t_small_parse_table_array *v)
{
	v->a[35460] = anon_sym_SLASH;
	v->a[35461] = anon_sym_PERCENT;
	v->a[35462] = actions(1288);
	v->a[35463] = 10;
	v->a[35464] = anon_sym_PLUS_EQ;
	v->a[35465] = anon_sym_DASH_EQ;
	v->a[35466] = anon_sym_STAR_EQ;
	v->a[35467] = anon_sym_SLASH_EQ;
	v->a[35468] = anon_sym_PERCENT_EQ;
	v->a[35469] = anon_sym_LT_LT_EQ;
	v->a[35470] = anon_sym_GT_GT_EQ;
	v->a[35471] = anon_sym_AMP_EQ;
	v->a[35472] = anon_sym_CARET_EQ;
	v->a[35473] = anon_sym_PIPE_EQ;
	v->a[35474] = 5;
	v->a[35475] = actions(3);
	v->a[35476] = 1;
	v->a[35477] = sym_comment;
	v->a[35478] = actions(543);
	v->a[35479] = 2;
	small_parse_table_1774(v);
}

void	small_parse_table_1774(t_small_parse_table_array *v)
{
	v->a[35480] = sym_file_descriptor;
	v->a[35481] = sym_variable_name;
	v->a[35482] = state(484);
	v->a[35483] = 2;
	v->a[35484] = sym_concatenation;
	v->a[35485] = aux_sym_for_statement_repeat1;
	v->a[35486] = state(950);
	v->a[35487] = 5;
	v->a[35488] = sym_arithmetic_expansion;
	v->a[35489] = sym_string;
	v->a[35490] = sym_simple_expansion;
	v->a[35491] = sym_expansion;
	v->a[35492] = sym_command_substitution;
	v->a[35493] = actions(541);
	v->a[35494] = 24;
	v->a[35495] = anon_sym_PIPE;
	v->a[35496] = anon_sym_AMP_AMP;
	v->a[35497] = anon_sym_PIPE_PIPE;
	v->a[35498] = anon_sym_LT;
	v->a[35499] = anon_sym_GT;
	small_parse_table_1775(v);
}

/* EOF small_parse_table_354.c */
