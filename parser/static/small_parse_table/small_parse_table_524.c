/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_524.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2620(t_small_parse_table_array *v)
{
	v->a[52400] = actions(827);
	v->a[52401] = 1;
	v->a[52402] = aux_sym_heredoc_redirect_token1;
	v->a[52403] = state(1225);
	v->a[52404] = 3;
	v->a[52405] = sym_file_redirect;
	v->a[52406] = sym_heredoc_redirect;
	v->a[52407] = aux_sym_redirected_statement_repeat1;
	v->a[52408] = actions(816);
	v->a[52409] = 7;
	v->a[52410] = anon_sym_PIPE;
	v->a[52411] = anon_sym_AMP_AMP;
	v->a[52412] = anon_sym_PIPE_PIPE;
	v->a[52413] = anon_sym_LT;
	v->a[52414] = anon_sym_GT;
	v->a[52415] = anon_sym_GT_GT;
	v->a[52416] = anon_sym_LT_LT;
	v->a[52417] = 6;
	v->a[52418] = actions(3);
	v->a[52419] = 1;
	small_parse_table_2621(v);
}

void	small_parse_table_2621(t_small_parse_table_array *v)
{
	v->a[52420] = sym_comment;
	v->a[52421] = actions(1945);
	v->a[52422] = 1;
	v->a[52423] = anon_sym_LT_LT;
	v->a[52424] = actions(1948);
	v->a[52425] = 1;
	v->a[52426] = aux_sym_heredoc_redirect_token1;
	v->a[52427] = actions(1940);
	v->a[52428] = 3;
	v->a[52429] = anon_sym_PIPE;
	v->a[52430] = anon_sym_AMP_AMP;
	v->a[52431] = anon_sym_PIPE_PIPE;
	v->a[52432] = actions(2646);
	v->a[52433] = 3;
	v->a[52434] = anon_sym_LT;
	v->a[52435] = anon_sym_GT;
	v->a[52436] = anon_sym_GT_GT;
	v->a[52437] = state(1229);
	v->a[52438] = 3;
	v->a[52439] = sym_file_redirect;
	small_parse_table_2622(v);
}

void	small_parse_table_2622(t_small_parse_table_array *v)
{
	v->a[52440] = sym_heredoc_redirect;
	v->a[52441] = aux_sym_redirected_statement_repeat1;
	v->a[52442] = 3;
	v->a[52443] = actions(3);
	v->a[52444] = 1;
	v->a[52445] = sym_comment;
	v->a[52446] = actions(1274);
	v->a[52447] = 1;
	v->a[52448] = aux_sym_heredoc_redirect_token1;
	v->a[52449] = actions(1276);
	v->a[52450] = 10;
	v->a[52451] = anon_sym_esac;
	v->a[52452] = anon_sym_PIPE;
	v->a[52453] = anon_sym_SEMI_SEMI;
	v->a[52454] = anon_sym_AMP_AMP;
	v->a[52455] = anon_sym_PIPE_PIPE;
	v->a[52456] = anon_sym_LT;
	v->a[52457] = anon_sym_GT;
	v->a[52458] = anon_sym_GT_GT;
	v->a[52459] = anon_sym_LT_LT;
	small_parse_table_2623(v);
}

void	small_parse_table_2623(t_small_parse_table_array *v)
{
	v->a[52460] = anon_sym_SEMI;
	v->a[52461] = 3;
	v->a[52462] = actions(3);
	v->a[52463] = 1;
	v->a[52464] = sym_comment;
	v->a[52465] = actions(1274);
	v->a[52466] = 1;
	v->a[52467] = aux_sym_heredoc_redirect_token1;
	v->a[52468] = actions(1276);
	v->a[52469] = 10;
	v->a[52470] = anon_sym_esac;
	v->a[52471] = anon_sym_PIPE;
	v->a[52472] = anon_sym_SEMI_SEMI;
	v->a[52473] = anon_sym_AMP_AMP;
	v->a[52474] = anon_sym_PIPE_PIPE;
	v->a[52475] = anon_sym_LT;
	v->a[52476] = anon_sym_GT;
	v->a[52477] = anon_sym_GT_GT;
	v->a[52478] = anon_sym_LT_LT;
	v->a[52479] = anon_sym_SEMI;
	small_parse_table_2624(v);
}

void	small_parse_table_2624(t_small_parse_table_array *v)
{
	v->a[52480] = 3;
	v->a[52481] = actions(3);
	v->a[52482] = 1;
	v->a[52483] = sym_comment;
	v->a[52484] = actions(2651);
	v->a[52485] = 1;
	v->a[52486] = sym_extglob_pattern;
	v->a[52487] = actions(2649);
	v->a[52488] = 10;
	v->a[52489] = anon_sym_LPAREN;
	v->a[52490] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[52491] = anon_sym_DOLLAR;
	v->a[52492] = anon_sym_DQUOTE;
	v->a[52493] = sym_raw_string;
	v->a[52494] = sym_number;
	v->a[52495] = anon_sym_DOLLAR_LBRACE;
	v->a[52496] = anon_sym_DOLLAR_LPAREN;
	v->a[52497] = anon_sym_BQUOTE;
	v->a[52498] = sym_word;
	v->a[52499] = 3;
	small_parse_table_2625(v);
}

/* EOF small_parse_table_524.c */
