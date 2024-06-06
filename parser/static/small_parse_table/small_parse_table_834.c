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
	v->a[83400] = anon_sym_GT;
	v->a[83401] = anon_sym_GT_GT;
	v->a[83402] = anon_sym_AMP_GT;
	v->a[83403] = anon_sym_AMP_GT_GT;
	v->a[83404] = anon_sym_LT_AMP;
	v->a[83405] = anon_sym_GT_AMP;
	v->a[83406] = anon_sym_GT_PIPE;
	v->a[83407] = anon_sym_LT_AMP_DASH;
	v->a[83408] = anon_sym_GT_AMP_DASH;
	v->a[83409] = anon_sym_LT_LT;
	v->a[83410] = anon_sym_LT_LT_DASH;
	v->a[83411] = 6;
	v->a[83412] = actions(3);
	v->a[83413] = 1;
	v->a[83414] = sym_comment;
	v->a[83415] = actions(816);
	v->a[83416] = 1;
	v->a[83417] = sym_file_descriptor;
	v->a[83418] = actions(4679);
	v->a[83419] = 1;
	small_parse_table_4171(v);
}

void	small_parse_table_4171(t_small_parse_table_array *v)
{
	v->a[83420] = sym_variable_name;
	v->a[83421] = actions(4677);
	v->a[83422] = 2;
	v->a[83423] = aux_sym__simple_variable_name_token1;
	v->a[83424] = aux_sym__multiline_variable_name_token1;
	v->a[83425] = actions(4675);
	v->a[83426] = 9;
	v->a[83427] = anon_sym_BANG;
	v->a[83428] = anon_sym_DASH;
	v->a[83429] = anon_sym_STAR;
	v->a[83430] = anon_sym_QMARK;
	v->a[83431] = anon_sym_DOLLAR;
	v->a[83432] = anon_sym_POUND;
	v->a[83433] = anon_sym_AT;
	v->a[83434] = anon_sym_0;
	v->a[83435] = anon_sym__;
	v->a[83436] = actions(810);
	v->a[83437] = 16;
	v->a[83438] = anon_sym_PIPE;
	v->a[83439] = anon_sym_PIPE_AMP;
	small_parse_table_4172(v);
}

void	small_parse_table_4172(t_small_parse_table_array *v)
{
	v->a[83440] = anon_sym_AMP_AMP;
	v->a[83441] = anon_sym_PIPE_PIPE;
	v->a[83442] = anon_sym_LT;
	v->a[83443] = anon_sym_GT;
	v->a[83444] = anon_sym_GT_GT;
	v->a[83445] = anon_sym_AMP_GT;
	v->a[83446] = anon_sym_AMP_GT_GT;
	v->a[83447] = anon_sym_LT_AMP;
	v->a[83448] = anon_sym_GT_AMP;
	v->a[83449] = anon_sym_GT_PIPE;
	v->a[83450] = anon_sym_LT_AMP_DASH;
	v->a[83451] = anon_sym_GT_AMP_DASH;
	v->a[83452] = anon_sym_LT_LT;
	v->a[83453] = anon_sym_LT_LT_DASH;
	v->a[83454] = 21;
	v->a[83455] = actions(57);
	v->a[83456] = 1;
	v->a[83457] = sym_comment;
	v->a[83458] = actions(4584);
	v->a[83459] = 1;
	small_parse_table_4173(v);
}

void	small_parse_table_4173(t_small_parse_table_array *v)
{
	v->a[83460] = anon_sym_LPAREN;
	v->a[83461] = actions(4586);
	v->a[83462] = 1;
	v->a[83463] = anon_sym_BANG;
	v->a[83464] = actions(4592);
	v->a[83465] = 1;
	v->a[83466] = anon_sym_TILDE;
	v->a[83467] = actions(4594);
	v->a[83468] = 1;
	v->a[83469] = anon_sym_DOLLAR;
	v->a[83470] = actions(4596);
	v->a[83471] = 1;
	v->a[83472] = anon_sym_DQUOTE;
	v->a[83473] = actions(4598);
	v->a[83474] = 1;
	v->a[83475] = aux_sym_number_token1;
	v->a[83476] = actions(4600);
	v->a[83477] = 1;
	v->a[83478] = aux_sym_number_token2;
	v->a[83479] = actions(4602);
	small_parse_table_4174(v);
}

void	small_parse_table_4174(t_small_parse_table_array *v)
{
	v->a[83480] = 1;
	v->a[83481] = anon_sym_DOLLAR_LBRACE;
	v->a[83482] = actions(4604);
	v->a[83483] = 1;
	v->a[83484] = anon_sym_DOLLAR_LPAREN;
	v->a[83485] = actions(4606);
	v->a[83486] = 1;
	v->a[83487] = anon_sym_BQUOTE;
	v->a[83488] = actions(4608);
	v->a[83489] = 1;
	v->a[83490] = anon_sym_DOLLAR_BQUOTE;
	v->a[83491] = actions(4685);
	v->a[83492] = 1;
	v->a[83493] = aux_sym__simple_variable_name_token1;
	v->a[83494] = actions(4687);
	v->a[83495] = 1;
	v->a[83496] = sym_variable_name;
	v->a[83497] = state(1476);
	v->a[83498] = 1;
	v->a[83499] = sym__arithmetic_postfix_expression;
	small_parse_table_4175(v);
}

/* EOF small_parse_table_834.c */
