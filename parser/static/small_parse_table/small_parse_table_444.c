/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_444.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2220(t_small_parse_table_array *v)
{
	v->a[44400] = anon_sym_DQUOTE;
	v->a[44401] = sym_raw_string;
	v->a[44402] = sym_number;
	v->a[44403] = anon_sym_DOLLAR_LBRACE;
	v->a[44404] = anon_sym_DOLLAR_LPAREN;
	v->a[44405] = anon_sym_BQUOTE;
	v->a[44406] = sym_word;
	v->a[44407] = anon_sym_SEMI;
	v->a[44408] = 7;
	v->a[44409] = actions(3);
	v->a[44410] = 1;
	v->a[44411] = sym_comment;
	v->a[44412] = actions(1524);
	v->a[44413] = 1;
	v->a[44414] = anon_sym_RPAREN;
	v->a[44415] = actions(1530);
	v->a[44416] = 1;
	v->a[44417] = sym_file_descriptor;
	v->a[44418] = actions(1533);
	v->a[44419] = 1;
	small_parse_table_2221(v);
}

void	small_parse_table_2221(t_small_parse_table_array *v)
{
	v->a[44420] = sym_variable_name;
	v->a[44421] = actions(1527);
	v->a[44422] = 8;
	v->a[44423] = anon_sym_LT;
	v->a[44424] = anon_sym_GT;
	v->a[44425] = anon_sym_GT_GT;
	v->a[44426] = anon_sym_LT_AMP;
	v->a[44427] = anon_sym_GT_AMP;
	v->a[44428] = anon_sym_GT_PIPE;
	v->a[44429] = anon_sym_LT_AMP_DASH;
	v->a[44430] = anon_sym_GT_AMP_DASH;
	v->a[44431] = actions(1520);
	v->a[44432] = 9;
	v->a[44433] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[44434] = anon_sym_DOLLAR;
	v->a[44435] = anon_sym_DQUOTE;
	v->a[44436] = sym_raw_string;
	v->a[44437] = sym_number;
	v->a[44438] = anon_sym_DOLLAR_LBRACE;
	v->a[44439] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2222(v);
}

void	small_parse_table_2222(t_small_parse_table_array *v)
{
	v->a[44440] = anon_sym_BQUOTE;
	v->a[44441] = sym_word;
	v->a[44442] = actions(1522);
	v->a[44443] = 9;
	v->a[44444] = anon_sym_PIPE;
	v->a[44445] = anon_sym_SEMI_SEMI;
	v->a[44446] = anon_sym_AMP_AMP;
	v->a[44447] = anon_sym_PIPE_PIPE;
	v->a[44448] = anon_sym_LT_LT;
	v->a[44449] = anon_sym_LT_LT_DASH;
	v->a[44450] = aux_sym_heredoc_redirect_token1;
	v->a[44451] = anon_sym_AMP;
	v->a[44452] = anon_sym_SEMI;
	v->a[44453] = 17;
	v->a[44454] = actions(3);
	v->a[44455] = 1;
	v->a[44456] = sym_comment;
	v->a[44457] = actions(59);
	v->a[44458] = 1;
	v->a[44459] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_2223(v);
}

void	small_parse_table_2223(t_small_parse_table_array *v)
{
	v->a[44460] = actions(61);
	v->a[44461] = 1;
	v->a[44462] = anon_sym_DOLLAR;
	v->a[44463] = actions(63);
	v->a[44464] = 1;
	v->a[44465] = anon_sym_DQUOTE;
	v->a[44466] = actions(67);
	v->a[44467] = 1;
	v->a[44468] = anon_sym_DOLLAR_LBRACE;
	v->a[44469] = actions(69);
	v->a[44470] = 1;
	v->a[44471] = anon_sym_DOLLAR_LPAREN;
	v->a[44472] = actions(71);
	v->a[44473] = 1;
	v->a[44474] = anon_sym_BQUOTE;
	v->a[44475] = actions(377);
	v->a[44476] = 1;
	v->a[44477] = sym_variable_name;
	v->a[44478] = actions(1256);
	v->a[44479] = 1;
	small_parse_table_2224(v);
}

void	small_parse_table_2224(t_small_parse_table_array *v)
{
	v->a[44480] = sym_file_descriptor;
	v->a[44481] = state(269);
	v->a[44482] = 1;
	v->a[44483] = sym_command_name;
	v->a[44484] = state(650);
	v->a[44485] = 1;
	v->a[44486] = sym_concatenation;
	v->a[44487] = state(1385);
	v->a[44488] = 1;
	v->a[44489] = sym_file_redirect;
	v->a[44490] = actions(1254);
	v->a[44491] = 2;
	v->a[44492] = anon_sym_LT_AMP_DASH;
	v->a[44493] = anon_sym_GT_AMP_DASH;
	v->a[44494] = state(1132);
	v->a[44495] = 2;
	v->a[44496] = sym_variable_assignment;
	v->a[44497] = aux_sym_command_repeat1;
	v->a[44498] = actions(371);
	v->a[44499] = 3;
	small_parse_table_2225(v);
}

/* EOF small_parse_table_444.c */
