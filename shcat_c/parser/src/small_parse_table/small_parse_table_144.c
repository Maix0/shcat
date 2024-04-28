/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_144.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_720(t_small_parse_table_array *v)
{
	v->a[14400] = anon_sym_PIPE_PIPE;
	v->a[14401] = anon_sym_AMP_AMP;
	v->a[14402] = anon_sym_PIPE;
	v->a[14403] = anon_sym_AMP;
	v->a[14404] = anon_sym_LT;
	v->a[14405] = anon_sym_GT;
	v->a[14406] = anon_sym_LT_LT;
	v->a[14407] = anon_sym_GT_GT;
	v->a[14408] = anon_sym_SEMI_SEMI;
	v->a[14409] = anon_sym_SEMI_AMP;
	v->a[14410] = anon_sym_SEMI_SEMI_AMP;
	v->a[14411] = anon_sym_PIPE_AMP;
	v->a[14412] = anon_sym_AMP_GT;
	v->a[14413] = anon_sym_AMP_GT_GT;
	v->a[14414] = anon_sym_LT_AMP;
	v->a[14415] = anon_sym_GT_AMP;
	v->a[14416] = anon_sym_GT_PIPE;
	v->a[14417] = anon_sym_LT_AMP_DASH;
	v->a[14418] = anon_sym_GT_AMP_DASH;
	v->a[14419] = anon_sym_LT_LT_DASH;
	small_parse_table_721(v);
}

void	small_parse_table_721(t_small_parse_table_array *v)
{
	v->a[14420] = aux_sym_heredoc_redirect_token1;
	v->a[14421] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[14422] = anon_sym_DOLLAR_LBRACK;
	v->a[14423] = sym__special_character;
	v->a[14424] = sym_raw_string;
	v->a[14425] = sym_ansi_c_string;
	v->a[14426] = aux_sym_number_token1;
	v->a[14427] = aux_sym_number_token2;
	v->a[14428] = anon_sym_DOLLAR_LBRACE;
	v->a[14429] = anon_sym_DOLLAR_LPAREN;
	v->a[14430] = anon_sym_BQUOTE;
	v->a[14431] = anon_sym_DOLLAR_BQUOTE;
	v->a[14432] = anon_sym_LT_LPAREN;
	v->a[14433] = anon_sym_GT_LPAREN;
	v->a[14434] = sym_word;
	v->a[14435] = 21;
	v->a[14436] = actions(3);
	v->a[14437] = 1;
	v->a[14438] = sym_comment;
	v->a[14439] = actions(3274);
	small_parse_table_722(v);
}

void	small_parse_table_722(t_small_parse_table_array *v)
{
	v->a[14440] = 1;
	v->a[14441] = anon_sym_DQUOTE;
	v->a[14442] = actions(3337);
	v->a[14443] = 1;
	v->a[14444] = anon_sym_DOLLAR_LBRACK;
	v->a[14445] = actions(3339);
	v->a[14446] = 1;
	v->a[14447] = anon_sym_DOLLAR;
	v->a[14448] = actions(3341);
	v->a[14449] = 1;
	v->a[14450] = sym__special_character;
	v->a[14451] = actions(3343);
	v->a[14452] = 1;
	v->a[14453] = aux_sym_number_token1;
	v->a[14454] = actions(3345);
	v->a[14455] = 1;
	v->a[14456] = aux_sym_number_token2;
	v->a[14457] = actions(3347);
	v->a[14458] = 1;
	v->a[14459] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_723(v);
}

void	small_parse_table_723(t_small_parse_table_array *v)
{
	v->a[14460] = actions(3349);
	v->a[14461] = 1;
	v->a[14462] = anon_sym_DOLLAR_LPAREN;
	v->a[14463] = actions(3351);
	v->a[14464] = 1;
	v->a[14465] = anon_sym_BQUOTE;
	v->a[14466] = actions(3353);
	v->a[14467] = 1;
	v->a[14468] = anon_sym_DOLLAR_BQUOTE;
	v->a[14469] = actions(3357);
	v->a[14470] = 1;
	v->a[14471] = sym_test_operator;
	v->a[14472] = actions(3359);
	v->a[14473] = 1;
	v->a[14474] = sym__brace_start;
	v->a[14475] = state(2147);
	v->a[14476] = 1;
	v->a[14477] = aux_sym__literal_repeat1;
	v->a[14478] = actions(2074);
	v->a[14479] = 2;
	small_parse_table_724(v);
}

void	small_parse_table_724(t_small_parse_table_array *v)
{
	v->a[14480] = sym_file_descriptor;
	v->a[14481] = aux_sym_heredoc_redirect_token1;
	v->a[14482] = actions(3335);
	v->a[14483] = 2;
	v->a[14484] = anon_sym_LPAREN_LPAREN;
	v->a[14485] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[14486] = actions(3355);
	v->a[14487] = 2;
	v->a[14488] = anon_sym_LT_LPAREN;
	v->a[14489] = anon_sym_GT_LPAREN;
	v->a[14490] = state(660);
	v->a[14491] = 2;
	v->a[14492] = sym_concatenation;
	v->a[14493] = aux_sym_for_statement_repeat1;
	v->a[14494] = actions(3333);
	v->a[14495] = 3;
	v->a[14496] = sym_raw_string;
	v->a[14497] = sym_ansi_c_string;
	v->a[14498] = sym_word;
	v->a[14499] = state(1526);
	small_parse_table_725(v);
}

/* EOF small_parse_table_144.c */
