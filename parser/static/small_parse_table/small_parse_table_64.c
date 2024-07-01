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
	v->a[6400] = anon_sym_BQUOTE;
	v->a[6401] = actions(73);
	v->a[6402] = 1;
	v->a[6403] = sym_file_descriptor;
	v->a[6404] = actions(75);
	v->a[6405] = 1;
	v->a[6406] = sym_variable_name;
	v->a[6407] = actions(246);
	v->a[6408] = 1;
	v->a[6409] = anon_sym_done;
	v->a[6410] = state(35);
	v->a[6411] = 1;
	v->a[6412] = aux_sym__terminated_statement;
	v->a[6413] = state(189);
	v->a[6414] = 1;
	v->a[6415] = sym_command_name;
	v->a[6416] = state(291);
	v->a[6417] = 1;
	v->a[6418] = sym_variable_assignment;
	v->a[6419] = state(650);
	small_parse_table_321(v);
}

void	small_parse_table_321(t_small_parse_table_array *v)
{
	v->a[6420] = 1;
	v->a[6421] = sym_concatenation;
	v->a[6422] = state(712);
	v->a[6423] = 1;
	v->a[6424] = sym_file_redirect;
	v->a[6425] = state(713);
	v->a[6426] = 1;
	v->a[6427] = aux_sym_command_repeat1;
	v->a[6428] = state(1251);
	v->a[6429] = 1;
	v->a[6430] = sym_pipeline;
	v->a[6431] = state(1333);
	v->a[6432] = 1;
	v->a[6433] = aux_sym_redirected_statement_repeat2;
	v->a[6434] = state(2103);
	v->a[6435] = 1;
	v->a[6436] = sym__statement_not_pipeline;
	v->a[6437] = actions(11);
	v->a[6438] = 2;
	v->a[6439] = anon_sym_while;
	small_parse_table_322(v);
}

void	small_parse_table_322(t_small_parse_table_array *v)
{
	v->a[6440] = anon_sym_until;
	v->a[6441] = actions(57);
	v->a[6442] = 2;
	v->a[6443] = anon_sym_LT_AMP_DASH;
	v->a[6444] = anon_sym_GT_AMP_DASH;
	v->a[6445] = actions(65);
	v->a[6446] = 2;
	v->a[6447] = sym_raw_string;
	v->a[6448] = sym_number;
	v->a[6449] = state(443);
	v->a[6450] = 5;
	v->a[6451] = sym_arithmetic_expansion;
	v->a[6452] = sym_string;
	v->a[6453] = sym_simple_expansion;
	v->a[6454] = sym_expansion;
	v->a[6455] = sym_command_substitution;
	v->a[6456] = actions(55);
	v->a[6457] = 6;
	v->a[6458] = anon_sym_LT;
	v->a[6459] = anon_sym_GT;
	small_parse_table_323(v);
}

void	small_parse_table_323(t_small_parse_table_array *v)
{
	v->a[6460] = anon_sym_GT_GT;
	v->a[6461] = anon_sym_LT_AMP;
	v->a[6462] = anon_sym_GT_AMP;
	v->a[6463] = anon_sym_GT_PIPE;
	v->a[6464] = state(1094);
	v->a[6465] = 12;
	v->a[6466] = sym_redirected_statement;
	v->a[6467] = sym_for_statement;
	v->a[6468] = sym_while_statement;
	v->a[6469] = sym_if_statement;
	v->a[6470] = sym_case_statement;
	v->a[6471] = sym_function_definition;
	v->a[6472] = sym_compound_statement;
	v->a[6473] = sym_subshell;
	v->a[6474] = sym_list;
	v->a[6475] = sym_negated_command;
	v->a[6476] = sym_command;
	v->a[6477] = sym__variable_assignments;
	v->a[6478] = 32;
	v->a[6479] = actions(3);
	small_parse_table_324(v);
}

void	small_parse_table_324(t_small_parse_table_array *v)
{
	v->a[6480] = 1;
	v->a[6481] = sym_comment;
	v->a[6482] = actions(9);
	v->a[6483] = 1;
	v->a[6484] = anon_sym_for;
	v->a[6485] = actions(13);
	v->a[6486] = 1;
	v->a[6487] = anon_sym_if;
	v->a[6488] = actions(15);
	v->a[6489] = 1;
	v->a[6490] = anon_sym_case;
	v->a[6491] = actions(17);
	v->a[6492] = 1;
	v->a[6493] = anon_sym_LPAREN;
	v->a[6494] = actions(19);
	v->a[6495] = 1;
	v->a[6496] = anon_sym_LBRACE;
	v->a[6497] = actions(59);
	v->a[6498] = 1;
	v->a[6499] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_325(v);
}

/* EOF small_parse_table_64.c */
