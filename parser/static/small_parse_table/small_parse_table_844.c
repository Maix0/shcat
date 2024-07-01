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
	v->a[84400] = anon_sym_DOLLAR;
	v->a[84401] = anon_sym_POUND;
	v->a[84402] = anon_sym_AT;
	v->a[84403] = anon_sym_0;
	v->a[84404] = anon_sym__;
	v->a[84405] = 6;
	v->a[84406] = actions(3);
	v->a[84407] = 1;
	v->a[84408] = sym_comment;
	v->a[84409] = actions(3191);
	v->a[84410] = 1;
	v->a[84411] = sym_string_content;
	v->a[84412] = actions(3195);
	v->a[84413] = 1;
	v->a[84414] = sym_variable_name;
	v->a[84415] = actions(3308);
	v->a[84416] = 1;
	v->a[84417] = anon_sym_DQUOTE;
	v->a[84418] = actions(3193);
	v->a[84419] = 2;
	small_parse_table_4221(v);
}

void	small_parse_table_4221(t_small_parse_table_array *v)
{
	v->a[84420] = aux_sym__simple_variable_name_token1;
	v->a[84421] = aux_sym__multiline_variable_name_token1;
	v->a[84422] = actions(3187);
	v->a[84423] = 9;
	v->a[84424] = anon_sym_BANG;
	v->a[84425] = anon_sym_DASH;
	v->a[84426] = anon_sym_STAR;
	v->a[84427] = anon_sym_QMARK;
	v->a[84428] = anon_sym_DOLLAR;
	v->a[84429] = anon_sym_POUND;
	v->a[84430] = anon_sym_AT;
	v->a[84431] = anon_sym_0;
	v->a[84432] = anon_sym__;
	v->a[84433] = 6;
	v->a[84434] = actions(3);
	v->a[84435] = 1;
	v->a[84436] = sym_comment;
	v->a[84437] = actions(3191);
	v->a[84438] = 1;
	v->a[84439] = sym_string_content;
	small_parse_table_4222(v);
}

void	small_parse_table_4222(t_small_parse_table_array *v)
{
	v->a[84440] = actions(3195);
	v->a[84441] = 1;
	v->a[84442] = sym_variable_name;
	v->a[84443] = actions(3310);
	v->a[84444] = 1;
	v->a[84445] = anon_sym_DQUOTE;
	v->a[84446] = actions(3193);
	v->a[84447] = 2;
	v->a[84448] = aux_sym__simple_variable_name_token1;
	v->a[84449] = aux_sym__multiline_variable_name_token1;
	v->a[84450] = actions(3187);
	v->a[84451] = 9;
	v->a[84452] = anon_sym_BANG;
	v->a[84453] = anon_sym_DASH;
	v->a[84454] = anon_sym_STAR;
	v->a[84455] = anon_sym_QMARK;
	v->a[84456] = anon_sym_DOLLAR;
	v->a[84457] = anon_sym_POUND;
	v->a[84458] = anon_sym_AT;
	v->a[84459] = anon_sym_0;
	small_parse_table_4223(v);
}

void	small_parse_table_4223(t_small_parse_table_array *v)
{
	v->a[84460] = anon_sym__;
	v->a[84461] = 3;
	v->a[84462] = actions(870);
	v->a[84463] = 1;
	v->a[84464] = sym_comment;
	v->a[84465] = actions(573);
	v->a[84466] = 6;
	v->a[84467] = anon_sym_PIPE;
	v->a[84468] = anon_sym_LT;
	v->a[84469] = anon_sym_GT;
	v->a[84470] = anon_sym_LT_AMP;
	v->a[84471] = anon_sym_GT_AMP;
	v->a[84472] = anon_sym_LT_LT;
	v->a[84473] = actions(575);
	v->a[84474] = 8;
	v->a[84475] = sym_file_descriptor;
	v->a[84476] = anon_sym_AMP_AMP;
	v->a[84477] = anon_sym_PIPE_PIPE;
	v->a[84478] = anon_sym_GT_GT;
	v->a[84479] = anon_sym_GT_PIPE;
	small_parse_table_4224(v);
}

void	small_parse_table_4224(t_small_parse_table_array *v)
{
	v->a[84480] = anon_sym_LT_AMP_DASH;
	v->a[84481] = anon_sym_GT_AMP_DASH;
	v->a[84482] = anon_sym_LT_LT_DASH;
	v->a[84483] = 3;
	v->a[84484] = actions(870);
	v->a[84485] = 1;
	v->a[84486] = sym_comment;
	v->a[84487] = actions(604);
	v->a[84488] = 6;
	v->a[84489] = anon_sym_PIPE;
	v->a[84490] = anon_sym_LT;
	v->a[84491] = anon_sym_GT;
	v->a[84492] = anon_sym_LT_AMP;
	v->a[84493] = anon_sym_GT_AMP;
	v->a[84494] = anon_sym_LT_LT;
	v->a[84495] = actions(602);
	v->a[84496] = 8;
	v->a[84497] = sym_file_descriptor;
	v->a[84498] = anon_sym_AMP_AMP;
	v->a[84499] = anon_sym_PIPE_PIPE;
	small_parse_table_4225(v);
}

/* EOF small_parse_table_844.c */
