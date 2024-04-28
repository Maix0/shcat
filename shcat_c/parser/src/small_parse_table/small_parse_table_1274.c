/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1274.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6370(t_small_parse_table_array *v)
{
	v->a[127400] = actions(1304);
	v->a[127401] = 14;
	v->a[127402] = anon_sym_PIPE;
	v->a[127403] = anon_sym_LT;
	v->a[127404] = anon_sym_GT;
	v->a[127405] = anon_sym_LT_LT;
	v->a[127406] = anon_sym_AMP_GT;
	v->a[127407] = anon_sym_LT_AMP;
	v->a[127408] = anon_sym_GT_AMP;
	v->a[127409] = anon_sym_DOLLAR;
	v->a[127410] = sym__special_character;
	v->a[127411] = aux_sym_number_token1;
	v->a[127412] = aux_sym_number_token2;
	v->a[127413] = anon_sym_DOLLAR_LPAREN;
	v->a[127414] = anon_sym_BQUOTE;
	v->a[127415] = sym_word;
	v->a[127416] = actions(1306);
	v->a[127417] = 27;
	v->a[127418] = sym_file_descriptor;
	v->a[127419] = sym__concat;
	small_parse_table_6371(v);
}

void	small_parse_table_6371(t_small_parse_table_array *v)
{
	v->a[127420] = sym_variable_name;
	v->a[127421] = sym_test_operator;
	v->a[127422] = sym__brace_start;
	v->a[127423] = anon_sym_LPAREN_LPAREN;
	v->a[127424] = anon_sym_PIPE_PIPE;
	v->a[127425] = anon_sym_AMP_AMP;
	v->a[127426] = anon_sym_GT_GT;
	v->a[127427] = anon_sym_PIPE_AMP;
	v->a[127428] = anon_sym_RBRACK;
	v->a[127429] = anon_sym_AMP_GT_GT;
	v->a[127430] = anon_sym_GT_PIPE;
	v->a[127431] = anon_sym_LT_AMP_DASH;
	v->a[127432] = anon_sym_GT_AMP_DASH;
	v->a[127433] = anon_sym_LT_LT_DASH;
	v->a[127434] = anon_sym_LT_LT_LT;
	v->a[127435] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[127436] = anon_sym_DOLLAR_LBRACK;
	v->a[127437] = aux_sym_concatenation_token1;
	v->a[127438] = anon_sym_DQUOTE;
	v->a[127439] = sym_raw_string;
	small_parse_table_6372(v);
}

void	small_parse_table_6372(t_small_parse_table_array *v)
{
	v->a[127440] = sym_ansi_c_string;
	v->a[127441] = anon_sym_DOLLAR_LBRACE;
	v->a[127442] = anon_sym_DOLLAR_BQUOTE;
	v->a[127443] = anon_sym_LT_LPAREN;
	v->a[127444] = anon_sym_GT_LPAREN;
	v->a[127445] = 6;
	v->a[127446] = actions(71);
	v->a[127447] = 1;
	v->a[127448] = sym_comment;
	v->a[127449] = actions(6526);
	v->a[127450] = 1;
	v->a[127451] = aux_sym_concatenation_token1;
	v->a[127452] = actions(6632);
	v->a[127453] = 1;
	v->a[127454] = sym__concat;
	v->a[127455] = state(2425);
	v->a[127456] = 1;
	v->a[127457] = aux_sym_concatenation_repeat1;
	v->a[127458] = actions(1265);
	v->a[127459] = 14;
	small_parse_table_6373(v);
}

void	small_parse_table_6373(t_small_parse_table_array *v)
{
	v->a[127460] = anon_sym_PIPE;
	v->a[127461] = anon_sym_LT;
	v->a[127462] = anon_sym_GT;
	v->a[127463] = anon_sym_LT_LT;
	v->a[127464] = anon_sym_AMP_GT;
	v->a[127465] = anon_sym_LT_AMP;
	v->a[127466] = anon_sym_GT_AMP;
	v->a[127467] = anon_sym_DOLLAR;
	v->a[127468] = sym__special_character;
	v->a[127469] = aux_sym_number_token1;
	v->a[127470] = aux_sym_number_token2;
	v->a[127471] = anon_sym_DOLLAR_LPAREN;
	v->a[127472] = anon_sym_BQUOTE;
	v->a[127473] = sym_word;
	v->a[127474] = actions(1267);
	v->a[127475] = 24;
	v->a[127476] = sym_file_descriptor;
	v->a[127477] = sym_test_operator;
	v->a[127478] = sym__brace_start;
	v->a[127479] = anon_sym_LPAREN_LPAREN;
	small_parse_table_6374(v);
}

void	small_parse_table_6374(t_small_parse_table_array *v)
{
	v->a[127480] = anon_sym_PIPE_PIPE;
	v->a[127481] = anon_sym_AMP_AMP;
	v->a[127482] = anon_sym_GT_GT;
	v->a[127483] = anon_sym_PIPE_AMP;
	v->a[127484] = anon_sym_RBRACK;
	v->a[127485] = anon_sym_AMP_GT_GT;
	v->a[127486] = anon_sym_GT_PIPE;
	v->a[127487] = anon_sym_LT_AMP_DASH;
	v->a[127488] = anon_sym_GT_AMP_DASH;
	v->a[127489] = anon_sym_LT_LT_DASH;
	v->a[127490] = anon_sym_LT_LT_LT;
	v->a[127491] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[127492] = anon_sym_DOLLAR_LBRACK;
	v->a[127493] = anon_sym_DQUOTE;
	v->a[127494] = sym_raw_string;
	v->a[127495] = sym_ansi_c_string;
	v->a[127496] = anon_sym_DOLLAR_LBRACE;
	v->a[127497] = anon_sym_DOLLAR_BQUOTE;
	v->a[127498] = anon_sym_LT_LPAREN;
	v->a[127499] = anon_sym_GT_LPAREN;
	small_parse_table_6375(v);
}

/* EOF small_parse_table_1274.c */
