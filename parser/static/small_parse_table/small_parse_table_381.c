/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_381.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1905(t_small_parse_table_array *v)
{
	v->a[38100] = 6;
	v->a[38101] = actions(3);
	v->a[38102] = 1;
	v->a[38103] = sym_comment;
	v->a[38104] = actions(1004);
	v->a[38105] = 1;
	v->a[38106] = sym_file_descriptor;
	v->a[38107] = actions(1435);
	v->a[38108] = 1;
	v->a[38109] = aux_sym_concatenation_token1;
	v->a[38110] = actions(1438);
	v->a[38111] = 1;
	v->a[38112] = sym__concat;
	v->a[38113] = state(508);
	v->a[38114] = 1;
	v->a[38115] = aux_sym_concatenation_repeat1;
	v->a[38116] = actions(999);
	v->a[38117] = 29;
	v->a[38118] = anon_sym_PIPE;
	v->a[38119] = anon_sym_RPAREN;
	small_parse_table_1906(v);
}

void	small_parse_table_1906(t_small_parse_table_array *v)
{
	v->a[38120] = anon_sym_SEMI_SEMI;
	v->a[38121] = anon_sym_AMP_AMP;
	v->a[38122] = anon_sym_PIPE_PIPE;
	v->a[38123] = anon_sym_LT;
	v->a[38124] = anon_sym_GT;
	v->a[38125] = anon_sym_GT_GT;
	v->a[38126] = anon_sym_AMP_GT;
	v->a[38127] = anon_sym_AMP_GT_GT;
	v->a[38128] = anon_sym_LT_AMP;
	v->a[38129] = anon_sym_GT_AMP;
	v->a[38130] = anon_sym_GT_PIPE;
	v->a[38131] = anon_sym_LT_AMP_DASH;
	v->a[38132] = anon_sym_GT_AMP_DASH;
	v->a[38133] = anon_sym_LT_LT;
	v->a[38134] = anon_sym_LT_LT_DASH;
	v->a[38135] = aux_sym_heredoc_redirect_token1;
	v->a[38136] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38137] = anon_sym_AMP;
	v->a[38138] = anon_sym_DOLLAR;
	v->a[38139] = anon_sym_DQUOTE;
	small_parse_table_1907(v);
}

void	small_parse_table_1907(t_small_parse_table_array *v)
{
	v->a[38140] = sym_raw_string;
	v->a[38141] = sym_number;
	v->a[38142] = anon_sym_DOLLAR_LBRACE;
	v->a[38143] = anon_sym_DOLLAR_LPAREN;
	v->a[38144] = anon_sym_BQUOTE;
	v->a[38145] = sym_word;
	v->a[38146] = anon_sym_SEMI;
	v->a[38147] = 3;
	v->a[38148] = actions(3);
	v->a[38149] = 1;
	v->a[38150] = sym_comment;
	v->a[38151] = actions(1124);
	v->a[38152] = 3;
	v->a[38153] = sym_file_descriptor;
	v->a[38154] = sym__concat;
	v->a[38155] = sym__bare_dollar;
	v->a[38156] = actions(1122);
	v->a[38157] = 30;
	v->a[38158] = anon_sym_PIPE;
	v->a[38159] = anon_sym_RPAREN;
	small_parse_table_1908(v);
}

void	small_parse_table_1908(t_small_parse_table_array *v)
{
	v->a[38160] = anon_sym_SEMI_SEMI;
	v->a[38161] = anon_sym_AMP_AMP;
	v->a[38162] = anon_sym_PIPE_PIPE;
	v->a[38163] = anon_sym_LT;
	v->a[38164] = anon_sym_GT;
	v->a[38165] = anon_sym_GT_GT;
	v->a[38166] = anon_sym_AMP_GT;
	v->a[38167] = anon_sym_AMP_GT_GT;
	v->a[38168] = anon_sym_LT_AMP;
	v->a[38169] = anon_sym_GT_AMP;
	v->a[38170] = anon_sym_GT_PIPE;
	v->a[38171] = anon_sym_LT_AMP_DASH;
	v->a[38172] = anon_sym_GT_AMP_DASH;
	v->a[38173] = anon_sym_LT_LT;
	v->a[38174] = anon_sym_LT_LT_DASH;
	v->a[38175] = aux_sym_heredoc_redirect_token1;
	v->a[38176] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38177] = anon_sym_AMP;
	v->a[38178] = aux_sym_concatenation_token1;
	v->a[38179] = anon_sym_DOLLAR;
	small_parse_table_1909(v);
}

void	small_parse_table_1909(t_small_parse_table_array *v)
{
	v->a[38180] = anon_sym_DQUOTE;
	v->a[38181] = sym_raw_string;
	v->a[38182] = sym_number;
	v->a[38183] = anon_sym_DOLLAR_LBRACE;
	v->a[38184] = anon_sym_DOLLAR_LPAREN;
	v->a[38185] = anon_sym_BQUOTE;
	v->a[38186] = sym_word;
	v->a[38187] = anon_sym_SEMI;
	v->a[38188] = 17;
	v->a[38189] = actions(1094);
	v->a[38190] = 1;
	v->a[38191] = sym_comment;
	v->a[38192] = actions(1108);
	v->a[38193] = 1;
	v->a[38194] = anon_sym_PIPE;
	v->a[38195] = actions(1110);
	v->a[38196] = 1;
	v->a[38197] = anon_sym_AMP_AMP;
	v->a[38198] = actions(1112);
	v->a[38199] = 1;
	small_parse_table_1910(v);
}

/* EOF small_parse_table_381.c */
