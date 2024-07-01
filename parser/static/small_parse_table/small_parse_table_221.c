/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_221.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1105(t_small_parse_table_array *v)
{
	v->a[22100] = 17;
	v->a[22101] = anon_sym_PIPE;
	v->a[22102] = anon_sym_SEMI_SEMI;
	v->a[22103] = anon_sym_AMP_AMP;
	v->a[22104] = anon_sym_PIPE_PIPE;
	v->a[22105] = anon_sym_LT;
	v->a[22106] = anon_sym_GT;
	v->a[22107] = anon_sym_GT_GT;
	v->a[22108] = anon_sym_LT_AMP;
	v->a[22109] = anon_sym_GT_AMP;
	v->a[22110] = anon_sym_GT_PIPE;
	v->a[22111] = anon_sym_LT_AMP_DASH;
	v->a[22112] = anon_sym_GT_AMP_DASH;
	v->a[22113] = anon_sym_LT_LT;
	v->a[22114] = anon_sym_LT_LT_DASH;
	v->a[22115] = aux_sym_heredoc_redirect_token1;
	v->a[22116] = anon_sym_AMP;
	v->a[22117] = anon_sym_SEMI;
	v->a[22118] = 14;
	v->a[22119] = actions(3);
	small_parse_table_1106(v);
}

void	small_parse_table_1106(t_small_parse_table_array *v)
{
	v->a[22120] = 1;
	v->a[22121] = sym_comment;
	v->a[22122] = actions(459);
	v->a[22123] = 1;
	v->a[22124] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22125] = actions(461);
	v->a[22126] = 1;
	v->a[22127] = anon_sym_DOLLAR;
	v->a[22128] = actions(463);
	v->a[22129] = 1;
	v->a[22130] = anon_sym_DQUOTE;
	v->a[22131] = actions(465);
	v->a[22132] = 1;
	v->a[22133] = anon_sym_DOLLAR_LBRACE;
	v->a[22134] = actions(467);
	v->a[22135] = 1;
	v->a[22136] = anon_sym_DOLLAR_LPAREN;
	v->a[22137] = actions(469);
	v->a[22138] = 1;
	v->a[22139] = anon_sym_BQUOTE;
	small_parse_table_1107(v);
}

void	small_parse_table_1107(t_small_parse_table_array *v)
{
	v->a[22140] = actions(473);
	v->a[22141] = 1;
	v->a[22142] = sym__bare_dollar;
	v->a[22143] = actions(543);
	v->a[22144] = 1;
	v->a[22145] = sym_file_descriptor;
	v->a[22146] = state(211);
	v->a[22147] = 1;
	v->a[22148] = aux_sym_command_repeat2;
	v->a[22149] = state(718);
	v->a[22150] = 1;
	v->a[22151] = sym_concatenation;
	v->a[22152] = actions(455);
	v->a[22153] = 3;
	v->a[22154] = sym_raw_string;
	v->a[22155] = sym_number;
	v->a[22156] = sym_word;
	v->a[22157] = state(448);
	v->a[22158] = 5;
	v->a[22159] = sym_arithmetic_expansion;
	small_parse_table_1108(v);
}

void	small_parse_table_1108(t_small_parse_table_array *v)
{
	v->a[22160] = sym_string;
	v->a[22161] = sym_simple_expansion;
	v->a[22162] = sym_expansion;
	v->a[22163] = sym_command_substitution;
	v->a[22164] = actions(541);
	v->a[22165] = 18;
	v->a[22166] = anon_sym_PIPE;
	v->a[22167] = anon_sym_RPAREN;
	v->a[22168] = anon_sym_SEMI_SEMI;
	v->a[22169] = anon_sym_AMP_AMP;
	v->a[22170] = anon_sym_PIPE_PIPE;
	v->a[22171] = anon_sym_LT;
	v->a[22172] = anon_sym_GT;
	v->a[22173] = anon_sym_GT_GT;
	v->a[22174] = anon_sym_LT_AMP;
	v->a[22175] = anon_sym_GT_AMP;
	v->a[22176] = anon_sym_GT_PIPE;
	v->a[22177] = anon_sym_LT_AMP_DASH;
	v->a[22178] = anon_sym_GT_AMP_DASH;
	v->a[22179] = anon_sym_LT_LT;
	small_parse_table_1109(v);
}

void	small_parse_table_1109(t_small_parse_table_array *v)
{
	v->a[22180] = anon_sym_LT_LT_DASH;
	v->a[22181] = aux_sym_heredoc_redirect_token1;
	v->a[22182] = anon_sym_AMP;
	v->a[22183] = anon_sym_SEMI;
	v->a[22184] = 12;
	v->a[22185] = actions(3);
	v->a[22186] = 1;
	v->a[22187] = sym_comment;
	v->a[22188] = actions(630);
	v->a[22189] = 1;
	v->a[22190] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22191] = actions(633);
	v->a[22192] = 1;
	v->a[22193] = anon_sym_DOLLAR;
	v->a[22194] = actions(636);
	v->a[22195] = 1;
	v->a[22196] = anon_sym_DQUOTE;
	v->a[22197] = actions(639);
	v->a[22198] = 1;
	v->a[22199] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1110(v);
}

/* EOF small_parse_table_221.c */
