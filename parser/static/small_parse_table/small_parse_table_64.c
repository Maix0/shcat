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
	v->a[6400] = 1;
	v->a[6401] = sym_comment;
	v->a[6402] = actions(9);
	v->a[6403] = 1;
	v->a[6404] = anon_sym_for;
	v->a[6405] = actions(13);
	v->a[6406] = 1;
	v->a[6407] = anon_sym_if;
	v->a[6408] = actions(15);
	v->a[6409] = 1;
	v->a[6410] = anon_sym_case;
	v->a[6411] = actions(17);
	v->a[6412] = 1;
	v->a[6413] = anon_sym_LPAREN;
	v->a[6414] = actions(19);
	v->a[6415] = 1;
	v->a[6416] = anon_sym_LBRACE;
	v->a[6417] = actions(41);
	v->a[6418] = 1;
	v->a[6419] = sym_word;
	small_parse_table_321(v);
}

void	small_parse_table_321(t_small_parse_table_array *v)
{
	v->a[6420] = actions(49);
	v->a[6421] = 1;
	v->a[6422] = anon_sym_BANG;
	v->a[6423] = actions(53);
	v->a[6424] = 1;
	v->a[6425] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[6426] = actions(55);
	v->a[6427] = 1;
	v->a[6428] = anon_sym_DOLLAR;
	v->a[6429] = actions(57);
	v->a[6430] = 1;
	v->a[6431] = anon_sym_DQUOTE;
	v->a[6432] = actions(61);
	v->a[6433] = 1;
	v->a[6434] = anon_sym_DOLLAR_LBRACE;
	v->a[6435] = actions(63);
	v->a[6436] = 1;
	v->a[6437] = anon_sym_DOLLAR_LPAREN;
	v->a[6438] = actions(65);
	v->a[6439] = 1;
	small_parse_table_322(v);
}

void	small_parse_table_322(t_small_parse_table_array *v)
{
	v->a[6440] = anon_sym_BQUOTE;
	v->a[6441] = actions(67);
	v->a[6442] = 1;
	v->a[6443] = sym_variable_name;
	v->a[6444] = actions(224);
	v->a[6445] = 1;
	v->a[6446] = anon_sym_done;
	v->a[6447] = state(61);
	v->a[6448] = 1;
	v->a[6449] = aux_sym__terminated_statement;
	v->a[6450] = state(185);
	v->a[6451] = 1;
	v->a[6452] = sym_command_name;
	v->a[6453] = state(237);
	v->a[6454] = 1;
	v->a[6455] = sym_variable_assignment;
	v->a[6456] = state(411);
	v->a[6457] = 1;
	v->a[6458] = aux_sym_command_repeat1;
	v->a[6459] = state(551);
	small_parse_table_323(v);
}

void	small_parse_table_323(t_small_parse_table_array *v)
{
	v->a[6460] = 1;
	v->a[6461] = sym_file_redirect;
	v->a[6462] = state(555);
	v->a[6463] = 1;
	v->a[6464] = sym_concatenation;
	v->a[6465] = state(1059);
	v->a[6466] = 1;
	v->a[6467] = sym_pipeline;
	v->a[6468] = state(1126);
	v->a[6469] = 1;
	v->a[6470] = aux_sym_redirected_statement_repeat2;
	v->a[6471] = state(1561);
	v->a[6472] = 1;
	v->a[6473] = sym__statement_not_pipeline;
	v->a[6474] = actions(11);
	v->a[6475] = 2;
	v->a[6476] = anon_sym_while;
	v->a[6477] = anon_sym_until;
	v->a[6478] = actions(59);
	v->a[6479] = 2;
	small_parse_table_324(v);
}

void	small_parse_table_324(t_small_parse_table_array *v)
{
	v->a[6480] = sym_raw_string;
	v->a[6481] = sym_number;
	v->a[6482] = actions(51);
	v->a[6483] = 3;
	v->a[6484] = anon_sym_LT;
	v->a[6485] = anon_sym_GT;
	v->a[6486] = anon_sym_GT_GT;
	v->a[6487] = state(401);
	v->a[6488] = 5;
	v->a[6489] = sym_arithmetic_expansion;
	v->a[6490] = sym_string;
	v->a[6491] = sym_simple_expansion;
	v->a[6492] = sym_expansion;
	v->a[6493] = sym_command_substitution;
	v->a[6494] = state(949);
	v->a[6495] = 12;
	v->a[6496] = sym_redirected_statement;
	v->a[6497] = sym_for_statement;
	v->a[6498] = sym_while_statement;
	v->a[6499] = sym_if_statement;
	small_parse_table_325(v);
}

/* EOF small_parse_table_64.c */
