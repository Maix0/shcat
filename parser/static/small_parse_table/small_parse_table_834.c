/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_834.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4170(t_small_parse_table_array *v)
{
	v->a[83400] = actions(3);
	v->a[83401] = 1;
	v->a[83402] = sym_comment;
	v->a[83403] = actions(3191);
	v->a[83404] = 1;
	v->a[83405] = sym_string_content;
	v->a[83406] = actions(3195);
	v->a[83407] = 1;
	v->a[83408] = sym_variable_name;
	v->a[83409] = actions(3266);
	v->a[83410] = 1;
	v->a[83411] = anon_sym_DQUOTE;
	v->a[83412] = actions(3193);
	v->a[83413] = 2;
	v->a[83414] = aux_sym__simple_variable_name_token1;
	v->a[83415] = aux_sym__multiline_variable_name_token1;
	v->a[83416] = actions(3187);
	v->a[83417] = 9;
	v->a[83418] = anon_sym_BANG;
	v->a[83419] = anon_sym_DASH;
	small_parse_table_4171(v);
}

void	small_parse_table_4171(t_small_parse_table_array *v)
{
	v->a[83420] = anon_sym_STAR;
	v->a[83421] = anon_sym_QMARK;
	v->a[83422] = anon_sym_DOLLAR;
	v->a[83423] = anon_sym_POUND;
	v->a[83424] = anon_sym_AT;
	v->a[83425] = anon_sym_0;
	v->a[83426] = anon_sym__;
	v->a[83427] = 6;
	v->a[83428] = actions(3);
	v->a[83429] = 1;
	v->a[83430] = sym_comment;
	v->a[83431] = actions(3191);
	v->a[83432] = 1;
	v->a[83433] = sym_string_content;
	v->a[83434] = actions(3195);
	v->a[83435] = 1;
	v->a[83436] = sym_variable_name;
	v->a[83437] = actions(3268);
	v->a[83438] = 1;
	v->a[83439] = anon_sym_DQUOTE;
	small_parse_table_4172(v);
}

void	small_parse_table_4172(t_small_parse_table_array *v)
{
	v->a[83440] = actions(3193);
	v->a[83441] = 2;
	v->a[83442] = aux_sym__simple_variable_name_token1;
	v->a[83443] = aux_sym__multiline_variable_name_token1;
	v->a[83444] = actions(3187);
	v->a[83445] = 9;
	v->a[83446] = anon_sym_BANG;
	v->a[83447] = anon_sym_DASH;
	v->a[83448] = anon_sym_STAR;
	v->a[83449] = anon_sym_QMARK;
	v->a[83450] = anon_sym_DOLLAR;
	v->a[83451] = anon_sym_POUND;
	v->a[83452] = anon_sym_AT;
	v->a[83453] = anon_sym_0;
	v->a[83454] = anon_sym__;
	v->a[83455] = 6;
	v->a[83456] = actions(3);
	v->a[83457] = 1;
	v->a[83458] = sym_comment;
	v->a[83459] = actions(3191);
	small_parse_table_4173(v);
}

void	small_parse_table_4173(t_small_parse_table_array *v)
{
	v->a[83460] = 1;
	v->a[83461] = sym_string_content;
	v->a[83462] = actions(3195);
	v->a[83463] = 1;
	v->a[83464] = sym_variable_name;
	v->a[83465] = actions(3270);
	v->a[83466] = 1;
	v->a[83467] = anon_sym_DQUOTE;
	v->a[83468] = actions(3193);
	v->a[83469] = 2;
	v->a[83470] = aux_sym__simple_variable_name_token1;
	v->a[83471] = aux_sym__multiline_variable_name_token1;
	v->a[83472] = actions(3187);
	v->a[83473] = 9;
	v->a[83474] = anon_sym_BANG;
	v->a[83475] = anon_sym_DASH;
	v->a[83476] = anon_sym_STAR;
	v->a[83477] = anon_sym_QMARK;
	v->a[83478] = anon_sym_DOLLAR;
	v->a[83479] = anon_sym_POUND;
	small_parse_table_4174(v);
}

void	small_parse_table_4174(t_small_parse_table_array *v)
{
	v->a[83480] = anon_sym_AT;
	v->a[83481] = anon_sym_0;
	v->a[83482] = anon_sym__;
	v->a[83483] = 3;
	v->a[83484] = actions(870);
	v->a[83485] = 1;
	v->a[83486] = sym_comment;
	v->a[83487] = actions(2417);
	v->a[83488] = 6;
	v->a[83489] = anon_sym_PIPE;
	v->a[83490] = anon_sym_LT;
	v->a[83491] = anon_sym_GT;
	v->a[83492] = anon_sym_LT_AMP;
	v->a[83493] = anon_sym_GT_AMP;
	v->a[83494] = anon_sym_LT_LT;
	v->a[83495] = actions(2415);
	v->a[83496] = 8;
	v->a[83497] = sym_file_descriptor;
	v->a[83498] = anon_sym_AMP_AMP;
	v->a[83499] = anon_sym_PIPE_PIPE;
	small_parse_table_4175(v);
}

/* EOF small_parse_table_834.c */
