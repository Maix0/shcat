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
	v->a[42400] = anon_sym_AMP_AMP;
	v->a[42401] = anon_sym_PIPE_PIPE;
	v->a[42402] = anon_sym_LT;
	v->a[42403] = anon_sym_GT;
	v->a[42404] = anon_sym_GT_GT;
	v->a[42405] = anon_sym_LT_AMP;
	v->a[42406] = anon_sym_GT_AMP;
	v->a[42407] = anon_sym_GT_PIPE;
	v->a[42408] = anon_sym_LT_AMP_DASH;
	v->a[42409] = anon_sym_GT_AMP_DASH;
	v->a[42410] = anon_sym_LT_LT;
	v->a[42411] = anon_sym_LT_LT_DASH;
	v->a[42412] = aux_sym_heredoc_redirect_token1;
	v->a[42413] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[42414] = anon_sym_AMP;
	v->a[42415] = aux_sym_concatenation_token1;
	v->a[42416] = anon_sym_DOLLAR;
	v->a[42417] = anon_sym_DQUOTE;
	v->a[42418] = sym_raw_string;
	v->a[42419] = sym_number;
	small_parse_table_2121(v);
}

void	small_parse_table_2121(t_small_parse_table_array *v)
{
	v->a[42420] = anon_sym_DOLLAR_LBRACE;
	v->a[42421] = anon_sym_DOLLAR_LPAREN;
	v->a[42422] = anon_sym_BQUOTE;
	v->a[42423] = sym_word;
	v->a[42424] = anon_sym_SEMI;
	v->a[42425] = 3;
	v->a[42426] = actions(3);
	v->a[42427] = 1;
	v->a[42428] = sym_comment;
	v->a[42429] = actions(1194);
	v->a[42430] = 2;
	v->a[42431] = sym_file_descriptor;
	v->a[42432] = sym__concat;
	v->a[42433] = actions(1189);
	v->a[42434] = 28;
	v->a[42435] = anon_sym_esac;
	v->a[42436] = anon_sym_PIPE;
	v->a[42437] = anon_sym_SEMI_SEMI;
	v->a[42438] = anon_sym_AMP_AMP;
	v->a[42439] = anon_sym_PIPE_PIPE;
	small_parse_table_2122(v);
}

void	small_parse_table_2122(t_small_parse_table_array *v)
{
	v->a[42440] = anon_sym_LT;
	v->a[42441] = anon_sym_GT;
	v->a[42442] = anon_sym_GT_GT;
	v->a[42443] = anon_sym_LT_AMP;
	v->a[42444] = anon_sym_GT_AMP;
	v->a[42445] = anon_sym_GT_PIPE;
	v->a[42446] = anon_sym_LT_AMP_DASH;
	v->a[42447] = anon_sym_GT_AMP_DASH;
	v->a[42448] = anon_sym_LT_LT;
	v->a[42449] = anon_sym_LT_LT_DASH;
	v->a[42450] = aux_sym_heredoc_redirect_token1;
	v->a[42451] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[42452] = anon_sym_AMP;
	v->a[42453] = aux_sym_concatenation_token1;
	v->a[42454] = anon_sym_DOLLAR;
	v->a[42455] = anon_sym_DQUOTE;
	v->a[42456] = sym_raw_string;
	v->a[42457] = sym_number;
	v->a[42458] = anon_sym_DOLLAR_LBRACE;
	v->a[42459] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2123(v);
}

void	small_parse_table_2123(t_small_parse_table_array *v)
{
	v->a[42460] = anon_sym_BQUOTE;
	v->a[42461] = sym_word;
	v->a[42462] = anon_sym_SEMI;
	v->a[42463] = 8;
	v->a[42464] = actions(3);
	v->a[42465] = 1;
	v->a[42466] = sym_comment;
	v->a[42467] = actions(682);
	v->a[42468] = 1;
	v->a[42469] = anon_sym_PIPE;
	v->a[42470] = actions(690);
	v->a[42471] = 1;
	v->a[42472] = sym_file_descriptor;
	v->a[42473] = actions(1466);
	v->a[42474] = 1;
	v->a[42475] = sym_variable_name;
	v->a[42476] = state(1407);
	v->a[42477] = 2;
	v->a[42478] = sym_variable_assignment;
	v->a[42479] = aux_sym__variable_assignments_repeat1;
	small_parse_table_2124(v);
}

void	small_parse_table_2124(t_small_parse_table_array *v)
{
	v->a[42480] = state(1408);
	v->a[42481] = 3;
	v->a[42482] = sym_file_redirect;
	v->a[42483] = sym_heredoc_redirect;
	v->a[42484] = aux_sym_redirected_statement_repeat1;
	v->a[42485] = actions(935);
	v->a[42486] = 5;
	v->a[42487] = anon_sym_AMP_AMP;
	v->a[42488] = anon_sym_PIPE_PIPE;
	v->a[42489] = anon_sym_LT_LT;
	v->a[42490] = anon_sym_LT_LT_DASH;
	v->a[42491] = aux_sym_heredoc_redirect_token1;
	v->a[42492] = actions(678);
	v->a[42493] = 17;
	v->a[42494] = anon_sym_LT;
	v->a[42495] = anon_sym_GT;
	v->a[42496] = anon_sym_GT_GT;
	v->a[42497] = anon_sym_LT_AMP;
	v->a[42498] = anon_sym_GT_AMP;
	v->a[42499] = anon_sym_GT_PIPE;
	small_parse_table_2125(v);
}

/* EOF small_parse_table_424.c */
