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
	v->a[21400] = state(194);
	v->a[21401] = 1;
	v->a[21402] = aux_sym_command_repeat2;
	v->a[21403] = state(753);
	v->a[21404] = 1;
	v->a[21405] = sym_concatenation;
	v->a[21406] = state(1206);
	v->a[21407] = 1;
	v->a[21408] = sym_subshell;
	v->a[21409] = actions(483);
	v->a[21410] = 2;
	v->a[21411] = sym_raw_string;
	v->a[21412] = sym_word;
	v->a[21413] = state(341);
	v->a[21414] = 6;
	v->a[21415] = sym_arithmetic_expansion;
	v->a[21416] = sym_string;
	v->a[21417] = sym_number;
	v->a[21418] = sym_simple_expansion;
	v->a[21419] = sym_expansion;
	small_parse_table_1071(v);
}

void	small_parse_table_1071(t_small_parse_table_array *v)
{
	v->a[21420] = sym_command_substitution;
	v->a[21421] = actions(455);
	v->a[21422] = 20;
	v->a[21423] = anon_sym_PIPE;
	v->a[21424] = anon_sym_RPAREN;
	v->a[21425] = anon_sym_SEMI_SEMI;
	v->a[21426] = anon_sym_AMP_AMP;
	v->a[21427] = anon_sym_PIPE_PIPE;
	v->a[21428] = anon_sym_LT;
	v->a[21429] = anon_sym_GT;
	v->a[21430] = anon_sym_GT_GT;
	v->a[21431] = anon_sym_AMP_GT;
	v->a[21432] = anon_sym_AMP_GT_GT;
	v->a[21433] = anon_sym_LT_AMP;
	v->a[21434] = anon_sym_GT_AMP;
	v->a[21435] = anon_sym_GT_PIPE;
	v->a[21436] = anon_sym_LT_AMP_DASH;
	v->a[21437] = anon_sym_GT_AMP_DASH;
	v->a[21438] = anon_sym_LT_LT;
	v->a[21439] = anon_sym_LT_LT_DASH;
	small_parse_table_1072(v);
}

void	small_parse_table_1072(t_small_parse_table_array *v)
{
	v->a[21440] = aux_sym_heredoc_redirect_token1;
	v->a[21441] = anon_sym_AMP;
	v->a[21442] = anon_sym_SEMI;
	v->a[21443] = 6;
	v->a[21444] = actions(3);
	v->a[21445] = 1;
	v->a[21446] = sym_comment;
	v->a[21447] = actions(507);
	v->a[21448] = 1;
	v->a[21449] = sym_variable_name;
	v->a[21450] = actions(413);
	v->a[21451] = 2;
	v->a[21452] = sym_file_descriptor;
	v->a[21453] = ts_builtin_sym_end;
	v->a[21454] = actions(505);
	v->a[21455] = 2;
	v->a[21456] = aux_sym__simple_variable_name_token1;
	v->a[21457] = aux_sym__multiline_variable_name_token1;
	v->a[21458] = actions(503);
	v->a[21459] = 9;
	small_parse_table_1073(v);
}

void	small_parse_table_1073(t_small_parse_table_array *v)
{
	v->a[21460] = anon_sym_BANG;
	v->a[21461] = anon_sym_DASH;
	v->a[21462] = anon_sym_STAR;
	v->a[21463] = anon_sym_QMARK;
	v->a[21464] = anon_sym_DOLLAR;
	v->a[21465] = anon_sym_POUND;
	v->a[21466] = anon_sym_AT;
	v->a[21467] = anon_sym_0;
	v->a[21468] = anon_sym__;
	v->a[21469] = actions(407);
	v->a[21470] = 28;
	v->a[21471] = anon_sym_PIPE;
	v->a[21472] = anon_sym_SEMI_SEMI;
	v->a[21473] = anon_sym_AMP_AMP;
	v->a[21474] = anon_sym_PIPE_PIPE;
	v->a[21475] = anon_sym_LT;
	v->a[21476] = anon_sym_GT;
	v->a[21477] = anon_sym_GT_GT;
	v->a[21478] = anon_sym_AMP_GT;
	v->a[21479] = anon_sym_AMP_GT_GT;
	small_parse_table_1074(v);
}

void	small_parse_table_1074(t_small_parse_table_array *v)
{
	v->a[21480] = anon_sym_LT_AMP;
	v->a[21481] = anon_sym_GT_AMP;
	v->a[21482] = anon_sym_GT_PIPE;
	v->a[21483] = anon_sym_LT_AMP_DASH;
	v->a[21484] = anon_sym_GT_AMP_DASH;
	v->a[21485] = anon_sym_LT_LT;
	v->a[21486] = anon_sym_LT_LT_DASH;
	v->a[21487] = aux_sym_heredoc_redirect_token1;
	v->a[21488] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[21489] = anon_sym_AMP;
	v->a[21490] = anon_sym_DQUOTE;
	v->a[21491] = sym_raw_string;
	v->a[21492] = aux_sym_number_token1;
	v->a[21493] = aux_sym_number_token2;
	v->a[21494] = anon_sym_DOLLAR_LBRACE;
	v->a[21495] = anon_sym_DOLLAR_LPAREN;
	v->a[21496] = anon_sym_BQUOTE;
	v->a[21497] = sym_word;
	v->a[21498] = anon_sym_SEMI;
	v->a[21499] = 6;
	small_parse_table_1075(v);
}

/* EOF small_parse_table_214.c */
