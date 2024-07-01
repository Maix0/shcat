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
	v->a[22100] = anon_sym_STAR;
	v->a[22101] = anon_sym_SLASH;
	v->a[22102] = anon_sym_PERCENT;
	v->a[22103] = actions(753);
	v->a[22104] = 21;
	v->a[22105] = anon_sym_AMP_AMP;
	v->a[22106] = anon_sym_PIPE_PIPE;
	v->a[22107] = anon_sym_RPAREN_RPAREN;
	v->a[22108] = anon_sym_PLUS_EQ;
	v->a[22109] = anon_sym_DASH_EQ;
	v->a[22110] = anon_sym_STAR_EQ;
	v->a[22111] = anon_sym_SLASH_EQ;
	v->a[22112] = anon_sym_PERCENT_EQ;
	v->a[22113] = anon_sym_LT_LT_EQ;
	v->a[22114] = anon_sym_GT_GT_EQ;
	v->a[22115] = anon_sym_AMP_EQ;
	v->a[22116] = anon_sym_CARET_EQ;
	v->a[22117] = anon_sym_PIPE_EQ;
	v->a[22118] = anon_sym_EQ_EQ;
	v->a[22119] = anon_sym_BANG_EQ;
	small_parse_table_1106(v);
}

void	small_parse_table_1106(t_small_parse_table_array *v)
{
	v->a[22120] = anon_sym_LT_EQ;
	v->a[22121] = anon_sym_GT_EQ;
	v->a[22122] = anon_sym_QMARK;
	v->a[22123] = anon_sym_COLON;
	v->a[22124] = anon_sym_PLUS_PLUS2;
	v->a[22125] = anon_sym_DASH_DASH2;
	v->a[22126] = 3;
	v->a[22127] = actions(664);
	v->a[22128] = 1;
	v->a[22129] = sym_comment;
	v->a[22130] = actions(660);
	v->a[22131] = 13;
	v->a[22132] = anon_sym_PIPE;
	v->a[22133] = anon_sym_EQ;
	v->a[22134] = anon_sym_LT;
	v->a[22135] = anon_sym_GT;
	v->a[22136] = anon_sym_GT_GT;
	v->a[22137] = anon_sym_LT_LT;
	v->a[22138] = anon_sym_CARET;
	v->a[22139] = anon_sym_AMP;
	small_parse_table_1107(v);
}

void	small_parse_table_1107(t_small_parse_table_array *v)
{
	v->a[22140] = anon_sym_PLUS;
	v->a[22141] = anon_sym_DASH;
	v->a[22142] = anon_sym_STAR;
	v->a[22143] = anon_sym_SLASH;
	v->a[22144] = anon_sym_PERCENT;
	v->a[22145] = actions(662);
	v->a[22146] = 21;
	v->a[22147] = anon_sym_AMP_AMP;
	v->a[22148] = anon_sym_PIPE_PIPE;
	v->a[22149] = anon_sym_RPAREN_RPAREN;
	v->a[22150] = anon_sym_PLUS_EQ;
	v->a[22151] = anon_sym_DASH_EQ;
	v->a[22152] = anon_sym_STAR_EQ;
	v->a[22153] = anon_sym_SLASH_EQ;
	v->a[22154] = anon_sym_PERCENT_EQ;
	v->a[22155] = anon_sym_LT_LT_EQ;
	v->a[22156] = anon_sym_GT_GT_EQ;
	v->a[22157] = anon_sym_AMP_EQ;
	v->a[22158] = anon_sym_CARET_EQ;
	v->a[22159] = anon_sym_PIPE_EQ;
	small_parse_table_1108(v);
}

void	small_parse_table_1108(t_small_parse_table_array *v)
{
	v->a[22160] = anon_sym_EQ_EQ;
	v->a[22161] = anon_sym_BANG_EQ;
	v->a[22162] = anon_sym_LT_EQ;
	v->a[22163] = anon_sym_GT_EQ;
	v->a[22164] = anon_sym_QMARK;
	v->a[22165] = anon_sym_COLON;
	v->a[22166] = anon_sym_PLUS_PLUS2;
	v->a[22167] = anon_sym_DASH_DASH2;
	v->a[22168] = 12;
	v->a[22169] = actions(3);
	v->a[22170] = 1;
	v->a[22171] = sym_comment;
	v->a[22172] = actions(736);
	v->a[22173] = 1;
	v->a[22174] = anon_sym_PIPE;
	v->a[22175] = actions(746);
	v->a[22176] = 1;
	v->a[22177] = sym_file_descriptor;
	v->a[22178] = actions(761);
	v->a[22179] = 1;
	small_parse_table_1109(v);
}

void	small_parse_table_1109(t_small_parse_table_array *v)
{
	v->a[22180] = sym_variable_name;
	v->a[22181] = state(645);
	v->a[22182] = 1;
	v->a[22183] = sym_terminator;
	v->a[22184] = actions(738);
	v->a[22185] = 2;
	v->a[22186] = anon_sym_esac;
	v->a[22187] = anon_sym_SEMI_SEMI;
	v->a[22188] = actions(755);
	v->a[22189] = 2;
	v->a[22190] = anon_sym_AMP_AMP;
	v->a[22191] = anon_sym_PIPE_PIPE;
	v->a[22192] = actions(757);
	v->a[22193] = 2;
	v->a[22194] = anon_sym_LT_LT;
	v->a[22195] = anon_sym_LT_LT_DASH;
	v->a[22196] = state(1040);
	v->a[22197] = 2;
	v->a[22198] = sym_variable_assignment;
	v->a[22199] = aux_sym__variable_assignments_repeat1;
	small_parse_table_1110(v);
}

/* EOF small_parse_table_221.c */
