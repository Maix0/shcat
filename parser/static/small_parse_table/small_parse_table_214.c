/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_214.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1070(t_small_parse_table_array *v)
{
	v->a[21400] = 5;
	v->a[21401] = sym_arithmetic_expansion;
	v->a[21402] = sym_string;
	v->a[21403] = sym_simple_expansion;
	v->a[21404] = sym_expansion;
	v->a[21405] = sym_command_substitution;
	v->a[21406] = actions(493);
	v->a[21407] = 20;
	v->a[21408] = anon_sym_PIPE;
	v->a[21409] = anon_sym_SEMI_SEMI;
	v->a[21410] = anon_sym_AMP_AMP;
	v->a[21411] = anon_sym_PIPE_PIPE;
	v->a[21412] = anon_sym_LT;
	v->a[21413] = anon_sym_GT;
	v->a[21414] = anon_sym_GT_GT;
	v->a[21415] = anon_sym_AMP_GT;
	v->a[21416] = anon_sym_AMP_GT_GT;
	v->a[21417] = anon_sym_LT_AMP;
	v->a[21418] = anon_sym_GT_AMP;
	v->a[21419] = anon_sym_GT_PIPE;
	small_parse_table_1071(v);
}

void	small_parse_table_1071(t_small_parse_table_array *v)
{
	v->a[21420] = anon_sym_LT_AMP_DASH;
	v->a[21421] = anon_sym_GT_AMP_DASH;
	v->a[21422] = anon_sym_LT_LT;
	v->a[21423] = anon_sym_LT_LT_DASH;
	v->a[21424] = aux_sym_heredoc_redirect_token1;
	v->a[21425] = anon_sym_AMP;
	v->a[21426] = anon_sym_BQUOTE;
	v->a[21427] = anon_sym_SEMI;
	v->a[21428] = 16;
	v->a[21429] = actions(3);
	v->a[21430] = 1;
	v->a[21431] = sym_comment;
	v->a[21432] = actions(17);
	v->a[21433] = 1;
	v->a[21434] = anon_sym_LPAREN;
	v->a[21435] = actions(455);
	v->a[21436] = 1;
	v->a[21437] = sym_file_descriptor;
	v->a[21438] = actions(477);
	v->a[21439] = 1;
	small_parse_table_1072(v);
}

void	small_parse_table_1072(t_small_parse_table_array *v)
{
	v->a[21440] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[21441] = actions(479);
	v->a[21442] = 1;
	v->a[21443] = anon_sym_DOLLAR;
	v->a[21444] = actions(481);
	v->a[21445] = 1;
	v->a[21446] = anon_sym_DQUOTE;
	v->a[21447] = actions(483);
	v->a[21448] = 1;
	v->a[21449] = anon_sym_DOLLAR_LBRACE;
	v->a[21450] = actions(485);
	v->a[21451] = 1;
	v->a[21452] = anon_sym_DOLLAR_LPAREN;
	v->a[21453] = actions(487);
	v->a[21454] = 1;
	v->a[21455] = anon_sym_BQUOTE;
	v->a[21456] = actions(489);
	v->a[21457] = 1;
	v->a[21458] = sym__bare_dollar;
	v->a[21459] = state(219);
	small_parse_table_1073(v);
}

void	small_parse_table_1073(t_small_parse_table_array *v)
{
	v->a[21460] = 1;
	v->a[21461] = aux_sym_command_repeat2;
	v->a[21462] = state(712);
	v->a[21463] = 1;
	v->a[21464] = sym_concatenation;
	v->a[21465] = state(1204);
	v->a[21466] = 1;
	v->a[21467] = sym_subshell;
	v->a[21468] = actions(511);
	v->a[21469] = 3;
	v->a[21470] = sym_raw_string;
	v->a[21471] = sym_number;
	v->a[21472] = sym_word;
	v->a[21473] = state(479);
	v->a[21474] = 5;
	v->a[21475] = sym_arithmetic_expansion;
	v->a[21476] = sym_string;
	v->a[21477] = sym_simple_expansion;
	v->a[21478] = sym_expansion;
	v->a[21479] = sym_command_substitution;
	small_parse_table_1074(v);
}

void	small_parse_table_1074(t_small_parse_table_array *v)
{
	v->a[21480] = actions(459);
	v->a[21481] = 19;
	v->a[21482] = anon_sym_PIPE;
	v->a[21483] = anon_sym_SEMI_SEMI;
	v->a[21484] = anon_sym_AMP_AMP;
	v->a[21485] = anon_sym_PIPE_PIPE;
	v->a[21486] = anon_sym_LT;
	v->a[21487] = anon_sym_GT;
	v->a[21488] = anon_sym_GT_GT;
	v->a[21489] = anon_sym_AMP_GT;
	v->a[21490] = anon_sym_AMP_GT_GT;
	v->a[21491] = anon_sym_LT_AMP;
	v->a[21492] = anon_sym_GT_AMP;
	v->a[21493] = anon_sym_GT_PIPE;
	v->a[21494] = anon_sym_LT_AMP_DASH;
	v->a[21495] = anon_sym_GT_AMP_DASH;
	v->a[21496] = anon_sym_LT_LT;
	v->a[21497] = anon_sym_LT_LT_DASH;
	v->a[21498] = aux_sym_heredoc_redirect_token1;
	v->a[21499] = anon_sym_AMP;
	small_parse_table_1075(v);
}

/* EOF small_parse_table_214.c */
