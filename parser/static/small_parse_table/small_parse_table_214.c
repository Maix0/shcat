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
	v->a[21400] = sym_simple_expansion;
	v->a[21401] = sym_expansion;
	v->a[21402] = sym_command_substitution;
	v->a[21403] = actions(421);
	v->a[21404] = 8;
	v->a[21405] = anon_sym_PIPE;
	v->a[21406] = anon_sym_AMP_AMP;
	v->a[21407] = anon_sym_PIPE_PIPE;
	v->a[21408] = anon_sym_LT;
	v->a[21409] = anon_sym_GT;
	v->a[21410] = anon_sym_GT_GT;
	v->a[21411] = anon_sym_LT_LT;
	v->a[21412] = aux_sym_heredoc_redirect_token1;
	v->a[21413] = 12;
	v->a[21414] = actions(3);
	v->a[21415] = 1;
	v->a[21416] = sym_comment;
	v->a[21417] = actions(448);
	v->a[21418] = 1;
	v->a[21419] = sym_variable_name;
	small_parse_table_1071(v);
}

void	small_parse_table_1071(t_small_parse_table_array *v)
{
	v->a[21420] = actions(891);
	v->a[21421] = 1;
	v->a[21422] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[21423] = actions(894);
	v->a[21424] = 1;
	v->a[21425] = anon_sym_DOLLAR;
	v->a[21426] = actions(897);
	v->a[21427] = 1;
	v->a[21428] = anon_sym_DQUOTE;
	v->a[21429] = actions(900);
	v->a[21430] = 1;
	v->a[21431] = anon_sym_DOLLAR_LBRACE;
	v->a[21432] = actions(903);
	v->a[21433] = 1;
	v->a[21434] = anon_sym_DOLLAR_LPAREN;
	v->a[21435] = actions(906);
	v->a[21436] = 1;
	v->a[21437] = anon_sym_BQUOTE;
	v->a[21438] = state(260);
	v->a[21439] = 2;
	small_parse_table_1072(v);
}

void	small_parse_table_1072(t_small_parse_table_array *v)
{
	v->a[21440] = sym_concatenation;
	v->a[21441] = aux_sym_for_statement_repeat1;
	v->a[21442] = actions(888);
	v->a[21443] = 3;
	v->a[21444] = sym_raw_string;
	v->a[21445] = sym_number;
	v->a[21446] = sym_word;
	v->a[21447] = state(589);
	v->a[21448] = 5;
	v->a[21449] = sym_arithmetic_expansion;
	v->a[21450] = sym_string;
	v->a[21451] = sym_simple_expansion;
	v->a[21452] = sym_expansion;
	v->a[21453] = sym_command_substitution;
	v->a[21454] = actions(428);
	v->a[21455] = 7;
	v->a[21456] = anon_sym_PIPE;
	v->a[21457] = anon_sym_AMP_AMP;
	v->a[21458] = anon_sym_PIPE_PIPE;
	v->a[21459] = anon_sym_LT;
	small_parse_table_1073(v);
}

void	small_parse_table_1073(t_small_parse_table_array *v)
{
	v->a[21460] = anon_sym_GT;
	v->a[21461] = anon_sym_GT_GT;
	v->a[21462] = anon_sym_LT_LT;
	v->a[21463] = 6;
	v->a[21464] = actions(3);
	v->a[21465] = 1;
	v->a[21466] = sym_comment;
	v->a[21467] = actions(837);
	v->a[21468] = 1;
	v->a[21469] = aux_sym_concatenation_token1;
	v->a[21470] = actions(839);
	v->a[21471] = 1;
	v->a[21472] = sym__concat;
	v->a[21473] = actions(911);
	v->a[21474] = 1;
	v->a[21475] = sym__bare_dollar;
	v->a[21476] = state(284);
	v->a[21477] = 1;
	v->a[21478] = aux_sym_concatenation_repeat1;
	v->a[21479] = actions(909);
	small_parse_table_1074(v);
}

void	small_parse_table_1074(t_small_parse_table_array *v)
{
	v->a[21480] = 20;
	v->a[21481] = anon_sym_esac;
	v->a[21482] = anon_sym_PIPE;
	v->a[21483] = anon_sym_SEMI_SEMI;
	v->a[21484] = anon_sym_AMP_AMP;
	v->a[21485] = anon_sym_PIPE_PIPE;
	v->a[21486] = anon_sym_LT;
	v->a[21487] = anon_sym_GT;
	v->a[21488] = anon_sym_GT_GT;
	v->a[21489] = anon_sym_LT_LT;
	v->a[21490] = aux_sym_heredoc_redirect_token1;
	v->a[21491] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[21492] = anon_sym_DOLLAR;
	v->a[21493] = anon_sym_DQUOTE;
	v->a[21494] = sym_raw_string;
	v->a[21495] = sym_number;
	v->a[21496] = anon_sym_DOLLAR_LBRACE;
	v->a[21497] = anon_sym_DOLLAR_LPAREN;
	v->a[21498] = anon_sym_BQUOTE;
	v->a[21499] = sym_word;
	small_parse_table_1075(v);
}

/* EOF small_parse_table_214.c */
