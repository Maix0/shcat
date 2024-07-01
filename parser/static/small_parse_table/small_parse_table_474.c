/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_474.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2370(t_small_parse_table_array *v)
{
	v->a[47400] = sym_file_descriptor;
	v->a[47401] = state(331);
	v->a[47402] = 1;
	v->a[47403] = sym_command_name;
	v->a[47404] = state(975);
	v->a[47405] = 1;
	v->a[47406] = sym_concatenation;
	v->a[47407] = state(1385);
	v->a[47408] = 1;
	v->a[47409] = sym_file_redirect;
	v->a[47410] = actions(1254);
	v->a[47411] = 2;
	v->a[47412] = anon_sym_LT_AMP_DASH;
	v->a[47413] = anon_sym_GT_AMP_DASH;
	v->a[47414] = state(1132);
	v->a[47415] = 2;
	v->a[47416] = sym_variable_assignment;
	v->a[47417] = aux_sym_command_repeat1;
	v->a[47418] = actions(351);
	v->a[47419] = 3;
	small_parse_table_2371(v);
}

void	small_parse_table_2371(t_small_parse_table_array *v)
{
	v->a[47420] = sym_raw_string;
	v->a[47421] = sym_number;
	v->a[47422] = sym_word;
	v->a[47423] = state(785);
	v->a[47424] = 5;
	v->a[47425] = sym_arithmetic_expansion;
	v->a[47426] = sym_string;
	v->a[47427] = sym_simple_expansion;
	v->a[47428] = sym_expansion;
	v->a[47429] = sym_command_substitution;
	v->a[47430] = actions(1252);
	v->a[47431] = 6;
	v->a[47432] = anon_sym_LT;
	v->a[47433] = anon_sym_GT;
	v->a[47434] = anon_sym_GT_GT;
	v->a[47435] = anon_sym_LT_AMP;
	v->a[47436] = anon_sym_GT_AMP;
	v->a[47437] = anon_sym_GT_PIPE;
	v->a[47438] = 7;
	v->a[47439] = actions(3);
	small_parse_table_2372(v);
}

void	small_parse_table_2372(t_small_parse_table_array *v)
{
	v->a[47440] = 1;
	v->a[47441] = sym_comment;
	v->a[47442] = actions(1530);
	v->a[47443] = 1;
	v->a[47444] = sym_file_descriptor;
	v->a[47445] = actions(1533);
	v->a[47446] = 1;
	v->a[47447] = sym_variable_name;
	v->a[47448] = actions(1649);
	v->a[47449] = 1;
	v->a[47450] = anon_sym_RPAREN;
	v->a[47451] = actions(1527);
	v->a[47452] = 8;
	v->a[47453] = anon_sym_LT;
	v->a[47454] = anon_sym_GT;
	v->a[47455] = anon_sym_GT_GT;
	v->a[47456] = anon_sym_LT_AMP;
	v->a[47457] = anon_sym_GT_AMP;
	v->a[47458] = anon_sym_GT_PIPE;
	v->a[47459] = anon_sym_LT_AMP_DASH;
	small_parse_table_2373(v);
}

void	small_parse_table_2373(t_small_parse_table_array *v)
{
	v->a[47460] = anon_sym_GT_AMP_DASH;
	v->a[47461] = actions(1520);
	v->a[47462] = 9;
	v->a[47463] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[47464] = anon_sym_DOLLAR;
	v->a[47465] = anon_sym_DQUOTE;
	v->a[47466] = sym_raw_string;
	v->a[47467] = sym_number;
	v->a[47468] = anon_sym_DOLLAR_LBRACE;
	v->a[47469] = anon_sym_DOLLAR_LPAREN;
	v->a[47470] = anon_sym_BQUOTE;
	v->a[47471] = sym_word;
	v->a[47472] = actions(1522);
	v->a[47473] = 9;
	v->a[47474] = anon_sym_PIPE;
	v->a[47475] = anon_sym_SEMI_SEMI;
	v->a[47476] = anon_sym_AMP_AMP;
	v->a[47477] = anon_sym_PIPE_PIPE;
	v->a[47478] = anon_sym_LT_LT;
	v->a[47479] = anon_sym_LT_LT_DASH;
	small_parse_table_2374(v);
}

void	small_parse_table_2374(t_small_parse_table_array *v)
{
	v->a[47480] = aux_sym_heredoc_redirect_token1;
	v->a[47481] = anon_sym_AMP;
	v->a[47482] = anon_sym_SEMI;
	v->a[47483] = 12;
	v->a[47484] = actions(3);
	v->a[47485] = 1;
	v->a[47486] = sym_comment;
	v->a[47487] = actions(790);
	v->a[47488] = 1;
	v->a[47489] = sym_file_descriptor;
	v->a[47490] = actions(1637);
	v->a[47491] = 1;
	v->a[47492] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[47493] = actions(1639);
	v->a[47494] = 1;
	v->a[47495] = anon_sym_DOLLAR;
	v->a[47496] = actions(1641);
	v->a[47497] = 1;
	v->a[47498] = anon_sym_DQUOTE;
	v->a[47499] = actions(1643);
	small_parse_table_2375(v);
}

/* EOF small_parse_table_474.c */
