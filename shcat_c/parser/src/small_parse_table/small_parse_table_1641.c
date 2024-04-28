/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1641.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_8205(t_small_parse_table_array *v)
{
	v->a[164100] = anon_sym_RPAREN;
	v->a[164101] = anon_sym_EQ_TILDE;
	v->a[164102] = anon_sym_QMARK;
	v->a[164103] = 20;
	v->a[164104] = actions(71);
	v->a[164105] = 1;
	v->a[164106] = sym_comment;
	v->a[164107] = actions(7322);
	v->a[164108] = 1;
	v->a[164109] = anon_sym_STAR_STAR;
	v->a[164110] = actions(7324);
	v->a[164111] = 1;
	v->a[164112] = anon_sym_PIPE_PIPE;
	v->a[164113] = actions(7326);
	v->a[164114] = 1;
	v->a[164115] = anon_sym_AMP_AMP;
	v->a[164116] = actions(7328);
	v->a[164117] = 1;
	v->a[164118] = anon_sym_PIPE;
	v->a[164119] = actions(7330);
	small_parse_table_8206(v);
}

void	small_parse_table_8206(t_small_parse_table_array *v)
{
	v->a[164120] = 1;
	v->a[164121] = anon_sym_CARET;
	v->a[164122] = actions(7332);
	v->a[164123] = 1;
	v->a[164124] = anon_sym_AMP;
	v->a[164125] = actions(7340);
	v->a[164126] = 1;
	v->a[164127] = anon_sym_QMARK;
	v->a[164128] = actions(7342);
	v->a[164129] = 1;
	v->a[164130] = sym_test_operator;
	v->a[164131] = actions(7346);
	v->a[164132] = 1;
	v->a[164133] = anon_sym_EQ_TILDE;
	v->a[164134] = actions(7398);
	v->a[164135] = 1;
	v->a[164136] = anon_sym_EQ;
	v->a[164137] = actions(7463);
	v->a[164138] = 1;
	v->a[164139] = anon_sym_RBRACK_RBRACK;
	small_parse_table_8207(v);
}

void	small_parse_table_8207(t_small_parse_table_array *v)
{
	v->a[164140] = actions(6793);
	v->a[164141] = 2;
	v->a[164142] = anon_sym_PLUS_PLUS;
	v->a[164143] = anon_sym_DASH_DASH;
	v->a[164144] = actions(7316);
	v->a[164145] = 2;
	v->a[164146] = anon_sym_LT_LT;
	v->a[164147] = anon_sym_GT_GT;
	v->a[164148] = actions(7318);
	v->a[164149] = 2;
	v->a[164150] = anon_sym_PLUS;
	v->a[164151] = anon_sym_DASH;
	v->a[164152] = actions(7334);
	v->a[164153] = 2;
	v->a[164154] = anon_sym_EQ_EQ;
	v->a[164155] = anon_sym_BANG_EQ;
	v->a[164156] = actions(7336);
	v->a[164157] = 2;
	v->a[164158] = anon_sym_LT;
	v->a[164159] = anon_sym_GT;
	small_parse_table_8208(v);
}

void	small_parse_table_8208(t_small_parse_table_array *v)
{
	v->a[164160] = actions(7338);
	v->a[164161] = 2;
	v->a[164162] = anon_sym_LT_EQ;
	v->a[164163] = anon_sym_GT_EQ;
	v->a[164164] = actions(7320);
	v->a[164165] = 3;
	v->a[164166] = anon_sym_STAR;
	v->a[164167] = anon_sym_SLASH;
	v->a[164168] = anon_sym_PERCENT;
	v->a[164169] = actions(7400);
	v->a[164170] = 11;
	v->a[164171] = anon_sym_PLUS_EQ;
	v->a[164172] = anon_sym_DASH_EQ;
	v->a[164173] = anon_sym_STAR_EQ;
	v->a[164174] = anon_sym_SLASH_EQ;
	v->a[164175] = anon_sym_PERCENT_EQ;
	v->a[164176] = anon_sym_STAR_STAR_EQ;
	v->a[164177] = anon_sym_LT_LT_EQ;
	v->a[164178] = anon_sym_GT_GT_EQ;
	v->a[164179] = anon_sym_AMP_EQ;
	small_parse_table_8209(v);
}

void	small_parse_table_8209(t_small_parse_table_array *v)
{
	v->a[164180] = anon_sym_CARET_EQ;
	v->a[164181] = anon_sym_PIPE_EQ;
	v->a[164182] = 15;
	v->a[164183] = actions(71);
	v->a[164184] = 1;
	v->a[164185] = sym_comment;
	v->a[164186] = actions(6807);
	v->a[164187] = 1;
	v->a[164188] = anon_sym_EQ;
	v->a[164189] = actions(7412);
	v->a[164190] = 1;
	v->a[164191] = anon_sym_PIPE;
	v->a[164192] = actions(7414);
	v->a[164193] = 1;
	v->a[164194] = anon_sym_CARET;
	v->a[164195] = actions(7416);
	v->a[164196] = 1;
	v->a[164197] = anon_sym_AMP;
	v->a[164198] = actions(7430);
	v->a[164199] = 1;
	small_parse_table_8210(v);
}

/* EOF small_parse_table_1641.c */
