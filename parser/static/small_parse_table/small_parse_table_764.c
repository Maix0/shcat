/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_764.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3820(t_small_parse_table_array *v)
{
	v->a[76400] = actions(961);
	v->a[76401] = 9;
	v->a[76402] = sym_file_descriptor;
	v->a[76403] = anon_sym_AMP_AMP;
	v->a[76404] = anon_sym_PIPE_PIPE;
	v->a[76405] = anon_sym_GT_GT;
	v->a[76406] = anon_sym_AMP_GT_GT;
	v->a[76407] = anon_sym_GT_PIPE;
	v->a[76408] = anon_sym_LT_AMP_DASH;
	v->a[76409] = anon_sym_GT_AMP_DASH;
	v->a[76410] = anon_sym_LT_LT_DASH;
	v->a[76411] = 7;
	v->a[76412] = actions(3);
	v->a[76413] = 1;
	v->a[76414] = sym_comment;
	v->a[76415] = actions(2229);
	v->a[76416] = 1;
	v->a[76417] = aux_sym_heredoc_redirect_token1;
	v->a[76418] = actions(2574);
	v->a[76419] = 1;
	small_parse_table_3821(v);
}

void	small_parse_table_3821(t_small_parse_table_array *v)
{
	v->a[76420] = sym_file_descriptor;
	v->a[76421] = actions(2492);
	v->a[76422] = 2;
	v->a[76423] = anon_sym_LT_AMP_DASH;
	v->a[76424] = anon_sym_GT_AMP_DASH;
	v->a[76425] = state(1439);
	v->a[76426] = 2;
	v->a[76427] = sym_file_redirect;
	v->a[76428] = aux_sym_redirected_statement_repeat2;
	v->a[76429] = actions(2227);
	v->a[76430] = 5;
	v->a[76431] = anon_sym_PIPE;
	v->a[76432] = anon_sym_AMP_AMP;
	v->a[76433] = anon_sym_PIPE_PIPE;
	v->a[76434] = anon_sym_LT_LT;
	v->a[76435] = anon_sym_LT_LT_DASH;
	v->a[76436] = actions(2490);
	v->a[76437] = 8;
	v->a[76438] = anon_sym_LT;
	v->a[76439] = anon_sym_GT;
	small_parse_table_3822(v);
}

void	small_parse_table_3822(t_small_parse_table_array *v)
{
	v->a[76440] = anon_sym_GT_GT;
	v->a[76441] = anon_sym_AMP_GT;
	v->a[76442] = anon_sym_AMP_GT_GT;
	v->a[76443] = anon_sym_LT_AMP;
	v->a[76444] = anon_sym_GT_AMP;
	v->a[76445] = anon_sym_GT_PIPE;
	v->a[76446] = 3;
	v->a[76447] = actions(1074);
	v->a[76448] = 1;
	v->a[76449] = sym_comment;
	v->a[76450] = actions(1086);
	v->a[76451] = 7;
	v->a[76452] = anon_sym_PIPE;
	v->a[76453] = anon_sym_LT;
	v->a[76454] = anon_sym_GT;
	v->a[76455] = anon_sym_AMP_GT;
	v->a[76456] = anon_sym_LT_AMP;
	v->a[76457] = anon_sym_GT_AMP;
	v->a[76458] = anon_sym_LT_LT;
	v->a[76459] = actions(1088);
	small_parse_table_3823(v);
}

void	small_parse_table_3823(t_small_parse_table_array *v)
{
	v->a[76460] = 12;
	v->a[76461] = sym_file_descriptor;
	v->a[76462] = sym__concat;
	v->a[76463] = sym_variable_name;
	v->a[76464] = anon_sym_AMP_AMP;
	v->a[76465] = anon_sym_PIPE_PIPE;
	v->a[76466] = anon_sym_GT_GT;
	v->a[76467] = anon_sym_AMP_GT_GT;
	v->a[76468] = anon_sym_GT_PIPE;
	v->a[76469] = anon_sym_LT_AMP_DASH;
	v->a[76470] = anon_sym_GT_AMP_DASH;
	v->a[76471] = anon_sym_LT_LT_DASH;
	v->a[76472] = aux_sym_concatenation_token1;
	v->a[76473] = 3;
	v->a[76474] = actions(1074);
	v->a[76475] = 1;
	v->a[76476] = sym_comment;
	v->a[76477] = actions(1072);
	v->a[76478] = 7;
	v->a[76479] = anon_sym_PIPE;
	small_parse_table_3824(v);
}

void	small_parse_table_3824(t_small_parse_table_array *v)
{
	v->a[76480] = anon_sym_LT;
	v->a[76481] = anon_sym_GT;
	v->a[76482] = anon_sym_AMP_GT;
	v->a[76483] = anon_sym_LT_AMP;
	v->a[76484] = anon_sym_GT_AMP;
	v->a[76485] = anon_sym_LT_LT;
	v->a[76486] = actions(1070);
	v->a[76487] = 12;
	v->a[76488] = sym_file_descriptor;
	v->a[76489] = sym__concat;
	v->a[76490] = sym_variable_name;
	v->a[76491] = anon_sym_AMP_AMP;
	v->a[76492] = anon_sym_PIPE_PIPE;
	v->a[76493] = anon_sym_GT_GT;
	v->a[76494] = anon_sym_AMP_GT_GT;
	v->a[76495] = anon_sym_GT_PIPE;
	v->a[76496] = anon_sym_LT_AMP_DASH;
	v->a[76497] = anon_sym_GT_AMP_DASH;
	v->a[76498] = anon_sym_LT_LT_DASH;
	v->a[76499] = aux_sym_concatenation_token1;
	small_parse_table_3825(v);
}

/* EOF small_parse_table_764.c */
