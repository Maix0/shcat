/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1964.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9820(t_small_parse_table_array *v)
{
	v->a[196400] = actions(7228);
	v->a[196401] = 1;
	v->a[196402] = sym__special_character;
	v->a[196403] = actions(7230);
	v->a[196404] = 1;
	v->a[196405] = anon_sym_DQUOTE;
	v->a[196406] = actions(7234);
	v->a[196407] = 1;
	v->a[196408] = anon_sym_DOLLAR_LBRACE;
	v->a[196409] = actions(7236);
	v->a[196410] = 1;
	v->a[196411] = anon_sym_BQUOTE;
	v->a[196412] = actions(7238);
	v->a[196413] = 1;
	v->a[196414] = anon_sym_DOLLAR_BQUOTE;
	v->a[196415] = actions(8806);
	v->a[196416] = 1;
	v->a[196417] = sym_word;
	v->a[196418] = actions(8810);
	v->a[196419] = 1;
	small_parse_table_9821(v);
}

void	small_parse_table_9821(t_small_parse_table_array *v)
{
	v->a[196420] = sym_test_operator;
	v->a[196421] = state(6415);
	v->a[196422] = 1;
	v->a[196423] = aux_sym__literal_repeat1;
	v->a[196424] = actions(7224);
	v->a[196425] = 2;
	v->a[196426] = anon_sym_LPAREN_LPAREN;
	v->a[196427] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[196428] = actions(7240);
	v->a[196429] = 2;
	v->a[196430] = anon_sym_LT_LPAREN;
	v->a[196431] = anon_sym_GT_LPAREN;
	v->a[196432] = actions(8808);
	v->a[196433] = 2;
	v->a[196434] = sym_raw_string;
	v->a[196435] = sym_ansi_c_string;
	v->a[196436] = state(6569);
	v->a[196437] = 2;
	v->a[196438] = sym_concatenation;
	v->a[196439] = sym__extglob_blob;
	small_parse_table_9822(v);
}

void	small_parse_table_9822(t_small_parse_table_array *v)
{
	v->a[196440] = state(6302);
	v->a[196441] = 9;
	v->a[196442] = sym_arithmetic_expansion;
	v->a[196443] = sym_brace_expression;
	v->a[196444] = sym_string;
	v->a[196445] = sym_translated_string;
	v->a[196446] = sym_number;
	v->a[196447] = sym_simple_expansion;
	v->a[196448] = sym_expansion;
	v->a[196449] = sym_command_substitution;
	v->a[196450] = sym_process_substitution;
	v->a[196451] = 21;
	v->a[196452] = actions(71);
	v->a[196453] = 1;
	v->a[196454] = sym_comment;
	v->a[196455] = actions(8565);
	v->a[196456] = 1;
	v->a[196457] = sym_word;
	v->a[196458] = actions(8571);
	v->a[196459] = 1;
	small_parse_table_9823(v);
}

void	small_parse_table_9823(t_small_parse_table_array *v)
{
	v->a[196460] = anon_sym_DOLLAR_LBRACK;
	v->a[196461] = actions(8573);
	v->a[196462] = 1;
	v->a[196463] = anon_sym_DOLLAR;
	v->a[196464] = actions(8575);
	v->a[196465] = 1;
	v->a[196466] = sym__special_character;
	v->a[196467] = actions(8577);
	v->a[196468] = 1;
	v->a[196469] = anon_sym_DQUOTE;
	v->a[196470] = actions(8581);
	v->a[196471] = 1;
	v->a[196472] = aux_sym_number_token1;
	v->a[196473] = actions(8583);
	v->a[196474] = 1;
	v->a[196475] = aux_sym_number_token2;
	v->a[196476] = actions(8585);
	v->a[196477] = 1;
	v->a[196478] = anon_sym_DOLLAR_LBRACE;
	v->a[196479] = actions(8587);
	small_parse_table_9824(v);
}

void	small_parse_table_9824(t_small_parse_table_array *v)
{
	v->a[196480] = 1;
	v->a[196481] = anon_sym_DOLLAR_LPAREN;
	v->a[196482] = actions(8589);
	v->a[196483] = 1;
	v->a[196484] = anon_sym_BQUOTE;
	v->a[196485] = actions(8591);
	v->a[196486] = 1;
	v->a[196487] = anon_sym_DOLLAR_BQUOTE;
	v->a[196488] = actions(8595);
	v->a[196489] = 1;
	v->a[196490] = sym_test_operator;
	v->a[196491] = actions(8597);
	v->a[196492] = 1;
	v->a[196493] = sym__brace_start;
	v->a[196494] = actions(8812);
	v->a[196495] = 1;
	v->a[196496] = anon_sym_RPAREN;
	v->a[196497] = state(5365);
	v->a[196498] = 1;
	v->a[196499] = aux_sym__literal_repeat1;
	small_parse_table_9825(v);
}

/* EOF small_parse_table_1964.c */
