/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1644.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_8220(t_small_parse_table_array *v)
{
	v->a[164400] = anon_sym_AMP;
	v->a[164401] = actions(7430);
	v->a[164402] = 1;
	v->a[164403] = anon_sym_STAR_STAR;
	v->a[164404] = actions(7434);
	v->a[164405] = 1;
	v->a[164406] = anon_sym_EQ_TILDE;
	v->a[164407] = actions(7436);
	v->a[164408] = 1;
	v->a[164409] = anon_sym_QMARK;
	v->a[164410] = actions(7438);
	v->a[164411] = 1;
	v->a[164412] = sym_test_operator;
	v->a[164413] = actions(7473);
	v->a[164414] = 1;
	v->a[164415] = anon_sym_RPAREN;
	v->a[164416] = actions(7404);
	v->a[164417] = 2;
	v->a[164418] = anon_sym_PLUS_PLUS;
	v->a[164419] = anon_sym_DASH_DASH;
	small_parse_table_8221(v);
}

void	small_parse_table_8221(t_small_parse_table_array *v)
{
	v->a[164420] = actions(7418);
	v->a[164421] = 2;
	v->a[164422] = anon_sym_EQ_EQ;
	v->a[164423] = anon_sym_BANG_EQ;
	v->a[164424] = actions(7420);
	v->a[164425] = 2;
	v->a[164426] = anon_sym_LT;
	v->a[164427] = anon_sym_GT;
	v->a[164428] = actions(7422);
	v->a[164429] = 2;
	v->a[164430] = anon_sym_LT_EQ;
	v->a[164431] = anon_sym_GT_EQ;
	v->a[164432] = actions(7424);
	v->a[164433] = 2;
	v->a[164434] = anon_sym_LT_LT;
	v->a[164435] = anon_sym_GT_GT;
	v->a[164436] = actions(7426);
	v->a[164437] = 2;
	v->a[164438] = anon_sym_PLUS;
	v->a[164439] = anon_sym_DASH;
	small_parse_table_8222(v);
}

void	small_parse_table_8222(t_small_parse_table_array *v)
{
	v->a[164440] = actions(7428);
	v->a[164441] = 3;
	v->a[164442] = anon_sym_STAR;
	v->a[164443] = anon_sym_SLASH;
	v->a[164444] = anon_sym_PERCENT;
	v->a[164445] = actions(7406);
	v->a[164446] = 11;
	v->a[164447] = anon_sym_PLUS_EQ;
	v->a[164448] = anon_sym_DASH_EQ;
	v->a[164449] = anon_sym_STAR_EQ;
	v->a[164450] = anon_sym_SLASH_EQ;
	v->a[164451] = anon_sym_PERCENT_EQ;
	v->a[164452] = anon_sym_STAR_STAR_EQ;
	v->a[164453] = anon_sym_LT_LT_EQ;
	v->a[164454] = anon_sym_GT_GT_EQ;
	v->a[164455] = anon_sym_AMP_EQ;
	v->a[164456] = anon_sym_CARET_EQ;
	v->a[164457] = anon_sym_PIPE_EQ;
	v->a[164458] = 6;
	v->a[164459] = actions(3);
	small_parse_table_8223(v);
}

void	small_parse_table_8223(t_small_parse_table_array *v)
{
	v->a[164460] = 1;
	v->a[164461] = sym_comment;
	v->a[164462] = actions(7475);
	v->a[164463] = 1;
	v->a[164464] = aux_sym_concatenation_token1;
	v->a[164465] = actions(7477);
	v->a[164466] = 1;
	v->a[164467] = sym__concat;
	v->a[164468] = state(3120);
	v->a[164469] = 1;
	v->a[164470] = aux_sym_concatenation_repeat1;
	v->a[164471] = actions(5395);
	v->a[164472] = 4;
	v->a[164473] = sym_file_descriptor;
	v->a[164474] = sym_test_operator;
	v->a[164475] = sym__brace_start;
	v->a[164476] = aux_sym_heredoc_redirect_token1;
	v->a[164477] = actions(5393);
	v->a[164478] = 30;
	v->a[164479] = anon_sym_LPAREN_LPAREN;
	small_parse_table_8224(v);
}

void	small_parse_table_8224(t_small_parse_table_array *v)
{
	v->a[164480] = anon_sym_PIPE_PIPE;
	v->a[164481] = anon_sym_AMP_AMP;
	v->a[164482] = anon_sym_LT;
	v->a[164483] = anon_sym_GT;
	v->a[164484] = anon_sym_GT_GT;
	v->a[164485] = anon_sym_AMP_GT;
	v->a[164486] = anon_sym_AMP_GT_GT;
	v->a[164487] = anon_sym_LT_AMP;
	v->a[164488] = anon_sym_GT_AMP;
	v->a[164489] = anon_sym_GT_PIPE;
	v->a[164490] = anon_sym_LT_AMP_DASH;
	v->a[164491] = anon_sym_GT_AMP_DASH;
	v->a[164492] = anon_sym_LT_LT_LT;
	v->a[164493] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[164494] = anon_sym_DOLLAR_LBRACK;
	v->a[164495] = anon_sym_DOLLAR;
	v->a[164496] = sym__special_character;
	v->a[164497] = anon_sym_DQUOTE;
	v->a[164498] = sym_raw_string;
	v->a[164499] = sym_ansi_c_string;
	small_parse_table_8225(v);
}

/* EOF small_parse_table_1644.c */
