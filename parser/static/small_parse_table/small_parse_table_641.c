/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_641.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3205(t_small_parse_table_array *v)
{
	v->a[64100] = actions(4126);
	v->a[64101] = 1;
	v->a[64102] = anon_sym_EQ;
	v->a[64103] = actions(4132);
	v->a[64104] = 1;
	v->a[64105] = anon_sym_COMMA;
	v->a[64106] = actions(4138);
	v->a[64107] = 1;
	v->a[64108] = anon_sym_CARET;
	v->a[64109] = actions(4140);
	v->a[64110] = 1;
	v->a[64111] = anon_sym_AMP;
	v->a[64112] = actions(4150);
	v->a[64113] = 1;
	v->a[64114] = anon_sym_QMARK;
	v->a[64115] = actions(4159);
	v->a[64116] = 1;
	v->a[64117] = anon_sym_RPAREN_RPAREN;
	v->a[64118] = state(3536);
	v->a[64119] = 1;
	small_parse_table_3206(v);
}

void	small_parse_table_3206(t_small_parse_table_array *v)
{
	v->a[64120] = aux_sym_arithmetic_expansion_repeat1;
	v->a[64121] = actions(4128);
	v->a[64122] = 2;
	v->a[64123] = anon_sym_LT;
	v->a[64124] = anon_sym_GT;
	v->a[64125] = actions(4130);
	v->a[64126] = 2;
	v->a[64127] = anon_sym_GT_GT;
	v->a[64128] = anon_sym_LT_LT;
	v->a[64129] = actions(4142);
	v->a[64130] = 2;
	v->a[64131] = anon_sym_EQ_EQ;
	v->a[64132] = anon_sym_BANG_EQ;
	v->a[64133] = actions(4144);
	v->a[64134] = 2;
	v->a[64135] = anon_sym_LT_EQ;
	v->a[64136] = anon_sym_GT_EQ;
	v->a[64137] = actions(4146);
	v->a[64138] = 2;
	v->a[64139] = anon_sym_PLUS;
	small_parse_table_3207(v);
}

void	small_parse_table_3207(t_small_parse_table_array *v)
{
	v->a[64140] = anon_sym_DASH;
	v->a[64141] = actions(4152);
	v->a[64142] = 2;
	v->a[64143] = anon_sym_PLUS_PLUS2;
	v->a[64144] = anon_sym_DASH_DASH2;
	v->a[64145] = actions(4148);
	v->a[64146] = 3;
	v->a[64147] = anon_sym_STAR;
	v->a[64148] = anon_sym_SLASH;
	v->a[64149] = anon_sym_PERCENT;
	v->a[64150] = actions(4136);
	v->a[64151] = 10;
	v->a[64152] = anon_sym_PLUS_EQ;
	v->a[64153] = anon_sym_DASH_EQ;
	v->a[64154] = anon_sym_STAR_EQ;
	v->a[64155] = anon_sym_SLASH_EQ;
	v->a[64156] = anon_sym_PERCENT_EQ;
	v->a[64157] = anon_sym_LT_LT_EQ;
	v->a[64158] = anon_sym_GT_GT_EQ;
	v->a[64159] = anon_sym_AMP_EQ;
	small_parse_table_3208(v);
}

void	small_parse_table_3208(t_small_parse_table_array *v)
{
	v->a[64160] = anon_sym_CARET_EQ;
	v->a[64161] = anon_sym_PIPE_EQ;
	v->a[64162] = 3;
	v->a[64163] = actions(57);
	v->a[64164] = 1;
	v->a[64165] = sym_comment;
	v->a[64166] = actions(2886);
	v->a[64167] = 13;
	v->a[64168] = anon_sym_PIPE;
	v->a[64169] = anon_sym_LT;
	v->a[64170] = anon_sym_GT;
	v->a[64171] = anon_sym_AMP_GT;
	v->a[64172] = anon_sym_LT_AMP;
	v->a[64173] = anon_sym_GT_AMP;
	v->a[64174] = anon_sym_LT_LT;
	v->a[64175] = anon_sym_DOLLAR;
	v->a[64176] = aux_sym_number_token1;
	v->a[64177] = aux_sym_number_token2;
	v->a[64178] = anon_sym_DOLLAR_LPAREN;
	v->a[64179] = anon_sym_BQUOTE;
	small_parse_table_3209(v);
}

void	small_parse_table_3209(t_small_parse_table_array *v)
{
	v->a[64180] = sym_word;
	v->a[64181] = actions(2888);
	v->a[64182] = 22;
	v->a[64183] = sym_file_descriptor;
	v->a[64184] = sym__concat;
	v->a[64185] = sym_test_operator;
	v->a[64186] = sym__bare_dollar;
	v->a[64187] = sym__brace_start;
	v->a[64188] = anon_sym_LPAREN;
	v->a[64189] = anon_sym_PIPE_AMP;
	v->a[64190] = anon_sym_AMP_AMP;
	v->a[64191] = anon_sym_PIPE_PIPE;
	v->a[64192] = anon_sym_GT_GT;
	v->a[64193] = anon_sym_AMP_GT_GT;
	v->a[64194] = anon_sym_GT_PIPE;
	v->a[64195] = anon_sym_LT_AMP_DASH;
	v->a[64196] = anon_sym_GT_AMP_DASH;
	v->a[64197] = anon_sym_LT_LT_DASH;
	v->a[64198] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[64199] = aux_sym_concatenation_token1;
	small_parse_table_3210(v);
}

/* EOF small_parse_table_641.c */
