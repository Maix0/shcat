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
	v->a[21400] = sym_word;
	v->a[21401] = state(519);
	v->a[21402] = 5;
	v->a[21403] = sym_arithmetic_expansion;
	v->a[21404] = sym_string;
	v->a[21405] = sym_simple_expansion;
	v->a[21406] = sym_expansion;
	v->a[21407] = sym_command_substitution;
	v->a[21408] = actions(491);
	v->a[21409] = 20;
	v->a[21410] = anon_sym_PIPE;
	v->a[21411] = anon_sym_SEMI_SEMI;
	v->a[21412] = anon_sym_AMP_AMP;
	v->a[21413] = anon_sym_PIPE_PIPE;
	v->a[21414] = anon_sym_LT;
	v->a[21415] = anon_sym_GT;
	v->a[21416] = anon_sym_GT_GT;
	v->a[21417] = anon_sym_AMP_GT;
	v->a[21418] = anon_sym_AMP_GT_GT;
	v->a[21419] = anon_sym_LT_AMP;
	small_parse_table_1071(v);
}

void	small_parse_table_1071(t_small_parse_table_array *v)
{
	v->a[21420] = anon_sym_GT_AMP;
	v->a[21421] = anon_sym_GT_PIPE;
	v->a[21422] = anon_sym_LT_AMP_DASH;
	v->a[21423] = anon_sym_GT_AMP_DASH;
	v->a[21424] = anon_sym_LT_LT;
	v->a[21425] = anon_sym_LT_LT_DASH;
	v->a[21426] = aux_sym_heredoc_redirect_token1;
	v->a[21427] = anon_sym_AMP;
	v->a[21428] = anon_sym_BQUOTE;
	v->a[21429] = anon_sym_SEMI;
	v->a[21430] = 16;
	v->a[21431] = actions(3);
	v->a[21432] = 1;
	v->a[21433] = sym_comment;
	v->a[21434] = actions(17);
	v->a[21435] = 1;
	v->a[21436] = anon_sym_LPAREN;
	v->a[21437] = actions(471);
	v->a[21438] = 1;
	v->a[21439] = sym_file_descriptor;
	small_parse_table_1072(v);
}

void	small_parse_table_1072(t_small_parse_table_array *v)
{
	v->a[21440] = actions(497);
	v->a[21441] = 1;
	v->a[21442] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[21443] = actions(499);
	v->a[21444] = 1;
	v->a[21445] = anon_sym_DOLLAR;
	v->a[21446] = actions(501);
	v->a[21447] = 1;
	v->a[21448] = anon_sym_DQUOTE;
	v->a[21449] = actions(503);
	v->a[21450] = 1;
	v->a[21451] = anon_sym_DOLLAR_LBRACE;
	v->a[21452] = actions(505);
	v->a[21453] = 1;
	v->a[21454] = anon_sym_DOLLAR_LPAREN;
	v->a[21455] = actions(507);
	v->a[21456] = 1;
	v->a[21457] = anon_sym_BQUOTE;
	v->a[21458] = actions(509);
	v->a[21459] = 1;
	small_parse_table_1073(v);
}

void	small_parse_table_1073(t_small_parse_table_array *v)
{
	v->a[21460] = sym__bare_dollar;
	v->a[21461] = state(230);
	v->a[21462] = 1;
	v->a[21463] = aux_sym_command_repeat2;
	v->a[21464] = state(729);
	v->a[21465] = 1;
	v->a[21466] = sym_concatenation;
	v->a[21467] = state(1436);
	v->a[21468] = 1;
	v->a[21469] = sym_subshell;
	v->a[21470] = actions(511);
	v->a[21471] = 3;
	v->a[21472] = sym_raw_string;
	v->a[21473] = sym_number;
	v->a[21474] = sym_word;
	v->a[21475] = state(519);
	v->a[21476] = 5;
	v->a[21477] = sym_arithmetic_expansion;
	v->a[21478] = sym_string;
	v->a[21479] = sym_simple_expansion;
	small_parse_table_1074(v);
}

void	small_parse_table_1074(t_small_parse_table_array *v)
{
	v->a[21480] = sym_expansion;
	v->a[21481] = sym_command_substitution;
	v->a[21482] = actions(457);
	v->a[21483] = 19;
	v->a[21484] = anon_sym_PIPE;
	v->a[21485] = anon_sym_SEMI_SEMI;
	v->a[21486] = anon_sym_AMP_AMP;
	v->a[21487] = anon_sym_PIPE_PIPE;
	v->a[21488] = anon_sym_LT;
	v->a[21489] = anon_sym_GT;
	v->a[21490] = anon_sym_GT_GT;
	v->a[21491] = anon_sym_AMP_GT;
	v->a[21492] = anon_sym_AMP_GT_GT;
	v->a[21493] = anon_sym_LT_AMP;
	v->a[21494] = anon_sym_GT_AMP;
	v->a[21495] = anon_sym_GT_PIPE;
	v->a[21496] = anon_sym_LT_AMP_DASH;
	v->a[21497] = anon_sym_GT_AMP_DASH;
	v->a[21498] = anon_sym_LT_LT;
	v->a[21499] = anon_sym_LT_LT_DASH;
	small_parse_table_1075(v);
}

/* EOF small_parse_table_214.c */
