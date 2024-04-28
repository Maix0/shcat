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
	v->a[21400] = anon_sym_DOLLAR_BQUOTE;
	v->a[21401] = actions(3751);
	v->a[21402] = 1;
	v->a[21403] = sym_file_descriptor;
	v->a[21404] = actions(3753);
	v->a[21405] = 1;
	v->a[21406] = sym_test_operator;
	v->a[21407] = actions(3755);
	v->a[21408] = 1;
	v->a[21409] = sym__brace_start;
	v->a[21410] = actions(4038);
	v->a[21411] = 1;
	v->a[21412] = aux_sym_heredoc_redirect_token1;
	v->a[21413] = state(3565);
	v->a[21414] = 1;
	v->a[21415] = aux_sym__heredoc_command;
	v->a[21416] = state(5351);
	v->a[21417] = 1;
	v->a[21418] = aux_sym__literal_repeat1;
	v->a[21419] = state(5456);
	small_parse_table_1071(v);
}

void	small_parse_table_1071(t_small_parse_table_array *v)
{
	v->a[21420] = 1;
	v->a[21421] = sym_concatenation;
	v->a[21422] = state(6837);
	v->a[21423] = 1;
	v->a[21424] = sym__heredoc_expression;
	v->a[21425] = state(6839);
	v->a[21426] = 1;
	v->a[21427] = sym__heredoc_pipeline;
	v->a[21428] = actions(3715);
	v->a[21429] = 2;
	v->a[21430] = anon_sym_LPAREN_LPAREN;
	v->a[21431] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[21432] = actions(3717);
	v->a[21433] = 2;
	v->a[21434] = anon_sym_PIPE_PIPE;
	v->a[21435] = anon_sym_AMP_AMP;
	v->a[21436] = actions(3719);
	v->a[21437] = 2;
	v->a[21438] = anon_sym_PIPE;
	v->a[21439] = anon_sym_PIPE_AMP;
	small_parse_table_1072(v);
}

void	small_parse_table_1072(t_small_parse_table_array *v)
{
	v->a[21440] = actions(3723);
	v->a[21441] = 2;
	v->a[21442] = anon_sym_LT_AMP_DASH;
	v->a[21443] = anon_sym_GT_AMP_DASH;
	v->a[21444] = actions(3749);
	v->a[21445] = 2;
	v->a[21446] = anon_sym_LT_LPAREN;
	v->a[21447] = anon_sym_GT_LPAREN;
	v->a[21448] = actions(3713);
	v->a[21449] = 3;
	v->a[21450] = sym_raw_string;
	v->a[21451] = sym_ansi_c_string;
	v->a[21452] = sym_word;
	v->a[21453] = state(5545);
	v->a[21454] = 3;
	v->a[21455] = sym_file_redirect;
	v->a[21456] = sym_herestring_redirect;
	v->a[21457] = aux_sym_redirected_statement_repeat2;
	v->a[21458] = actions(3721);
	v->a[21459] = 8;
	small_parse_table_1073(v);
}

void	small_parse_table_1073(t_small_parse_table_array *v)
{
	v->a[21460] = anon_sym_LT;
	v->a[21461] = anon_sym_GT;
	v->a[21462] = anon_sym_GT_GT;
	v->a[21463] = anon_sym_AMP_GT;
	v->a[21464] = anon_sym_AMP_GT_GT;
	v->a[21465] = anon_sym_LT_AMP;
	v->a[21466] = anon_sym_GT_AMP;
	v->a[21467] = anon_sym_GT_PIPE;
	v->a[21468] = state(5062);
	v->a[21469] = 9;
	v->a[21470] = sym_arithmetic_expansion;
	v->a[21471] = sym_brace_expression;
	v->a[21472] = sym_string;
	v->a[21473] = sym_translated_string;
	v->a[21474] = sym_number;
	v->a[21475] = sym_simple_expansion;
	v->a[21476] = sym_expansion;
	v->a[21477] = sym_command_substitution;
	v->a[21478] = sym_process_substitution;
	v->a[21479] = 20;
	small_parse_table_1074(v);
}

void	small_parse_table_1074(t_small_parse_table_array *v)
{
	v->a[21480] = actions(3);
	v->a[21481] = 1;
	v->a[21482] = sym_comment;
	v->a[21483] = actions(3115);
	v->a[21484] = 1;
	v->a[21485] = anon_sym_DQUOTE;
	v->a[21486] = actions(3395);
	v->a[21487] = 1;
	v->a[21488] = anon_sym_DOLLAR_LBRACK;
	v->a[21489] = actions(3397);
	v->a[21490] = 1;
	v->a[21491] = anon_sym_DOLLAR;
	v->a[21492] = actions(3401);
	v->a[21493] = 1;
	v->a[21494] = aux_sym_number_token1;
	v->a[21495] = actions(3403);
	v->a[21496] = 1;
	v->a[21497] = aux_sym_number_token2;
	v->a[21498] = actions(3405);
	v->a[21499] = 1;
	small_parse_table_1075(v);
}

/* EOF small_parse_table_214.c */
