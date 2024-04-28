/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_864.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4320(t_small_parse_table_array *v)
{
	v->a[86400] = anon_sym_SEMI;
	v->a[86401] = anon_sym_PIPE_PIPE;
	v->a[86402] = anon_sym_AMP_AMP;
	v->a[86403] = anon_sym_PIPE;
	v->a[86404] = anon_sym_AMP;
	v->a[86405] = anon_sym_LT;
	v->a[86406] = anon_sym_GT;
	v->a[86407] = anon_sym_LT_LT;
	v->a[86408] = anon_sym_GT_GT;
	v->a[86409] = anon_sym_SEMI_SEMI;
	v->a[86410] = anon_sym_PIPE_AMP;
	v->a[86411] = anon_sym_AMP_GT;
	v->a[86412] = anon_sym_AMP_GT_GT;
	v->a[86413] = anon_sym_LT_AMP;
	v->a[86414] = anon_sym_GT_AMP;
	v->a[86415] = anon_sym_GT_PIPE;
	v->a[86416] = anon_sym_LT_AMP_DASH;
	v->a[86417] = anon_sym_GT_AMP_DASH;
	v->a[86418] = anon_sym_LT_LT_DASH;
	v->a[86419] = anon_sym_LT_LT_LT;
	small_parse_table_4321(v);
}

void	small_parse_table_4321(t_small_parse_table_array *v)
{
	v->a[86420] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[86421] = anon_sym_DOLLAR_LBRACK;
	v->a[86422] = anon_sym_DOLLAR;
	v->a[86423] = anon_sym_DQUOTE;
	v->a[86424] = sym_raw_string;
	v->a[86425] = sym_ansi_c_string;
	v->a[86426] = aux_sym_number_token1;
	v->a[86427] = aux_sym_number_token2;
	v->a[86428] = anon_sym_DOLLAR_LBRACE;
	v->a[86429] = anon_sym_DOLLAR_LPAREN;
	v->a[86430] = anon_sym_BQUOTE;
	v->a[86431] = anon_sym_DOLLAR_BQUOTE;
	v->a[86432] = anon_sym_LT_LPAREN;
	v->a[86433] = anon_sym_GT_LPAREN;
	v->a[86434] = sym_word;
	v->a[86435] = 3;
	v->a[86436] = actions(3);
	v->a[86437] = 1;
	v->a[86438] = sym_comment;
	v->a[86439] = actions(1294);
	small_parse_table_4322(v);
}

void	small_parse_table_4322(t_small_parse_table_array *v)
{
	v->a[86440] = 5;
	v->a[86441] = sym_file_descriptor;
	v->a[86442] = sym__concat;
	v->a[86443] = sym_test_operator;
	v->a[86444] = sym__brace_start;
	v->a[86445] = aux_sym_heredoc_redirect_token1;
	v->a[86446] = actions(1292);
	v->a[86447] = 39;
	v->a[86448] = anon_sym_LPAREN_LPAREN;
	v->a[86449] = anon_sym_SEMI;
	v->a[86450] = anon_sym_PIPE_PIPE;
	v->a[86451] = anon_sym_AMP_AMP;
	v->a[86452] = anon_sym_PIPE;
	v->a[86453] = anon_sym_AMP;
	v->a[86454] = anon_sym_LT;
	v->a[86455] = anon_sym_GT;
	v->a[86456] = anon_sym_LT_LT;
	v->a[86457] = anon_sym_GT_GT;
	v->a[86458] = anon_sym_SEMI_SEMI;
	v->a[86459] = anon_sym_SEMI_AMP;
	small_parse_table_4323(v);
}

void	small_parse_table_4323(t_small_parse_table_array *v)
{
	v->a[86460] = anon_sym_SEMI_SEMI_AMP;
	v->a[86461] = anon_sym_PIPE_AMP;
	v->a[86462] = anon_sym_AMP_GT;
	v->a[86463] = anon_sym_AMP_GT_GT;
	v->a[86464] = anon_sym_LT_AMP;
	v->a[86465] = anon_sym_GT_AMP;
	v->a[86466] = anon_sym_GT_PIPE;
	v->a[86467] = anon_sym_LT_AMP_DASH;
	v->a[86468] = anon_sym_GT_AMP_DASH;
	v->a[86469] = anon_sym_LT_LT_DASH;
	v->a[86470] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[86471] = anon_sym_DOLLAR_LBRACK;
	v->a[86472] = aux_sym_concatenation_token1;
	v->a[86473] = anon_sym_DOLLAR;
	v->a[86474] = sym__special_character;
	v->a[86475] = anon_sym_DQUOTE;
	v->a[86476] = sym_raw_string;
	v->a[86477] = sym_ansi_c_string;
	v->a[86478] = aux_sym_number_token1;
	v->a[86479] = aux_sym_number_token2;
	small_parse_table_4324(v);
}

void	small_parse_table_4324(t_small_parse_table_array *v)
{
	v->a[86480] = anon_sym_DOLLAR_LBRACE;
	v->a[86481] = anon_sym_DOLLAR_LPAREN;
	v->a[86482] = anon_sym_BQUOTE;
	v->a[86483] = anon_sym_DOLLAR_BQUOTE;
	v->a[86484] = anon_sym_LT_LPAREN;
	v->a[86485] = anon_sym_GT_LPAREN;
	v->a[86486] = sym_word;
	v->a[86487] = 5;
	v->a[86488] = actions(3);
	v->a[86489] = 1;
	v->a[86490] = sym_comment;
	v->a[86491] = actions(5990);
	v->a[86492] = 1;
	v->a[86493] = sym__special_character;
	v->a[86494] = state(1886);
	v->a[86495] = 1;
	v->a[86496] = aux_sym__literal_repeat1;
	v->a[86497] = actions(5395);
	v->a[86498] = 4;
	v->a[86499] = sym_file_descriptor;
	small_parse_table_4325(v);
}

/* EOF small_parse_table_864.c */
