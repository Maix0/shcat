/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_814.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4070(t_small_parse_table_array *v)
{
	v->a[81400] = state(1548);
	v->a[81401] = 1;
	v->a[81402] = aux_sym_concatenation_repeat1;
	v->a[81403] = actions(2935);
	v->a[81404] = 2;
	v->a[81405] = sym__concat;
	v->a[81406] = aux_sym_concatenation_token1;
	v->a[81407] = actions(1173);
	v->a[81408] = 7;
	v->a[81409] = anon_sym_PIPE;
	v->a[81410] = anon_sym_LT;
	v->a[81411] = anon_sym_GT;
	v->a[81412] = anon_sym_AMP_GT;
	v->a[81413] = anon_sym_LT_AMP;
	v->a[81414] = anon_sym_GT_AMP;
	v->a[81415] = anon_sym_LT_LT;
	v->a[81416] = actions(1175);
	v->a[81417] = 10;
	v->a[81418] = sym_file_descriptor;
	v->a[81419] = sym_variable_name;
	small_parse_table_4071(v);
}

void	small_parse_table_4071(t_small_parse_table_array *v)
{
	v->a[81420] = anon_sym_AMP_AMP;
	v->a[81421] = anon_sym_PIPE_PIPE;
	v->a[81422] = anon_sym_GT_GT;
	v->a[81423] = anon_sym_AMP_GT_GT;
	v->a[81424] = anon_sym_GT_PIPE;
	v->a[81425] = anon_sym_LT_AMP_DASH;
	v->a[81426] = anon_sym_GT_AMP_DASH;
	v->a[81427] = anon_sym_LT_LT_DASH;
	v->a[81428] = 5;
	v->a[81429] = actions(3);
	v->a[81430] = 1;
	v->a[81431] = sym_comment;
	v->a[81432] = actions(2937);
	v->a[81433] = 1;
	v->a[81434] = sym_variable_name;
	v->a[81435] = actions(2124);
	v->a[81436] = 2;
	v->a[81437] = sym_file_descriptor;
	v->a[81438] = aux_sym_heredoc_redirect_token1;
	v->a[81439] = state(1540);
	small_parse_table_4072(v);
}

void	small_parse_table_4072(t_small_parse_table_array *v)
{
	v->a[81440] = 2;
	v->a[81441] = sym_variable_assignment;
	v->a[81442] = aux_sym__variable_assignments_repeat1;
	v->a[81443] = actions(2122);
	v->a[81444] = 15;
	v->a[81445] = anon_sym_PIPE;
	v->a[81446] = anon_sym_AMP_AMP;
	v->a[81447] = anon_sym_PIPE_PIPE;
	v->a[81448] = anon_sym_LT;
	v->a[81449] = anon_sym_GT;
	v->a[81450] = anon_sym_GT_GT;
	v->a[81451] = anon_sym_AMP_GT;
	v->a[81452] = anon_sym_AMP_GT_GT;
	v->a[81453] = anon_sym_LT_AMP;
	v->a[81454] = anon_sym_GT_AMP;
	v->a[81455] = anon_sym_GT_PIPE;
	v->a[81456] = anon_sym_LT_AMP_DASH;
	v->a[81457] = anon_sym_GT_AMP_DASH;
	v->a[81458] = anon_sym_LT_LT;
	v->a[81459] = anon_sym_LT_LT_DASH;
	small_parse_table_4073(v);
}

void	small_parse_table_4073(t_small_parse_table_array *v)
{
	v->a[81460] = 11;
	v->a[81461] = actions(3);
	v->a[81462] = 1;
	v->a[81463] = sym_comment;
	v->a[81464] = actions(2942);
	v->a[81465] = 1;
	v->a[81466] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[81467] = actions(2945);
	v->a[81468] = 1;
	v->a[81469] = anon_sym_DOLLAR;
	v->a[81470] = actions(2948);
	v->a[81471] = 1;
	v->a[81472] = anon_sym_DQUOTE;
	v->a[81473] = actions(2951);
	v->a[81474] = 1;
	v->a[81475] = anon_sym_DOLLAR_LBRACE;
	v->a[81476] = actions(2954);
	v->a[81477] = 1;
	v->a[81478] = anon_sym_DOLLAR_LPAREN;
	v->a[81479] = actions(2957);
	small_parse_table_4074(v);
}

void	small_parse_table_4074(t_small_parse_table_array *v)
{
	v->a[81480] = 1;
	v->a[81481] = anon_sym_BQUOTE;
	v->a[81482] = state(1545);
	v->a[81483] = 2;
	v->a[81484] = sym_concatenation;
	v->a[81485] = aux_sym_for_statement_repeat1;
	v->a[81486] = actions(2939);
	v->a[81487] = 3;
	v->a[81488] = sym_raw_string;
	v->a[81489] = sym_number;
	v->a[81490] = sym_word;
	v->a[81491] = actions(564);
	v->a[81492] = 4;
	v->a[81493] = anon_sym_SEMI_SEMI;
	v->a[81494] = aux_sym_heredoc_redirect_token1;
	v->a[81495] = anon_sym_AMP;
	v->a[81496] = anon_sym_SEMI;
	v->a[81497] = state(1745);
	v->a[81498] = 5;
	v->a[81499] = sym_arithmetic_expansion;
	small_parse_table_4075(v);
}

/* EOF small_parse_table_814.c */
