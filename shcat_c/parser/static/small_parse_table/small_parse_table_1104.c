/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1104.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5520(t_small_parse_table_array *v)
{
	v->a[110400] = anon_sym_AMP_GT;
	v->a[110401] = anon_sym_LT_AMP;
	v->a[110402] = anon_sym_GT_AMP;
	v->a[110403] = anon_sym_DOLLAR;
	v->a[110404] = aux_sym_number_token1;
	v->a[110405] = aux_sym_number_token2;
	v->a[110406] = anon_sym_DOLLAR_LPAREN;
	v->a[110407] = anon_sym_BQUOTE;
	v->a[110408] = sym_word;
	v->a[110409] = actions(1267);
	v->a[110410] = 25;
	v->a[110411] = sym_file_descriptor;
	v->a[110412] = sym_test_operator;
	v->a[110413] = sym__bare_dollar;
	v->a[110414] = sym__brace_start;
	v->a[110415] = anon_sym_LPAREN_LPAREN;
	v->a[110416] = anon_sym_PIPE_PIPE;
	v->a[110417] = anon_sym_AMP_AMP;
	v->a[110418] = anon_sym_GT_GT;
	v->a[110419] = anon_sym_PIPE_AMP;
	small_parse_table_5521(v);
}

void	small_parse_table_5521(t_small_parse_table_array *v)
{
	v->a[110420] = anon_sym_AMP_GT_GT;
	v->a[110421] = anon_sym_GT_PIPE;
	v->a[110422] = anon_sym_LT_AMP_DASH;
	v->a[110423] = anon_sym_GT_AMP_DASH;
	v->a[110424] = anon_sym_LT_LT_DASH;
	v->a[110425] = anon_sym_LT_LT_LT;
	v->a[110426] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[110427] = anon_sym_DOLLAR_LBRACK;
	v->a[110428] = sym__special_character;
	v->a[110429] = anon_sym_DQUOTE;
	v->a[110430] = sym_raw_string;
	v->a[110431] = sym_ansi_c_string;
	v->a[110432] = anon_sym_DOLLAR_LBRACE;
	v->a[110433] = anon_sym_DOLLAR_BQUOTE;
	v->a[110434] = anon_sym_LT_LPAREN;
	v->a[110435] = anon_sym_GT_LPAREN;
	v->a[110436] = 8;
	v->a[110437] = actions(3);
	v->a[110438] = 1;
	v->a[110439] = sym_comment;
	small_parse_table_5522(v);
}

void	small_parse_table_5522(t_small_parse_table_array *v)
{
	v->a[110440] = actions(5826);
	v->a[110441] = 1;
	v->a[110442] = aux_sym_heredoc_redirect_token1;
	v->a[110443] = actions(5828);
	v->a[110444] = 1;
	v->a[110445] = sym_file_descriptor;
	v->a[110446] = actions(6273);
	v->a[110447] = 1;
	v->a[110448] = anon_sym_RPAREN;
	v->a[110449] = actions(5831);
	v->a[110450] = 3;
	v->a[110451] = sym_variable_name;
	v->a[110452] = sym_test_operator;
	v->a[110453] = sym__brace_start;
	v->a[110454] = actions(5821);
	v->a[110455] = 9;
	v->a[110456] = anon_sym_SEMI;
	v->a[110457] = anon_sym_PIPE_PIPE;
	v->a[110458] = anon_sym_AMP_AMP;
	v->a[110459] = anon_sym_PIPE;
	small_parse_table_5523(v);
}

void	small_parse_table_5523(t_small_parse_table_array *v)
{
	v->a[110460] = anon_sym_AMP;
	v->a[110461] = anon_sym_LT_LT;
	v->a[110462] = anon_sym_SEMI_SEMI;
	v->a[110463] = anon_sym_PIPE_AMP;
	v->a[110464] = anon_sym_LT_LT_DASH;
	v->a[110465] = actions(5823);
	v->a[110466] = 11;
	v->a[110467] = anon_sym_LT;
	v->a[110468] = anon_sym_GT;
	v->a[110469] = anon_sym_GT_GT;
	v->a[110470] = anon_sym_AMP_GT;
	v->a[110471] = anon_sym_AMP_GT_GT;
	v->a[110472] = anon_sym_LT_AMP;
	v->a[110473] = anon_sym_GT_AMP;
	v->a[110474] = anon_sym_GT_PIPE;
	v->a[110475] = anon_sym_LT_AMP_DASH;
	v->a[110476] = anon_sym_GT_AMP_DASH;
	v->a[110477] = anon_sym_LT_LT_LT;
	v->a[110478] = actions(5819);
	v->a[110479] = 17;
	small_parse_table_5524(v);
}

void	small_parse_table_5524(t_small_parse_table_array *v)
{
	v->a[110480] = anon_sym_LPAREN_LPAREN;
	v->a[110481] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[110482] = anon_sym_DOLLAR_LBRACK;
	v->a[110483] = anon_sym_DOLLAR;
	v->a[110484] = sym__special_character;
	v->a[110485] = anon_sym_DQUOTE;
	v->a[110486] = sym_raw_string;
	v->a[110487] = sym_ansi_c_string;
	v->a[110488] = aux_sym_number_token1;
	v->a[110489] = aux_sym_number_token2;
	v->a[110490] = anon_sym_DOLLAR_LBRACE;
	v->a[110491] = anon_sym_DOLLAR_LPAREN;
	v->a[110492] = anon_sym_BQUOTE;
	v->a[110493] = anon_sym_DOLLAR_BQUOTE;
	v->a[110494] = anon_sym_LT_LPAREN;
	v->a[110495] = anon_sym_GT_LPAREN;
	v->a[110496] = sym_word;
	v->a[110497] = 5;
	v->a[110498] = actions(71);
	v->a[110499] = 1;
	small_parse_table_5525(v);
}

/* EOF small_parse_table_1104.c */
