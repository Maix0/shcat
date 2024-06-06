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
	v->a[110400] = sym__brace_start;
	v->a[110401] = actions(6300);
	v->a[110402] = 1;
	v->a[110403] = sym_word;
	v->a[110404] = actions(6302);
	v->a[110405] = 1;
	v->a[110406] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[110407] = actions(6306);
	v->a[110408] = 1;
	v->a[110409] = sym__special_character;
	v->a[110410] = actions(6308);
	v->a[110411] = 1;
	v->a[110412] = anon_sym_DQUOTE;
	v->a[110413] = actions(6312);
	v->a[110414] = 1;
	v->a[110415] = anon_sym_DOLLAR_LBRACE;
	v->a[110416] = actions(6314);
	v->a[110417] = 1;
	v->a[110418] = anon_sym_BQUOTE;
	v->a[110419] = actions(6316);
	small_parse_table_5521(v);
}

void	small_parse_table_5521(t_small_parse_table_array *v)
{
	v->a[110420] = 1;
	v->a[110421] = anon_sym_DOLLAR_BQUOTE;
	v->a[110422] = actions(6318);
	v->a[110423] = 1;
	v->a[110424] = sym__comment_word;
	v->a[110425] = actions(6330);
	v->a[110426] = 1;
	v->a[110427] = anon_sym_DOLLAR;
	v->a[110428] = actions(6310);
	v->a[110429] = 3;
	v->a[110430] = sym_test_operator;
	v->a[110431] = sym__bare_dollar;
	v->a[110432] = sym_raw_string;
	v->a[110433] = state(729);
	v->a[110434] = 7;
	v->a[110435] = sym_arithmetic_expansion;
	v->a[110436] = sym_brace_expression;
	v->a[110437] = sym_string;
	v->a[110438] = sym_number;
	v->a[110439] = sym_simple_expansion;
	small_parse_table_5522(v);
}

void	small_parse_table_5522(t_small_parse_table_array *v)
{
	v->a[110440] = sym_expansion;
	v->a[110441] = sym_command_substitution;
	v->a[110442] = 3;
	v->a[110443] = actions(3);
	v->a[110444] = 1;
	v->a[110445] = sym_comment;
	v->a[110446] = actions(6103);
	v->a[110447] = 2;
	v->a[110448] = sym_file_descriptor;
	v->a[110449] = aux_sym_heredoc_redirect_token1;
	v->a[110450] = actions(6101);
	v->a[110451] = 21;
	v->a[110452] = anon_sym_PIPE;
	v->a[110453] = anon_sym_SEMI_SEMI;
	v->a[110454] = anon_sym_SEMI_AMP;
	v->a[110455] = anon_sym_SEMI_SEMI_AMP;
	v->a[110456] = anon_sym_PIPE_AMP;
	v->a[110457] = anon_sym_AMP_AMP;
	v->a[110458] = anon_sym_PIPE_PIPE;
	v->a[110459] = anon_sym_LT;
	small_parse_table_5523(v);
}

void	small_parse_table_5523(t_small_parse_table_array *v)
{
	v->a[110460] = anon_sym_GT;
	v->a[110461] = anon_sym_GT_GT;
	v->a[110462] = anon_sym_AMP_GT;
	v->a[110463] = anon_sym_AMP_GT_GT;
	v->a[110464] = anon_sym_LT_AMP;
	v->a[110465] = anon_sym_GT_AMP;
	v->a[110466] = anon_sym_GT_PIPE;
	v->a[110467] = anon_sym_LT_AMP_DASH;
	v->a[110468] = anon_sym_GT_AMP_DASH;
	v->a[110469] = anon_sym_LT_LT;
	v->a[110470] = anon_sym_LT_LT_DASH;
	v->a[110471] = anon_sym_AMP;
	v->a[110472] = anon_sym_SEMI;
	v->a[110473] = 16;
	v->a[110474] = actions(3);
	v->a[110475] = 1;
	v->a[110476] = sym_comment;
	v->a[110477] = actions(5545);
	v->a[110478] = 1;
	v->a[110479] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_5524(v);
}

void	small_parse_table_5524(t_small_parse_table_array *v)
{
	v->a[110480] = actions(5547);
	v->a[110481] = 1;
	v->a[110482] = anon_sym_DOLLAR;
	v->a[110483] = actions(5551);
	v->a[110484] = 1;
	v->a[110485] = anon_sym_DQUOTE;
	v->a[110486] = actions(5555);
	v->a[110487] = 1;
	v->a[110488] = aux_sym_number_token1;
	v->a[110489] = actions(5557);
	v->a[110490] = 1;
	v->a[110491] = aux_sym_number_token2;
	v->a[110492] = actions(5559);
	v->a[110493] = 1;
	v->a[110494] = anon_sym_DOLLAR_LBRACE;
	v->a[110495] = actions(5561);
	v->a[110496] = 1;
	v->a[110497] = anon_sym_DOLLAR_LPAREN;
	v->a[110498] = actions(5563);
	v->a[110499] = 1;
	small_parse_table_5525(v);
}

/* EOF small_parse_table_1104.c */
