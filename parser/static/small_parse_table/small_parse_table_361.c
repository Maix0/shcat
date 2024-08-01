/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_361.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1805(t_small_parse_table_array *v)
{
	v->a[36100] = sym_comment;
	v->a[36101] = actions(1083);
	v->a[36102] = 1;
	v->a[36103] = sym__concat;
	v->a[36104] = actions(1085);
	v->a[36105] = 17;
	v->a[36106] = anon_sym_PIPE;
	v->a[36107] = anon_sym_AMP_AMP;
	v->a[36108] = anon_sym_PIPE_PIPE;
	v->a[36109] = anon_sym_LT;
	v->a[36110] = anon_sym_GT;
	v->a[36111] = anon_sym_GT_GT;
	v->a[36112] = anon_sym_LT_LT;
	v->a[36113] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[36114] = aux_sym_concatenation_token1;
	v->a[36115] = anon_sym_DOLLAR;
	v->a[36116] = anon_sym_DQUOTE;
	v->a[36117] = sym_raw_string;
	v->a[36118] = sym_number;
	v->a[36119] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1806(v);
}

void	small_parse_table_1806(t_small_parse_table_array *v)
{
	v->a[36120] = anon_sym_DOLLAR_LPAREN;
	v->a[36121] = anon_sym_BQUOTE;
	v->a[36122] = sym_word;
	v->a[36123] = 5;
	v->a[36124] = actions(3);
	v->a[36125] = 1;
	v->a[36126] = sym_comment;
	v->a[36127] = actions(1465);
	v->a[36128] = 1;
	v->a[36129] = aux_sym_concatenation_token1;
	v->a[36130] = actions(1467);
	v->a[36131] = 1;
	v->a[36132] = sym__concat;
	v->a[36133] = state(690);
	v->a[36134] = 1;
	v->a[36135] = aux_sym_concatenation_repeat1;
	v->a[36136] = actions(880);
	v->a[36137] = 15;
	v->a[36138] = anon_sym_AMP_AMP;
	v->a[36139] = anon_sym_PIPE_PIPE;
	small_parse_table_1807(v);
}

void	small_parse_table_1807(t_small_parse_table_array *v)
{
	v->a[36140] = anon_sym_LT;
	v->a[36141] = anon_sym_GT;
	v->a[36142] = anon_sym_GT_GT;
	v->a[36143] = aux_sym_heredoc_redirect_token1;
	v->a[36144] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[36145] = anon_sym_DOLLAR;
	v->a[36146] = anon_sym_DQUOTE;
	v->a[36147] = sym_raw_string;
	v->a[36148] = sym_number;
	v->a[36149] = anon_sym_DOLLAR_LBRACE;
	v->a[36150] = anon_sym_DOLLAR_LPAREN;
	v->a[36151] = anon_sym_BQUOTE;
	v->a[36152] = sym_word;
	v->a[36153] = 5;
	v->a[36154] = actions(3);
	v->a[36155] = 1;
	v->a[36156] = sym_comment;
	v->a[36157] = actions(1473);
	v->a[36158] = 1;
	v->a[36159] = sym_variable_name;
	small_parse_table_1808(v);
}

void	small_parse_table_1808(t_small_parse_table_array *v)
{
	v->a[36160] = actions(1471);
	v->a[36161] = 2;
	v->a[36162] = aux_sym__simple_variable_name_token1;
	v->a[36163] = aux_sym__multiline_variable_name_token1;
	v->a[36164] = actions(343);
	v->a[36165] = 7;
	v->a[36166] = anon_sym_PIPE;
	v->a[36167] = anon_sym_AMP_AMP;
	v->a[36168] = anon_sym_PIPE_PIPE;
	v->a[36169] = anon_sym_LT;
	v->a[36170] = anon_sym_GT;
	v->a[36171] = anon_sym_GT_GT;
	v->a[36172] = anon_sym_LT_LT;
	v->a[36173] = actions(1469);
	v->a[36174] = 8;
	v->a[36175] = anon_sym_BANG;
	v->a[36176] = anon_sym_DASH;
	v->a[36177] = anon_sym_STAR;
	v->a[36178] = anon_sym_QMARK;
	v->a[36179] = anon_sym_DOLLAR;
	small_parse_table_1809(v);
}

void	small_parse_table_1809(t_small_parse_table_array *v)
{
	v->a[36180] = anon_sym_POUND;
	v->a[36181] = anon_sym_AT;
	v->a[36182] = anon_sym_0;
	v->a[36183] = 3;
	v->a[36184] = actions(3);
	v->a[36185] = 1;
	v->a[36186] = sym_comment;
	v->a[36187] = actions(981);
	v->a[36188] = 1;
	v->a[36189] = sym__concat;
	v->a[36190] = actions(973);
	v->a[36191] = 17;
	v->a[36192] = anon_sym_PIPE;
	v->a[36193] = anon_sym_AMP_AMP;
	v->a[36194] = anon_sym_PIPE_PIPE;
	v->a[36195] = anon_sym_LT;
	v->a[36196] = anon_sym_GT;
	v->a[36197] = anon_sym_GT_GT;
	v->a[36198] = anon_sym_LT_LT;
	v->a[36199] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1810(v);
}

/* EOF small_parse_table_361.c */
