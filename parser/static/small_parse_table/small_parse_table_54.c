/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_54.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_270(t_small_parse_table_array *v)
{
	v->a[5400] = 1;
	v->a[5401] = anon_sym_LPAREN;
	v->a[5402] = actions(19);
	v->a[5403] = 1;
	v->a[5404] = anon_sym_LBRACE;
	v->a[5405] = actions(55);
	v->a[5406] = 1;
	v->a[5407] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[5408] = actions(57);
	v->a[5409] = 1;
	v->a[5410] = anon_sym_DOLLAR;
	v->a[5411] = actions(59);
	v->a[5412] = 1;
	v->a[5413] = anon_sym_DQUOTE;
	v->a[5414] = actions(63);
	v->a[5415] = 1;
	v->a[5416] = anon_sym_DOLLAR_LBRACE;
	v->a[5417] = actions(65);
	v->a[5418] = 1;
	v->a[5419] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_271(v);
}

void	small_parse_table_271(t_small_parse_table_array *v)
{
	v->a[5420] = actions(67);
	v->a[5421] = 1;
	v->a[5422] = anon_sym_BQUOTE;
	v->a[5423] = actions(211);
	v->a[5424] = 1;
	v->a[5425] = sym_word;
	v->a[5426] = actions(213);
	v->a[5427] = 1;
	v->a[5428] = anon_sym_BANG;
	v->a[5429] = actions(219);
	v->a[5430] = 1;
	v->a[5431] = sym_file_descriptor;
	v->a[5432] = actions(221);
	v->a[5433] = 1;
	v->a[5434] = sym_variable_name;
	v->a[5435] = state(125);
	v->a[5436] = 1;
	v->a[5437] = aux_sym__statements_repeat1;
	v->a[5438] = state(173);
	v->a[5439] = 1;
	small_parse_table_272(v);
}

void	small_parse_table_272(t_small_parse_table_array *v)
{
	v->a[5440] = sym_command_name;
	v->a[5441] = state(224);
	v->a[5442] = 1;
	v->a[5443] = sym_variable_assignment;
	v->a[5444] = state(603);
	v->a[5445] = 1;
	v->a[5446] = sym_concatenation;
	v->a[5447] = state(654);
	v->a[5448] = 1;
	v->a[5449] = sym_file_redirect;
	v->a[5450] = state(673);
	v->a[5451] = 1;
	v->a[5452] = aux_sym_command_repeat1;
	v->a[5453] = state(1020);
	v->a[5454] = 1;
	v->a[5455] = sym_pipeline;
	v->a[5456] = state(1136);
	v->a[5457] = 1;
	v->a[5458] = aux_sym_redirected_statement_repeat2;
	v->a[5459] = state(1898);
	small_parse_table_273(v);
}

void	small_parse_table_273(t_small_parse_table_array *v)
{
	v->a[5460] = 1;
	v->a[5461] = sym__statement_not_pipeline;
	v->a[5462] = state(1977);
	v->a[5463] = 1;
	v->a[5464] = sym__statements;
	v->a[5465] = actions(11);
	v->a[5466] = 2;
	v->a[5467] = anon_sym_while;
	v->a[5468] = anon_sym_until;
	v->a[5469] = actions(217);
	v->a[5470] = 2;
	v->a[5471] = sym_raw_string;
	v->a[5472] = sym_number;
	v->a[5473] = state(362);
	v->a[5474] = 5;
	v->a[5475] = sym_arithmetic_expansion;
	v->a[5476] = sym_string;
	v->a[5477] = sym_simple_expansion;
	v->a[5478] = sym_expansion;
	v->a[5479] = sym_command_substitution;
	small_parse_table_274(v);
}

void	small_parse_table_274(t_small_parse_table_array *v)
{
	v->a[5480] = actions(215);
	v->a[5481] = 7;
	v->a[5482] = anon_sym_LT;
	v->a[5483] = anon_sym_GT;
	v->a[5484] = anon_sym_GT_GT;
	v->a[5485] = anon_sym_LT_AMP;
	v->a[5486] = anon_sym_GT_AMP;
	v->a[5487] = anon_sym_GT_PIPE;
	v->a[5488] = anon_sym_LT_GT;
	v->a[5489] = state(1003);
	v->a[5490] = 12;
	v->a[5491] = sym_redirected_statement;
	v->a[5492] = sym_for_statement;
	v->a[5493] = sym_while_statement;
	v->a[5494] = sym_if_statement;
	v->a[5495] = sym_case_statement;
	v->a[5496] = sym_function_definition;
	v->a[5497] = sym_compound_statement;
	v->a[5498] = sym_subshell;
	v->a[5499] = sym_list;
	small_parse_table_275(v);
}

/* EOF small_parse_table_54.c */
