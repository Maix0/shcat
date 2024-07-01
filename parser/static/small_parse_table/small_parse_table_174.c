/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_174.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_870(t_small_parse_table_array *v)
{
	v->a[17400] = actions(226);
	v->a[17401] = 2;
	v->a[17402] = anon_sym_LT_AMP_DASH;
	v->a[17403] = anon_sym_GT_AMP_DASH;
	v->a[17404] = actions(228);
	v->a[17405] = 2;
	v->a[17406] = sym_raw_string;
	v->a[17407] = sym_number;
	v->a[17408] = state(382);
	v->a[17409] = 5;
	v->a[17410] = sym_arithmetic_expansion;
	v->a[17411] = sym_string;
	v->a[17412] = sym_simple_expansion;
	v->a[17413] = sym_expansion;
	v->a[17414] = sym_command_substitution;
	v->a[17415] = actions(224);
	v->a[17416] = 6;
	v->a[17417] = anon_sym_LT;
	v->a[17418] = anon_sym_GT;
	v->a[17419] = anon_sym_GT_GT;
	small_parse_table_871(v);
}

void	small_parse_table_871(t_small_parse_table_array *v)
{
	v->a[17420] = anon_sym_LT_AMP;
	v->a[17421] = anon_sym_GT_AMP;
	v->a[17422] = anon_sym_GT_PIPE;
	v->a[17423] = state(1113);
	v->a[17424] = 13;
	v->a[17425] = sym__statement_not_pipeline;
	v->a[17426] = sym_redirected_statement;
	v->a[17427] = sym_for_statement;
	v->a[17428] = sym_while_statement;
	v->a[17429] = sym_if_statement;
	v->a[17430] = sym_case_statement;
	v->a[17431] = sym_function_definition;
	v->a[17432] = sym_compound_statement;
	v->a[17433] = sym_subshell;
	v->a[17434] = sym_list;
	v->a[17435] = sym_negated_command;
	v->a[17436] = sym_command;
	v->a[17437] = sym__variable_assignments;
	v->a[17438] = 29;
	v->a[17439] = actions(3);
	small_parse_table_872(v);
}

void	small_parse_table_872(t_small_parse_table_array *v)
{
	v->a[17440] = 1;
	v->a[17441] = sym_comment;
	v->a[17442] = actions(9);
	v->a[17443] = 1;
	v->a[17444] = anon_sym_for;
	v->a[17445] = actions(13);
	v->a[17446] = 1;
	v->a[17447] = anon_sym_if;
	v->a[17448] = actions(15);
	v->a[17449] = 1;
	v->a[17450] = anon_sym_case;
	v->a[17451] = actions(17);
	v->a[17452] = 1;
	v->a[17453] = anon_sym_LPAREN;
	v->a[17454] = actions(19);
	v->a[17455] = 1;
	v->a[17456] = anon_sym_LBRACE;
	v->a[17457] = actions(59);
	v->a[17458] = 1;
	v->a[17459] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_873(v);
}

void	small_parse_table_873(t_small_parse_table_array *v)
{
	v->a[17460] = actions(61);
	v->a[17461] = 1;
	v->a[17462] = anon_sym_DOLLAR;
	v->a[17463] = actions(63);
	v->a[17464] = 1;
	v->a[17465] = anon_sym_DQUOTE;
	v->a[17466] = actions(67);
	v->a[17467] = 1;
	v->a[17468] = anon_sym_DOLLAR_LBRACE;
	v->a[17469] = actions(69);
	v->a[17470] = 1;
	v->a[17471] = anon_sym_DOLLAR_LPAREN;
	v->a[17472] = actions(71);
	v->a[17473] = 1;
	v->a[17474] = anon_sym_BQUOTE;
	v->a[17475] = actions(363);
	v->a[17476] = 1;
	v->a[17477] = sym_word;
	v->a[17478] = actions(365);
	v->a[17479] = 1;
	small_parse_table_874(v);
}

void	small_parse_table_874(t_small_parse_table_array *v)
{
	v->a[17480] = anon_sym_BANG;
	v->a[17481] = actions(373);
	v->a[17482] = 1;
	v->a[17483] = sym_file_descriptor;
	v->a[17484] = actions(375);
	v->a[17485] = 1;
	v->a[17486] = sym_variable_name;
	v->a[17487] = state(308);
	v->a[17488] = 1;
	v->a[17489] = sym_command_name;
	v->a[17490] = state(612);
	v->a[17491] = 1;
	v->a[17492] = sym_variable_assignment;
	v->a[17493] = state(650);
	v->a[17494] = 1;
	v->a[17495] = sym_concatenation;
	v->a[17496] = state(669);
	v->a[17497] = 1;
	v->a[17498] = aux_sym_command_repeat1;
	v->a[17499] = state(712);
	small_parse_table_875(v);
}

/* EOF small_parse_table_174.c */
