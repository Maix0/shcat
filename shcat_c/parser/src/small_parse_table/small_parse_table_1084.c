/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1084.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5420(t_small_parse_table_array *v)
{
	v->a[108400] = sym_variable_name;
	v->a[108401] = sym_test_operator;
	v->a[108402] = sym__brace_start;
	v->a[108403] = anon_sym_LPAREN_LPAREN;
	v->a[108404] = anon_sym_GT_GT;
	v->a[108405] = anon_sym_AMP_GT_GT;
	v->a[108406] = anon_sym_GT_PIPE;
	v->a[108407] = anon_sym_LT_AMP_DASH;
	v->a[108408] = anon_sym_GT_AMP_DASH;
	v->a[108409] = anon_sym_LT_LT_LT;
	v->a[108410] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[108411] = anon_sym_DOLLAR_LBRACK;
	v->a[108412] = sym__special_character;
	v->a[108413] = anon_sym_DQUOTE;
	v->a[108414] = sym_raw_string;
	v->a[108415] = sym_ansi_c_string;
	v->a[108416] = anon_sym_DOLLAR_LBRACE;
	v->a[108417] = anon_sym_BQUOTE;
	v->a[108418] = anon_sym_DOLLAR_BQUOTE;
	v->a[108419] = anon_sym_LT_LPAREN;
	small_parse_table_5421(v);
}

void	small_parse_table_5421(t_small_parse_table_array *v)
{
	v->a[108420] = anon_sym_GT_LPAREN;
	v->a[108421] = 5;
	v->a[108422] = actions(3);
	v->a[108423] = 1;
	v->a[108424] = sym_comment;
	v->a[108425] = actions(6222);
	v->a[108426] = 1;
	v->a[108427] = sym__special_character;
	v->a[108428] = state(2124);
	v->a[108429] = 1;
	v->a[108430] = aux_sym__literal_repeat1;
	v->a[108431] = actions(1364);
	v->a[108432] = 4;
	v->a[108433] = sym_file_descriptor;
	v->a[108434] = sym_test_operator;
	v->a[108435] = sym__brace_start;
	v->a[108436] = aux_sym_heredoc_redirect_token1;
	v->a[108437] = actions(1362);
	v->a[108438] = 37;
	v->a[108439] = anon_sym_LPAREN_LPAREN;
	small_parse_table_5422(v);
}

void	small_parse_table_5422(t_small_parse_table_array *v)
{
	v->a[108440] = anon_sym_SEMI;
	v->a[108441] = anon_sym_PIPE_PIPE;
	v->a[108442] = anon_sym_AMP_AMP;
	v->a[108443] = anon_sym_PIPE;
	v->a[108444] = anon_sym_AMP;
	v->a[108445] = anon_sym_LT;
	v->a[108446] = anon_sym_GT;
	v->a[108447] = anon_sym_LT_LT;
	v->a[108448] = anon_sym_GT_GT;
	v->a[108449] = anon_sym_RPAREN;
	v->a[108450] = anon_sym_SEMI_SEMI;
	v->a[108451] = anon_sym_PIPE_AMP;
	v->a[108452] = anon_sym_AMP_GT;
	v->a[108453] = anon_sym_AMP_GT_GT;
	v->a[108454] = anon_sym_LT_AMP;
	v->a[108455] = anon_sym_GT_AMP;
	v->a[108456] = anon_sym_GT_PIPE;
	v->a[108457] = anon_sym_LT_AMP_DASH;
	v->a[108458] = anon_sym_GT_AMP_DASH;
	v->a[108459] = anon_sym_LT_LT_DASH;
	small_parse_table_5423(v);
}

void	small_parse_table_5423(t_small_parse_table_array *v)
{
	v->a[108460] = anon_sym_LT_LT_LT;
	v->a[108461] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[108462] = anon_sym_DOLLAR_LBRACK;
	v->a[108463] = anon_sym_DOLLAR;
	v->a[108464] = anon_sym_DQUOTE;
	v->a[108465] = sym_raw_string;
	v->a[108466] = sym_ansi_c_string;
	v->a[108467] = aux_sym_number_token1;
	v->a[108468] = aux_sym_number_token2;
	v->a[108469] = anon_sym_DOLLAR_LBRACE;
	v->a[108470] = anon_sym_DOLLAR_LPAREN;
	v->a[108471] = anon_sym_BQUOTE;
	v->a[108472] = anon_sym_DOLLAR_BQUOTE;
	v->a[108473] = anon_sym_LT_LPAREN;
	v->a[108474] = anon_sym_GT_LPAREN;
	v->a[108475] = sym_word;
	v->a[108476] = 5;
	v->a[108477] = actions(71);
	v->a[108478] = 1;
	v->a[108479] = sym_comment;
	small_parse_table_5424(v);
}

void	small_parse_table_5424(t_small_parse_table_array *v)
{
	v->a[108480] = state(2135);
	v->a[108481] = 1;
	v->a[108482] = aux_sym_concatenation_repeat1;
	v->a[108483] = actions(6133);
	v->a[108484] = 2;
	v->a[108485] = sym__concat;
	v->a[108486] = aux_sym_concatenation_token1;
	v->a[108487] = actions(4552);
	v->a[108488] = 15;
	v->a[108489] = anon_sym_PIPE;
	v->a[108490] = anon_sym_EQ_EQ;
	v->a[108491] = anon_sym_LT;
	v->a[108492] = anon_sym_GT;
	v->a[108493] = anon_sym_LT_LT;
	v->a[108494] = anon_sym_EQ_TILDE;
	v->a[108495] = anon_sym_AMP_GT;
	v->a[108496] = anon_sym_LT_AMP;
	v->a[108497] = anon_sym_GT_AMP;
	v->a[108498] = anon_sym_DOLLAR;
	v->a[108499] = aux_sym_number_token1;
	small_parse_table_5425(v);
}

/* EOF small_parse_table_1084.c */
