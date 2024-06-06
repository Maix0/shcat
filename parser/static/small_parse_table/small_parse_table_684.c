/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_684.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3420(t_small_parse_table_array *v)
{
	v->a[68400] = anon_sym_GT_AMP_DASH;
	v->a[68401] = anon_sym_LT_LT_DASH;
	v->a[68402] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[68403] = sym__special_character;
	v->a[68404] = anon_sym_DQUOTE;
	v->a[68405] = sym_raw_string;
	v->a[68406] = anon_sym_DOLLAR_LBRACE;
	v->a[68407] = anon_sym_DOLLAR_BQUOTE;
	v->a[68408] = 3;
	v->a[68409] = actions(57);
	v->a[68410] = 1;
	v->a[68411] = sym_comment;
	v->a[68412] = actions(3115);
	v->a[68413] = 14;
	v->a[68414] = anon_sym_PIPE;
	v->a[68415] = anon_sym_LT;
	v->a[68416] = anon_sym_GT;
	v->a[68417] = anon_sym_AMP_GT;
	v->a[68418] = anon_sym_LT_AMP;
	v->a[68419] = anon_sym_GT_AMP;
	small_parse_table_3421(v);
}

void	small_parse_table_3421(t_small_parse_table_array *v)
{
	v->a[68420] = anon_sym_LT_LT;
	v->a[68421] = anon_sym_DOLLAR;
	v->a[68422] = aux_sym_number_token1;
	v->a[68423] = aux_sym_number_token2;
	v->a[68424] = anon_sym_DOLLAR_LPAREN;
	v->a[68425] = anon_sym_BQUOTE;
	v->a[68426] = aux_sym__simple_variable_name_token1;
	v->a[68427] = sym_word;
	v->a[68428] = actions(3117);
	v->a[68429] = 21;
	v->a[68430] = sym_file_descriptor;
	v->a[68431] = sym__concat;
	v->a[68432] = sym_variable_name;
	v->a[68433] = sym_test_operator;
	v->a[68434] = sym__brace_start;
	v->a[68435] = anon_sym_PIPE_AMP;
	v->a[68436] = anon_sym_AMP_AMP;
	v->a[68437] = anon_sym_PIPE_PIPE;
	v->a[68438] = anon_sym_GT_GT;
	v->a[68439] = anon_sym_AMP_GT_GT;
	small_parse_table_3422(v);
}

void	small_parse_table_3422(t_small_parse_table_array *v)
{
	v->a[68440] = anon_sym_GT_PIPE;
	v->a[68441] = anon_sym_LT_AMP_DASH;
	v->a[68442] = anon_sym_GT_AMP_DASH;
	v->a[68443] = anon_sym_LT_LT_DASH;
	v->a[68444] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[68445] = aux_sym_concatenation_token1;
	v->a[68446] = sym__special_character;
	v->a[68447] = anon_sym_DQUOTE;
	v->a[68448] = sym_raw_string;
	v->a[68449] = anon_sym_DOLLAR_LBRACE;
	v->a[68450] = anon_sym_DOLLAR_BQUOTE;
	v->a[68451] = 5;
	v->a[68452] = actions(57);
	v->a[68453] = 1;
	v->a[68454] = sym_comment;
	v->a[68455] = state(1394);
	v->a[68456] = 1;
	v->a[68457] = aux_sym_concatenation_repeat1;
	v->a[68458] = actions(4165);
	v->a[68459] = 2;
	small_parse_table_3423(v);
}

void	small_parse_table_3423(t_small_parse_table_array *v)
{
	v->a[68460] = sym__concat;
	v->a[68461] = aux_sym_concatenation_token1;
	v->a[68462] = actions(3038);
	v->a[68463] = 13;
	v->a[68464] = anon_sym_PIPE;
	v->a[68465] = anon_sym_LT;
	v->a[68466] = anon_sym_GT;
	v->a[68467] = anon_sym_AMP_GT;
	v->a[68468] = anon_sym_LT_AMP;
	v->a[68469] = anon_sym_GT_AMP;
	v->a[68470] = anon_sym_LT_LT;
	v->a[68471] = anon_sym_DOLLAR;
	v->a[68472] = aux_sym_number_token1;
	v->a[68473] = aux_sym_number_token2;
	v->a[68474] = anon_sym_DOLLAR_LPAREN;
	v->a[68475] = anon_sym_BQUOTE;
	v->a[68476] = sym_word;
	v->a[68477] = actions(3040);
	v->a[68478] = 19;
	v->a[68479] = sym_file_descriptor;
	small_parse_table_3424(v);
}

void	small_parse_table_3424(t_small_parse_table_array *v)
{
	v->a[68480] = sym_test_operator;
	v->a[68481] = sym__bare_dollar;
	v->a[68482] = sym__brace_start;
	v->a[68483] = anon_sym_PIPE_AMP;
	v->a[68484] = anon_sym_AMP_AMP;
	v->a[68485] = anon_sym_PIPE_PIPE;
	v->a[68486] = anon_sym_GT_GT;
	v->a[68487] = anon_sym_AMP_GT_GT;
	v->a[68488] = anon_sym_GT_PIPE;
	v->a[68489] = anon_sym_LT_AMP_DASH;
	v->a[68490] = anon_sym_GT_AMP_DASH;
	v->a[68491] = anon_sym_LT_LT_DASH;
	v->a[68492] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[68493] = sym__special_character;
	v->a[68494] = anon_sym_DQUOTE;
	v->a[68495] = sym_raw_string;
	v->a[68496] = anon_sym_DOLLAR_LBRACE;
	v->a[68497] = anon_sym_DOLLAR_BQUOTE;
	v->a[68498] = 3;
	v->a[68499] = actions(57);
	small_parse_table_3425(v);
}

/* EOF small_parse_table_684.c */
