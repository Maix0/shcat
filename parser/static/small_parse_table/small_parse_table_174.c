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
	v->a[17400] = 1;
	v->a[17401] = anon_sym_for;
	v->a[17402] = actions(13);
	v->a[17403] = 1;
	v->a[17404] = anon_sym_if;
	v->a[17405] = actions(15);
	v->a[17406] = 1;
	v->a[17407] = anon_sym_case;
	v->a[17408] = actions(17);
	v->a[17409] = 1;
	v->a[17410] = anon_sym_LPAREN;
	v->a[17411] = actions(19);
	v->a[17412] = 1;
	v->a[17413] = anon_sym_LBRACE;
	v->a[17414] = actions(55);
	v->a[17415] = 1;
	v->a[17416] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[17417] = actions(57);
	v->a[17418] = 1;
	v->a[17419] = anon_sym_DOLLAR;
	small_parse_table_871(v);
}

void	small_parse_table_871(t_small_parse_table_array *v)
{
	v->a[17420] = actions(59);
	v->a[17421] = 1;
	v->a[17422] = anon_sym_DQUOTE;
	v->a[17423] = actions(63);
	v->a[17424] = 1;
	v->a[17425] = anon_sym_DOLLAR_LBRACE;
	v->a[17426] = actions(65);
	v->a[17427] = 1;
	v->a[17428] = anon_sym_DOLLAR_LPAREN;
	v->a[17429] = actions(67);
	v->a[17430] = 1;
	v->a[17431] = anon_sym_BQUOTE;
	v->a[17432] = actions(347);
	v->a[17433] = 1;
	v->a[17434] = sym_word;
	v->a[17435] = actions(349);
	v->a[17436] = 1;
	v->a[17437] = anon_sym_BANG;
	v->a[17438] = actions(355);
	v->a[17439] = 1;
	small_parse_table_872(v);
}

void	small_parse_table_872(t_small_parse_table_array *v)
{
	v->a[17440] = sym_file_descriptor;
	v->a[17441] = actions(357);
	v->a[17442] = 1;
	v->a[17443] = sym_variable_name;
	v->a[17444] = state(315);
	v->a[17445] = 1;
	v->a[17446] = sym_command_name;
	v->a[17447] = state(484);
	v->a[17448] = 1;
	v->a[17449] = sym_variable_assignment;
	v->a[17450] = state(622);
	v->a[17451] = 1;
	v->a[17452] = aux_sym_command_repeat1;
	v->a[17453] = state(661);
	v->a[17454] = 1;
	v->a[17455] = sym_concatenation;
	v->a[17456] = state(665);
	v->a[17457] = 1;
	v->a[17458] = sym_file_redirect;
	v->a[17459] = state(1389);
	small_parse_table_873(v);
}

void	small_parse_table_873(t_small_parse_table_array *v)
{
	v->a[17460] = 1;
	v->a[17461] = aux_sym_redirected_statement_repeat2;
	v->a[17462] = state(1396);
	v->a[17463] = 1;
	v->a[17464] = sym_pipeline;
	v->a[17465] = state(1909);
	v->a[17466] = 1;
	v->a[17467] = sym__statement_not_pipeline;
	v->a[17468] = actions(11);
	v->a[17469] = 2;
	v->a[17470] = anon_sym_while;
	v->a[17471] = anon_sym_until;
	v->a[17472] = actions(353);
	v->a[17473] = 2;
	v->a[17474] = sym_raw_string;
	v->a[17475] = sym_number;
	v->a[17476] = state(620);
	v->a[17477] = 5;
	v->a[17478] = sym_arithmetic_expansion;
	v->a[17479] = sym_string;
	small_parse_table_874(v);
}

void	small_parse_table_874(t_small_parse_table_array *v)
{
	v->a[17480] = sym_simple_expansion;
	v->a[17481] = sym_expansion;
	v->a[17482] = sym_command_substitution;
	v->a[17483] = actions(351);
	v->a[17484] = 7;
	v->a[17485] = anon_sym_LT;
	v->a[17486] = anon_sym_GT;
	v->a[17487] = anon_sym_GT_GT;
	v->a[17488] = anon_sym_LT_AMP;
	v->a[17489] = anon_sym_GT_AMP;
	v->a[17490] = anon_sym_GT_PIPE;
	v->a[17491] = anon_sym_LT_GT;
	v->a[17492] = state(1244);
	v->a[17493] = 12;
	v->a[17494] = sym_redirected_statement;
	v->a[17495] = sym_for_statement;
	v->a[17496] = sym_while_statement;
	v->a[17497] = sym_if_statement;
	v->a[17498] = sym_case_statement;
	v->a[17499] = sym_function_definition;
	small_parse_table_875(v);
}

/* EOF small_parse_table_174.c */
