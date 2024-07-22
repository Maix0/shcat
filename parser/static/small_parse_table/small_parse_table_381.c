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
	v->a[38100] = actions(537);
	v->a[38101] = 25;
	v->a[38102] = anon_sym_PIPE;
	v->a[38103] = anon_sym_SEMI_SEMI;
	v->a[38104] = anon_sym_AMP_AMP;
	v->a[38105] = anon_sym_PIPE_PIPE;
	v->a[38106] = anon_sym_LT;
	v->a[38107] = anon_sym_GT;
	v->a[38108] = anon_sym_GT_GT;
	v->a[38109] = anon_sym_LT_AMP;
	v->a[38110] = anon_sym_GT_AMP;
	v->a[38111] = anon_sym_GT_PIPE;
	v->a[38112] = anon_sym_LT_GT;
	v->a[38113] = anon_sym_LT_LT;
	v->a[38114] = anon_sym_LT_LT_DASH;
	v->a[38115] = aux_sym_heredoc_redirect_token1;
	v->a[38116] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38117] = aux_sym_concatenation_token1;
	v->a[38118] = anon_sym_DOLLAR;
	v->a[38119] = anon_sym_DQUOTE;
	small_parse_table_1906(v);
}

void	small_parse_table_1906(t_small_parse_table_array *v)
{
	v->a[38120] = sym_raw_string;
	v->a[38121] = sym_number;
	v->a[38122] = anon_sym_DOLLAR_LBRACE;
	v->a[38123] = anon_sym_DOLLAR_LPAREN;
	v->a[38124] = anon_sym_BQUOTE;
	v->a[38125] = sym_word;
	v->a[38126] = anon_sym_SEMI;
	v->a[38127] = 3;
	v->a[38128] = actions(3);
	v->a[38129] = 1;
	v->a[38130] = sym_comment;
	v->a[38131] = actions(1110);
	v->a[38132] = 3;
	v->a[38133] = sym_file_descriptor;
	v->a[38134] = sym__concat;
	v->a[38135] = sym__bare_dollar;
	v->a[38136] = actions(1105);
	v->a[38137] = 26;
	v->a[38138] = anon_sym_PIPE;
	v->a[38139] = anon_sym_RPAREN;
	small_parse_table_1907(v);
}

void	small_parse_table_1907(t_small_parse_table_array *v)
{
	v->a[38140] = anon_sym_SEMI_SEMI;
	v->a[38141] = anon_sym_AMP_AMP;
	v->a[38142] = anon_sym_PIPE_PIPE;
	v->a[38143] = anon_sym_LT;
	v->a[38144] = anon_sym_GT;
	v->a[38145] = anon_sym_GT_GT;
	v->a[38146] = anon_sym_LT_AMP;
	v->a[38147] = anon_sym_GT_AMP;
	v->a[38148] = anon_sym_GT_PIPE;
	v->a[38149] = anon_sym_LT_GT;
	v->a[38150] = anon_sym_LT_LT;
	v->a[38151] = anon_sym_LT_LT_DASH;
	v->a[38152] = aux_sym_heredoc_redirect_token1;
	v->a[38153] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38154] = aux_sym_concatenation_token1;
	v->a[38155] = anon_sym_DOLLAR;
	v->a[38156] = anon_sym_DQUOTE;
	v->a[38157] = sym_raw_string;
	v->a[38158] = sym_number;
	v->a[38159] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1908(v);
}

void	small_parse_table_1908(t_small_parse_table_array *v)
{
	v->a[38160] = anon_sym_DOLLAR_LPAREN;
	v->a[38161] = anon_sym_BQUOTE;
	v->a[38162] = sym_word;
	v->a[38163] = anon_sym_SEMI;
	v->a[38164] = 4;
	v->a[38165] = actions(3);
	v->a[38166] = 1;
	v->a[38167] = sym_comment;
	v->a[38168] = actions(1410);
	v->a[38169] = 2;
	v->a[38170] = anon_sym_RPAREN;
	v->a[38171] = anon_sym_SEMI_SEMI;
	v->a[38172] = actions(1412);
	v->a[38173] = 2;
	v->a[38174] = sym_file_descriptor;
	v->a[38175] = sym_variable_name;
	v->a[38176] = actions(1408);
	v->a[38177] = 24;
	v->a[38178] = anon_sym_for;
	v->a[38179] = anon_sym_while;
	small_parse_table_1909(v);
}

void	small_parse_table_1909(t_small_parse_table_array *v)
{
	v->a[38180] = anon_sym_until;
	v->a[38181] = anon_sym_if;
	v->a[38182] = anon_sym_case;
	v->a[38183] = anon_sym_LPAREN;
	v->a[38184] = anon_sym_LBRACE;
	v->a[38185] = anon_sym_BANG;
	v->a[38186] = anon_sym_LT;
	v->a[38187] = anon_sym_GT;
	v->a[38188] = anon_sym_GT_GT;
	v->a[38189] = anon_sym_LT_AMP;
	v->a[38190] = anon_sym_GT_AMP;
	v->a[38191] = anon_sym_GT_PIPE;
	v->a[38192] = anon_sym_LT_GT;
	v->a[38193] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38194] = anon_sym_DOLLAR;
	v->a[38195] = anon_sym_DQUOTE;
	v->a[38196] = sym_raw_string;
	v->a[38197] = sym_number;
	v->a[38198] = anon_sym_DOLLAR_LBRACE;
	v->a[38199] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1910(v);
}

/* EOF small_parse_table_381.c */
