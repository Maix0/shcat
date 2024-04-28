/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1994.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9970(t_small_parse_table_array *v)
{
	v->a[199400] = 1;
	v->a[199401] = anon_sym_DOLLAR_LPAREN;
	v->a[199402] = actions(8286);
	v->a[199403] = 1;
	v->a[199404] = anon_sym_BQUOTE;
	v->a[199405] = actions(8288);
	v->a[199406] = 1;
	v->a[199407] = anon_sym_DOLLAR_BQUOTE;
	v->a[199408] = actions(8298);
	v->a[199409] = 1;
	v->a[199410] = sym__brace_start;
	v->a[199411] = actions(9038);
	v->a[199412] = 1;
	v->a[199413] = sym_word;
	v->a[199414] = actions(9042);
	v->a[199415] = 1;
	v->a[199416] = sym_test_operator;
	v->a[199417] = state(1567);
	v->a[199418] = 1;
	v->a[199419] = aux_sym__literal_repeat1;
	small_parse_table_9971(v);
}

void	small_parse_table_9971(t_small_parse_table_array *v)
{
	v->a[199420] = actions(8264);
	v->a[199421] = 2;
	v->a[199422] = anon_sym_LPAREN_LPAREN;
	v->a[199423] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[199424] = actions(8290);
	v->a[199425] = 2;
	v->a[199426] = anon_sym_LT_LPAREN;
	v->a[199427] = anon_sym_GT_LPAREN;
	v->a[199428] = actions(9040);
	v->a[199429] = 2;
	v->a[199430] = sym_raw_string;
	v->a[199431] = sym_ansi_c_string;
	v->a[199432] = state(601);
	v->a[199433] = 2;
	v->a[199434] = sym_concatenation;
	v->a[199435] = aux_sym_for_statement_repeat1;
	v->a[199436] = state(1269);
	v->a[199437] = 9;
	v->a[199438] = sym_arithmetic_expansion;
	v->a[199439] = sym_brace_expression;
	small_parse_table_9972(v);
}

void	small_parse_table_9972(t_small_parse_table_array *v)
{
	v->a[199440] = sym_string;
	v->a[199441] = sym_translated_string;
	v->a[199442] = sym_number;
	v->a[199443] = sym_simple_expansion;
	v->a[199444] = sym_expansion;
	v->a[199445] = sym_command_substitution;
	v->a[199446] = sym_process_substitution;
	v->a[199447] = 20;
	v->a[199448] = actions(71);
	v->a[199449] = 1;
	v->a[199450] = sym_comment;
	v->a[199451] = actions(8268);
	v->a[199452] = 1;
	v->a[199453] = anon_sym_DOLLAR_LBRACK;
	v->a[199454] = actions(8270);
	v->a[199455] = 1;
	v->a[199456] = anon_sym_DOLLAR;
	v->a[199457] = actions(8272);
	v->a[199458] = 1;
	v->a[199459] = sym__special_character;
	small_parse_table_9973(v);
}

void	small_parse_table_9973(t_small_parse_table_array *v)
{
	v->a[199460] = actions(8274);
	v->a[199461] = 1;
	v->a[199462] = anon_sym_DQUOTE;
	v->a[199463] = actions(8278);
	v->a[199464] = 1;
	v->a[199465] = aux_sym_number_token1;
	v->a[199466] = actions(8280);
	v->a[199467] = 1;
	v->a[199468] = aux_sym_number_token2;
	v->a[199469] = actions(8282);
	v->a[199470] = 1;
	v->a[199471] = anon_sym_DOLLAR_LBRACE;
	v->a[199472] = actions(8284);
	v->a[199473] = 1;
	v->a[199474] = anon_sym_DOLLAR_LPAREN;
	v->a[199475] = actions(8286);
	v->a[199476] = 1;
	v->a[199477] = anon_sym_BQUOTE;
	v->a[199478] = actions(8288);
	v->a[199479] = 1;
	small_parse_table_9974(v);
}

void	small_parse_table_9974(t_small_parse_table_array *v)
{
	v->a[199480] = anon_sym_DOLLAR_BQUOTE;
	v->a[199481] = actions(8298);
	v->a[199482] = 1;
	v->a[199483] = sym__brace_start;
	v->a[199484] = actions(9038);
	v->a[199485] = 1;
	v->a[199486] = sym_word;
	v->a[199487] = actions(9042);
	v->a[199488] = 1;
	v->a[199489] = sym_test_operator;
	v->a[199490] = state(1567);
	v->a[199491] = 1;
	v->a[199492] = aux_sym__literal_repeat1;
	v->a[199493] = actions(8264);
	v->a[199494] = 2;
	v->a[199495] = anon_sym_LPAREN_LPAREN;
	v->a[199496] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[199497] = actions(8290);
	v->a[199498] = 2;
	v->a[199499] = anon_sym_LT_LPAREN;
	small_parse_table_9975(v);
}

/* EOF small_parse_table_1994.c */
