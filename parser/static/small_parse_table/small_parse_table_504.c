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
	v->a[50400] = aux_sym_concatenation_token1;
	v->a[50401] = anon_sym_SEMI;
	v->a[50402] = 4;
	v->a[50403] = actions(3);
	v->a[50404] = 1;
	v->a[50405] = sym_comment;
	v->a[50406] = actions(900);
	v->a[50407] = 1;
	v->a[50408] = sym_variable_name;
	v->a[50409] = state(1002);
	v->a[50410] = 2;
	v->a[50411] = sym_variable_assignment;
	v->a[50412] = aux_sym__variable_assignments_repeat1;
	v->a[50413] = actions(742);
	v->a[50414] = 16;
	v->a[50415] = anon_sym_LT;
	v->a[50416] = anon_sym_GT;
	v->a[50417] = anon_sym_GT_GT;
	v->a[50418] = anon_sym_LT_AMP;
	v->a[50419] = anon_sym_GT_AMP;
	small_parse_table_2521(v);
}

void	small_parse_table_2521(t_small_parse_table_array *v)
{
	v->a[50420] = anon_sym_GT_PIPE;
	v->a[50421] = anon_sym_LT_GT;
	v->a[50422] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[50423] = anon_sym_DOLLAR;
	v->a[50424] = anon_sym_DQUOTE;
	v->a[50425] = sym_raw_string;
	v->a[50426] = sym_number;
	v->a[50427] = anon_sym_DOLLAR_LBRACE;
	v->a[50428] = anon_sym_DOLLAR_LPAREN;
	v->a[50429] = anon_sym_BQUOTE;
	v->a[50430] = sym_word;
	v->a[50431] = 3;
	v->a[50432] = actions(3);
	v->a[50433] = 1;
	v->a[50434] = sym_comment;
	v->a[50435] = actions(483);
	v->a[50436] = 3;
	v->a[50437] = sym__concat;
	v->a[50438] = sym_variable_name;
	v->a[50439] = aux_sym_heredoc_redirect_token1;
	small_parse_table_2522(v);
}

void	small_parse_table_2522(t_small_parse_table_array *v)
{
	v->a[50440] = actions(481);
	v->a[50441] = 16;
	v->a[50442] = anon_sym_esac;
	v->a[50443] = anon_sym_PIPE;
	v->a[50444] = anon_sym_SEMI_SEMI;
	v->a[50445] = anon_sym_AMP_AMP;
	v->a[50446] = anon_sym_PIPE_PIPE;
	v->a[50447] = anon_sym_LT;
	v->a[50448] = anon_sym_GT;
	v->a[50449] = anon_sym_GT_GT;
	v->a[50450] = anon_sym_LT_AMP;
	v->a[50451] = anon_sym_GT_AMP;
	v->a[50452] = anon_sym_GT_PIPE;
	v->a[50453] = anon_sym_LT_GT;
	v->a[50454] = anon_sym_LT_LT;
	v->a[50455] = anon_sym_LT_LT_DASH;
	v->a[50456] = aux_sym_concatenation_token1;
	v->a[50457] = anon_sym_SEMI;
	v->a[50458] = 9;
	v->a[50459] = actions(3);
	small_parse_table_2523(v);
}

void	small_parse_table_2523(t_small_parse_table_array *v)
{
	v->a[50460] = 1;
	v->a[50461] = sym_comment;
	v->a[50462] = actions(746);
	v->a[50463] = 1;
	v->a[50464] = anon_sym_PIPE;
	v->a[50465] = actions(1726);
	v->a[50466] = 1;
	v->a[50467] = aux_sym_heredoc_redirect_token1;
	v->a[50468] = state(385);
	v->a[50469] = 1;
	v->a[50470] = sym_terminator;
	v->a[50471] = actions(850);
	v->a[50472] = 2;
	v->a[50473] = anon_sym_LT_LT;
	v->a[50474] = anon_sym_LT_LT_DASH;
	v->a[50475] = actions(898);
	v->a[50476] = 2;
	v->a[50477] = anon_sym_AMP_AMP;
	v->a[50478] = anon_sym_PIPE_PIPE;
	v->a[50479] = actions(946);
	small_parse_table_2524(v);
}

void	small_parse_table_2524(t_small_parse_table_array *v)
{
	v->a[50480] = 2;
	v->a[50481] = anon_sym_SEMI_SEMI;
	v->a[50482] = anon_sym_SEMI;
	v->a[50483] = state(984);
	v->a[50484] = 3;
	v->a[50485] = sym_file_redirect;
	v->a[50486] = sym_heredoc_redirect;
	v->a[50487] = aux_sym_redirected_statement_repeat1;
	v->a[50488] = actions(1676);
	v->a[50489] = 7;
	v->a[50490] = anon_sym_LT;
	v->a[50491] = anon_sym_GT;
	v->a[50492] = anon_sym_GT_GT;
	v->a[50493] = anon_sym_LT_AMP;
	v->a[50494] = anon_sym_GT_AMP;
	v->a[50495] = anon_sym_GT_PIPE;
	v->a[50496] = anon_sym_LT_GT;
	v->a[50497] = 3;
	v->a[50498] = actions(3);
	v->a[50499] = 1;
	small_parse_table_2525(v);
}

/* EOF small_parse_table_504.c */
