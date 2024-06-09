/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_494.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2470(t_small_parse_table_array *v)
{
	v->a[49400] = sym_word;
	v->a[49401] = state(710);
	v->a[49402] = 2;
	v->a[49403] = sym_concatenation;
	v->a[49404] = aux_sym_for_statement_repeat1;
	v->a[49405] = state(936);
	v->a[49406] = 6;
	v->a[49407] = sym_arithmetic_expansion;
	v->a[49408] = sym_string;
	v->a[49409] = sym_number;
	v->a[49410] = sym_simple_expansion;
	v->a[49411] = sym_expansion;
	v->a[49412] = sym_command_substitution;
	v->a[49413] = actions(636);
	v->a[49414] = 13;
	v->a[49415] = anon_sym_AMP_AMP;
	v->a[49416] = anon_sym_PIPE_PIPE;
	v->a[49417] = anon_sym_LT;
	v->a[49418] = anon_sym_GT;
	v->a[49419] = anon_sym_GT_GT;
	small_parse_table_2471(v);
}

void	small_parse_table_2471(t_small_parse_table_array *v)
{
	v->a[49420] = anon_sym_AMP_GT;
	v->a[49421] = anon_sym_AMP_GT_GT;
	v->a[49422] = anon_sym_LT_AMP;
	v->a[49423] = anon_sym_GT_AMP;
	v->a[49424] = anon_sym_GT_PIPE;
	v->a[49425] = anon_sym_LT_AMP_DASH;
	v->a[49426] = anon_sym_GT_AMP_DASH;
	v->a[49427] = aux_sym_heredoc_redirect_token1;
	v->a[49428] = 6;
	v->a[49429] = actions(3);
	v->a[49430] = 1;
	v->a[49431] = sym_comment;
	v->a[49432] = actions(413);
	v->a[49433] = 1;
	v->a[49434] = sym_file_descriptor;
	v->a[49435] = actions(1811);
	v->a[49436] = 1;
	v->a[49437] = sym_variable_name;
	v->a[49438] = actions(1809);
	v->a[49439] = 2;
	small_parse_table_2472(v);
}

void	small_parse_table_2472(t_small_parse_table_array *v)
{
	v->a[49440] = aux_sym__simple_variable_name_token1;
	v->a[49441] = aux_sym__multiline_variable_name_token1;
	v->a[49442] = actions(1807);
	v->a[49443] = 9;
	v->a[49444] = anon_sym_BANG;
	v->a[49445] = anon_sym_DASH;
	v->a[49446] = anon_sym_STAR;
	v->a[49447] = anon_sym_QMARK;
	v->a[49448] = anon_sym_DOLLAR;
	v->a[49449] = anon_sym_POUND;
	v->a[49450] = anon_sym_AT;
	v->a[49451] = anon_sym_0;
	v->a[49452] = anon_sym__;
	v->a[49453] = actions(407);
	v->a[49454] = 19;
	v->a[49455] = anon_sym_LT;
	v->a[49456] = anon_sym_GT;
	v->a[49457] = anon_sym_GT_GT;
	v->a[49458] = anon_sym_AMP_GT;
	v->a[49459] = anon_sym_AMP_GT_GT;
	small_parse_table_2473(v);
}

void	small_parse_table_2473(t_small_parse_table_array *v)
{
	v->a[49460] = anon_sym_LT_AMP;
	v->a[49461] = anon_sym_GT_AMP;
	v->a[49462] = anon_sym_GT_PIPE;
	v->a[49463] = anon_sym_LT_AMP_DASH;
	v->a[49464] = anon_sym_GT_AMP_DASH;
	v->a[49465] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[49466] = anon_sym_DQUOTE;
	v->a[49467] = sym_raw_string;
	v->a[49468] = aux_sym_number_token1;
	v->a[49469] = aux_sym_number_token2;
	v->a[49470] = anon_sym_DOLLAR_LBRACE;
	v->a[49471] = anon_sym_DOLLAR_LPAREN;
	v->a[49472] = anon_sym_BQUOTE;
	v->a[49473] = sym_word;
	v->a[49474] = 7;
	v->a[49475] = actions(3);
	v->a[49476] = 1;
	v->a[49477] = sym_comment;
	v->a[49478] = actions(1706);
	v->a[49479] = 1;
	small_parse_table_2474(v);
}

void	small_parse_table_2474(t_small_parse_table_array *v)
{
	v->a[49480] = sym_file_descriptor;
	v->a[49481] = actions(1709);
	v->a[49482] = 1;
	v->a[49483] = sym_variable_name;
	v->a[49484] = actions(1813);
	v->a[49485] = 1;
	v->a[49486] = anon_sym_RPAREN;
	v->a[49487] = actions(1698);
	v->a[49488] = 9;
	v->a[49489] = anon_sym_PIPE;
	v->a[49490] = anon_sym_SEMI_SEMI;
	v->a[49491] = anon_sym_AMP_AMP;
	v->a[49492] = anon_sym_PIPE_PIPE;
	v->a[49493] = anon_sym_LT_LT;
	v->a[49494] = anon_sym_LT_LT_DASH;
	v->a[49495] = aux_sym_heredoc_redirect_token1;
	v->a[49496] = anon_sym_AMP;
	v->a[49497] = anon_sym_SEMI;
	v->a[49498] = actions(1696);
	v->a[49499] = 10;
	small_parse_table_2475(v);
}

/* EOF small_parse_table_494.c */
