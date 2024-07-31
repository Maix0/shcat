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
	v->a[5401] = anon_sym_DQUOTE;
	v->a[5402] = actions(61);
	v->a[5403] = 1;
	v->a[5404] = anon_sym_DOLLAR_LBRACE;
	v->a[5405] = actions(63);
	v->a[5406] = 1;
	v->a[5407] = anon_sym_DOLLAR_LPAREN;
	v->a[5408] = actions(65);
	v->a[5409] = 1;
	v->a[5410] = anon_sym_BQUOTE;
	v->a[5411] = actions(67);
	v->a[5412] = 1;
	v->a[5413] = sym_variable_name;
	v->a[5414] = actions(218);
	v->a[5415] = 1;
	v->a[5416] = anon_sym_RBRACE;
	v->a[5417] = state(95);
	v->a[5418] = 1;
	v->a[5419] = aux_sym__terminated_statement;
	small_parse_table_271(v);
}

void	small_parse_table_271(t_small_parse_table_array *v)
{
	v->a[5420] = state(271);
	v->a[5421] = 1;
	v->a[5422] = sym_command_name;
	v->a[5423] = state(302);
	v->a[5424] = 1;
	v->a[5425] = sym_variable_assignment;
	v->a[5426] = state(482);
	v->a[5427] = 1;
	v->a[5428] = aux_sym_command_repeat1;
	v->a[5429] = state(600);
	v->a[5430] = 1;
	v->a[5431] = sym_file_redirect;
	v->a[5432] = state(602);
	v->a[5433] = 1;
	v->a[5434] = sym_concatenation;
	v->a[5435] = state(980);
	v->a[5436] = 1;
	v->a[5437] = sym_pipeline;
	v->a[5438] = state(1068);
	v->a[5439] = 1;
	small_parse_table_272(v);
}

void	small_parse_table_272(t_small_parse_table_array *v)
{
	v->a[5440] = aux_sym_redirected_statement_repeat2;
	v->a[5441] = state(1609);
	v->a[5442] = 1;
	v->a[5443] = sym__statement_not_pipeline;
	v->a[5444] = actions(11);
	v->a[5445] = 2;
	v->a[5446] = anon_sym_while;
	v->a[5447] = anon_sym_until;
	v->a[5448] = actions(59);
	v->a[5449] = 2;
	v->a[5450] = sym_raw_string;
	v->a[5451] = sym_number;
	v->a[5452] = state(425);
	v->a[5453] = 5;
	v->a[5454] = sym_arithmetic_expansion;
	v->a[5455] = sym_string;
	v->a[5456] = sym_simple_expansion;
	v->a[5457] = sym_expansion;
	v->a[5458] = sym_command_substitution;
	v->a[5459] = actions(51);
	small_parse_table_273(v);
}

void	small_parse_table_273(t_small_parse_table_array *v)
{
	v->a[5460] = 7;
	v->a[5461] = anon_sym_LT;
	v->a[5462] = anon_sym_GT;
	v->a[5463] = anon_sym_GT_GT;
	v->a[5464] = anon_sym_LT_AMP;
	v->a[5465] = anon_sym_GT_AMP;
	v->a[5466] = anon_sym_GT_PIPE;
	v->a[5467] = anon_sym_LT_GT;
	v->a[5468] = state(956);
	v->a[5469] = 12;
	v->a[5470] = sym_redirected_statement;
	v->a[5471] = sym_for_statement;
	v->a[5472] = sym_while_statement;
	v->a[5473] = sym_if_statement;
	v->a[5474] = sym_case_statement;
	v->a[5475] = sym_function_definition;
	v->a[5476] = sym_compound_statement;
	v->a[5477] = sym_subshell;
	v->a[5478] = sym_list;
	v->a[5479] = sym_negated_command;
	small_parse_table_274(v);
}

void	small_parse_table_274(t_small_parse_table_array *v)
{
	v->a[5480] = sym_command;
	v->a[5481] = sym__variable_assignments;
	v->a[5482] = 30;
	v->a[5483] = actions(3);
	v->a[5484] = 1;
	v->a[5485] = sym_comment;
	v->a[5486] = actions(9);
	v->a[5487] = 1;
	v->a[5488] = anon_sym_for;
	v->a[5489] = actions(13);
	v->a[5490] = 1;
	v->a[5491] = anon_sym_if;
	v->a[5492] = actions(15);
	v->a[5493] = 1;
	v->a[5494] = anon_sym_case;
	v->a[5495] = actions(17);
	v->a[5496] = 1;
	v->a[5497] = anon_sym_LPAREN;
	v->a[5498] = actions(19);
	v->a[5499] = 1;
	small_parse_table_275(v);
}

/* EOF small_parse_table_54.c */
