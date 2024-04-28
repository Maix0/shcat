/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1824.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9120(t_small_parse_table_array *v)
{
	v->a[182400] = anon_sym_LPAREN_LPAREN;
	v->a[182401] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[182402] = actions(7232);
	v->a[182403] = 2;
	v->a[182404] = sym_raw_string;
	v->a[182405] = sym_ansi_c_string;
	v->a[182406] = actions(7240);
	v->a[182407] = 2;
	v->a[182408] = anon_sym_LT_LPAREN;
	v->a[182409] = anon_sym_GT_LPAREN;
	v->a[182410] = state(3477);
	v->a[182411] = 2;
	v->a[182412] = sym_case_item;
	v->a[182413] = aux_sym_case_statement_repeat1;
	v->a[182414] = state(6695);
	v->a[182415] = 2;
	v->a[182416] = sym_concatenation;
	v->a[182417] = sym__extglob_blob;
	v->a[182418] = state(6303);
	v->a[182419] = 9;
	small_parse_table_9121(v);
}

void	small_parse_table_9121(t_small_parse_table_array *v)
{
	v->a[182420] = sym_arithmetic_expansion;
	v->a[182421] = sym_brace_expression;
	v->a[182422] = sym_string;
	v->a[182423] = sym_translated_string;
	v->a[182424] = sym_number;
	v->a[182425] = sym_simple_expansion;
	v->a[182426] = sym_expansion;
	v->a[182427] = sym_command_substitution;
	v->a[182428] = sym_process_substitution;
	v->a[182429] = 24;
	v->a[182430] = actions(71);
	v->a[182431] = 1;
	v->a[182432] = sym_comment;
	v->a[182433] = actions(6474);
	v->a[182434] = 1;
	v->a[182435] = sym_word;
	v->a[182436] = actions(6480);
	v->a[182437] = 1;
	v->a[182438] = anon_sym_LPAREN;
	v->a[182439] = actions(6488);
	small_parse_table_9122(v);
}

void	small_parse_table_9122(t_small_parse_table_array *v)
{
	v->a[182440] = 1;
	v->a[182441] = anon_sym_DOLLAR;
	v->a[182442] = actions(6494);
	v->a[182443] = 1;
	v->a[182444] = aux_sym_number_token1;
	v->a[182445] = actions(6496);
	v->a[182446] = 1;
	v->a[182447] = aux_sym_number_token2;
	v->a[182448] = actions(6500);
	v->a[182449] = 1;
	v->a[182450] = anon_sym_DOLLAR_LPAREN;
	v->a[182451] = actions(6508);
	v->a[182452] = 1;
	v->a[182453] = sym_test_operator;
	v->a[182454] = actions(6510);
	v->a[182455] = 1;
	v->a[182456] = sym_extglob_pattern;
	v->a[182457] = actions(6512);
	v->a[182458] = 1;
	v->a[182459] = sym__brace_start;
	small_parse_table_9123(v);
}

void	small_parse_table_9123(t_small_parse_table_array *v)
{
	v->a[182460] = actions(7226);
	v->a[182461] = 1;
	v->a[182462] = anon_sym_DOLLAR_LBRACK;
	v->a[182463] = actions(7228);
	v->a[182464] = 1;
	v->a[182465] = sym__special_character;
	v->a[182466] = actions(7230);
	v->a[182467] = 1;
	v->a[182468] = anon_sym_DQUOTE;
	v->a[182469] = actions(7234);
	v->a[182470] = 1;
	v->a[182471] = anon_sym_DOLLAR_LBRACE;
	v->a[182472] = actions(7236);
	v->a[182473] = 1;
	v->a[182474] = anon_sym_BQUOTE;
	v->a[182475] = actions(7238);
	v->a[182476] = 1;
	v->a[182477] = anon_sym_DOLLAR_BQUOTE;
	v->a[182478] = state(6426);
	v->a[182479] = 1;
	small_parse_table_9124(v);
}

void	small_parse_table_9124(t_small_parse_table_array *v)
{
	v->a[182480] = aux_sym__literal_repeat1;
	v->a[182481] = state(7016);
	v->a[182482] = 1;
	v->a[182483] = sym_last_case_item;
	v->a[182484] = actions(7224);
	v->a[182485] = 2;
	v->a[182486] = anon_sym_LPAREN_LPAREN;
	v->a[182487] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[182488] = actions(7232);
	v->a[182489] = 2;
	v->a[182490] = sym_raw_string;
	v->a[182491] = sym_ansi_c_string;
	v->a[182492] = actions(7240);
	v->a[182493] = 2;
	v->a[182494] = anon_sym_LT_LPAREN;
	v->a[182495] = anon_sym_GT_LPAREN;
	v->a[182496] = state(3477);
	v->a[182497] = 2;
	v->a[182498] = sym_case_item;
	v->a[182499] = aux_sym_case_statement_repeat1;
	small_parse_table_9125(v);
}

/* EOF small_parse_table_1824.c */
