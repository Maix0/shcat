/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_774.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3870(t_small_parse_table_array *v)
{
	v->a[77400] = sym_test_operator;
	v->a[77401] = sym__bare_dollar;
	v->a[77402] = sym__brace_start;
	v->a[77403] = anon_sym_LPAREN;
	v->a[77404] = anon_sym_PIPE_AMP;
	v->a[77405] = anon_sym_AMP_AMP;
	v->a[77406] = anon_sym_PIPE_PIPE;
	v->a[77407] = anon_sym_GT_GT;
	v->a[77408] = anon_sym_AMP_GT_GT;
	v->a[77409] = anon_sym_GT_PIPE;
	v->a[77410] = anon_sym_LT_AMP_DASH;
	v->a[77411] = anon_sym_GT_AMP_DASH;
	v->a[77412] = anon_sym_LT_LT_DASH;
	v->a[77413] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77414] = sym__special_character;
	v->a[77415] = anon_sym_DQUOTE;
	v->a[77416] = sym_raw_string;
	v->a[77417] = anon_sym_DOLLAR_LBRACE;
	v->a[77418] = anon_sym_BQUOTE;
	v->a[77419] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_3871(v);
}

void	small_parse_table_3871(t_small_parse_table_array *v)
{
	v->a[77420] = 3;
	v->a[77421] = actions(57);
	v->a[77422] = 1;
	v->a[77423] = sym_comment;
	v->a[77424] = actions(2749);
	v->a[77425] = 12;
	v->a[77426] = anon_sym_PIPE;
	v->a[77427] = anon_sym_LT;
	v->a[77428] = anon_sym_GT;
	v->a[77429] = anon_sym_AMP_GT;
	v->a[77430] = anon_sym_LT_AMP;
	v->a[77431] = anon_sym_GT_AMP;
	v->a[77432] = anon_sym_LT_LT;
	v->a[77433] = anon_sym_DOLLAR;
	v->a[77434] = aux_sym_number_token1;
	v->a[77435] = aux_sym_number_token2;
	v->a[77436] = anon_sym_DOLLAR_LPAREN;
	v->a[77437] = sym_word;
	v->a[77438] = actions(2754);
	v->a[77439] = 21;
	small_parse_table_3872(v);
}

void	small_parse_table_3872(t_small_parse_table_array *v)
{
	v->a[77440] = sym_file_descriptor;
	v->a[77441] = sym_test_operator;
	v->a[77442] = sym__bare_dollar;
	v->a[77443] = sym__brace_start;
	v->a[77444] = anon_sym_LPAREN;
	v->a[77445] = anon_sym_PIPE_AMP;
	v->a[77446] = anon_sym_AMP_AMP;
	v->a[77447] = anon_sym_PIPE_PIPE;
	v->a[77448] = anon_sym_GT_GT;
	v->a[77449] = anon_sym_AMP_GT_GT;
	v->a[77450] = anon_sym_GT_PIPE;
	v->a[77451] = anon_sym_LT_AMP_DASH;
	v->a[77452] = anon_sym_GT_AMP_DASH;
	v->a[77453] = anon_sym_LT_LT_DASH;
	v->a[77454] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77455] = sym__special_character;
	v->a[77456] = anon_sym_DQUOTE;
	v->a[77457] = sym_raw_string;
	v->a[77458] = anon_sym_DOLLAR_LBRACE;
	v->a[77459] = anon_sym_BQUOTE;
	small_parse_table_3873(v);
}

void	small_parse_table_3873(t_small_parse_table_array *v)
{
	v->a[77460] = anon_sym_DOLLAR_BQUOTE;
	v->a[77461] = 7;
	v->a[77462] = actions(57);
	v->a[77463] = 1;
	v->a[77464] = sym_comment;
	v->a[77465] = actions(4480);
	v->a[77466] = 2;
	v->a[77467] = anon_sym_GT_GT;
	v->a[77468] = anon_sym_LT_LT;
	v->a[77469] = actions(4490);
	v->a[77470] = 2;
	v->a[77471] = anon_sym_PLUS;
	v->a[77472] = anon_sym_DASH;
	v->a[77473] = actions(4494);
	v->a[77474] = 2;
	v->a[77475] = anon_sym_PLUS_PLUS2;
	v->a[77476] = anon_sym_DASH_DASH2;
	v->a[77477] = actions(4492);
	v->a[77478] = 3;
	v->a[77479] = anon_sym_STAR;
	small_parse_table_3874(v);
}

void	small_parse_table_3874(t_small_parse_table_array *v)
{
	v->a[77480] = anon_sym_SLASH;
	v->a[77481] = anon_sym_PERCENT;
	v->a[77482] = actions(4175);
	v->a[77483] = 6;
	v->a[77484] = anon_sym_PIPE;
	v->a[77485] = anon_sym_EQ;
	v->a[77486] = anon_sym_LT;
	v->a[77487] = anon_sym_GT;
	v->a[77488] = anon_sym_CARET;
	v->a[77489] = anon_sym_AMP;
	v->a[77490] = actions(4177);
	v->a[77491] = 18;
	v->a[77492] = anon_sym_RPAREN;
	v->a[77493] = anon_sym_AMP_AMP;
	v->a[77494] = anon_sym_PIPE_PIPE;
	v->a[77495] = anon_sym_PLUS_EQ;
	v->a[77496] = anon_sym_DASH_EQ;
	v->a[77497] = anon_sym_STAR_EQ;
	v->a[77498] = anon_sym_SLASH_EQ;
	v->a[77499] = anon_sym_PERCENT_EQ;
	small_parse_table_3875(v);
}

/* EOF small_parse_table_774.c */
