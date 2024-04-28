/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2024.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10120(t_small_parse_table_array *v)
{
	v->a[202400] = actions(8190);
	v->a[202401] = 1;
	v->a[202402] = aux_sym_number_token2;
	v->a[202403] = actions(8192);
	v->a[202404] = 1;
	v->a[202405] = anon_sym_DOLLAR_LBRACE;
	v->a[202406] = actions(8194);
	v->a[202407] = 1;
	v->a[202408] = anon_sym_DOLLAR_LPAREN;
	v->a[202409] = actions(8196);
	v->a[202410] = 1;
	v->a[202411] = anon_sym_BQUOTE;
	v->a[202412] = actions(8198);
	v->a[202413] = 1;
	v->a[202414] = anon_sym_DOLLAR_BQUOTE;
	v->a[202415] = actions(8208);
	v->a[202416] = 1;
	v->a[202417] = sym__brace_start;
	v->a[202418] = actions(8220);
	v->a[202419] = 1;
	small_parse_table_10121(v);
}

void	small_parse_table_10121(t_small_parse_table_array *v)
{
	v->a[202420] = sym__special_character;
	v->a[202421] = actions(8978);
	v->a[202422] = 1;
	v->a[202423] = sym_word;
	v->a[202424] = actions(8982);
	v->a[202425] = 1;
	v->a[202426] = sym_test_operator;
	v->a[202427] = state(1744);
	v->a[202428] = 1;
	v->a[202429] = aux_sym__literal_repeat1;
	v->a[202430] = actions(8174);
	v->a[202431] = 2;
	v->a[202432] = anon_sym_LPAREN_LPAREN;
	v->a[202433] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[202434] = actions(8200);
	v->a[202435] = 2;
	v->a[202436] = anon_sym_LT_LPAREN;
	v->a[202437] = anon_sym_GT_LPAREN;
	v->a[202438] = actions(8980);
	v->a[202439] = 2;
	small_parse_table_10122(v);
}

void	small_parse_table_10122(t_small_parse_table_array *v)
{
	v->a[202440] = sym_raw_string;
	v->a[202441] = sym_ansi_c_string;
	v->a[202442] = state(649);
	v->a[202443] = 2;
	v->a[202444] = sym_concatenation;
	v->a[202445] = aux_sym_for_statement_repeat1;
	v->a[202446] = state(1370);
	v->a[202447] = 9;
	v->a[202448] = sym_arithmetic_expansion;
	v->a[202449] = sym_brace_expression;
	v->a[202450] = sym_string;
	v->a[202451] = sym_translated_string;
	v->a[202452] = sym_number;
	v->a[202453] = sym_simple_expansion;
	v->a[202454] = sym_expansion;
	v->a[202455] = sym_command_substitution;
	v->a[202456] = sym_process_substitution;
	v->a[202457] = 20;
	v->a[202458] = actions(71);
	v->a[202459] = 1;
	small_parse_table_10123(v);
}

void	small_parse_table_10123(t_small_parse_table_array *v)
{
	v->a[202460] = sym_comment;
	v->a[202461] = actions(3397);
	v->a[202462] = 1;
	v->a[202463] = anon_sym_DOLLAR;
	v->a[202464] = actions(3401);
	v->a[202465] = 1;
	v->a[202466] = aux_sym_number_token1;
	v->a[202467] = actions(3403);
	v->a[202468] = 1;
	v->a[202469] = aux_sym_number_token2;
	v->a[202470] = actions(3407);
	v->a[202471] = 1;
	v->a[202472] = anon_sym_DOLLAR_LPAREN;
	v->a[202473] = actions(3417);
	v->a[202474] = 1;
	v->a[202475] = sym__brace_start;
	v->a[202476] = actions(3663);
	v->a[202477] = 1;
	v->a[202478] = sym_word;
	v->a[202479] = actions(3667);
	small_parse_table_10124(v);
}

void	small_parse_table_10124(t_small_parse_table_array *v)
{
	v->a[202480] = 1;
	v->a[202481] = sym_test_operator;
	v->a[202482] = actions(8926);
	v->a[202483] = 1;
	v->a[202484] = anon_sym_DOLLAR_LBRACK;
	v->a[202485] = actions(8930);
	v->a[202486] = 1;
	v->a[202487] = anon_sym_DQUOTE;
	v->a[202488] = actions(8934);
	v->a[202489] = 1;
	v->a[202490] = anon_sym_DOLLAR_LBRACE;
	v->a[202491] = actions(8936);
	v->a[202492] = 1;
	v->a[202493] = anon_sym_BQUOTE;
	v->a[202494] = actions(8938);
	v->a[202495] = 1;
	v->a[202496] = anon_sym_DOLLAR_BQUOTE;
	v->a[202497] = actions(9034);
	v->a[202498] = 1;
	v->a[202499] = sym__special_character;
	small_parse_table_10125(v);
}

/* EOF small_parse_table_2024.c */
