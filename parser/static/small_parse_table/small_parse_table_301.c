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
	v->a[30100] = anon_sym_DQUOTE;
	v->a[30101] = sym_raw_string;
	v->a[30102] = sym_number;
	v->a[30103] = anon_sym_DOLLAR_LBRACE;
	v->a[30104] = anon_sym_DOLLAR_LPAREN;
	v->a[30105] = anon_sym_BQUOTE;
	v->a[30106] = sym_word;
	v->a[30107] = anon_sym_SEMI;
	v->a[30108] = 3;
	v->a[30109] = actions(3);
	v->a[30110] = 1;
	v->a[30111] = sym_comment;
	v->a[30112] = actions(449);
	v->a[30113] = 2;
	v->a[30114] = sym__concat;
	v->a[30115] = sym__bare_dollar;
	v->a[30116] = actions(447);
	v->a[30117] = 26;
	v->a[30118] = anon_sym_esac;
	v->a[30119] = anon_sym_PIPE;
	small_parse_table_1506(v);
}

void	small_parse_table_1506(t_small_parse_table_array *v)
{
	v->a[30120] = anon_sym_SEMI_SEMI;
	v->a[30121] = anon_sym_AMP_AMP;
	v->a[30122] = anon_sym_PIPE_PIPE;
	v->a[30123] = anon_sym_LT;
	v->a[30124] = anon_sym_GT;
	v->a[30125] = anon_sym_GT_GT;
	v->a[30126] = anon_sym_LT_AMP;
	v->a[30127] = anon_sym_GT_AMP;
	v->a[30128] = anon_sym_GT_PIPE;
	v->a[30129] = anon_sym_LT_GT;
	v->a[30130] = anon_sym_LT_LT;
	v->a[30131] = anon_sym_LT_LT_DASH;
	v->a[30132] = aux_sym_heredoc_redirect_token1;
	v->a[30133] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30134] = aux_sym_concatenation_token1;
	v->a[30135] = anon_sym_DOLLAR;
	v->a[30136] = anon_sym_DQUOTE;
	v->a[30137] = sym_raw_string;
	v->a[30138] = sym_number;
	v->a[30139] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1507(v);
}

void	small_parse_table_1507(t_small_parse_table_array *v)
{
	v->a[30140] = anon_sym_DOLLAR_LPAREN;
	v->a[30141] = anon_sym_BQUOTE;
	v->a[30142] = sym_word;
	v->a[30143] = anon_sym_SEMI;
	v->a[30144] = 6;
	v->a[30145] = actions(3);
	v->a[30146] = 1;
	v->a[30147] = sym_comment;
	v->a[30148] = actions(1001);
	v->a[30149] = 1;
	v->a[30150] = sym_variable_name;
	v->a[30151] = actions(1093);
	v->a[30152] = 1;
	v->a[30153] = aux_sym_concatenation_token1;
	v->a[30154] = actions(1237);
	v->a[30155] = 1;
	v->a[30156] = sym__concat;
	v->a[30157] = state(346);
	v->a[30158] = 1;
	v->a[30159] = aux_sym_concatenation_repeat1;
	small_parse_table_1508(v);
}

void	small_parse_table_1508(t_small_parse_table_array *v)
{
	v->a[30160] = actions(997);
	v->a[30161] = 24;
	v->a[30162] = anon_sym_PIPE;
	v->a[30163] = anon_sym_SEMI_SEMI;
	v->a[30164] = anon_sym_AMP_AMP;
	v->a[30165] = anon_sym_PIPE_PIPE;
	v->a[30166] = anon_sym_LT;
	v->a[30167] = anon_sym_GT;
	v->a[30168] = anon_sym_GT_GT;
	v->a[30169] = anon_sym_LT_AMP;
	v->a[30170] = anon_sym_GT_AMP;
	v->a[30171] = anon_sym_GT_PIPE;
	v->a[30172] = anon_sym_LT_GT;
	v->a[30173] = anon_sym_LT_LT;
	v->a[30174] = anon_sym_LT_LT_DASH;
	v->a[30175] = aux_sym_heredoc_redirect_token1;
	v->a[30176] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30177] = anon_sym_DOLLAR;
	v->a[30178] = anon_sym_DQUOTE;
	v->a[30179] = sym_raw_string;
	small_parse_table_1509(v);
}

void	small_parse_table_1509(t_small_parse_table_array *v)
{
	v->a[30180] = sym_number;
	v->a[30181] = anon_sym_DOLLAR_LBRACE;
	v->a[30182] = anon_sym_DOLLAR_LPAREN;
	v->a[30183] = anon_sym_BQUOTE;
	v->a[30184] = sym_word;
	v->a[30185] = anon_sym_SEMI;
	v->a[30186] = 3;
	v->a[30187] = actions(3);
	v->a[30188] = 1;
	v->a[30189] = sym_comment;
	v->a[30190] = actions(453);
	v->a[30191] = 2;
	v->a[30192] = sym__concat;
	v->a[30193] = sym__bare_dollar;
	v->a[30194] = actions(451);
	v->a[30195] = 26;
	v->a[30196] = anon_sym_esac;
	v->a[30197] = anon_sym_PIPE;
	v->a[30198] = anon_sym_SEMI_SEMI;
	v->a[30199] = anon_sym_AMP_AMP;
	small_parse_table_1510(v);
}

/* EOF small_parse_table_301.c */
