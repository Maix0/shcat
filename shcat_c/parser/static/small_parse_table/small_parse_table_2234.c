/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2234.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11170(t_small_parse_table_array *v)
{
	v->a[223400] = sym_raw_string;
	v->a[223401] = sym_ansi_c_string;
	v->a[223402] = state(513);
	v->a[223403] = 9;
	v->a[223404] = sym_arithmetic_expansion;
	v->a[223405] = sym_brace_expression;
	v->a[223406] = sym_string;
	v->a[223407] = sym_translated_string;
	v->a[223408] = sym_number;
	v->a[223409] = sym_simple_expansion;
	v->a[223410] = sym_expansion;
	v->a[223411] = sym_command_substitution;
	v->a[223412] = sym_process_substitution;
	v->a[223413] = 18;
	v->a[223414] = actions(3);
	v->a[223415] = 1;
	v->a[223416] = sym_comment;
	v->a[223417] = actions(3737);
	v->a[223418] = 1;
	v->a[223419] = aux_sym_number_token1;
	small_parse_table_11171(v);
}

void	small_parse_table_11171(t_small_parse_table_array *v)
{
	v->a[223420] = actions(3739);
	v->a[223421] = 1;
	v->a[223422] = aux_sym_number_token2;
	v->a[223423] = actions(3743);
	v->a[223424] = 1;
	v->a[223425] = anon_sym_DOLLAR_LPAREN;
	v->a[223426] = actions(3755);
	v->a[223427] = 1;
	v->a[223428] = sym__brace_start;
	v->a[223429] = actions(8820);
	v->a[223430] = 1;
	v->a[223431] = anon_sym_DOLLAR_LBRACK;
	v->a[223432] = actions(8824);
	v->a[223433] = 1;
	v->a[223434] = anon_sym_DQUOTE;
	v->a[223435] = actions(8828);
	v->a[223436] = 1;
	v->a[223437] = anon_sym_DOLLAR_LBRACE;
	v->a[223438] = actions(8830);
	v->a[223439] = 1;
	small_parse_table_11172(v);
}

void	small_parse_table_11172(t_small_parse_table_array *v)
{
	v->a[223440] = anon_sym_BQUOTE;
	v->a[223441] = actions(8832);
	v->a[223442] = 1;
	v->a[223443] = anon_sym_DOLLAR_BQUOTE;
	v->a[223444] = actions(9412);
	v->a[223445] = 1;
	v->a[223446] = sym_word;
	v->a[223447] = actions(9420);
	v->a[223448] = 1;
	v->a[223449] = sym__comment_word;
	v->a[223450] = actions(10656);
	v->a[223451] = 1;
	v->a[223452] = anon_sym_DOLLAR;
	v->a[223453] = actions(8818);
	v->a[223454] = 2;
	v->a[223455] = anon_sym_LPAREN_LPAREN;
	v->a[223456] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[223457] = actions(8834);
	v->a[223458] = 2;
	v->a[223459] = anon_sym_LT_LPAREN;
	small_parse_table_11173(v);
}

void	small_parse_table_11173(t_small_parse_table_array *v)
{
	v->a[223460] = anon_sym_GT_LPAREN;
	v->a[223461] = actions(9416);
	v->a[223462] = 2;
	v->a[223463] = sym_test_operator;
	v->a[223464] = sym__special_character;
	v->a[223465] = actions(9418);
	v->a[223466] = 3;
	v->a[223467] = sym__bare_dollar;
	v->a[223468] = sym_raw_string;
	v->a[223469] = sym_ansi_c_string;
	v->a[223470] = state(4810);
	v->a[223471] = 9;
	v->a[223472] = sym_arithmetic_expansion;
	v->a[223473] = sym_brace_expression;
	v->a[223474] = sym_string;
	v->a[223475] = sym_translated_string;
	v->a[223476] = sym_number;
	v->a[223477] = sym_simple_expansion;
	v->a[223478] = sym_expansion;
	v->a[223479] = sym_command_substitution;
	small_parse_table_11174(v);
}

void	small_parse_table_11174(t_small_parse_table_array *v)
{
	v->a[223480] = sym_process_substitution;
	v->a[223481] = 18;
	v->a[223482] = actions(3);
	v->a[223483] = 1;
	v->a[223484] = sym_comment;
	v->a[223485] = actions(3793);
	v->a[223486] = 1;
	v->a[223487] = aux_sym_number_token1;
	v->a[223488] = actions(3795);
	v->a[223489] = 1;
	v->a[223490] = aux_sym_number_token2;
	v->a[223491] = actions(3799);
	v->a[223492] = 1;
	v->a[223493] = anon_sym_DOLLAR_LPAREN;
	v->a[223494] = actions(3809);
	v->a[223495] = 1;
	v->a[223496] = sym__brace_start;
	v->a[223497] = actions(9636);
	v->a[223498] = 1;
	v->a[223499] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_11175(v);
}

/* EOF small_parse_table_2234.c */
