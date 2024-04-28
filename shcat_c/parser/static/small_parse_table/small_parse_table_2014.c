/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2014.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10070(t_small_parse_table_array *v)
{
	v->a[201400] = 1;
	v->a[201401] = sym_word;
	v->a[201402] = actions(9190);
	v->a[201403] = 1;
	v->a[201404] = sym_test_operator;
	v->a[201405] = state(1744);
	v->a[201406] = 1;
	v->a[201407] = aux_sym__literal_repeat1;
	v->a[201408] = actions(8174);
	v->a[201409] = 2;
	v->a[201410] = anon_sym_LPAREN_LPAREN;
	v->a[201411] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[201412] = actions(8200);
	v->a[201413] = 2;
	v->a[201414] = anon_sym_LT_LPAREN;
	v->a[201415] = anon_sym_GT_LPAREN;
	v->a[201416] = actions(9188);
	v->a[201417] = 2;
	v->a[201418] = sym_raw_string;
	v->a[201419] = sym_ansi_c_string;
	small_parse_table_10071(v);
}

void	small_parse_table_10071(t_small_parse_table_array *v)
{
	v->a[201420] = state(673);
	v->a[201421] = 2;
	v->a[201422] = sym_concatenation;
	v->a[201423] = aux_sym_for_statement_repeat1;
	v->a[201424] = state(1688);
	v->a[201425] = 9;
	v->a[201426] = sym_arithmetic_expansion;
	v->a[201427] = sym_brace_expression;
	v->a[201428] = sym_string;
	v->a[201429] = sym_translated_string;
	v->a[201430] = sym_number;
	v->a[201431] = sym_simple_expansion;
	v->a[201432] = sym_expansion;
	v->a[201433] = sym_command_substitution;
	v->a[201434] = sym_process_substitution;
	v->a[201435] = 20;
	v->a[201436] = actions(71);
	v->a[201437] = 1;
	v->a[201438] = sym_comment;
	v->a[201439] = actions(4943);
	small_parse_table_10072(v);
}

void	small_parse_table_10072(t_small_parse_table_array *v)
{
	v->a[201440] = 1;
	v->a[201441] = sym_word;
	v->a[201442] = actions(4947);
	v->a[201443] = 1;
	v->a[201444] = anon_sym_DOLLAR_LBRACK;
	v->a[201445] = actions(4949);
	v->a[201446] = 1;
	v->a[201447] = anon_sym_DOLLAR;
	v->a[201448] = actions(4953);
	v->a[201449] = 1;
	v->a[201450] = anon_sym_DQUOTE;
	v->a[201451] = actions(4957);
	v->a[201452] = 1;
	v->a[201453] = aux_sym_number_token1;
	v->a[201454] = actions(4959);
	v->a[201455] = 1;
	v->a[201456] = aux_sym_number_token2;
	v->a[201457] = actions(4961);
	v->a[201458] = 1;
	v->a[201459] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_10073(v);
}

void	small_parse_table_10073(t_small_parse_table_array *v)
{
	v->a[201460] = actions(4963);
	v->a[201461] = 1;
	v->a[201462] = anon_sym_DOLLAR_LPAREN;
	v->a[201463] = actions(4965);
	v->a[201464] = 1;
	v->a[201465] = anon_sym_BQUOTE;
	v->a[201466] = actions(4967);
	v->a[201467] = 1;
	v->a[201468] = anon_sym_DOLLAR_BQUOTE;
	v->a[201469] = actions(4971);
	v->a[201470] = 1;
	v->a[201471] = sym_test_operator;
	v->a[201472] = actions(4973);
	v->a[201473] = 1;
	v->a[201474] = sym__brace_start;
	v->a[201475] = actions(9192);
	v->a[201476] = 1;
	v->a[201477] = sym__special_character;
	v->a[201478] = state(2776);
	v->a[201479] = 1;
	small_parse_table_10074(v);
}

void	small_parse_table_10074(t_small_parse_table_array *v)
{
	v->a[201480] = aux_sym__literal_repeat1;
	v->a[201481] = actions(4945);
	v->a[201482] = 2;
	v->a[201483] = anon_sym_LPAREN_LPAREN;
	v->a[201484] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[201485] = actions(4955);
	v->a[201486] = 2;
	v->a[201487] = sym_raw_string;
	v->a[201488] = sym_ansi_c_string;
	v->a[201489] = actions(4969);
	v->a[201490] = 2;
	v->a[201491] = anon_sym_LT_LPAREN;
	v->a[201492] = anon_sym_GT_LPAREN;
	v->a[201493] = state(971);
	v->a[201494] = 2;
	v->a[201495] = sym_concatenation;
	v->a[201496] = aux_sym_for_statement_repeat1;
	v->a[201497] = state(2489);
	v->a[201498] = 9;
	v->a[201499] = sym_arithmetic_expansion;
	small_parse_table_10075(v);
}

/* EOF small_parse_table_2014.c */
