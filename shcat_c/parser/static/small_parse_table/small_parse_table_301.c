/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_301.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1505(t_small_parse_table_array *v)
{
	v->a[30100] = anon_sym_PIPE;
	v->a[30101] = anon_sym_LT;
	v->a[30102] = anon_sym_GT;
	v->a[30103] = anon_sym_LT_LT;
	v->a[30104] = anon_sym_GT_GT;
	v->a[30105] = anon_sym_PIPE_AMP;
	v->a[30106] = anon_sym_AMP_GT;
	v->a[30107] = anon_sym_AMP_GT_GT;
	v->a[30108] = anon_sym_LT_AMP;
	v->a[30109] = anon_sym_GT_AMP;
	v->a[30110] = anon_sym_GT_PIPE;
	v->a[30111] = anon_sym_LT_AMP_DASH;
	v->a[30112] = anon_sym_GT_AMP_DASH;
	v->a[30113] = anon_sym_LT_LT_DASH;
	v->a[30114] = anon_sym_LT_LT_LT;
	v->a[30115] = 3;
	v->a[30116] = actions(3);
	v->a[30117] = 1;
	v->a[30118] = sym_comment;
	v->a[30119] = actions(1326);
	small_parse_table_1506(v);
}

void	small_parse_table_1506(t_small_parse_table_array *v)
{
	v->a[30120] = 6;
	v->a[30121] = sym_file_descriptor;
	v->a[30122] = sym__concat;
	v->a[30123] = sym_test_operator;
	v->a[30124] = sym__bare_dollar;
	v->a[30125] = sym__brace_start;
	v->a[30126] = aux_sym_heredoc_redirect_token1;
	v->a[30127] = actions(1324);
	v->a[30128] = 44;
	v->a[30129] = anon_sym_LPAREN_LPAREN;
	v->a[30130] = anon_sym_SEMI;
	v->a[30131] = anon_sym_PIPE_PIPE;
	v->a[30132] = anon_sym_AMP_AMP;
	v->a[30133] = anon_sym_PIPE;
	v->a[30134] = anon_sym_AMP;
	v->a[30135] = anon_sym_EQ_EQ;
	v->a[30136] = anon_sym_LT;
	v->a[30137] = anon_sym_GT;
	v->a[30138] = anon_sym_LT_LT;
	v->a[30139] = anon_sym_GT_GT;
	small_parse_table_1507(v);
}

void	small_parse_table_1507(t_small_parse_table_array *v)
{
	v->a[30140] = anon_sym_LPAREN;
	v->a[30141] = anon_sym_esac;
	v->a[30142] = anon_sym_SEMI_SEMI;
	v->a[30143] = anon_sym_SEMI_AMP;
	v->a[30144] = anon_sym_SEMI_SEMI_AMP;
	v->a[30145] = anon_sym_PIPE_AMP;
	v->a[30146] = anon_sym_EQ_TILDE;
	v->a[30147] = anon_sym_AMP_GT;
	v->a[30148] = anon_sym_AMP_GT_GT;
	v->a[30149] = anon_sym_LT_AMP;
	v->a[30150] = anon_sym_GT_AMP;
	v->a[30151] = anon_sym_GT_PIPE;
	v->a[30152] = anon_sym_LT_AMP_DASH;
	v->a[30153] = anon_sym_GT_AMP_DASH;
	v->a[30154] = anon_sym_LT_LT_DASH;
	v->a[30155] = anon_sym_LT_LT_LT;
	v->a[30156] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30157] = anon_sym_DOLLAR_LBRACK;
	v->a[30158] = aux_sym_concatenation_token1;
	v->a[30159] = anon_sym_DOLLAR;
	small_parse_table_1508(v);
}

void	small_parse_table_1508(t_small_parse_table_array *v)
{
	v->a[30160] = sym__special_character;
	v->a[30161] = anon_sym_DQUOTE;
	v->a[30162] = sym_raw_string;
	v->a[30163] = sym_ansi_c_string;
	v->a[30164] = aux_sym_number_token1;
	v->a[30165] = aux_sym_number_token2;
	v->a[30166] = anon_sym_DOLLAR_LBRACE;
	v->a[30167] = anon_sym_DOLLAR_LPAREN;
	v->a[30168] = anon_sym_BQUOTE;
	v->a[30169] = anon_sym_DOLLAR_BQUOTE;
	v->a[30170] = anon_sym_LT_LPAREN;
	v->a[30171] = anon_sym_GT_LPAREN;
	v->a[30172] = sym_word;
	v->a[30173] = 22;
	v->a[30174] = actions(3);
	v->a[30175] = 1;
	v->a[30176] = sym_comment;
	v->a[30177] = actions(3183);
	v->a[30178] = 1;
	v->a[30179] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_1509(v);
}

void	small_parse_table_1509(t_small_parse_table_array *v)
{
	v->a[30180] = actions(3185);
	v->a[30181] = 1;
	v->a[30182] = anon_sym_DOLLAR;
	v->a[30183] = actions(3189);
	v->a[30184] = 1;
	v->a[30185] = anon_sym_DQUOTE;
	v->a[30186] = actions(3191);
	v->a[30187] = 1;
	v->a[30188] = aux_sym_number_token1;
	v->a[30189] = actions(3193);
	v->a[30190] = 1;
	v->a[30191] = aux_sym_number_token2;
	v->a[30192] = actions(3195);
	v->a[30193] = 1;
	v->a[30194] = anon_sym_DOLLAR_LBRACE;
	v->a[30195] = actions(3197);
	v->a[30196] = 1;
	v->a[30197] = anon_sym_DOLLAR_LPAREN;
	v->a[30198] = actions(3199);
	v->a[30199] = 1;
	small_parse_table_1510(v);
}

/* EOF small_parse_table_301.c */
