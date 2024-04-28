/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1934.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9670(t_small_parse_table_array *v)
{
	v->a[193400] = aux_sym_number_token1;
	v->a[193401] = actions(8583);
	v->a[193402] = 1;
	v->a[193403] = aux_sym_number_token2;
	v->a[193404] = actions(8585);
	v->a[193405] = 1;
	v->a[193406] = anon_sym_DOLLAR_LBRACE;
	v->a[193407] = actions(8587);
	v->a[193408] = 1;
	v->a[193409] = anon_sym_DOLLAR_LPAREN;
	v->a[193410] = actions(8589);
	v->a[193411] = 1;
	v->a[193412] = anon_sym_BQUOTE;
	v->a[193413] = actions(8591);
	v->a[193414] = 1;
	v->a[193415] = anon_sym_DOLLAR_BQUOTE;
	v->a[193416] = actions(8595);
	v->a[193417] = 1;
	v->a[193418] = sym_test_operator;
	v->a[193419] = actions(8597);
	small_parse_table_9671(v);
}

void	small_parse_table_9671(t_small_parse_table_array *v)
{
	v->a[193420] = 1;
	v->a[193421] = sym__brace_start;
	v->a[193422] = actions(8633);
	v->a[193423] = 1;
	v->a[193424] = anon_sym_RPAREN;
	v->a[193425] = state(5365);
	v->a[193426] = 1;
	v->a[193427] = aux_sym__literal_repeat1;
	v->a[193428] = actions(8567);
	v->a[193429] = 2;
	v->a[193430] = anon_sym_LPAREN_LPAREN;
	v->a[193431] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[193432] = actions(8579);
	v->a[193433] = 2;
	v->a[193434] = sym_raw_string;
	v->a[193435] = sym_ansi_c_string;
	v->a[193436] = actions(8593);
	v->a[193437] = 2;
	v->a[193438] = anon_sym_LT_LPAREN;
	v->a[193439] = anon_sym_GT_LPAREN;
	small_parse_table_9672(v);
}

void	small_parse_table_9672(t_small_parse_table_array *v)
{
	v->a[193440] = state(3604);
	v->a[193441] = 2;
	v->a[193442] = sym_concatenation;
	v->a[193443] = aux_sym_for_statement_repeat1;
	v->a[193444] = state(5045);
	v->a[193445] = 9;
	v->a[193446] = sym_arithmetic_expansion;
	v->a[193447] = sym_brace_expression;
	v->a[193448] = sym_string;
	v->a[193449] = sym_translated_string;
	v->a[193450] = sym_number;
	v->a[193451] = sym_simple_expansion;
	v->a[193452] = sym_expansion;
	v->a[193453] = sym_command_substitution;
	v->a[193454] = sym_process_substitution;
	v->a[193455] = 21;
	v->a[193456] = actions(3);
	v->a[193457] = 1;
	v->a[193458] = sym_comment;
	v->a[193459] = actions(3729);
	small_parse_table_9673(v);
}

void	small_parse_table_9673(t_small_parse_table_array *v)
{
	v->a[193460] = 1;
	v->a[193461] = anon_sym_DOLLAR_LBRACK;
	v->a[193462] = actions(3731);
	v->a[193463] = 1;
	v->a[193464] = anon_sym_DOLLAR;
	v->a[193465] = actions(3733);
	v->a[193466] = 1;
	v->a[193467] = sym__special_character;
	v->a[193468] = actions(3735);
	v->a[193469] = 1;
	v->a[193470] = anon_sym_DQUOTE;
	v->a[193471] = actions(3737);
	v->a[193472] = 1;
	v->a[193473] = aux_sym_number_token1;
	v->a[193474] = actions(3739);
	v->a[193475] = 1;
	v->a[193476] = aux_sym_number_token2;
	v->a[193477] = actions(3741);
	v->a[193478] = 1;
	v->a[193479] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_9674(v);
}

void	small_parse_table_9674(t_small_parse_table_array *v)
{
	v->a[193480] = actions(3743);
	v->a[193481] = 1;
	v->a[193482] = anon_sym_DOLLAR_LPAREN;
	v->a[193483] = actions(3745);
	v->a[193484] = 1;
	v->a[193485] = anon_sym_BQUOTE;
	v->a[193486] = actions(3747);
	v->a[193487] = 1;
	v->a[193488] = anon_sym_DOLLAR_BQUOTE;
	v->a[193489] = actions(3753);
	v->a[193490] = 1;
	v->a[193491] = sym_test_operator;
	v->a[193492] = actions(3755);
	v->a[193493] = 1;
	v->a[193494] = sym__brace_start;
	v->a[193495] = actions(8635);
	v->a[193496] = 1;
	v->a[193497] = aux_sym_heredoc_redirect_token1;
	v->a[193498] = state(3571);
	v->a[193499] = 1;
	small_parse_table_9675(v);
}

/* EOF small_parse_table_1934.c */
