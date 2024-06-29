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
	v->a[22100] = 5;
	v->a[22101] = sym_arithmetic_expansion;
	v->a[22102] = sym_string;
	v->a[22103] = sym_simple_expansion;
	v->a[22104] = sym_expansion;
	v->a[22105] = sym_command_substitution;
	v->a[22106] = actions(550);
	v->a[22107] = 20;
	v->a[22108] = anon_sym_esac;
	v->a[22109] = anon_sym_PIPE;
	v->a[22110] = anon_sym_SEMI_SEMI;
	v->a[22111] = anon_sym_AMP_AMP;
	v->a[22112] = anon_sym_PIPE_PIPE;
	v->a[22113] = anon_sym_LT;
	v->a[22114] = anon_sym_GT;
	v->a[22115] = anon_sym_GT_GT;
	v->a[22116] = anon_sym_AMP_GT;
	v->a[22117] = anon_sym_AMP_GT_GT;
	v->a[22118] = anon_sym_LT_AMP;
	v->a[22119] = anon_sym_GT_AMP;
	small_parse_table_1106(v);
}

void	small_parse_table_1106(t_small_parse_table_array *v)
{
	v->a[22120] = anon_sym_GT_PIPE;
	v->a[22121] = anon_sym_LT_AMP_DASH;
	v->a[22122] = anon_sym_GT_AMP_DASH;
	v->a[22123] = anon_sym_LT_LT;
	v->a[22124] = anon_sym_LT_LT_DASH;
	v->a[22125] = aux_sym_heredoc_redirect_token1;
	v->a[22126] = anon_sym_AMP;
	v->a[22127] = anon_sym_SEMI;
	v->a[22128] = 14;
	v->a[22129] = actions(3);
	v->a[22130] = 1;
	v->a[22131] = sym_comment;
	v->a[22132] = actions(497);
	v->a[22133] = 1;
	v->a[22134] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22135] = actions(499);
	v->a[22136] = 1;
	v->a[22137] = anon_sym_DOLLAR;
	v->a[22138] = actions(501);
	v->a[22139] = 1;
	small_parse_table_1107(v);
}

void	small_parse_table_1107(t_small_parse_table_array *v)
{
	v->a[22140] = anon_sym_DQUOTE;
	v->a[22141] = actions(503);
	v->a[22142] = 1;
	v->a[22143] = anon_sym_DOLLAR_LBRACE;
	v->a[22144] = actions(505);
	v->a[22145] = 1;
	v->a[22146] = anon_sym_DOLLAR_LPAREN;
	v->a[22147] = actions(507);
	v->a[22148] = 1;
	v->a[22149] = anon_sym_BQUOTE;
	v->a[22150] = actions(509);
	v->a[22151] = 1;
	v->a[22152] = sym__bare_dollar;
	v->a[22153] = actions(542);
	v->a[22154] = 1;
	v->a[22155] = sym_file_descriptor;
	v->a[22156] = state(198);
	v->a[22157] = 1;
	v->a[22158] = aux_sym_command_repeat2;
	v->a[22159] = state(684);
	small_parse_table_1108(v);
}

void	small_parse_table_1108(t_small_parse_table_array *v)
{
	v->a[22160] = 1;
	v->a[22161] = sym_concatenation;
	v->a[22162] = actions(495);
	v->a[22163] = 3;
	v->a[22164] = sym_raw_string;
	v->a[22165] = sym_number;
	v->a[22166] = sym_word;
	v->a[22167] = state(385);
	v->a[22168] = 5;
	v->a[22169] = sym_arithmetic_expansion;
	v->a[22170] = sym_string;
	v->a[22171] = sym_simple_expansion;
	v->a[22172] = sym_expansion;
	v->a[22173] = sym_command_substitution;
	v->a[22174] = actions(544);
	v->a[22175] = 20;
	v->a[22176] = anon_sym_esac;
	v->a[22177] = anon_sym_PIPE;
	v->a[22178] = anon_sym_SEMI_SEMI;
	v->a[22179] = anon_sym_AMP_AMP;
	small_parse_table_1109(v);
}

void	small_parse_table_1109(t_small_parse_table_array *v)
{
	v->a[22180] = anon_sym_PIPE_PIPE;
	v->a[22181] = anon_sym_LT;
	v->a[22182] = anon_sym_GT;
	v->a[22183] = anon_sym_GT_GT;
	v->a[22184] = anon_sym_AMP_GT;
	v->a[22185] = anon_sym_AMP_GT_GT;
	v->a[22186] = anon_sym_LT_AMP;
	v->a[22187] = anon_sym_GT_AMP;
	v->a[22188] = anon_sym_GT_PIPE;
	v->a[22189] = anon_sym_LT_AMP_DASH;
	v->a[22190] = anon_sym_GT_AMP_DASH;
	v->a[22191] = anon_sym_LT_LT;
	v->a[22192] = anon_sym_LT_LT_DASH;
	v->a[22193] = aux_sym_heredoc_redirect_token1;
	v->a[22194] = anon_sym_AMP;
	v->a[22195] = anon_sym_SEMI;
	v->a[22196] = 14;
	v->a[22197] = actions(3);
	v->a[22198] = 1;
	v->a[22199] = sym_comment;
	small_parse_table_1110(v);
}

/* EOF small_parse_table_221.c */
