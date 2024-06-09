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
	v->a[5400] = aux_sym_number_token2;
	v->a[5401] = actions(75);
	v->a[5402] = 1;
	v->a[5403] = anon_sym_DOLLAR_LBRACE;
	v->a[5404] = actions(77);
	v->a[5405] = 1;
	v->a[5406] = anon_sym_DOLLAR_LPAREN;
	v->a[5407] = actions(79);
	v->a[5408] = 1;
	v->a[5409] = anon_sym_BQUOTE;
	v->a[5410] = actions(81);
	v->a[5411] = 1;
	v->a[5412] = sym_file_descriptor;
	v->a[5413] = actions(83);
	v->a[5414] = 1;
	v->a[5415] = sym_variable_name;
	v->a[5416] = actions(246);
	v->a[5417] = 1;
	v->a[5418] = anon_sym_done;
	v->a[5419] = state(40);
	small_parse_table_271(v);
}

void	small_parse_table_271(t_small_parse_table_array *v)
{
	v->a[5420] = 1;
	v->a[5421] = aux_sym__terminated_statement;
	v->a[5422] = state(190);
	v->a[5423] = 1;
	v->a[5424] = sym_command_name;
	v->a[5425] = state(303);
	v->a[5426] = 1;
	v->a[5427] = sym_variable_assignment;
	v->a[5428] = state(582);
	v->a[5429] = 1;
	v->a[5430] = sym_concatenation;
	v->a[5431] = state(587);
	v->a[5432] = 1;
	v->a[5433] = aux_sym_command_repeat1;
	v->a[5434] = state(718);
	v->a[5435] = 1;
	v->a[5436] = sym_file_redirect;
	v->a[5437] = state(1213);
	v->a[5438] = 1;
	v->a[5439] = aux_sym_redirected_statement_repeat2;
	small_parse_table_272(v);
}

void	small_parse_table_272(t_small_parse_table_array *v)
{
	v->a[5440] = state(1225);
	v->a[5441] = 1;
	v->a[5442] = sym_pipeline;
	v->a[5443] = state(2035);
	v->a[5444] = 1;
	v->a[5445] = sym__statement_not_pipeline;
	v->a[5446] = actions(11);
	v->a[5447] = 2;
	v->a[5448] = anon_sym_while;
	v->a[5449] = anon_sym_until;
	v->a[5450] = actions(61);
	v->a[5451] = 2;
	v->a[5452] = anon_sym_LT_AMP_DASH;
	v->a[5453] = anon_sym_GT_AMP_DASH;
	v->a[5454] = state(397);
	v->a[5455] = 6;
	v->a[5456] = sym_arithmetic_expansion;
	v->a[5457] = sym_string;
	v->a[5458] = sym_number;
	v->a[5459] = sym_simple_expansion;
	small_parse_table_273(v);
}

void	small_parse_table_273(t_small_parse_table_array *v)
{
	v->a[5460] = sym_expansion;
	v->a[5461] = sym_command_substitution;
	v->a[5462] = actions(59);
	v->a[5463] = 8;
	v->a[5464] = anon_sym_LT;
	v->a[5465] = anon_sym_GT;
	v->a[5466] = anon_sym_GT_GT;
	v->a[5467] = anon_sym_AMP_GT;
	v->a[5468] = anon_sym_AMP_GT_GT;
	v->a[5469] = anon_sym_LT_AMP;
	v->a[5470] = anon_sym_GT_AMP;
	v->a[5471] = anon_sym_GT_PIPE;
	v->a[5472] = state(1137);
	v->a[5473] = 12;
	v->a[5474] = sym_redirected_statement;
	v->a[5475] = sym_for_statement;
	v->a[5476] = sym_while_statement;
	v->a[5477] = sym_if_statement;
	v->a[5478] = sym_case_statement;
	v->a[5479] = sym_function_definition;
	small_parse_table_274(v);
}

void	small_parse_table_274(t_small_parse_table_array *v)
{
	v->a[5480] = sym_compound_statement;
	v->a[5481] = sym_subshell;
	v->a[5482] = sym_list;
	v->a[5483] = sym_negated_command;
	v->a[5484] = sym_command;
	v->a[5485] = sym_variable_assignments;
	v->a[5486] = 34;
	v->a[5487] = actions(3);
	v->a[5488] = 1;
	v->a[5489] = sym_comment;
	v->a[5490] = actions(9);
	v->a[5491] = 1;
	v->a[5492] = anon_sym_for;
	v->a[5493] = actions(13);
	v->a[5494] = 1;
	v->a[5495] = anon_sym_if;
	v->a[5496] = actions(15);
	v->a[5497] = 1;
	v->a[5498] = anon_sym_case;
	v->a[5499] = actions(17);
	small_parse_table_275(v);
}

/* EOF small_parse_table_54.c */
