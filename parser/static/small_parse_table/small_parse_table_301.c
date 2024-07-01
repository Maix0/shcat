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
	v->a[30100] = 5;
	v->a[30101] = sym_arithmetic_expansion;
	v->a[30102] = sym_string;
	v->a[30103] = sym_simple_expansion;
	v->a[30104] = sym_expansion;
	v->a[30105] = sym_command_substitution;
	v->a[30106] = actions(1150);
	v->a[30107] = 7;
	v->a[30108] = anon_sym_LT;
	v->a[30109] = anon_sym_GT;
	v->a[30110] = anon_sym_GT_GT;
	v->a[30111] = anon_sym_LT_AMP;
	v->a[30112] = anon_sym_GT_AMP;
	v->a[30113] = anon_sym_GT_PIPE;
	v->a[30114] = anon_sym_LT_GT;
	v->a[30115] = 3;
	v->a[30116] = actions(3);
	v->a[30117] = 1;
	v->a[30118] = sym_comment;
	v->a[30119] = actions(802);
	small_parse_table_1506(v);
}

void	small_parse_table_1506(t_small_parse_table_array *v)
{
	v->a[30120] = 3;
	v->a[30121] = sym_file_descriptor;
	v->a[30122] = sym__concat;
	v->a[30123] = sym__bare_dollar;
	v->a[30124] = actions(800);
	v->a[30125] = 28;
	v->a[30126] = anon_sym_LPAREN;
	v->a[30127] = anon_sym_PIPE;
	v->a[30128] = anon_sym_RPAREN;
	v->a[30129] = anon_sym_SEMI_SEMI;
	v->a[30130] = anon_sym_AMP_AMP;
	v->a[30131] = anon_sym_PIPE_PIPE;
	v->a[30132] = anon_sym_LT;
	v->a[30133] = anon_sym_GT;
	v->a[30134] = anon_sym_GT_GT;
	v->a[30135] = anon_sym_LT_AMP;
	v->a[30136] = anon_sym_GT_AMP;
	v->a[30137] = anon_sym_GT_PIPE;
	v->a[30138] = anon_sym_LT_GT;
	v->a[30139] = anon_sym_LT_LT;
	small_parse_table_1507(v);
}

void	small_parse_table_1507(t_small_parse_table_array *v)
{
	v->a[30140] = anon_sym_LT_LT_DASH;
	v->a[30141] = aux_sym_heredoc_redirect_token1;
	v->a[30142] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30143] = anon_sym_AMP;
	v->a[30144] = aux_sym_concatenation_token1;
	v->a[30145] = anon_sym_DOLLAR;
	v->a[30146] = anon_sym_DQUOTE;
	v->a[30147] = sym_raw_string;
	v->a[30148] = sym_number;
	v->a[30149] = anon_sym_DOLLAR_LBRACE;
	v->a[30150] = anon_sym_DOLLAR_LPAREN;
	v->a[30151] = anon_sym_BQUOTE;
	v->a[30152] = sym_word;
	v->a[30153] = anon_sym_SEMI;
	v->a[30154] = 5;
	v->a[30155] = actions(3);
	v->a[30156] = 1;
	v->a[30157] = sym_comment;
	v->a[30158] = actions(552);
	v->a[30159] = 2;
	small_parse_table_1508(v);
}

void	small_parse_table_1508(t_small_parse_table_array *v)
{
	v->a[30160] = sym_file_descriptor;
	v->a[30161] = sym_variable_name;
	v->a[30162] = state(412);
	v->a[30163] = 2;
	v->a[30164] = sym_concatenation;
	v->a[30165] = aux_sym_for_statement_repeat1;
	v->a[30166] = state(751);
	v->a[30167] = 5;
	v->a[30168] = sym_arithmetic_expansion;
	v->a[30169] = sym_string;
	v->a[30170] = sym_simple_expansion;
	v->a[30171] = sym_expansion;
	v->a[30172] = sym_command_substitution;
	v->a[30173] = actions(554);
	v->a[30174] = 22;
	v->a[30175] = anon_sym_PIPE;
	v->a[30176] = anon_sym_AMP_AMP;
	v->a[30177] = anon_sym_PIPE_PIPE;
	v->a[30178] = anon_sym_LT;
	v->a[30179] = anon_sym_GT;
	small_parse_table_1509(v);
}

void	small_parse_table_1509(t_small_parse_table_array *v)
{
	v->a[30180] = anon_sym_GT_GT;
	v->a[30181] = anon_sym_LT_AMP;
	v->a[30182] = anon_sym_GT_AMP;
	v->a[30183] = anon_sym_GT_PIPE;
	v->a[30184] = anon_sym_LT_GT;
	v->a[30185] = anon_sym_LT_LT;
	v->a[30186] = anon_sym_LT_LT_DASH;
	v->a[30187] = aux_sym_heredoc_redirect_token1;
	v->a[30188] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30189] = anon_sym_DOLLAR;
	v->a[30190] = anon_sym_DQUOTE;
	v->a[30191] = sym_raw_string;
	v->a[30192] = sym_number;
	v->a[30193] = anon_sym_DOLLAR_LBRACE;
	v->a[30194] = anon_sym_DOLLAR_LPAREN;
	v->a[30195] = anon_sym_BQUOTE;
	v->a[30196] = sym_word;
	v->a[30197] = 20;
	v->a[30198] = actions(3);
	v->a[30199] = 1;
	small_parse_table_1510(v);
}

/* EOF small_parse_table_301.c */
