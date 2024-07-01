/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_311.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1555(t_small_parse_table_array *v)
{
	v->a[31100] = actions(1065);
	v->a[31101] = 2;
	v->a[31102] = anon_sym_EQ_EQ;
	v->a[31103] = anon_sym_BANG_EQ;
	v->a[31104] = actions(1067);
	v->a[31105] = 2;
	v->a[31106] = anon_sym_LT_EQ;
	v->a[31107] = anon_sym_GT_EQ;
	v->a[31108] = actions(1069);
	v->a[31109] = 2;
	v->a[31110] = anon_sym_PLUS;
	v->a[31111] = anon_sym_DASH;
	v->a[31112] = actions(1075);
	v->a[31113] = 2;
	v->a[31114] = anon_sym_PLUS_PLUS2;
	v->a[31115] = anon_sym_DASH_DASH2;
	v->a[31116] = actions(1071);
	v->a[31117] = 3;
	v->a[31118] = anon_sym_STAR;
	v->a[31119] = anon_sym_SLASH;
	small_parse_table_1556(v);
}

void	small_parse_table_1556(t_small_parse_table_array *v)
{
	v->a[31120] = anon_sym_PERCENT;
	v->a[31121] = actions(874);
	v->a[31122] = 13;
	v->a[31123] = anon_sym_RPAREN;
	v->a[31124] = anon_sym_PIPE_PIPE;
	v->a[31125] = anon_sym_PLUS_EQ;
	v->a[31126] = anon_sym_DASH_EQ;
	v->a[31127] = anon_sym_STAR_EQ;
	v->a[31128] = anon_sym_SLASH_EQ;
	v->a[31129] = anon_sym_PERCENT_EQ;
	v->a[31130] = anon_sym_LT_LT_EQ;
	v->a[31131] = anon_sym_GT_GT_EQ;
	v->a[31132] = anon_sym_AMP_EQ;
	v->a[31133] = anon_sym_CARET_EQ;
	v->a[31134] = anon_sym_PIPE_EQ;
	v->a[31135] = anon_sym_QMARK;
	v->a[31136] = 3;
	v->a[31137] = actions(870);
	v->a[31138] = 1;
	v->a[31139] = sym_comment;
	small_parse_table_1557(v);
}

void	small_parse_table_1557(t_small_parse_table_array *v)
{
	v->a[31140] = actions(968);
	v->a[31141] = 13;
	v->a[31142] = anon_sym_PIPE;
	v->a[31143] = anon_sym_EQ;
	v->a[31144] = anon_sym_LT;
	v->a[31145] = anon_sym_GT;
	v->a[31146] = anon_sym_GT_GT;
	v->a[31147] = anon_sym_LT_LT;
	v->a[31148] = anon_sym_CARET;
	v->a[31149] = anon_sym_AMP;
	v->a[31150] = anon_sym_PLUS;
	v->a[31151] = anon_sym_DASH;
	v->a[31152] = anon_sym_STAR;
	v->a[31153] = anon_sym_SLASH;
	v->a[31154] = anon_sym_PERCENT;
	v->a[31155] = actions(970);
	v->a[31156] = 20;
	v->a[31157] = anon_sym_RPAREN;
	v->a[31158] = anon_sym_AMP_AMP;
	v->a[31159] = anon_sym_PIPE_PIPE;
	small_parse_table_1558(v);
}

void	small_parse_table_1558(t_small_parse_table_array *v)
{
	v->a[31160] = anon_sym_PLUS_EQ;
	v->a[31161] = anon_sym_DASH_EQ;
	v->a[31162] = anon_sym_STAR_EQ;
	v->a[31163] = anon_sym_SLASH_EQ;
	v->a[31164] = anon_sym_PERCENT_EQ;
	v->a[31165] = anon_sym_LT_LT_EQ;
	v->a[31166] = anon_sym_GT_GT_EQ;
	v->a[31167] = anon_sym_AMP_EQ;
	v->a[31168] = anon_sym_CARET_EQ;
	v->a[31169] = anon_sym_PIPE_EQ;
	v->a[31170] = anon_sym_EQ_EQ;
	v->a[31171] = anon_sym_BANG_EQ;
	v->a[31172] = anon_sym_LT_EQ;
	v->a[31173] = anon_sym_GT_EQ;
	v->a[31174] = anon_sym_QMARK;
	v->a[31175] = anon_sym_PLUS_PLUS2;
	v->a[31176] = anon_sym_DASH_DASH2;
	v->a[31177] = 6;
	v->a[31178] = actions(3);
	v->a[31179] = 1;
	small_parse_table_1559(v);
}

void	small_parse_table_1559(t_small_parse_table_array *v)
{
	v->a[31180] = sym_comment;
	v->a[31181] = actions(1170);
	v->a[31182] = 1;
	v->a[31183] = aux_sym_concatenation_token1;
	v->a[31184] = actions(1172);
	v->a[31185] = 1;
	v->a[31186] = sym__concat;
	v->a[31187] = state(392);
	v->a[31188] = 1;
	v->a[31189] = aux_sym_concatenation_repeat1;
	v->a[31190] = actions(1085);
	v->a[31191] = 2;
	v->a[31192] = sym_file_descriptor;
	v->a[31193] = sym__bare_dollar;
	v->a[31194] = actions(1081);
	v->a[31195] = 28;
	v->a[31196] = anon_sym_esac;
	v->a[31197] = anon_sym_LPAREN;
	v->a[31198] = anon_sym_PIPE;
	v->a[31199] = anon_sym_SEMI_SEMI;
	small_parse_table_1560(v);
}

/* EOF small_parse_table_311.c */
