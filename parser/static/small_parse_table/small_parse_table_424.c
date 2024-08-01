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
	v->a[42400] = 1;
	v->a[42401] = sym__expansion_regex;
	v->a[42402] = state(1592);
	v->a[42403] = 1;
	v->a[42404] = sym__expansion_expression;
	v->a[42405] = actions(943);
	v->a[42406] = 3;
	v->a[42407] = sym__immediate_double_hash;
	v->a[42408] = anon_sym_POUND;
	v->a[42409] = anon_sym_PERCENT_PERCENT;
	v->a[42410] = actions(941);
	v->a[42411] = 8;
	v->a[42412] = anon_sym_COLON_DASH;
	v->a[42413] = anon_sym_DASH3;
	v->a[42414] = anon_sym_COLON_EQ;
	v->a[42415] = anon_sym_EQ2;
	v->a[42416] = anon_sym_COLON_QMARK;
	v->a[42417] = anon_sym_QMARK2;
	v->a[42418] = anon_sym_COLON_PLUS;
	v->a[42419] = anon_sym_PLUS3;
	small_parse_table_2121(v);
}

void	small_parse_table_2121(t_small_parse_table_array *v)
{
	v->a[42420] = 10;
	v->a[42421] = actions(3);
	v->a[42422] = 1;
	v->a[42423] = sym_comment;
	v->a[42424] = actions(580);
	v->a[42425] = 1;
	v->a[42426] = anon_sym_PIPE;
	v->a[42427] = actions(584);
	v->a[42428] = 1;
	v->a[42429] = anon_sym_LT_LT;
	v->a[42430] = actions(586);
	v->a[42431] = 1;
	v->a[42432] = anon_sym_SEMI;
	v->a[42433] = actions(1878);
	v->a[42434] = 1;
	v->a[42435] = aux_sym_heredoc_redirect_token1;
	v->a[42436] = state(381);
	v->a[42437] = 1;
	v->a[42438] = sym_terminator;
	v->a[42439] = actions(578);
	small_parse_table_2122(v);
}

void	small_parse_table_2122(t_small_parse_table_array *v)
{
	v->a[42440] = 2;
	v->a[42441] = anon_sym_esac;
	v->a[42442] = anon_sym_SEMI_SEMI;
	v->a[42443] = actions(582);
	v->a[42444] = 2;
	v->a[42445] = anon_sym_AMP_AMP;
	v->a[42446] = anon_sym_PIPE_PIPE;
	v->a[42447] = actions(1876);
	v->a[42448] = 3;
	v->a[42449] = anon_sym_LT;
	v->a[42450] = anon_sym_GT;
	v->a[42451] = anon_sym_GT_GT;
	v->a[42452] = state(971);
	v->a[42453] = 3;
	v->a[42454] = sym_file_redirect;
	v->a[42455] = sym_heredoc_redirect;
	v->a[42456] = aux_sym_redirected_statement_repeat1;
	v->a[42457] = 10;
	v->a[42458] = actions(3);
	v->a[42459] = 1;
	small_parse_table_2123(v);
}

void	small_parse_table_2123(t_small_parse_table_array *v)
{
	v->a[42460] = sym_comment;
	v->a[42461] = actions(580);
	v->a[42462] = 1;
	v->a[42463] = anon_sym_PIPE;
	v->a[42464] = actions(597);
	v->a[42465] = 1;
	v->a[42466] = anon_sym_LT_LT;
	v->a[42467] = actions(716);
	v->a[42468] = 1;
	v->a[42469] = ts_builtin_sym_end;
	v->a[42470] = actions(1874);
	v->a[42471] = 1;
	v->a[42472] = aux_sym_heredoc_redirect_token1;
	v->a[42473] = state(506);
	v->a[42474] = 1;
	v->a[42475] = sym_terminator;
	v->a[42476] = actions(693);
	v->a[42477] = 2;
	v->a[42478] = anon_sym_SEMI_SEMI;
	v->a[42479] = anon_sym_SEMI;
	small_parse_table_2124(v);
}

void	small_parse_table_2124(t_small_parse_table_array *v)
{
	v->a[42480] = actions(695);
	v->a[42481] = 2;
	v->a[42482] = anon_sym_AMP_AMP;
	v->a[42483] = anon_sym_PIPE_PIPE;
	v->a[42484] = actions(1872);
	v->a[42485] = 3;
	v->a[42486] = anon_sym_LT;
	v->a[42487] = anon_sym_GT;
	v->a[42488] = anon_sym_GT_GT;
	v->a[42489] = state(922);
	v->a[42490] = 3;
	v->a[42491] = sym_file_redirect;
	v->a[42492] = sym_heredoc_redirect;
	v->a[42493] = aux_sym_redirected_statement_repeat1;
	v->a[42494] = 10;
	v->a[42495] = actions(3);
	v->a[42496] = 1;
	v->a[42497] = sym_comment;
	v->a[42498] = actions(580);
	v->a[42499] = 1;
	small_parse_table_2125(v);
}

/* EOF small_parse_table_424.c */
