/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_504.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2520(t_small_parse_table_array *v)
{
	v->a[50400] = actions(413);
	v->a[50401] = 1;
	v->a[50402] = sym_file_descriptor;
	v->a[50403] = actions(1650);
	v->a[50404] = 1;
	v->a[50405] = sym_variable_name;
	v->a[50406] = actions(1648);
	v->a[50407] = 2;
	v->a[50408] = aux_sym__simple_variable_name_token1;
	v->a[50409] = aux_sym__multiline_variable_name_token1;
	v->a[50410] = actions(1646);
	v->a[50411] = 9;
	v->a[50412] = anon_sym_BANG;
	v->a[50413] = anon_sym_DASH;
	v->a[50414] = anon_sym_STAR;
	v->a[50415] = anon_sym_QMARK;
	v->a[50416] = anon_sym_DOLLAR;
	v->a[50417] = anon_sym_POUND;
	v->a[50418] = anon_sym_AT;
	v->a[50419] = anon_sym_0;
	small_parse_table_2521(v);
}

void	small_parse_table_2521(t_small_parse_table_array *v)
{
	v->a[50420] = anon_sym__;
	v->a[50421] = actions(407);
	v->a[50422] = 19;
	v->a[50423] = anon_sym_PIPE;
	v->a[50424] = anon_sym_SEMI_SEMI;
	v->a[50425] = anon_sym_AMP_AMP;
	v->a[50426] = anon_sym_PIPE_PIPE;
	v->a[50427] = anon_sym_LT;
	v->a[50428] = anon_sym_GT;
	v->a[50429] = anon_sym_GT_GT;
	v->a[50430] = anon_sym_AMP_GT;
	v->a[50431] = anon_sym_AMP_GT_GT;
	v->a[50432] = anon_sym_LT_AMP;
	v->a[50433] = anon_sym_GT_AMP;
	v->a[50434] = anon_sym_GT_PIPE;
	v->a[50435] = anon_sym_LT_AMP_DASH;
	v->a[50436] = anon_sym_GT_AMP_DASH;
	v->a[50437] = anon_sym_LT_LT;
	v->a[50438] = anon_sym_LT_LT_DASH;
	v->a[50439] = aux_sym_heredoc_redirect_token1;
	small_parse_table_2522(v);
}

void	small_parse_table_2522(t_small_parse_table_array *v)
{
	v->a[50440] = anon_sym_AMP;
	v->a[50441] = anon_sym_SEMI;
	v->a[50442] = 3;
	v->a[50443] = actions(3);
	v->a[50444] = 1;
	v->a[50445] = sym_comment;
	v->a[50446] = actions(1202);
	v->a[50447] = 3;
	v->a[50448] = sym_file_descriptor;
	v->a[50449] = sym_variable_name;
	v->a[50450] = ts_builtin_sym_end;
	v->a[50451] = actions(1198);
	v->a[50452] = 29;
	v->a[50453] = anon_sym_PIPE;
	v->a[50454] = anon_sym_SEMI_SEMI;
	v->a[50455] = anon_sym_AMP_AMP;
	v->a[50456] = anon_sym_PIPE_PIPE;
	v->a[50457] = anon_sym_LT;
	v->a[50458] = anon_sym_GT;
	v->a[50459] = anon_sym_GT_GT;
	small_parse_table_2523(v);
}

void	small_parse_table_2523(t_small_parse_table_array *v)
{
	v->a[50460] = anon_sym_AMP_GT;
	v->a[50461] = anon_sym_AMP_GT_GT;
	v->a[50462] = anon_sym_LT_AMP;
	v->a[50463] = anon_sym_GT_AMP;
	v->a[50464] = anon_sym_GT_PIPE;
	v->a[50465] = anon_sym_LT_AMP_DASH;
	v->a[50466] = anon_sym_GT_AMP_DASH;
	v->a[50467] = anon_sym_LT_LT;
	v->a[50468] = anon_sym_LT_LT_DASH;
	v->a[50469] = aux_sym_heredoc_redirect_token1;
	v->a[50470] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[50471] = anon_sym_AMP;
	v->a[50472] = anon_sym_DOLLAR;
	v->a[50473] = anon_sym_DQUOTE;
	v->a[50474] = sym_raw_string;
	v->a[50475] = aux_sym_number_token1;
	v->a[50476] = aux_sym_number_token2;
	v->a[50477] = anon_sym_DOLLAR_LBRACE;
	v->a[50478] = anon_sym_DOLLAR_LPAREN;
	v->a[50479] = anon_sym_BQUOTE;
	small_parse_table_2524(v);
}

void	small_parse_table_2524(t_small_parse_table_array *v)
{
	v->a[50480] = sym_word;
	v->a[50481] = anon_sym_SEMI;
	v->a[50482] = 3;
	v->a[50483] = actions(3);
	v->a[50484] = 1;
	v->a[50485] = sym_comment;
	v->a[50486] = actions(555);
	v->a[50487] = 3;
	v->a[50488] = sym_file_descriptor;
	v->a[50489] = sym_variable_name;
	v->a[50490] = ts_builtin_sym_end;
	v->a[50491] = actions(553);
	v->a[50492] = 29;
	v->a[50493] = anon_sym_PIPE;
	v->a[50494] = anon_sym_SEMI_SEMI;
	v->a[50495] = anon_sym_AMP_AMP;
	v->a[50496] = anon_sym_PIPE_PIPE;
	v->a[50497] = anon_sym_LT;
	v->a[50498] = anon_sym_GT;
	v->a[50499] = anon_sym_GT_GT;
	small_parse_table_2525(v);
}

/* EOF small_parse_table_504.c */
