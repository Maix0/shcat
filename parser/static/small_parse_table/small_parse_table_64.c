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
	v->a[6401] = sym_file_redirect;
	v->a[6402] = state(765);
	v->a[6403] = 1;
	v->a[6404] = aux_sym_command_repeat1;
	v->a[6405] = state(1110);
	v->a[6406] = 1;
	v->a[6407] = sym_pipeline;
	v->a[6408] = state(1188);
	v->a[6409] = 1;
	v->a[6410] = aux_sym_redirected_statement_repeat2;
	v->a[6411] = state(2115);
	v->a[6412] = 1;
	v->a[6413] = sym__statement_not_pipeline;
	v->a[6414] = state(2320);
	v->a[6415] = 1;
	v->a[6416] = sym__statements;
	v->a[6417] = actions(11);
	v->a[6418] = 2;
	v->a[6419] = anon_sym_while;
	small_parse_table_321(v);
}

void	small_parse_table_321(t_small_parse_table_array *v)
{
	v->a[6420] = anon_sym_until;
	v->a[6421] = actions(226);
	v->a[6422] = 2;
	v->a[6423] = anon_sym_LT_AMP_DASH;
	v->a[6424] = anon_sym_GT_AMP_DASH;
	v->a[6425] = actions(228);
	v->a[6426] = 2;
	v->a[6427] = sym_raw_string;
	v->a[6428] = sym_number;
	v->a[6429] = state(299);
	v->a[6430] = 5;
	v->a[6431] = sym_arithmetic_expansion;
	v->a[6432] = sym_string;
	v->a[6433] = sym_simple_expansion;
	v->a[6434] = sym_expansion;
	v->a[6435] = sym_command_substitution;
	v->a[6436] = actions(224);
	v->a[6437] = 8;
	v->a[6438] = anon_sym_LT;
	v->a[6439] = anon_sym_GT;
	small_parse_table_322(v);
}

void	small_parse_table_322(t_small_parse_table_array *v)
{
	v->a[6440] = anon_sym_GT_GT;
	v->a[6441] = anon_sym_AMP_GT;
	v->a[6442] = anon_sym_AMP_GT_GT;
	v->a[6443] = anon_sym_LT_AMP;
	v->a[6444] = anon_sym_GT_AMP;
	v->a[6445] = anon_sym_GT_PIPE;
	v->a[6446] = state(1072);
	v->a[6447] = 12;
	v->a[6448] = sym_redirected_statement;
	v->a[6449] = sym_for_statement;
	v->a[6450] = sym_while_statement;
	v->a[6451] = sym_if_statement;
	v->a[6452] = sym_case_statement;
	v->a[6453] = sym_function_definition;
	v->a[6454] = sym_compound_statement;
	v->a[6455] = sym_subshell;
	v->a[6456] = sym_list;
	v->a[6457] = sym_negated_command;
	v->a[6458] = sym_command;
	v->a[6459] = sym__variable_assignments;
	small_parse_table_323(v);
}

void	small_parse_table_323(t_small_parse_table_array *v)
{
	v->a[6460] = 32;
	v->a[6461] = actions(3);
	v->a[6462] = 1;
	v->a[6463] = sym_comment;
	v->a[6464] = actions(9);
	v->a[6465] = 1;
	v->a[6466] = anon_sym_for;
	v->a[6467] = actions(13);
	v->a[6468] = 1;
	v->a[6469] = anon_sym_if;
	v->a[6470] = actions(15);
	v->a[6471] = 1;
	v->a[6472] = anon_sym_case;
	v->a[6473] = actions(17);
	v->a[6474] = 1;
	v->a[6475] = anon_sym_LPAREN;
	v->a[6476] = actions(19);
	v->a[6477] = 1;
	v->a[6478] = anon_sym_LBRACE;
	v->a[6479] = actions(59);
	small_parse_table_324(v);
}

void	small_parse_table_324(t_small_parse_table_array *v)
{
	v->a[6480] = 1;
	v->a[6481] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[6482] = actions(61);
	v->a[6483] = 1;
	v->a[6484] = anon_sym_DOLLAR;
	v->a[6485] = actions(63);
	v->a[6486] = 1;
	v->a[6487] = anon_sym_DQUOTE;
	v->a[6488] = actions(67);
	v->a[6489] = 1;
	v->a[6490] = anon_sym_DOLLAR_LBRACE;
	v->a[6491] = actions(69);
	v->a[6492] = 1;
	v->a[6493] = anon_sym_DOLLAR_LPAREN;
	v->a[6494] = actions(71);
	v->a[6495] = 1;
	v->a[6496] = anon_sym_BQUOTE;
	v->a[6497] = actions(220);
	v->a[6498] = 1;
	v->a[6499] = sym_word;
	small_parse_table_325(v);
}

/* EOF small_parse_table_64.c */
