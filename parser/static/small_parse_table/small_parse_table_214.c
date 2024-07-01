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
	v->a[21400] = 1;
	v->a[21401] = anon_sym_DOLLAR;
	v->a[21402] = actions(463);
	v->a[21403] = 1;
	v->a[21404] = anon_sym_DQUOTE;
	v->a[21405] = actions(465);
	v->a[21406] = 1;
	v->a[21407] = anon_sym_DOLLAR_LBRACE;
	v->a[21408] = actions(467);
	v->a[21409] = 1;
	v->a[21410] = anon_sym_DOLLAR_LPAREN;
	v->a[21411] = actions(469);
	v->a[21412] = 1;
	v->a[21413] = anon_sym_BQUOTE;
	v->a[21414] = actions(473);
	v->a[21415] = 1;
	v->a[21416] = sym__bare_dollar;
	v->a[21417] = actions(571);
	v->a[21418] = 1;
	v->a[21419] = sym_file_descriptor;
	small_parse_table_1071(v);
}

void	small_parse_table_1071(t_small_parse_table_array *v)
{
	v->a[21420] = state(211);
	v->a[21421] = 1;
	v->a[21422] = aux_sym_command_repeat2;
	v->a[21423] = state(718);
	v->a[21424] = 1;
	v->a[21425] = sym_concatenation;
	v->a[21426] = actions(455);
	v->a[21427] = 3;
	v->a[21428] = sym_raw_string;
	v->a[21429] = sym_number;
	v->a[21430] = sym_word;
	v->a[21431] = state(448);
	v->a[21432] = 5;
	v->a[21433] = sym_arithmetic_expansion;
	v->a[21434] = sym_string;
	v->a[21435] = sym_simple_expansion;
	v->a[21436] = sym_expansion;
	v->a[21437] = sym_command_substitution;
	v->a[21438] = actions(569);
	v->a[21439] = 18;
	small_parse_table_1072(v);
}

void	small_parse_table_1072(t_small_parse_table_array *v)
{
	v->a[21440] = anon_sym_PIPE;
	v->a[21441] = anon_sym_RPAREN;
	v->a[21442] = anon_sym_SEMI_SEMI;
	v->a[21443] = anon_sym_AMP_AMP;
	v->a[21444] = anon_sym_PIPE_PIPE;
	v->a[21445] = anon_sym_LT;
	v->a[21446] = anon_sym_GT;
	v->a[21447] = anon_sym_GT_GT;
	v->a[21448] = anon_sym_LT_AMP;
	v->a[21449] = anon_sym_GT_AMP;
	v->a[21450] = anon_sym_GT_PIPE;
	v->a[21451] = anon_sym_LT_AMP_DASH;
	v->a[21452] = anon_sym_GT_AMP_DASH;
	v->a[21453] = anon_sym_LT_LT;
	v->a[21454] = anon_sym_LT_LT_DASH;
	v->a[21455] = aux_sym_heredoc_redirect_token1;
	v->a[21456] = anon_sym_AMP;
	v->a[21457] = anon_sym_SEMI;
	v->a[21458] = 5;
	v->a[21459] = actions(3);
	small_parse_table_1073(v);
}

void	small_parse_table_1073(t_small_parse_table_array *v)
{
	v->a[21460] = 1;
	v->a[21461] = sym_comment;
	v->a[21462] = actions(575);
	v->a[21463] = 2;
	v->a[21464] = sym_file_descriptor;
	v->a[21465] = sym_variable_name;
	v->a[21466] = state(209);
	v->a[21467] = 2;
	v->a[21468] = sym_concatenation;
	v->a[21469] = aux_sym_for_statement_repeat1;
	v->a[21470] = state(442);
	v->a[21471] = 5;
	v->a[21472] = sym_arithmetic_expansion;
	v->a[21473] = sym_string;
	v->a[21474] = sym_simple_expansion;
	v->a[21475] = sym_expansion;
	v->a[21476] = sym_command_substitution;
	v->a[21477] = actions(573);
	v->a[21478] = 27;
	v->a[21479] = anon_sym_PIPE;
	small_parse_table_1074(v);
}

void	small_parse_table_1074(t_small_parse_table_array *v)
{
	v->a[21480] = anon_sym_RPAREN;
	v->a[21481] = anon_sym_SEMI_SEMI;
	v->a[21482] = anon_sym_AMP_AMP;
	v->a[21483] = anon_sym_PIPE_PIPE;
	v->a[21484] = anon_sym_LT;
	v->a[21485] = anon_sym_GT;
	v->a[21486] = anon_sym_GT_GT;
	v->a[21487] = anon_sym_LT_AMP;
	v->a[21488] = anon_sym_GT_AMP;
	v->a[21489] = anon_sym_GT_PIPE;
	v->a[21490] = anon_sym_LT_AMP_DASH;
	v->a[21491] = anon_sym_GT_AMP_DASH;
	v->a[21492] = anon_sym_LT_LT;
	v->a[21493] = anon_sym_LT_LT_DASH;
	v->a[21494] = aux_sym_heredoc_redirect_token1;
	v->a[21495] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[21496] = anon_sym_AMP;
	v->a[21497] = anon_sym_DOLLAR;
	v->a[21498] = anon_sym_DQUOTE;
	v->a[21499] = sym_raw_string;
	small_parse_table_1075(v);
}

/* EOF small_parse_table_214.c */
