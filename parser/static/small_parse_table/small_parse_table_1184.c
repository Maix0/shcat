/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1184.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5920(t_small_parse_table_array *v)
{
	v->a[118400] = sym__special_character;
	v->a[118401] = actions(6288);
	v->a[118402] = 1;
	v->a[118403] = sym__comment_word;
	v->a[118404] = actions(6955);
	v->a[118405] = 1;
	v->a[118406] = anon_sym_DOLLAR;
	v->a[118407] = actions(6286);
	v->a[118408] = 3;
	v->a[118409] = sym_test_operator;
	v->a[118410] = sym__bare_dollar;
	v->a[118411] = sym_raw_string;
	v->a[118412] = state(1502);
	v->a[118413] = 7;
	v->a[118414] = sym_arithmetic_expansion;
	v->a[118415] = sym_brace_expression;
	v->a[118416] = sym_string;
	v->a[118417] = sym_number;
	v->a[118418] = sym_simple_expansion;
	v->a[118419] = sym_expansion;
	small_parse_table_5921(v);
}

void	small_parse_table_5921(t_small_parse_table_array *v)
{
	v->a[118420] = sym_command_substitution;
	v->a[118421] = 10;
	v->a[118422] = actions(3);
	v->a[118423] = 1;
	v->a[118424] = sym_comment;
	v->a[118425] = actions(2514);
	v->a[118426] = 1;
	v->a[118427] = anon_sym_BQUOTE;
	v->a[118428] = actions(3379);
	v->a[118429] = 1;
	v->a[118430] = aux_sym_heredoc_redirect_token1;
	v->a[118431] = actions(5403);
	v->a[118432] = 1;
	v->a[118433] = sym_file_descriptor;
	v->a[118434] = actions(2945);
	v->a[118435] = 2;
	v->a[118436] = anon_sym_LT_LT;
	v->a[118437] = anon_sym_LT_LT_DASH;
	v->a[118438] = actions(3377);
	v->a[118439] = 2;
	small_parse_table_5922(v);
}

void	small_parse_table_5922(t_small_parse_table_array *v)
{
	v->a[118440] = anon_sym_AMP_AMP;
	v->a[118441] = anon_sym_PIPE_PIPE;
	v->a[118442] = actions(5401);
	v->a[118443] = 2;
	v->a[118444] = anon_sym_LT_AMP_DASH;
	v->a[118445] = anon_sym_GT_AMP_DASH;
	v->a[118446] = actions(3375);
	v->a[118447] = 3;
	v->a[118448] = anon_sym_SEMI_SEMI;
	v->a[118449] = anon_sym_AMP;
	v->a[118450] = anon_sym_SEMI;
	v->a[118451] = state(2140);
	v->a[118452] = 3;
	v->a[118453] = sym_file_redirect;
	v->a[118454] = sym_heredoc_redirect;
	v->a[118455] = aux_sym_redirected_statement_repeat1;
	v->a[118456] = actions(5399);
	v->a[118457] = 8;
	v->a[118458] = anon_sym_LT;
	v->a[118459] = anon_sym_GT;
	small_parse_table_5923(v);
}

void	small_parse_table_5923(t_small_parse_table_array *v)
{
	v->a[118460] = anon_sym_GT_GT;
	v->a[118461] = anon_sym_AMP_GT;
	v->a[118462] = anon_sym_AMP_GT_GT;
	v->a[118463] = anon_sym_LT_AMP;
	v->a[118464] = anon_sym_GT_AMP;
	v->a[118465] = anon_sym_GT_PIPE;
	v->a[118466] = 16;
	v->a[118467] = actions(3);
	v->a[118468] = 1;
	v->a[118469] = sym_comment;
	v->a[118470] = actions(6390);
	v->a[118471] = 1;
	v->a[118472] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[118473] = actions(6396);
	v->a[118474] = 1;
	v->a[118475] = anon_sym_DQUOTE;
	v->a[118476] = actions(6400);
	v->a[118477] = 1;
	v->a[118478] = aux_sym_number_token1;
	v->a[118479] = actions(6402);
	small_parse_table_5924(v);
}

void	small_parse_table_5924(t_small_parse_table_array *v)
{
	v->a[118480] = 1;
	v->a[118481] = aux_sym_number_token2;
	v->a[118482] = actions(6404);
	v->a[118483] = 1;
	v->a[118484] = anon_sym_DOLLAR_LBRACE;
	v->a[118485] = actions(6406);
	v->a[118486] = 1;
	v->a[118487] = anon_sym_DOLLAR_LPAREN;
	v->a[118488] = actions(6408);
	v->a[118489] = 1;
	v->a[118490] = anon_sym_BQUOTE;
	v->a[118491] = actions(6410);
	v->a[118492] = 1;
	v->a[118493] = anon_sym_DOLLAR_BQUOTE;
	v->a[118494] = actions(6412);
	v->a[118495] = 1;
	v->a[118496] = sym__brace_start;
	v->a[118497] = actions(6923);
	v->a[118498] = 1;
	v->a[118499] = sym_word;
	small_parse_table_5925(v);
}

/* EOF small_parse_table_1184.c */
