/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_424.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2120(t_small_parse_table_array *v)
{
	v->a[42400] = anon_sym_GT_GT;
	v->a[42401] = anon_sym_AMP_GT;
	v->a[42402] = anon_sym_AMP_GT_GT;
	v->a[42403] = anon_sym_LT_AMP;
	v->a[42404] = anon_sym_GT_AMP;
	v->a[42405] = anon_sym_GT_PIPE;
	v->a[42406] = anon_sym_LT_AMP_DASH;
	v->a[42407] = anon_sym_GT_AMP_DASH;
	v->a[42408] = anon_sym_LT_LT;
	v->a[42409] = anon_sym_LT_LT_DASH;
	v->a[42410] = aux_sym_heredoc_redirect_token1;
	v->a[42411] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[42412] = anon_sym_AMP;
	v->a[42413] = aux_sym_concatenation_token1;
	v->a[42414] = anon_sym_DOLLAR;
	v->a[42415] = anon_sym_DQUOTE;
	v->a[42416] = sym_raw_string;
	v->a[42417] = sym_number;
	v->a[42418] = anon_sym_DOLLAR_LBRACE;
	v->a[42419] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2121(v);
}

void	small_parse_table_2121(t_small_parse_table_array *v)
{
	v->a[42420] = anon_sym_BQUOTE;
	v->a[42421] = sym_word;
	v->a[42422] = anon_sym_SEMI;
	v->a[42423] = 5;
	v->a[42424] = actions(3);
	v->a[42425] = 1;
	v->a[42426] = sym_comment;
	v->a[42427] = state(705);
	v->a[42428] = 1;
	v->a[42429] = sym_concatenation;
	v->a[42430] = actions(760);
	v->a[42431] = 2;
	v->a[42432] = sym_file_descriptor;
	v->a[42433] = sym_variable_name;
	v->a[42434] = state(800);
	v->a[42435] = 5;
	v->a[42436] = sym_arithmetic_expansion;
	v->a[42437] = sym_string;
	v->a[42438] = sym_simple_expansion;
	v->a[42439] = sym_expansion;
	small_parse_table_2122(v);
}

void	small_parse_table_2122(t_small_parse_table_array *v)
{
	v->a[42440] = sym_command_substitution;
	v->a[42441] = actions(758);
	v->a[42442] = 25;
	v->a[42443] = anon_sym_PIPE;
	v->a[42444] = anon_sym_AMP_AMP;
	v->a[42445] = anon_sym_PIPE_PIPE;
	v->a[42446] = anon_sym_LT;
	v->a[42447] = anon_sym_GT;
	v->a[42448] = anon_sym_GT_GT;
	v->a[42449] = anon_sym_AMP_GT;
	v->a[42450] = anon_sym_AMP_GT_GT;
	v->a[42451] = anon_sym_LT_AMP;
	v->a[42452] = anon_sym_GT_AMP;
	v->a[42453] = anon_sym_GT_PIPE;
	v->a[42454] = anon_sym_LT_AMP_DASH;
	v->a[42455] = anon_sym_GT_AMP_DASH;
	v->a[42456] = anon_sym_LT_LT;
	v->a[42457] = anon_sym_LT_LT_DASH;
	v->a[42458] = aux_sym_heredoc_redirect_token1;
	v->a[42459] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_2123(v);
}

void	small_parse_table_2123(t_small_parse_table_array *v)
{
	v->a[42460] = anon_sym_DOLLAR;
	v->a[42461] = anon_sym_DQUOTE;
	v->a[42462] = sym_raw_string;
	v->a[42463] = sym_number;
	v->a[42464] = anon_sym_DOLLAR_LBRACE;
	v->a[42465] = anon_sym_DOLLAR_LPAREN;
	v->a[42466] = anon_sym_BQUOTE;
	v->a[42467] = sym_word;
	v->a[42468] = 3;
	v->a[42469] = actions(3);
	v->a[42470] = 1;
	v->a[42471] = sym_comment;
	v->a[42472] = actions(1104);
	v->a[42473] = 3;
	v->a[42474] = sym_file_descriptor;
	v->a[42475] = sym__concat;
	v->a[42476] = sym__bare_dollar;
	v->a[42477] = actions(1102);
	v->a[42478] = 30;
	v->a[42479] = anon_sym_PIPE;
	small_parse_table_2124(v);
}

void	small_parse_table_2124(t_small_parse_table_array *v)
{
	v->a[42480] = anon_sym_RPAREN;
	v->a[42481] = anon_sym_SEMI_SEMI;
	v->a[42482] = anon_sym_AMP_AMP;
	v->a[42483] = anon_sym_PIPE_PIPE;
	v->a[42484] = anon_sym_LT;
	v->a[42485] = anon_sym_GT;
	v->a[42486] = anon_sym_GT_GT;
	v->a[42487] = anon_sym_AMP_GT;
	v->a[42488] = anon_sym_AMP_GT_GT;
	v->a[42489] = anon_sym_LT_AMP;
	v->a[42490] = anon_sym_GT_AMP;
	v->a[42491] = anon_sym_GT_PIPE;
	v->a[42492] = anon_sym_LT_AMP_DASH;
	v->a[42493] = anon_sym_GT_AMP_DASH;
	v->a[42494] = anon_sym_LT_LT;
	v->a[42495] = anon_sym_LT_LT_DASH;
	v->a[42496] = aux_sym_heredoc_redirect_token1;
	v->a[42497] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[42498] = anon_sym_AMP;
	v->a[42499] = aux_sym_concatenation_token1;
	small_parse_table_2125(v);
}

/* EOF small_parse_table_424.c */
