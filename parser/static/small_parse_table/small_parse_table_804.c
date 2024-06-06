/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_804.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4020(t_small_parse_table_array *v)
{
	v->a[80400] = anon_sym_DQUOTE;
	v->a[80401] = sym_raw_string;
	v->a[80402] = aux_sym_number_token1;
	v->a[80403] = aux_sym_number_token2;
	v->a[80404] = anon_sym_DOLLAR_LBRACE;
	v->a[80405] = anon_sym_DOLLAR_LPAREN;
	v->a[80406] = anon_sym_BQUOTE;
	v->a[80407] = anon_sym_DOLLAR_BQUOTE;
	v->a[80408] = sym_word;
	v->a[80409] = 22;
	v->a[80410] = actions(57);
	v->a[80411] = 1;
	v->a[80412] = sym_comment;
	v->a[80413] = actions(4328);
	v->a[80414] = 1;
	v->a[80415] = sym_word;
	v->a[80416] = actions(4340);
	v->a[80417] = 1;
	v->a[80418] = anon_sym_DOLLAR;
	v->a[80419] = actions(4346);
	small_parse_table_4021(v);
}

void	small_parse_table_4021(t_small_parse_table_array *v)
{
	v->a[80420] = 1;
	v->a[80421] = aux_sym_number_token1;
	v->a[80422] = actions(4348);
	v->a[80423] = 1;
	v->a[80424] = aux_sym_number_token2;
	v->a[80425] = actions(4352);
	v->a[80426] = 1;
	v->a[80427] = anon_sym_DOLLAR_LPAREN;
	v->a[80428] = actions(4360);
	v->a[80429] = 1;
	v->a[80430] = sym_extglob_pattern;
	v->a[80431] = actions(4362);
	v->a[80432] = 1;
	v->a[80433] = sym__brace_start;
	v->a[80434] = actions(4449);
	v->a[80435] = 1;
	v->a[80436] = anon_sym_esac;
	v->a[80437] = actions(4548);
	v->a[80438] = 1;
	v->a[80439] = anon_sym_LPAREN;
	small_parse_table_4022(v);
}

void	small_parse_table_4022(t_small_parse_table_array *v)
{
	v->a[80440] = actions(4550);
	v->a[80441] = 1;
	v->a[80442] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[80443] = actions(4552);
	v->a[80444] = 1;
	v->a[80445] = sym__special_character;
	v->a[80446] = actions(4554);
	v->a[80447] = 1;
	v->a[80448] = anon_sym_DQUOTE;
	v->a[80449] = actions(4556);
	v->a[80450] = 1;
	v->a[80451] = anon_sym_DOLLAR_LBRACE;
	v->a[80452] = actions(4558);
	v->a[80453] = 1;
	v->a[80454] = anon_sym_BQUOTE;
	v->a[80455] = actions(4560);
	v->a[80456] = 1;
	v->a[80457] = anon_sym_DOLLAR_BQUOTE;
	v->a[80458] = state(3393);
	v->a[80459] = 1;
	small_parse_table_4023(v);
}

void	small_parse_table_4023(t_small_parse_table_array *v)
{
	v->a[80460] = aux_sym__literal_repeat1;
	v->a[80461] = state(3834);
	v->a[80462] = 1;
	v->a[80463] = sym_last_case_item;
	v->a[80464] = actions(4358);
	v->a[80465] = 2;
	v->a[80466] = sym_test_operator;
	v->a[80467] = sym_raw_string;
	v->a[80468] = state(1746);
	v->a[80469] = 2;
	v->a[80470] = sym_case_item;
	v->a[80471] = aux_sym_case_statement_repeat1;
	v->a[80472] = state(3472);
	v->a[80473] = 2;
	v->a[80474] = sym_concatenation;
	v->a[80475] = sym__extglob_blob;
	v->a[80476] = state(3295);
	v->a[80477] = 7;
	v->a[80478] = sym_arithmetic_expansion;
	v->a[80479] = sym_brace_expression;
	small_parse_table_4024(v);
}

void	small_parse_table_4024(t_small_parse_table_array *v)
{
	v->a[80480] = sym_string;
	v->a[80481] = sym_number;
	v->a[80482] = sym_simple_expansion;
	v->a[80483] = sym_expansion;
	v->a[80484] = sym_command_substitution;
	v->a[80485] = 22;
	v->a[80486] = actions(57);
	v->a[80487] = 1;
	v->a[80488] = sym_comment;
	v->a[80489] = actions(4328);
	v->a[80490] = 1;
	v->a[80491] = sym_word;
	v->a[80492] = actions(4340);
	v->a[80493] = 1;
	v->a[80494] = anon_sym_DOLLAR;
	v->a[80495] = actions(4346);
	v->a[80496] = 1;
	v->a[80497] = aux_sym_number_token1;
	v->a[80498] = actions(4348);
	v->a[80499] = 1;
	small_parse_table_4025(v);
}

/* EOF small_parse_table_804.c */
