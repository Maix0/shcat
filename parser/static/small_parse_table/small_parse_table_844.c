/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_844.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4220(t_small_parse_table_array *v)
{
	v->a[84400] = anon_sym_DOLLAR_LPAREN;
	v->a[84401] = actions(3276);
	v->a[84402] = 1;
	v->a[84403] = anon_sym_BQUOTE;
	v->a[84404] = actions(3278);
	v->a[84405] = 1;
	v->a[84406] = sym__bare_dollar;
	v->a[84407] = actions(3264);
	v->a[84408] = 5;
	v->a[84409] = aux_sym_concatenation_token1;
	v->a[84410] = sym_raw_string;
	v->a[84411] = sym_number;
	v->a[84412] = sym__comment_word;
	v->a[84413] = sym_word;
	v->a[84414] = state(514);
	v->a[84415] = 5;
	v->a[84416] = sym_arithmetic_expansion;
	v->a[84417] = sym_string;
	v->a[84418] = sym_simple_expansion;
	v->a[84419] = sym_expansion;
	small_parse_table_4221(v);
}

void	small_parse_table_4221(t_small_parse_table_array *v)
{
	v->a[84420] = sym_command_substitution;
	v->a[84421] = 10;
	v->a[84422] = actions(3);
	v->a[84423] = 1;
	v->a[84424] = sym_comment;
	v->a[84425] = actions(345);
	v->a[84426] = 1;
	v->a[84427] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[84428] = actions(347);
	v->a[84429] = 1;
	v->a[84430] = anon_sym_DOLLAR;
	v->a[84431] = actions(349);
	v->a[84432] = 1;
	v->a[84433] = anon_sym_DQUOTE;
	v->a[84434] = actions(353);
	v->a[84435] = 1;
	v->a[84436] = anon_sym_DOLLAR_LBRACE;
	v->a[84437] = actions(355);
	v->a[84438] = 1;
	v->a[84439] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_4222(v);
}

void	small_parse_table_4222(t_small_parse_table_array *v)
{
	v->a[84440] = actions(357);
	v->a[84441] = 1;
	v->a[84442] = anon_sym_BQUOTE;
	v->a[84443] = actions(3196);
	v->a[84444] = 1;
	v->a[84445] = sym__bare_dollar;
	v->a[84446] = actions(3192);
	v->a[84447] = 5;
	v->a[84448] = aux_sym_concatenation_token1;
	v->a[84449] = sym_raw_string;
	v->a[84450] = sym_number;
	v->a[84451] = sym__comment_word;
	v->a[84452] = sym_word;
	v->a[84453] = state(982);
	v->a[84454] = 5;
	v->a[84455] = sym_arithmetic_expansion;
	v->a[84456] = sym_string;
	v->a[84457] = sym_simple_expansion;
	v->a[84458] = sym_expansion;
	v->a[84459] = sym_command_substitution;
	small_parse_table_4223(v);
}

void	small_parse_table_4223(t_small_parse_table_array *v)
{
	v->a[84460] = 6;
	v->a[84461] = actions(3);
	v->a[84462] = 1;
	v->a[84463] = sym_comment;
	v->a[84464] = actions(3280);
	v->a[84465] = 1;
	v->a[84466] = aux_sym_concatenation_token1;
	v->a[84467] = actions(3283);
	v->a[84468] = 1;
	v->a[84469] = sym__concat;
	v->a[84470] = state(1634);
	v->a[84471] = 1;
	v->a[84472] = aux_sym_concatenation_repeat1;
	v->a[84473] = actions(1004);
	v->a[84474] = 2;
	v->a[84475] = sym_file_descriptor;
	v->a[84476] = aux_sym_heredoc_redirect_token1;
	v->a[84477] = actions(999);
	v->a[84478] = 12;
	v->a[84479] = anon_sym_AMP_AMP;
	small_parse_table_4224(v);
}

void	small_parse_table_4224(t_small_parse_table_array *v)
{
	v->a[84480] = anon_sym_PIPE_PIPE;
	v->a[84481] = anon_sym_LT;
	v->a[84482] = anon_sym_GT;
	v->a[84483] = anon_sym_GT_GT;
	v->a[84484] = anon_sym_AMP_GT;
	v->a[84485] = anon_sym_AMP_GT_GT;
	v->a[84486] = anon_sym_LT_AMP;
	v->a[84487] = anon_sym_GT_AMP;
	v->a[84488] = anon_sym_GT_PIPE;
	v->a[84489] = anon_sym_LT_AMP_DASH;
	v->a[84490] = anon_sym_GT_AMP_DASH;
	v->a[84491] = 8;
	v->a[84492] = actions(3);
	v->a[84493] = 1;
	v->a[84494] = sym_comment;
	v->a[84495] = actions(896);
	v->a[84496] = 1;
	v->a[84497] = sym_file_descriptor;
	v->a[84498] = actions(3286);
	v->a[84499] = 1;
	small_parse_table_4225(v);
}

/* EOF small_parse_table_844.c */
