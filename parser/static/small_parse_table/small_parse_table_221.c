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
	v->a[22100] = sym_word;
	v->a[22101] = state(334);
	v->a[22102] = 5;
	v->a[22103] = sym_arithmetic_expansion;
	v->a[22104] = sym_string;
	v->a[22105] = sym_simple_expansion;
	v->a[22106] = sym_expansion;
	v->a[22107] = sym_command_substitution;
	v->a[22108] = actions(557);
	v->a[22109] = 20;
	v->a[22110] = anon_sym_PIPE;
	v->a[22111] = anon_sym_RPAREN;
	v->a[22112] = anon_sym_SEMI_SEMI;
	v->a[22113] = anon_sym_AMP_AMP;
	v->a[22114] = anon_sym_PIPE_PIPE;
	v->a[22115] = anon_sym_LT;
	v->a[22116] = anon_sym_GT;
	v->a[22117] = anon_sym_GT_GT;
	v->a[22118] = anon_sym_AMP_GT;
	v->a[22119] = anon_sym_AMP_GT_GT;
	small_parse_table_1106(v);
}

void	small_parse_table_1106(t_small_parse_table_array *v)
{
	v->a[22120] = anon_sym_LT_AMP;
	v->a[22121] = anon_sym_GT_AMP;
	v->a[22122] = anon_sym_GT_PIPE;
	v->a[22123] = anon_sym_LT_AMP_DASH;
	v->a[22124] = anon_sym_GT_AMP_DASH;
	v->a[22125] = anon_sym_LT_LT;
	v->a[22126] = anon_sym_LT_LT_DASH;
	v->a[22127] = aux_sym_heredoc_redirect_token1;
	v->a[22128] = anon_sym_AMP;
	v->a[22129] = anon_sym_SEMI;
	v->a[22130] = 14;
	v->a[22131] = actions(3);
	v->a[22132] = 1;
	v->a[22133] = sym_comment;
	v->a[22134] = actions(477);
	v->a[22135] = 1;
	v->a[22136] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22137] = actions(479);
	v->a[22138] = 1;
	v->a[22139] = anon_sym_DOLLAR;
	small_parse_table_1107(v);
}

void	small_parse_table_1107(t_small_parse_table_array *v)
{
	v->a[22140] = actions(481);
	v->a[22141] = 1;
	v->a[22142] = anon_sym_DQUOTE;
	v->a[22143] = actions(483);
	v->a[22144] = 1;
	v->a[22145] = anon_sym_DOLLAR_LBRACE;
	v->a[22146] = actions(485);
	v->a[22147] = 1;
	v->a[22148] = anon_sym_DOLLAR_LPAREN;
	v->a[22149] = actions(487);
	v->a[22150] = 1;
	v->a[22151] = anon_sym_BQUOTE;
	v->a[22152] = actions(489);
	v->a[22153] = 1;
	v->a[22154] = sym__bare_dollar;
	v->a[22155] = state(209);
	v->a[22156] = 1;
	v->a[22157] = aux_sym_command_repeat2;
	v->a[22158] = state(809);
	v->a[22159] = 1;
	small_parse_table_1108(v);
}

void	small_parse_table_1108(t_small_parse_table_array *v)
{
	v->a[22160] = sym_concatenation;
	v->a[22161] = actions(547);
	v->a[22162] = 2;
	v->a[22163] = sym_file_descriptor;
	v->a[22164] = ts_builtin_sym_end;
	v->a[22165] = actions(475);
	v->a[22166] = 3;
	v->a[22167] = sym_raw_string;
	v->a[22168] = sym_number;
	v->a[22169] = sym_word;
	v->a[22170] = state(339);
	v->a[22171] = 5;
	v->a[22172] = sym_arithmetic_expansion;
	v->a[22173] = sym_string;
	v->a[22174] = sym_simple_expansion;
	v->a[22175] = sym_expansion;
	v->a[22176] = sym_command_substitution;
	v->a[22177] = actions(545);
	v->a[22178] = 19;
	v->a[22179] = anon_sym_PIPE;
	small_parse_table_1109(v);
}

void	small_parse_table_1109(t_small_parse_table_array *v)
{
	v->a[22180] = anon_sym_SEMI_SEMI;
	v->a[22181] = anon_sym_AMP_AMP;
	v->a[22182] = anon_sym_PIPE_PIPE;
	v->a[22183] = anon_sym_LT;
	v->a[22184] = anon_sym_GT;
	v->a[22185] = anon_sym_GT_GT;
	v->a[22186] = anon_sym_AMP_GT;
	v->a[22187] = anon_sym_AMP_GT_GT;
	v->a[22188] = anon_sym_LT_AMP;
	v->a[22189] = anon_sym_GT_AMP;
	v->a[22190] = anon_sym_GT_PIPE;
	v->a[22191] = anon_sym_LT_AMP_DASH;
	v->a[22192] = anon_sym_GT_AMP_DASH;
	v->a[22193] = anon_sym_LT_LT;
	v->a[22194] = anon_sym_LT_LT_DASH;
	v->a[22195] = aux_sym_heredoc_redirect_token1;
	v->a[22196] = anon_sym_AMP;
	v->a[22197] = anon_sym_SEMI;
	v->a[22198] = 6;
	v->a[22199] = actions(3);
	small_parse_table_1110(v);
}

/* EOF small_parse_table_221.c */
