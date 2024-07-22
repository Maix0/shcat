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
	v->a[68400] = actions(117);
	v->a[68401] = 1;
	v->a[68402] = anon_sym_DOLLAR_LPAREN;
	v->a[68403] = actions(119);
	v->a[68404] = 1;
	v->a[68405] = anon_sym_BQUOTE;
	v->a[68406] = actions(2419);
	v->a[68407] = 1;
	v->a[68408] = sym__bare_dollar;
	v->a[68409] = actions(2725);
	v->a[68410] = 1;
	v->a[68411] = anon_sym_DOLLAR;
	v->a[68412] = actions(2417);
	v->a[68413] = 5;
	v->a[68414] = aux_sym_concatenation_token1;
	v->a[68415] = sym_raw_string;
	v->a[68416] = sym_number;
	v->a[68417] = sym__comment_word;
	v->a[68418] = sym_word;
	v->a[68419] = state(398);
	small_parse_table_3421(v);
}

void	small_parse_table_3421(t_small_parse_table_array *v)
{
	v->a[68420] = 5;
	v->a[68421] = sym_arithmetic_expansion;
	v->a[68422] = sym_string;
	v->a[68423] = sym_simple_expansion;
	v->a[68424] = sym_expansion;
	v->a[68425] = sym_command_substitution;
	v->a[68426] = 10;
	v->a[68427] = actions(3);
	v->a[68428] = 1;
	v->a[68429] = sym_comment;
	v->a[68430] = actions(2331);
	v->a[68431] = 1;
	v->a[68432] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[68433] = actions(2335);
	v->a[68434] = 1;
	v->a[68435] = anon_sym_DQUOTE;
	v->a[68436] = actions(2337);
	v->a[68437] = 1;
	v->a[68438] = anon_sym_DOLLAR_LBRACE;
	v->a[68439] = actions(2339);
	small_parse_table_3422(v);
}

void	small_parse_table_3422(t_small_parse_table_array *v)
{
	v->a[68440] = 1;
	v->a[68441] = anon_sym_DOLLAR_LPAREN;
	v->a[68442] = actions(2341);
	v->a[68443] = 1;
	v->a[68444] = anon_sym_BQUOTE;
	v->a[68445] = actions(2343);
	v->a[68446] = 1;
	v->a[68447] = sym__bare_dollar;
	v->a[68448] = actions(2727);
	v->a[68449] = 1;
	v->a[68450] = anon_sym_DOLLAR;
	v->a[68451] = actions(2329);
	v->a[68452] = 5;
	v->a[68453] = aux_sym_concatenation_token1;
	v->a[68454] = sym_raw_string;
	v->a[68455] = sym_number;
	v->a[68456] = sym__comment_word;
	v->a[68457] = sym_word;
	v->a[68458] = state(488);
	v->a[68459] = 5;
	small_parse_table_3423(v);
}

void	small_parse_table_3423(t_small_parse_table_array *v)
{
	v->a[68460] = sym_arithmetic_expansion;
	v->a[68461] = sym_string;
	v->a[68462] = sym_simple_expansion;
	v->a[68463] = sym_expansion;
	v->a[68464] = sym_command_substitution;
	v->a[68465] = 3;
	v->a[68466] = actions(3);
	v->a[68467] = 1;
	v->a[68468] = sym_comment;
	v->a[68469] = actions(1500);
	v->a[68470] = 2;
	v->a[68471] = sym_file_descriptor;
	v->a[68472] = aux_sym_heredoc_redirect_token1;
	v->a[68473] = actions(1498);
	v->a[68474] = 15;
	v->a[68475] = anon_sym_esac;
	v->a[68476] = anon_sym_PIPE;
	v->a[68477] = anon_sym_SEMI_SEMI;
	v->a[68478] = anon_sym_AMP_AMP;
	v->a[68479] = anon_sym_PIPE_PIPE;
	small_parse_table_3424(v);
}

void	small_parse_table_3424(t_small_parse_table_array *v)
{
	v->a[68480] = anon_sym_LT;
	v->a[68481] = anon_sym_GT;
	v->a[68482] = anon_sym_GT_GT;
	v->a[68483] = anon_sym_LT_AMP;
	v->a[68484] = anon_sym_GT_AMP;
	v->a[68485] = anon_sym_GT_PIPE;
	v->a[68486] = anon_sym_LT_GT;
	v->a[68487] = anon_sym_LT_LT;
	v->a[68488] = anon_sym_LT_LT_DASH;
	v->a[68489] = anon_sym_SEMI;
	v->a[68490] = 5;
	v->a[68491] = actions(3);
	v->a[68492] = 1;
	v->a[68493] = sym_comment;
	v->a[68494] = actions(782);
	v->a[68495] = 1;
	v->a[68496] = anon_sym_PIPE;
	v->a[68497] = actions(1055);
	v->a[68498] = 2;
	v->a[68499] = sym_file_descriptor;
	small_parse_table_3425(v);
}

/* EOF small_parse_table_684.c */
