/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_64.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_320(t_small_parse_table_array *v)
{
	v->a[6400] = anon_sym_for;
	v->a[6401] = actions(13);
	v->a[6402] = 1;
	v->a[6403] = anon_sym_if;
	v->a[6404] = actions(15);
	v->a[6405] = 1;
	v->a[6406] = anon_sym_case;
	v->a[6407] = actions(17);
	v->a[6408] = 1;
	v->a[6409] = anon_sym_LPAREN;
	v->a[6410] = actions(19);
	v->a[6411] = 1;
	v->a[6412] = anon_sym_LBRACE;
	v->a[6413] = actions(41);
	v->a[6414] = 1;
	v->a[6415] = sym_word;
	v->a[6416] = actions(49);
	v->a[6417] = 1;
	v->a[6418] = anon_sym_BANG;
	v->a[6419] = actions(53);
	small_parse_table_321(v);
}

void	small_parse_table_321(t_small_parse_table_array *v)
{
	v->a[6420] = 1;
	v->a[6421] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[6422] = actions(55);
	v->a[6423] = 1;
	v->a[6424] = anon_sym_DOLLAR;
	v->a[6425] = actions(57);
	v->a[6426] = 1;
	v->a[6427] = anon_sym_DQUOTE;
	v->a[6428] = actions(61);
	v->a[6429] = 1;
	v->a[6430] = anon_sym_DOLLAR_LBRACE;
	v->a[6431] = actions(63);
	v->a[6432] = 1;
	v->a[6433] = anon_sym_DOLLAR_LPAREN;
	v->a[6434] = actions(65);
	v->a[6435] = 1;
	v->a[6436] = anon_sym_BQUOTE;
	v->a[6437] = actions(67);
	v->a[6438] = 1;
	v->a[6439] = sym_variable_name;
	small_parse_table_322(v);
}

void	small_parse_table_322(t_small_parse_table_array *v)
{
	v->a[6440] = actions(220);
	v->a[6441] = 1;
	v->a[6442] = anon_sym_done;
	v->a[6443] = state(36);
	v->a[6444] = 1;
	v->a[6445] = aux_sym__terminated_statement;
	v->a[6446] = state(271);
	v->a[6447] = 1;
	v->a[6448] = sym_command_name;
	v->a[6449] = state(298);
	v->a[6450] = 1;
	v->a[6451] = sym_variable_assignment;
	v->a[6452] = state(482);
	v->a[6453] = 1;
	v->a[6454] = aux_sym_command_repeat1;
	v->a[6455] = state(600);
	v->a[6456] = 1;
	v->a[6457] = sym_file_redirect;
	v->a[6458] = state(602);
	v->a[6459] = 1;
	small_parse_table_323(v);
}

void	small_parse_table_323(t_small_parse_table_array *v)
{
	v->a[6460] = sym_concatenation;
	v->a[6461] = state(1012);
	v->a[6462] = 1;
	v->a[6463] = sym_pipeline;
	v->a[6464] = state(1068);
	v->a[6465] = 1;
	v->a[6466] = aux_sym_redirected_statement_repeat2;
	v->a[6467] = state(1609);
	v->a[6468] = 1;
	v->a[6469] = sym__statement_not_pipeline;
	v->a[6470] = actions(11);
	v->a[6471] = 2;
	v->a[6472] = anon_sym_while;
	v->a[6473] = anon_sym_until;
	v->a[6474] = actions(59);
	v->a[6475] = 2;
	v->a[6476] = sym_raw_string;
	v->a[6477] = sym_number;
	v->a[6478] = state(425);
	v->a[6479] = 5;
	small_parse_table_324(v);
}

void	small_parse_table_324(t_small_parse_table_array *v)
{
	v->a[6480] = sym_arithmetic_expansion;
	v->a[6481] = sym_string;
	v->a[6482] = sym_simple_expansion;
	v->a[6483] = sym_expansion;
	v->a[6484] = sym_command_substitution;
	v->a[6485] = actions(51);
	v->a[6486] = 7;
	v->a[6487] = anon_sym_LT;
	v->a[6488] = anon_sym_GT;
	v->a[6489] = anon_sym_GT_GT;
	v->a[6490] = anon_sym_LT_AMP;
	v->a[6491] = anon_sym_GT_AMP;
	v->a[6492] = anon_sym_GT_PIPE;
	v->a[6493] = anon_sym_LT_GT;
	v->a[6494] = state(933);
	v->a[6495] = 12;
	v->a[6496] = sym_redirected_statement;
	v->a[6497] = sym_for_statement;
	v->a[6498] = sym_while_statement;
	v->a[6499] = sym_if_statement;
	small_parse_table_325(v);
}

/* EOF small_parse_table_64.c */
