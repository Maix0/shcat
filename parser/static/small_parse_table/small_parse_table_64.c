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
	v->a[6400] = sym__statement_not_pipeline;
	v->a[6401] = actions(11);
	v->a[6402] = 2;
	v->a[6403] = anon_sym_while;
	v->a[6404] = anon_sym_until;
	v->a[6405] = actions(61);
	v->a[6406] = 2;
	v->a[6407] = sym_raw_string;
	v->a[6408] = sym_number;
	v->a[6409] = state(455);
	v->a[6410] = 5;
	v->a[6411] = sym_arithmetic_expansion;
	v->a[6412] = sym_string;
	v->a[6413] = sym_simple_expansion;
	v->a[6414] = sym_expansion;
	v->a[6415] = sym_command_substitution;
	v->a[6416] = actions(53);
	v->a[6417] = 7;
	v->a[6418] = anon_sym_LT;
	v->a[6419] = anon_sym_GT;
	small_parse_table_321(v);
}

void	small_parse_table_321(t_small_parse_table_array *v)
{
	v->a[6420] = anon_sym_GT_GT;
	v->a[6421] = anon_sym_LT_AMP;
	v->a[6422] = anon_sym_GT_AMP;
	v->a[6423] = anon_sym_GT_PIPE;
	v->a[6424] = anon_sym_LT_GT;
	v->a[6425] = state(1081);
	v->a[6426] = 12;
	v->a[6427] = sym_redirected_statement;
	v->a[6428] = sym_for_statement;
	v->a[6429] = sym_while_statement;
	v->a[6430] = sym_if_statement;
	v->a[6431] = sym_case_statement;
	v->a[6432] = sym_function_definition;
	v->a[6433] = sym_compound_statement;
	v->a[6434] = sym_subshell;
	v->a[6435] = sym_list;
	v->a[6436] = sym_negated_command;
	v->a[6437] = sym_command;
	v->a[6438] = sym__variable_assignments;
	v->a[6439] = 31;
	small_parse_table_322(v);
}

void	small_parse_table_322(t_small_parse_table_array *v)
{
	v->a[6440] = actions(3);
	v->a[6441] = 1;
	v->a[6442] = sym_comment;
	v->a[6443] = actions(9);
	v->a[6444] = 1;
	v->a[6445] = anon_sym_for;
	v->a[6446] = actions(13);
	v->a[6447] = 1;
	v->a[6448] = anon_sym_if;
	v->a[6449] = actions(15);
	v->a[6450] = 1;
	v->a[6451] = anon_sym_case;
	v->a[6452] = actions(17);
	v->a[6453] = 1;
	v->a[6454] = anon_sym_LPAREN;
	v->a[6455] = actions(19);
	v->a[6456] = 1;
	v->a[6457] = anon_sym_LBRACE;
	v->a[6458] = actions(43);
	v->a[6459] = 1;
	small_parse_table_323(v);
}

void	small_parse_table_323(t_small_parse_table_array *v)
{
	v->a[6460] = sym_word;
	v->a[6461] = actions(51);
	v->a[6462] = 1;
	v->a[6463] = anon_sym_BANG;
	v->a[6464] = actions(55);
	v->a[6465] = 1;
	v->a[6466] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[6467] = actions(57);
	v->a[6468] = 1;
	v->a[6469] = anon_sym_DOLLAR;
	v->a[6470] = actions(59);
	v->a[6471] = 1;
	v->a[6472] = anon_sym_DQUOTE;
	v->a[6473] = actions(63);
	v->a[6474] = 1;
	v->a[6475] = anon_sym_DOLLAR_LBRACE;
	v->a[6476] = actions(65);
	v->a[6477] = 1;
	v->a[6478] = anon_sym_DOLLAR_LPAREN;
	v->a[6479] = actions(67);
	small_parse_table_324(v);
}

void	small_parse_table_324(t_small_parse_table_array *v)
{
	v->a[6480] = 1;
	v->a[6481] = anon_sym_BQUOTE;
	v->a[6482] = actions(69);
	v->a[6483] = 1;
	v->a[6484] = sym_file_descriptor;
	v->a[6485] = actions(71);
	v->a[6486] = 1;
	v->a[6487] = sym_variable_name;
	v->a[6488] = actions(233);
	v->a[6489] = 1;
	v->a[6490] = anon_sym_RBRACE;
	v->a[6491] = state(90);
	v->a[6492] = 1;
	v->a[6493] = aux_sym__terminated_statement;
	v->a[6494] = state(183);
	v->a[6495] = 1;
	v->a[6496] = sym_command_name;
	v->a[6497] = state(345);
	v->a[6498] = 1;
	v->a[6499] = sym_variable_assignment;
	small_parse_table_325(v);
}

/* EOF small_parse_table_64.c */
