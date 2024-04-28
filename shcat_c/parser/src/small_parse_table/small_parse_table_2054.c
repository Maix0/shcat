/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2054.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10270(t_small_parse_table_array *v)
{
	v->a[205400] = 1;
	v->a[205401] = anon_sym_DOLLAR_LPAREN;
	v->a[205402] = actions(3632);
	v->a[205403] = 1;
	v->a[205404] = sym__brace_start;
	v->a[205405] = actions(8850);
	v->a[205406] = 1;
	v->a[205407] = anon_sym_DOLLAR_LBRACK;
	v->a[205408] = actions(8854);
	v->a[205409] = 1;
	v->a[205410] = anon_sym_DQUOTE;
	v->a[205411] = actions(8858);
	v->a[205412] = 1;
	v->a[205413] = anon_sym_DOLLAR_LBRACE;
	v->a[205414] = actions(8860);
	v->a[205415] = 1;
	v->a[205416] = anon_sym_BQUOTE;
	v->a[205417] = actions(8862);
	v->a[205418] = 1;
	v->a[205419] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_10271(v);
}

void	small_parse_table_10271(t_small_parse_table_array *v)
{
	v->a[205420] = actions(9516);
	v->a[205421] = 1;
	v->a[205422] = sym_word;
	v->a[205423] = actions(9518);
	v->a[205424] = 1;
	v->a[205425] = anon_sym_DOLLAR;
	v->a[205426] = actions(9524);
	v->a[205427] = 1;
	v->a[205428] = sym__comment_word;
	v->a[205429] = actions(8848);
	v->a[205430] = 2;
	v->a[205431] = anon_sym_LPAREN_LPAREN;
	v->a[205432] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[205433] = actions(8864);
	v->a[205434] = 2;
	v->a[205435] = anon_sym_LT_LPAREN;
	v->a[205436] = anon_sym_GT_LPAREN;
	v->a[205437] = actions(9520);
	v->a[205438] = 2;
	v->a[205439] = sym_test_operator;
	small_parse_table_10272(v);
}

void	small_parse_table_10272(t_small_parse_table_array *v)
{
	v->a[205440] = sym__special_character;
	v->a[205441] = actions(9522);
	v->a[205442] = 3;
	v->a[205443] = sym__bare_dollar;
	v->a[205444] = sym_raw_string;
	v->a[205445] = sym_ansi_c_string;
	v->a[205446] = state(2210);
	v->a[205447] = 9;
	v->a[205448] = sym_arithmetic_expansion;
	v->a[205449] = sym_brace_expression;
	v->a[205450] = sym_string;
	v->a[205451] = sym_translated_string;
	v->a[205452] = sym_number;
	v->a[205453] = sym_simple_expansion;
	v->a[205454] = sym_expansion;
	v->a[205455] = sym_command_substitution;
	v->a[205456] = sym_process_substitution;
	v->a[205457] = 20;
	v->a[205458] = actions(71);
	v->a[205459] = 1;
	small_parse_table_10273(v);
}

void	small_parse_table_10273(t_small_parse_table_array *v)
{
	v->a[205460] = sym_comment;
	v->a[205461] = actions(8512);
	v->a[205462] = 1;
	v->a[205463] = anon_sym_DOLLAR_LBRACK;
	v->a[205464] = actions(8514);
	v->a[205465] = 1;
	v->a[205466] = anon_sym_DOLLAR;
	v->a[205467] = actions(8516);
	v->a[205468] = 1;
	v->a[205469] = sym__special_character;
	v->a[205470] = actions(8518);
	v->a[205471] = 1;
	v->a[205472] = anon_sym_DQUOTE;
	v->a[205473] = actions(8522);
	v->a[205474] = 1;
	v->a[205475] = aux_sym_number_token1;
	v->a[205476] = actions(8524);
	v->a[205477] = 1;
	v->a[205478] = aux_sym_number_token2;
	v->a[205479] = actions(8526);
	small_parse_table_10274(v);
}

void	small_parse_table_10274(t_small_parse_table_array *v)
{
	v->a[205480] = 1;
	v->a[205481] = anon_sym_DOLLAR_LBRACE;
	v->a[205482] = actions(8528);
	v->a[205483] = 1;
	v->a[205484] = anon_sym_DOLLAR_LPAREN;
	v->a[205485] = actions(8530);
	v->a[205486] = 1;
	v->a[205487] = anon_sym_BQUOTE;
	v->a[205488] = actions(8532);
	v->a[205489] = 1;
	v->a[205490] = anon_sym_DOLLAR_BQUOTE;
	v->a[205491] = actions(8542);
	v->a[205492] = 1;
	v->a[205493] = sym__brace_start;
	v->a[205494] = actions(9526);
	v->a[205495] = 1;
	v->a[205496] = sym_word;
	v->a[205497] = actions(9530);
	v->a[205498] = 1;
	v->a[205499] = sym_test_operator;
	small_parse_table_10275(v);
}

/* EOF small_parse_table_2054.c */
