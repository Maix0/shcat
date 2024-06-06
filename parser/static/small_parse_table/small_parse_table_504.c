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
	v->a[50400] = anon_sym_DOLLAR_LBRACE;
	v->a[50401] = anon_sym_DOLLAR_LPAREN;
	v->a[50402] = anon_sym_BQUOTE;
	v->a[50403] = anon_sym_DOLLAR_BQUOTE;
	v->a[50404] = aux_sym__simple_variable_name_token1;
	v->a[50405] = sym_word;
	v->a[50406] = anon_sym_SEMI;
	v->a[50407] = 6;
	v->a[50408] = actions(3);
	v->a[50409] = 1;
	v->a[50410] = sym_comment;
	v->a[50411] = actions(3423);
	v->a[50412] = 1;
	v->a[50413] = aux_sym_concatenation_token1;
	v->a[50414] = actions(3425);
	v->a[50415] = 1;
	v->a[50416] = sym__concat;
	v->a[50417] = state(1093);
	v->a[50418] = 1;
	v->a[50419] = aux_sym_concatenation_repeat1;
	small_parse_table_2521(v);
}

void	small_parse_table_2521(t_small_parse_table_array *v)
{
	v->a[50420] = actions(3121);
	v->a[50421] = 5;
	v->a[50422] = sym_file_descriptor;
	v->a[50423] = sym_variable_name;
	v->a[50424] = sym_test_operator;
	v->a[50425] = sym__brace_start;
	v->a[50426] = aux_sym_heredoc_redirect_token1;
	v->a[50427] = actions(3119);
	v->a[50428] = 31;
	v->a[50429] = anon_sym_PIPE;
	v->a[50430] = anon_sym_SEMI_SEMI;
	v->a[50431] = anon_sym_PIPE_AMP;
	v->a[50432] = anon_sym_AMP_AMP;
	v->a[50433] = anon_sym_PIPE_PIPE;
	v->a[50434] = anon_sym_LT;
	v->a[50435] = anon_sym_GT;
	v->a[50436] = anon_sym_GT_GT;
	v->a[50437] = anon_sym_AMP_GT;
	v->a[50438] = anon_sym_AMP_GT_GT;
	v->a[50439] = anon_sym_LT_AMP;
	small_parse_table_2522(v);
}

void	small_parse_table_2522(t_small_parse_table_array *v)
{
	v->a[50440] = anon_sym_GT_AMP;
	v->a[50441] = anon_sym_GT_PIPE;
	v->a[50442] = anon_sym_LT_AMP_DASH;
	v->a[50443] = anon_sym_GT_AMP_DASH;
	v->a[50444] = anon_sym_LT_LT;
	v->a[50445] = anon_sym_LT_LT_DASH;
	v->a[50446] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[50447] = anon_sym_AMP;
	v->a[50448] = anon_sym_DOLLAR;
	v->a[50449] = sym__special_character;
	v->a[50450] = anon_sym_DQUOTE;
	v->a[50451] = sym_raw_string;
	v->a[50452] = aux_sym_number_token1;
	v->a[50453] = aux_sym_number_token2;
	v->a[50454] = anon_sym_DOLLAR_LBRACE;
	v->a[50455] = anon_sym_DOLLAR_LPAREN;
	v->a[50456] = anon_sym_BQUOTE;
	v->a[50457] = anon_sym_DOLLAR_BQUOTE;
	v->a[50458] = sym_word;
	v->a[50459] = anon_sym_SEMI;
	small_parse_table_2523(v);
}

void	small_parse_table_2523(t_small_parse_table_array *v)
{
	v->a[50460] = 3;
	v->a[50461] = actions(3);
	v->a[50462] = 1;
	v->a[50463] = sym_comment;
	v->a[50464] = actions(2654);
	v->a[50465] = 5;
	v->a[50466] = sym_file_descriptor;
	v->a[50467] = sym__concat;
	v->a[50468] = sym_test_operator;
	v->a[50469] = sym__brace_start;
	v->a[50470] = aux_sym_heredoc_redirect_token1;
	v->a[50471] = actions(2652);
	v->a[50472] = 34;
	v->a[50473] = anon_sym_PIPE;
	v->a[50474] = anon_sym_RPAREN;
	v->a[50475] = anon_sym_SEMI_SEMI;
	v->a[50476] = anon_sym_PIPE_AMP;
	v->a[50477] = anon_sym_AMP_AMP;
	v->a[50478] = anon_sym_PIPE_PIPE;
	v->a[50479] = anon_sym_LT;
	small_parse_table_2524(v);
}

void	small_parse_table_2524(t_small_parse_table_array *v)
{
	v->a[50480] = anon_sym_GT;
	v->a[50481] = anon_sym_GT_GT;
	v->a[50482] = anon_sym_AMP_GT;
	v->a[50483] = anon_sym_AMP_GT_GT;
	v->a[50484] = anon_sym_LT_AMP;
	v->a[50485] = anon_sym_GT_AMP;
	v->a[50486] = anon_sym_GT_PIPE;
	v->a[50487] = anon_sym_LT_AMP_DASH;
	v->a[50488] = anon_sym_GT_AMP_DASH;
	v->a[50489] = anon_sym_LT_LT;
	v->a[50490] = anon_sym_LT_LT_DASH;
	v->a[50491] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[50492] = anon_sym_AMP;
	v->a[50493] = aux_sym_concatenation_token1;
	v->a[50494] = anon_sym_DOLLAR;
	v->a[50495] = sym__special_character;
	v->a[50496] = anon_sym_DQUOTE;
	v->a[50497] = sym_raw_string;
	v->a[50498] = aux_sym_number_token1;
	v->a[50499] = aux_sym_number_token2;
	small_parse_table_2525(v);
}

/* EOF small_parse_table_504.c */
