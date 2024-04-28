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
	v->a[52400] = 1;
	v->a[52401] = sym_comment;
	v->a[52402] = actions(1302);
	v->a[52403] = 6;
	v->a[52404] = sym_file_descriptor;
	v->a[52405] = sym__concat;
	v->a[52406] = sym_test_operator;
	v->a[52407] = sym__bare_dollar;
	v->a[52408] = sym__brace_start;
	v->a[52409] = aux_sym_heredoc_redirect_token1;
	v->a[52410] = actions(1300);
	v->a[52411] = 41;
	v->a[52412] = anon_sym_LPAREN_LPAREN;
	v->a[52413] = anon_sym_SEMI;
	v->a[52414] = anon_sym_PIPE_PIPE;
	v->a[52415] = anon_sym_AMP_AMP;
	v->a[52416] = anon_sym_PIPE;
	v->a[52417] = anon_sym_AMP;
	v->a[52418] = anon_sym_EQ_EQ;
	v->a[52419] = anon_sym_LT;
	small_parse_table_2621(v);
}

void	small_parse_table_2621(t_small_parse_table_array *v)
{
	v->a[52420] = anon_sym_GT;
	v->a[52421] = anon_sym_LT_LT;
	v->a[52422] = anon_sym_GT_GT;
	v->a[52423] = anon_sym_RPAREN;
	v->a[52424] = anon_sym_SEMI_SEMI;
	v->a[52425] = anon_sym_PIPE_AMP;
	v->a[52426] = anon_sym_EQ_TILDE;
	v->a[52427] = anon_sym_AMP_GT;
	v->a[52428] = anon_sym_AMP_GT_GT;
	v->a[52429] = anon_sym_LT_AMP;
	v->a[52430] = anon_sym_GT_AMP;
	v->a[52431] = anon_sym_GT_PIPE;
	v->a[52432] = anon_sym_LT_AMP_DASH;
	v->a[52433] = anon_sym_GT_AMP_DASH;
	v->a[52434] = anon_sym_LT_LT_DASH;
	v->a[52435] = anon_sym_LT_LT_LT;
	v->a[52436] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[52437] = anon_sym_DOLLAR_LBRACK;
	v->a[52438] = aux_sym_concatenation_token1;
	v->a[52439] = anon_sym_DOLLAR;
	small_parse_table_2622(v);
}

void	small_parse_table_2622(t_small_parse_table_array *v)
{
	v->a[52440] = sym__special_character;
	v->a[52441] = anon_sym_DQUOTE;
	v->a[52442] = sym_raw_string;
	v->a[52443] = sym_ansi_c_string;
	v->a[52444] = aux_sym_number_token1;
	v->a[52445] = aux_sym_number_token2;
	v->a[52446] = anon_sym_DOLLAR_LBRACE;
	v->a[52447] = anon_sym_DOLLAR_LPAREN;
	v->a[52448] = anon_sym_BQUOTE;
	v->a[52449] = anon_sym_DOLLAR_BQUOTE;
	v->a[52450] = anon_sym_LT_LPAREN;
	v->a[52451] = anon_sym_GT_LPAREN;
	v->a[52452] = sym_word;
	v->a[52453] = 3;
	v->a[52454] = actions(3);
	v->a[52455] = 1;
	v->a[52456] = sym_comment;
	v->a[52457] = actions(1326);
	v->a[52458] = 6;
	v->a[52459] = sym_file_descriptor;
	small_parse_table_2623(v);
}

void	small_parse_table_2623(t_small_parse_table_array *v)
{
	v->a[52460] = sym__concat;
	v->a[52461] = sym_variable_name;
	v->a[52462] = sym_test_operator;
	v->a[52463] = sym__brace_start;
	v->a[52464] = aux_sym_heredoc_redirect_token1;
	v->a[52465] = actions(1324);
	v->a[52466] = 41;
	v->a[52467] = anon_sym_LPAREN_LPAREN;
	v->a[52468] = anon_sym_SEMI;
	v->a[52469] = anon_sym_PIPE_PIPE;
	v->a[52470] = anon_sym_AMP_AMP;
	v->a[52471] = anon_sym_PIPE;
	v->a[52472] = anon_sym_AMP;
	v->a[52473] = anon_sym_LT;
	v->a[52474] = anon_sym_GT;
	v->a[52475] = anon_sym_LT_LT;
	v->a[52476] = anon_sym_GT_GT;
	v->a[52477] = anon_sym_esac;
	v->a[52478] = anon_sym_SEMI_SEMI;
	v->a[52479] = anon_sym_SEMI_AMP;
	small_parse_table_2624(v);
}

void	small_parse_table_2624(t_small_parse_table_array *v)
{
	v->a[52480] = anon_sym_SEMI_SEMI_AMP;
	v->a[52481] = anon_sym_PIPE_AMP;
	v->a[52482] = anon_sym_AMP_GT;
	v->a[52483] = anon_sym_AMP_GT_GT;
	v->a[52484] = anon_sym_LT_AMP;
	v->a[52485] = anon_sym_GT_AMP;
	v->a[52486] = anon_sym_GT_PIPE;
	v->a[52487] = anon_sym_LT_AMP_DASH;
	v->a[52488] = anon_sym_GT_AMP_DASH;
	v->a[52489] = anon_sym_LT_LT_DASH;
	v->a[52490] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[52491] = anon_sym_DOLLAR_LBRACK;
	v->a[52492] = aux_sym_concatenation_token1;
	v->a[52493] = anon_sym_DOLLAR;
	v->a[52494] = sym__special_character;
	v->a[52495] = anon_sym_DQUOTE;
	v->a[52496] = sym_raw_string;
	v->a[52497] = sym_ansi_c_string;
	v->a[52498] = aux_sym_number_token1;
	v->a[52499] = aux_sym_number_token2;
	small_parse_table_2625(v);
}

/* EOF small_parse_table_524.c */
