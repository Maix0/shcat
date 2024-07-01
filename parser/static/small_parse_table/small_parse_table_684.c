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
	v->a[68400] = 1;
	v->a[68401] = anon_sym_BQUOTE;
	v->a[68402] = state(1338);
	v->a[68403] = 1;
	v->a[68404] = aux_sym__heredoc_command;
	v->a[68405] = state(1721);
	v->a[68406] = 1;
	v->a[68407] = sym_concatenation;
	v->a[68408] = actions(2656);
	v->a[68409] = 3;
	v->a[68410] = sym_raw_string;
	v->a[68411] = sym_number;
	v->a[68412] = sym_word;
	v->a[68413] = state(1573);
	v->a[68414] = 5;
	v->a[68415] = sym_arithmetic_expansion;
	v->a[68416] = sym_string;
	v->a[68417] = sym_simple_expansion;
	v->a[68418] = sym_expansion;
	v->a[68419] = sym_command_substitution;
	small_parse_table_3421(v);
}

void	small_parse_table_3421(t_small_parse_table_array *v)
{
	v->a[68420] = 10;
	v->a[68421] = actions(3);
	v->a[68422] = 1;
	v->a[68423] = sym_comment;
	v->a[68424] = actions(55);
	v->a[68425] = 1;
	v->a[68426] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[68427] = actions(57);
	v->a[68428] = 1;
	v->a[68429] = anon_sym_DOLLAR;
	v->a[68430] = actions(59);
	v->a[68431] = 1;
	v->a[68432] = anon_sym_DQUOTE;
	v->a[68433] = actions(63);
	v->a[68434] = 1;
	v->a[68435] = anon_sym_DOLLAR_LBRACE;
	v->a[68436] = actions(65);
	v->a[68437] = 1;
	v->a[68438] = anon_sym_DOLLAR_LPAREN;
	v->a[68439] = actions(67);
	small_parse_table_3422(v);
}

void	small_parse_table_3422(t_small_parse_table_array *v)
{
	v->a[68440] = 1;
	v->a[68441] = anon_sym_BQUOTE;
	v->a[68442] = actions(2442);
	v->a[68443] = 1;
	v->a[68444] = sym__bare_dollar;
	v->a[68445] = actions(2438);
	v->a[68446] = 5;
	v->a[68447] = aux_sym_concatenation_token1;
	v->a[68448] = sym_raw_string;
	v->a[68449] = sym_number;
	v->a[68450] = sym__comment_word;
	v->a[68451] = sym_word;
	v->a[68452] = state(398);
	v->a[68453] = 5;
	v->a[68454] = sym_arithmetic_expansion;
	v->a[68455] = sym_string;
	v->a[68456] = sym_simple_expansion;
	v->a[68457] = sym_expansion;
	v->a[68458] = sym_command_substitution;
	v->a[68459] = 6;
	small_parse_table_3423(v);
}

void	small_parse_table_3423(t_small_parse_table_array *v)
{
	v->a[68460] = actions(664);
	v->a[68461] = 1;
	v->a[68462] = sym_comment;
	v->a[68463] = actions(2679);
	v->a[68464] = 1;
	v->a[68465] = aux_sym_concatenation_token1;
	v->a[68466] = actions(2681);
	v->a[68467] = 1;
	v->a[68468] = sym__concat;
	v->a[68469] = state(1266);
	v->a[68470] = 1;
	v->a[68471] = aux_sym_concatenation_repeat1;
	v->a[68472] = actions(1043);
	v->a[68473] = 4;
	v->a[68474] = anon_sym_PIPE;
	v->a[68475] = anon_sym_LT;
	v->a[68476] = anon_sym_GT;
	v->a[68477] = anon_sym_LT_LT;
	v->a[68478] = actions(1047);
	v->a[68479] = 10;
	small_parse_table_3424(v);
}

void	small_parse_table_3424(t_small_parse_table_array *v)
{
	v->a[68480] = sym_file_descriptor;
	v->a[68481] = sym_variable_name;
	v->a[68482] = anon_sym_AMP_AMP;
	v->a[68483] = anon_sym_PIPE_PIPE;
	v->a[68484] = anon_sym_GT_GT;
	v->a[68485] = anon_sym_LT_AMP;
	v->a[68486] = anon_sym_GT_AMP;
	v->a[68487] = anon_sym_GT_PIPE;
	v->a[68488] = anon_sym_LT_GT;
	v->a[68489] = anon_sym_LT_LT_DASH;
	v->a[68490] = 10;
	v->a[68491] = actions(3);
	v->a[68492] = 1;
	v->a[68493] = sym_comment;
	v->a[68494] = actions(479);
	v->a[68495] = 1;
	v->a[68496] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[68497] = actions(481);
	v->a[68498] = 1;
	v->a[68499] = anon_sym_DOLLAR;
	small_parse_table_3425(v);
}

/* EOF small_parse_table_684.c */
