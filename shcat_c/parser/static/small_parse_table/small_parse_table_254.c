/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_254.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1270(t_small_parse_table_array *v)
{
	v->a[25400] = anon_sym_DOLLAR;
	v->a[25401] = actions(4082);
	v->a[25402] = 1;
	v->a[25403] = sym__special_character;
	v->a[25404] = actions(4084);
	v->a[25405] = 1;
	v->a[25406] = anon_sym_DQUOTE;
	v->a[25407] = actions(4086);
	v->a[25408] = 1;
	v->a[25409] = aux_sym_number_token1;
	v->a[25410] = actions(4088);
	v->a[25411] = 1;
	v->a[25412] = aux_sym_number_token2;
	v->a[25413] = actions(4090);
	v->a[25414] = 1;
	v->a[25415] = anon_sym_DOLLAR_LBRACE;
	v->a[25416] = actions(4092);
	v->a[25417] = 1;
	v->a[25418] = anon_sym_DOLLAR_LPAREN;
	v->a[25419] = actions(4094);
	small_parse_table_1271(v);
}

void	small_parse_table_1271(t_small_parse_table_array *v)
{
	v->a[25420] = 1;
	v->a[25421] = anon_sym_BQUOTE;
	v->a[25422] = actions(4096);
	v->a[25423] = 1;
	v->a[25424] = anon_sym_DOLLAR_BQUOTE;
	v->a[25425] = actions(4102);
	v->a[25426] = 1;
	v->a[25427] = sym__brace_start;
	v->a[25428] = actions(4185);
	v->a[25429] = 1;
	v->a[25430] = sym_test_operator;
	v->a[25431] = state(4546);
	v->a[25432] = 1;
	v->a[25433] = aux_sym__literal_repeat1;
	v->a[25434] = state(4907);
	v->a[25435] = 1;
	v->a[25436] = sym_concatenation;
	v->a[25437] = actions(2500);
	v->a[25438] = 2;
	v->a[25439] = sym_file_descriptor;
	small_parse_table_1272(v);
}

void	small_parse_table_1272(t_small_parse_table_array *v)
{
	v->a[25440] = aux_sym_heredoc_redirect_token1;
	v->a[25441] = actions(4076);
	v->a[25442] = 2;
	v->a[25443] = anon_sym_LPAREN_LPAREN;
	v->a[25444] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25445] = actions(4098);
	v->a[25446] = 2;
	v->a[25447] = anon_sym_LT_LPAREN;
	v->a[25448] = anon_sym_GT_LPAREN;
	v->a[25449] = actions(4183);
	v->a[25450] = 3;
	v->a[25451] = sym_raw_string;
	v->a[25452] = sym_ansi_c_string;
	v->a[25453] = sym_word;
	v->a[25454] = state(4692);
	v->a[25455] = 9;
	v->a[25456] = sym_arithmetic_expansion;
	v->a[25457] = sym_brace_expression;
	v->a[25458] = sym_string;
	v->a[25459] = sym_translated_string;
	small_parse_table_1273(v);
}

void	small_parse_table_1273(t_small_parse_table_array *v)
{
	v->a[25460] = sym_number;
	v->a[25461] = sym_simple_expansion;
	v->a[25462] = sym_expansion;
	v->a[25463] = sym_command_substitution;
	v->a[25464] = sym_process_substitution;
	v->a[25465] = actions(2498);
	v->a[25466] = 20;
	v->a[25467] = anon_sym_SEMI;
	v->a[25468] = anon_sym_PIPE_PIPE;
	v->a[25469] = anon_sym_AMP_AMP;
	v->a[25470] = anon_sym_PIPE;
	v->a[25471] = anon_sym_AMP;
	v->a[25472] = anon_sym_LT;
	v->a[25473] = anon_sym_GT;
	v->a[25474] = anon_sym_LT_LT;
	v->a[25475] = anon_sym_GT_GT;
	v->a[25476] = anon_sym_RPAREN;
	v->a[25477] = anon_sym_SEMI_SEMI;
	v->a[25478] = anon_sym_PIPE_AMP;
	v->a[25479] = anon_sym_AMP_GT;
	small_parse_table_1274(v);
}

void	small_parse_table_1274(t_small_parse_table_array *v)
{
	v->a[25480] = anon_sym_AMP_GT_GT;
	v->a[25481] = anon_sym_LT_AMP;
	v->a[25482] = anon_sym_GT_AMP;
	v->a[25483] = anon_sym_GT_PIPE;
	v->a[25484] = anon_sym_LT_AMP_DASH;
	v->a[25485] = anon_sym_GT_AMP_DASH;
	v->a[25486] = anon_sym_LT_LT_DASH;
	v->a[25487] = 25;
	v->a[25488] = actions(71);
	v->a[25489] = 1;
	v->a[25490] = sym_comment;
	v->a[25491] = actions(4147);
	v->a[25492] = 1;
	v->a[25493] = sym_word;
	v->a[25494] = actions(4151);
	v->a[25495] = 1;
	v->a[25496] = anon_sym_DOLLAR_LBRACK;
	v->a[25497] = actions(4153);
	v->a[25498] = 1;
	v->a[25499] = anon_sym_DOLLAR;
	small_parse_table_1275(v);
}

/* EOF small_parse_table_254.c */
