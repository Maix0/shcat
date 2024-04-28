/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_854.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4270(t_small_parse_table_array *v)
{
	v->a[85400] = actions(3);
	v->a[85401] = 1;
	v->a[85402] = sym_comment;
	v->a[85403] = actions(5080);
	v->a[85404] = 1;
	v->a[85405] = aux_sym_concatenation_token1;
	v->a[85406] = actions(5082);
	v->a[85407] = 1;
	v->a[85408] = sym__concat;
	v->a[85409] = state(1822);
	v->a[85410] = 1;
	v->a[85411] = aux_sym_concatenation_repeat1;
	v->a[85412] = actions(4465);
	v->a[85413] = 5;
	v->a[85414] = sym_file_descriptor;
	v->a[85415] = sym_test_operator;
	v->a[85416] = sym__bare_dollar;
	v->a[85417] = sym__brace_start;
	v->a[85418] = aux_sym_heredoc_redirect_token1;
	v->a[85419] = actions(4463);
	small_parse_table_4271(v);
}

void	small_parse_table_4271(t_small_parse_table_array *v)
{
	v->a[85420] = 36;
	v->a[85421] = anon_sym_LPAREN_LPAREN;
	v->a[85422] = anon_sym_PIPE_PIPE;
	v->a[85423] = anon_sym_AMP_AMP;
	v->a[85424] = anon_sym_PIPE;
	v->a[85425] = anon_sym_EQ_EQ;
	v->a[85426] = anon_sym_LT;
	v->a[85427] = anon_sym_GT;
	v->a[85428] = anon_sym_LT_LT;
	v->a[85429] = anon_sym_GT_GT;
	v->a[85430] = anon_sym_PIPE_AMP;
	v->a[85431] = anon_sym_EQ_TILDE;
	v->a[85432] = anon_sym_AMP_GT;
	v->a[85433] = anon_sym_AMP_GT_GT;
	v->a[85434] = anon_sym_LT_AMP;
	v->a[85435] = anon_sym_GT_AMP;
	v->a[85436] = anon_sym_GT_PIPE;
	v->a[85437] = anon_sym_LT_AMP_DASH;
	v->a[85438] = anon_sym_GT_AMP_DASH;
	v->a[85439] = anon_sym_LT_LT_DASH;
	small_parse_table_4272(v);
}

void	small_parse_table_4272(t_small_parse_table_array *v)
{
	v->a[85440] = anon_sym_LT_LT_LT;
	v->a[85441] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[85442] = anon_sym_DOLLAR_LBRACK;
	v->a[85443] = anon_sym_DOLLAR;
	v->a[85444] = sym__special_character;
	v->a[85445] = anon_sym_DQUOTE;
	v->a[85446] = sym_raw_string;
	v->a[85447] = sym_ansi_c_string;
	v->a[85448] = aux_sym_number_token1;
	v->a[85449] = aux_sym_number_token2;
	v->a[85450] = anon_sym_DOLLAR_LBRACE;
	v->a[85451] = anon_sym_DOLLAR_LPAREN;
	v->a[85452] = anon_sym_BQUOTE;
	v->a[85453] = anon_sym_DOLLAR_BQUOTE;
	v->a[85454] = anon_sym_LT_LPAREN;
	v->a[85455] = anon_sym_GT_LPAREN;
	v->a[85456] = sym_word;
	v->a[85457] = 3;
	v->a[85458] = actions(3);
	v->a[85459] = 1;
	small_parse_table_4273(v);
}

void	small_parse_table_4273(t_small_parse_table_array *v)
{
	v->a[85460] = sym_comment;
	v->a[85461] = actions(1322);
	v->a[85462] = 5;
	v->a[85463] = sym_file_descriptor;
	v->a[85464] = sym__concat;
	v->a[85465] = sym_test_operator;
	v->a[85466] = sym__brace_start;
	v->a[85467] = aux_sym_heredoc_redirect_token1;
	v->a[85468] = actions(1320);
	v->a[85469] = 39;
	v->a[85470] = anon_sym_LPAREN_LPAREN;
	v->a[85471] = anon_sym_SEMI;
	v->a[85472] = anon_sym_PIPE_PIPE;
	v->a[85473] = anon_sym_AMP_AMP;
	v->a[85474] = anon_sym_PIPE;
	v->a[85475] = anon_sym_AMP;
	v->a[85476] = anon_sym_LT;
	v->a[85477] = anon_sym_GT;
	v->a[85478] = anon_sym_LT_LT;
	v->a[85479] = anon_sym_GT_GT;
	small_parse_table_4274(v);
}

void	small_parse_table_4274(t_small_parse_table_array *v)
{
	v->a[85480] = anon_sym_RPAREN;
	v->a[85481] = anon_sym_SEMI_SEMI;
	v->a[85482] = anon_sym_PIPE_AMP;
	v->a[85483] = anon_sym_AMP_GT;
	v->a[85484] = anon_sym_AMP_GT_GT;
	v->a[85485] = anon_sym_LT_AMP;
	v->a[85486] = anon_sym_GT_AMP;
	v->a[85487] = anon_sym_GT_PIPE;
	v->a[85488] = anon_sym_LT_AMP_DASH;
	v->a[85489] = anon_sym_GT_AMP_DASH;
	v->a[85490] = anon_sym_LT_LT_DASH;
	v->a[85491] = anon_sym_LT_LT_LT;
	v->a[85492] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[85493] = anon_sym_DOLLAR_LBRACK;
	v->a[85494] = aux_sym_concatenation_token1;
	v->a[85495] = anon_sym_DOLLAR;
	v->a[85496] = sym__special_character;
	v->a[85497] = anon_sym_DQUOTE;
	v->a[85498] = sym_raw_string;
	v->a[85499] = sym_ansi_c_string;
	small_parse_table_4275(v);
}

/* EOF small_parse_table_854.c */
