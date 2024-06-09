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
	v->a[22100] = anon_sym_PIPE;
	v->a[22101] = anon_sym_SEMI_SEMI;
	v->a[22102] = anon_sym_AMP_AMP;
	v->a[22103] = anon_sym_PIPE_PIPE;
	v->a[22104] = anon_sym_LT;
	v->a[22105] = anon_sym_GT;
	v->a[22106] = anon_sym_GT_GT;
	v->a[22107] = anon_sym_AMP_GT;
	v->a[22108] = anon_sym_AMP_GT_GT;
	v->a[22109] = anon_sym_LT_AMP;
	v->a[22110] = anon_sym_GT_AMP;
	v->a[22111] = anon_sym_GT_PIPE;
	v->a[22112] = anon_sym_LT_AMP_DASH;
	v->a[22113] = anon_sym_GT_AMP_DASH;
	v->a[22114] = anon_sym_LT_LT;
	v->a[22115] = anon_sym_LT_LT_DASH;
	v->a[22116] = aux_sym_heredoc_redirect_token1;
	v->a[22117] = anon_sym_AMP;
	v->a[22118] = anon_sym_BQUOTE;
	v->a[22119] = anon_sym_SEMI;
	small_parse_table_1106(v);
}

void	small_parse_table_1106(t_small_parse_table_array *v)
{
	v->a[22120] = 18;
	v->a[22121] = actions(3);
	v->a[22122] = 1;
	v->a[22123] = sym_comment;
	v->a[22124] = actions(17);
	v->a[22125] = 1;
	v->a[22126] = anon_sym_LPAREN;
	v->a[22127] = actions(485);
	v->a[22128] = 1;
	v->a[22129] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22130] = actions(487);
	v->a[22131] = 1;
	v->a[22132] = anon_sym_DOLLAR;
	v->a[22133] = actions(489);
	v->a[22134] = 1;
	v->a[22135] = anon_sym_DQUOTE;
	v->a[22136] = actions(491);
	v->a[22137] = 1;
	v->a[22138] = aux_sym_number_token1;
	v->a[22139] = actions(493);
	small_parse_table_1107(v);
}

void	small_parse_table_1107(t_small_parse_table_array *v)
{
	v->a[22140] = 1;
	v->a[22141] = aux_sym_number_token2;
	v->a[22142] = actions(495);
	v->a[22143] = 1;
	v->a[22144] = anon_sym_DOLLAR_LBRACE;
	v->a[22145] = actions(497);
	v->a[22146] = 1;
	v->a[22147] = anon_sym_DOLLAR_LPAREN;
	v->a[22148] = actions(499);
	v->a[22149] = 1;
	v->a[22150] = anon_sym_BQUOTE;
	v->a[22151] = actions(501);
	v->a[22152] = 1;
	v->a[22153] = sym__bare_dollar;
	v->a[22154] = actions(517);
	v->a[22155] = 1;
	v->a[22156] = sym_file_descriptor;
	v->a[22157] = state(225);
	v->a[22158] = 1;
	v->a[22159] = aux_sym_command_repeat2;
	small_parse_table_1108(v);
}

void	small_parse_table_1108(t_small_parse_table_array *v)
{
	v->a[22160] = state(753);
	v->a[22161] = 1;
	v->a[22162] = sym_concatenation;
	v->a[22163] = state(1188);
	v->a[22164] = 1;
	v->a[22165] = sym_subshell;
	v->a[22166] = actions(551);
	v->a[22167] = 2;
	v->a[22168] = sym_raw_string;
	v->a[22169] = sym_word;
	v->a[22170] = state(452);
	v->a[22171] = 6;
	v->a[22172] = sym_arithmetic_expansion;
	v->a[22173] = sym_string;
	v->a[22174] = sym_number;
	v->a[22175] = sym_simple_expansion;
	v->a[22176] = sym_expansion;
	v->a[22177] = sym_command_substitution;
	v->a[22178] = actions(515);
	v->a[22179] = 19;
	small_parse_table_1109(v);
}

void	small_parse_table_1109(t_small_parse_table_array *v)
{
	v->a[22180] = anon_sym_PIPE;
	v->a[22181] = anon_sym_SEMI_SEMI;
	v->a[22182] = anon_sym_AMP_AMP;
	v->a[22183] = anon_sym_PIPE_PIPE;
	v->a[22184] = anon_sym_LT;
	v->a[22185] = anon_sym_GT;
	v->a[22186] = anon_sym_GT_GT;
	v->a[22187] = anon_sym_AMP_GT;
	v->a[22188] = anon_sym_AMP_GT_GT;
	v->a[22189] = anon_sym_LT_AMP;
	v->a[22190] = anon_sym_GT_AMP;
	v->a[22191] = anon_sym_GT_PIPE;
	v->a[22192] = anon_sym_LT_AMP_DASH;
	v->a[22193] = anon_sym_GT_AMP_DASH;
	v->a[22194] = anon_sym_LT_LT;
	v->a[22195] = anon_sym_LT_LT_DASH;
	v->a[22196] = aux_sym_heredoc_redirect_token1;
	v->a[22197] = anon_sym_AMP;
	v->a[22198] = anon_sym_SEMI;
	v->a[22199] = 17;
	small_parse_table_1110(v);
}

/* EOF small_parse_table_221.c */
