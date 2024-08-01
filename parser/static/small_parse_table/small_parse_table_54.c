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
	v->a[5400] = sym_case_statement;
	v->a[5401] = sym_function_definition;
	v->a[5402] = sym_compound_statement;
	v->a[5403] = sym_subshell;
	v->a[5404] = sym_list;
	v->a[5405] = sym_negated_command;
	v->a[5406] = sym_command;
	v->a[5407] = sym__variable_assignments;
	v->a[5408] = 30;
	v->a[5409] = actions(3);
	v->a[5410] = 1;
	v->a[5411] = sym_comment;
	v->a[5412] = actions(9);
	v->a[5413] = 1;
	v->a[5414] = anon_sym_for;
	v->a[5415] = actions(13);
	v->a[5416] = 1;
	v->a[5417] = anon_sym_if;
	v->a[5418] = actions(15);
	v->a[5419] = 1;
	small_parse_table_271(v);
}

void	small_parse_table_271(t_small_parse_table_array *v)
{
	v->a[5420] = anon_sym_case;
	v->a[5421] = actions(17);
	v->a[5422] = 1;
	v->a[5423] = anon_sym_LPAREN;
	v->a[5424] = actions(19);
	v->a[5425] = 1;
	v->a[5426] = anon_sym_LBRACE;
	v->a[5427] = actions(53);
	v->a[5428] = 1;
	v->a[5429] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[5430] = actions(55);
	v->a[5431] = 1;
	v->a[5432] = anon_sym_DOLLAR;
	v->a[5433] = actions(57);
	v->a[5434] = 1;
	v->a[5435] = anon_sym_DQUOTE;
	v->a[5436] = actions(61);
	v->a[5437] = 1;
	v->a[5438] = anon_sym_DOLLAR_LBRACE;
	v->a[5439] = actions(63);
	small_parse_table_272(v);
}

void	small_parse_table_272(t_small_parse_table_array *v)
{
	v->a[5440] = 1;
	v->a[5441] = anon_sym_DOLLAR_LPAREN;
	v->a[5442] = actions(65);
	v->a[5443] = 1;
	v->a[5444] = anon_sym_BQUOTE;
	v->a[5445] = actions(67);
	v->a[5446] = 1;
	v->a[5447] = sym_variable_name;
	v->a[5448] = actions(204);
	v->a[5449] = 1;
	v->a[5450] = sym_word;
	v->a[5451] = actions(206);
	v->a[5452] = 1;
	v->a[5453] = anon_sym_BANG;
	v->a[5454] = state(116);
	v->a[5455] = 1;
	v->a[5456] = aux_sym__statements_repeat1;
	v->a[5457] = state(179);
	v->a[5458] = 1;
	v->a[5459] = sym_command_name;
	small_parse_table_273(v);
}

void	small_parse_table_273(t_small_parse_table_array *v)
{
	v->a[5460] = state(208);
	v->a[5461] = 1;
	v->a[5462] = sym_variable_assignment;
	v->a[5463] = state(385);
	v->a[5464] = 1;
	v->a[5465] = aux_sym_command_repeat1;
	v->a[5466] = state(555);
	v->a[5467] = 1;
	v->a[5468] = sym_concatenation;
	v->a[5469] = state(599);
	v->a[5470] = 1;
	v->a[5471] = sym_file_redirect;
	v->a[5472] = state(969);
	v->a[5473] = 1;
	v->a[5474] = sym_pipeline;
	v->a[5475] = state(1006);
	v->a[5476] = 1;
	v->a[5477] = aux_sym_redirected_statement_repeat2;
	v->a[5478] = state(1560);
	v->a[5479] = 1;
	small_parse_table_274(v);
}

void	small_parse_table_274(t_small_parse_table_array *v)
{
	v->a[5480] = sym__statement_not_pipeline;
	v->a[5481] = state(1597);
	v->a[5482] = 1;
	v->a[5483] = sym__statements;
	v->a[5484] = actions(11);
	v->a[5485] = 2;
	v->a[5486] = anon_sym_while;
	v->a[5487] = anon_sym_until;
	v->a[5488] = actions(59);
	v->a[5489] = 2;
	v->a[5490] = sym_raw_string;
	v->a[5491] = sym_number;
	v->a[5492] = actions(51);
	v->a[5493] = 3;
	v->a[5494] = anon_sym_LT;
	v->a[5495] = anon_sym_GT;
	v->a[5496] = anon_sym_GT_GT;
	v->a[5497] = state(401);
	v->a[5498] = 5;
	v->a[5499] = sym_arithmetic_expansion;
	small_parse_table_275(v);
}

/* EOF small_parse_table_54.c */
