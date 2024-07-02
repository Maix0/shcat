/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_314.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1570(t_small_parse_table_array *v)
{
	v->a[31400] = sym_raw_string;
	v->a[31401] = sym_number;
	v->a[31402] = anon_sym_DOLLAR_LBRACE;
	v->a[31403] = anon_sym_DOLLAR_LPAREN;
	v->a[31404] = anon_sym_BQUOTE;
	v->a[31405] = sym_word;
	v->a[31406] = anon_sym_SEMI;
	v->a[31407] = 7;
	v->a[31408] = actions(3);
	v->a[31409] = 1;
	v->a[31410] = sym_comment;
	v->a[31411] = actions(1081);
	v->a[31412] = 1;
	v->a[31413] = aux_sym_concatenation_token1;
	v->a[31414] = actions(1083);
	v->a[31415] = 1;
	v->a[31416] = sym__concat;
	v->a[31417] = actions(1202);
	v->a[31418] = 1;
	v->a[31419] = anon_sym_LPAREN;
	small_parse_table_1571(v);
}

void	small_parse_table_1571(t_small_parse_table_array *v)
{
	v->a[31420] = state(421);
	v->a[31421] = 1;
	v->a[31422] = aux_sym_concatenation_repeat1;
	v->a[31423] = actions(1051);
	v->a[31424] = 2;
	v->a[31425] = sym_file_descriptor;
	v->a[31426] = sym__bare_dollar;
	v->a[31427] = actions(1053);
	v->a[31428] = 25;
	v->a[31429] = anon_sym_PIPE;
	v->a[31430] = anon_sym_SEMI_SEMI;
	v->a[31431] = anon_sym_AMP_AMP;
	v->a[31432] = anon_sym_PIPE_PIPE;
	v->a[31433] = anon_sym_LT;
	v->a[31434] = anon_sym_GT;
	v->a[31435] = anon_sym_GT_GT;
	v->a[31436] = anon_sym_LT_AMP;
	v->a[31437] = anon_sym_GT_AMP;
	v->a[31438] = anon_sym_GT_PIPE;
	v->a[31439] = anon_sym_LT_GT;
	small_parse_table_1572(v);
}

void	small_parse_table_1572(t_small_parse_table_array *v)
{
	v->a[31440] = anon_sym_LT_LT;
	v->a[31441] = anon_sym_LT_LT_DASH;
	v->a[31442] = aux_sym_heredoc_redirect_token1;
	v->a[31443] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[31444] = anon_sym_AMP;
	v->a[31445] = anon_sym_DOLLAR;
	v->a[31446] = anon_sym_DQUOTE;
	v->a[31447] = sym_raw_string;
	v->a[31448] = sym_number;
	v->a[31449] = anon_sym_DOLLAR_LBRACE;
	v->a[31450] = anon_sym_DOLLAR_LPAREN;
	v->a[31451] = anon_sym_BQUOTE;
	v->a[31452] = sym_word;
	v->a[31453] = anon_sym_SEMI;
	v->a[31454] = 5;
	v->a[31455] = actions(3);
	v->a[31456] = 1;
	v->a[31457] = sym_comment;
	v->a[31458] = actions(511);
	v->a[31459] = 2;
	small_parse_table_1573(v);
}

void	small_parse_table_1573(t_small_parse_table_array *v)
{
	v->a[31460] = sym_file_descriptor;
	v->a[31461] = sym_variable_name;
	v->a[31462] = state(426);
	v->a[31463] = 2;
	v->a[31464] = sym_concatenation;
	v->a[31465] = aux_sym_for_statement_repeat1;
	v->a[31466] = state(714);
	v->a[31467] = 5;
	v->a[31468] = sym_arithmetic_expansion;
	v->a[31469] = sym_string;
	v->a[31470] = sym_simple_expansion;
	v->a[31471] = sym_expansion;
	v->a[31472] = sym_command_substitution;
	v->a[31473] = actions(509);
	v->a[31474] = 22;
	v->a[31475] = anon_sym_PIPE;
	v->a[31476] = anon_sym_AMP_AMP;
	v->a[31477] = anon_sym_PIPE_PIPE;
	v->a[31478] = anon_sym_LT;
	v->a[31479] = anon_sym_GT;
	small_parse_table_1574(v);
}

void	small_parse_table_1574(t_small_parse_table_array *v)
{
	v->a[31480] = anon_sym_GT_GT;
	v->a[31481] = anon_sym_LT_AMP;
	v->a[31482] = anon_sym_GT_AMP;
	v->a[31483] = anon_sym_GT_PIPE;
	v->a[31484] = anon_sym_LT_GT;
	v->a[31485] = anon_sym_LT_LT;
	v->a[31486] = anon_sym_LT_LT_DASH;
	v->a[31487] = aux_sym_heredoc_redirect_token1;
	v->a[31488] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[31489] = anon_sym_DOLLAR;
	v->a[31490] = anon_sym_DQUOTE;
	v->a[31491] = sym_raw_string;
	v->a[31492] = sym_number;
	v->a[31493] = anon_sym_DOLLAR_LBRACE;
	v->a[31494] = anon_sym_DOLLAR_LPAREN;
	v->a[31495] = anon_sym_BQUOTE;
	v->a[31496] = sym_word;
	v->a[31497] = 3;
	v->a[31498] = actions(3);
	v->a[31499] = 1;
	small_parse_table_1575(v);
}

/* EOF small_parse_table_314.c */
