/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_234.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1170(t_small_parse_table_array *v)
{
	v->a[23400] = actions(2154);
	v->a[23401] = 1;
	v->a[23402] = anon_sym_DOLLAR;
	v->a[23403] = actions(2158);
	v->a[23404] = 1;
	v->a[23405] = anon_sym_DQUOTE;
	v->a[23406] = actions(2160);
	v->a[23407] = 1;
	v->a[23408] = aux_sym_number_token1;
	v->a[23409] = actions(2162);
	v->a[23410] = 1;
	v->a[23411] = aux_sym_number_token2;
	v->a[23412] = actions(2164);
	v->a[23413] = 1;
	v->a[23414] = anon_sym_DOLLAR_LBRACE;
	v->a[23415] = actions(2166);
	v->a[23416] = 1;
	v->a[23417] = anon_sym_DOLLAR_LPAREN;
	v->a[23418] = actions(2168);
	v->a[23419] = 1;
	small_parse_table_1171(v);
}

void	small_parse_table_1171(t_small_parse_table_array *v)
{
	v->a[23420] = anon_sym_BQUOTE;
	v->a[23421] = actions(2170);
	v->a[23422] = 1;
	v->a[23423] = anon_sym_DOLLAR_BQUOTE;
	v->a[23424] = actions(2174);
	v->a[23425] = 1;
	v->a[23426] = sym__brace_start;
	v->a[23427] = actions(3129);
	v->a[23428] = 1;
	v->a[23429] = sym__special_character;
	v->a[23430] = actions(3131);
	v->a[23431] = 1;
	v->a[23432] = sym_test_operator;
	v->a[23433] = state(1270);
	v->a[23434] = 1;
	v->a[23435] = aux_sym__literal_repeat1;
	v->a[23436] = actions(1182);
	v->a[23437] = 2;
	v->a[23438] = sym_file_descriptor;
	v->a[23439] = aux_sym_heredoc_redirect_token1;
	small_parse_table_1172(v);
}

void	small_parse_table_1172(t_small_parse_table_array *v)
{
	v->a[23440] = actions(3127);
	v->a[23441] = 2;
	v->a[23442] = sym_raw_string;
	v->a[23443] = sym_word;
	v->a[23444] = state(531);
	v->a[23445] = 2;
	v->a[23446] = sym_concatenation;
	v->a[23447] = aux_sym_for_statement_repeat1;
	v->a[23448] = state(1412);
	v->a[23449] = 7;
	v->a[23450] = sym_arithmetic_expansion;
	v->a[23451] = sym_brace_expression;
	v->a[23452] = sym_string;
	v->a[23453] = sym_number;
	v->a[23454] = sym_simple_expansion;
	v->a[23455] = sym_expansion;
	v->a[23456] = sym_command_substitution;
	v->a[23457] = actions(1180);
	v->a[23458] = 16;
	v->a[23459] = anon_sym_PIPE;
	small_parse_table_1173(v);
}

void	small_parse_table_1173(t_small_parse_table_array *v)
{
	v->a[23460] = anon_sym_PIPE_AMP;
	v->a[23461] = anon_sym_AMP_AMP;
	v->a[23462] = anon_sym_PIPE_PIPE;
	v->a[23463] = anon_sym_LT;
	v->a[23464] = anon_sym_GT;
	v->a[23465] = anon_sym_GT_GT;
	v->a[23466] = anon_sym_AMP_GT;
	v->a[23467] = anon_sym_AMP_GT_GT;
	v->a[23468] = anon_sym_LT_AMP;
	v->a[23469] = anon_sym_GT_AMP;
	v->a[23470] = anon_sym_GT_PIPE;
	v->a[23471] = anon_sym_LT_AMP_DASH;
	v->a[23472] = anon_sym_GT_AMP_DASH;
	v->a[23473] = anon_sym_LT_LT;
	v->a[23474] = anon_sym_LT_LT_DASH;
	v->a[23475] = 3;
	v->a[23476] = actions(3);
	v->a[23477] = 1;
	v->a[23478] = sym_comment;
	v->a[23479] = actions(2828);
	small_parse_table_1174(v);
}

void	small_parse_table_1174(t_small_parse_table_array *v)
{
	v->a[23480] = 6;
	v->a[23481] = sym_file_descriptor;
	v->a[23482] = sym__concat;
	v->a[23483] = sym_test_operator;
	v->a[23484] = sym__bare_dollar;
	v->a[23485] = sym__brace_start;
	v->a[23486] = aux_sym_heredoc_redirect_token1;
	v->a[23487] = actions(2826);
	v->a[23488] = 36;
	v->a[23489] = anon_sym_esac;
	v->a[23490] = anon_sym_LPAREN;
	v->a[23491] = anon_sym_PIPE;
	v->a[23492] = anon_sym_SEMI_SEMI;
	v->a[23493] = anon_sym_SEMI_AMP;
	v->a[23494] = anon_sym_SEMI_SEMI_AMP;
	v->a[23495] = anon_sym_PIPE_AMP;
	v->a[23496] = anon_sym_AMP_AMP;
	v->a[23497] = anon_sym_PIPE_PIPE;
	v->a[23498] = anon_sym_LT;
	v->a[23499] = anon_sym_GT;
	small_parse_table_1175(v);
}

/* EOF small_parse_table_234.c */
