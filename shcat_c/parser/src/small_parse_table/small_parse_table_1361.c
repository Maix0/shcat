/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1361.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6805(t_small_parse_table_array *v)
{
	v->a[136100] = anon_sym_BANG_EQ;
	v->a[136101] = anon_sym_LT_EQ;
	v->a[136102] = anon_sym_GT_EQ;
	v->a[136103] = anon_sym_RPAREN;
	v->a[136104] = anon_sym_EQ_TILDE;
	v->a[136105] = anon_sym_QMARK;
	v->a[136106] = aux_sym_concatenation_token1;
	v->a[136107] = 3;
	v->a[136108] = actions(71);
	v->a[136109] = 1;
	v->a[136110] = sym_comment;
	v->a[136111] = actions(1273);
	v->a[136112] = 14;
	v->a[136113] = anon_sym_EQ;
	v->a[136114] = anon_sym_PIPE;
	v->a[136115] = anon_sym_CARET;
	v->a[136116] = anon_sym_AMP;
	v->a[136117] = anon_sym_LT;
	v->a[136118] = anon_sym_GT;
	v->a[136119] = anon_sym_LT_LT;
	small_parse_table_6806(v);
}

void	small_parse_table_6806(t_small_parse_table_array *v)
{
	v->a[136120] = anon_sym_GT_GT;
	v->a[136121] = anon_sym_PLUS;
	v->a[136122] = anon_sym_DASH;
	v->a[136123] = anon_sym_STAR;
	v->a[136124] = anon_sym_SLASH;
	v->a[136125] = anon_sym_PERCENT;
	v->a[136126] = anon_sym_STAR_STAR;
	v->a[136127] = actions(1369);
	v->a[136128] = 25;
	v->a[136129] = sym_test_operator;
	v->a[136130] = anon_sym_RPAREN_RPAREN;
	v->a[136131] = anon_sym_PLUS_PLUS;
	v->a[136132] = anon_sym_DASH_DASH;
	v->a[136133] = anon_sym_PLUS_EQ;
	v->a[136134] = anon_sym_DASH_EQ;
	v->a[136135] = anon_sym_STAR_EQ;
	v->a[136136] = anon_sym_SLASH_EQ;
	v->a[136137] = anon_sym_PERCENT_EQ;
	v->a[136138] = anon_sym_STAR_STAR_EQ;
	v->a[136139] = anon_sym_LT_LT_EQ;
	small_parse_table_6807(v);
}

void	small_parse_table_6807(t_small_parse_table_array *v)
{
	v->a[136140] = anon_sym_GT_GT_EQ;
	v->a[136141] = anon_sym_AMP_EQ;
	v->a[136142] = anon_sym_CARET_EQ;
	v->a[136143] = anon_sym_PIPE_EQ;
	v->a[136144] = anon_sym_PIPE_PIPE;
	v->a[136145] = anon_sym_AMP_AMP;
	v->a[136146] = anon_sym_EQ_EQ;
	v->a[136147] = anon_sym_BANG_EQ;
	v->a[136148] = anon_sym_LT_EQ;
	v->a[136149] = anon_sym_GT_EQ;
	v->a[136150] = anon_sym_RBRACK_RBRACK;
	v->a[136151] = anon_sym_EQ_TILDE;
	v->a[136152] = anon_sym_QMARK;
	v->a[136153] = anon_sym_COLON;
	v->a[136154] = 5;
	v->a[136155] = actions(71);
	v->a[136156] = 1;
	v->a[136157] = sym_comment;
	v->a[136158] = actions(6772);
	v->a[136159] = 1;
	small_parse_table_6808(v);
}

void	small_parse_table_6808(t_small_parse_table_array *v)
{
	v->a[136160] = sym__special_character;
	v->a[136161] = state(2595);
	v->a[136162] = 1;
	v->a[136163] = aux_sym__literal_repeat1;
	v->a[136164] = actions(1362);
	v->a[136165] = 12;
	v->a[136166] = anon_sym_PIPE;
	v->a[136167] = anon_sym_LT;
	v->a[136168] = anon_sym_GT;
	v->a[136169] = anon_sym_LT_LT;
	v->a[136170] = anon_sym_AMP_GT;
	v->a[136171] = anon_sym_LT_AMP;
	v->a[136172] = anon_sym_GT_AMP;
	v->a[136173] = anon_sym_DOLLAR;
	v->a[136174] = aux_sym_number_token1;
	v->a[136175] = aux_sym_number_token2;
	v->a[136176] = anon_sym_DOLLAR_LPAREN;
	v->a[136177] = sym_word;
	v->a[136178] = actions(1364);
	v->a[136179] = 25;
	small_parse_table_6809(v);
}

void	small_parse_table_6809(t_small_parse_table_array *v)
{
	v->a[136180] = sym_file_descriptor;
	v->a[136181] = sym_variable_name;
	v->a[136182] = sym_test_operator;
	v->a[136183] = sym__brace_start;
	v->a[136184] = anon_sym_LPAREN_LPAREN;
	v->a[136185] = anon_sym_PIPE_PIPE;
	v->a[136186] = anon_sym_AMP_AMP;
	v->a[136187] = anon_sym_GT_GT;
	v->a[136188] = anon_sym_PIPE_AMP;
	v->a[136189] = anon_sym_AMP_GT_GT;
	v->a[136190] = anon_sym_GT_PIPE;
	v->a[136191] = anon_sym_LT_AMP_DASH;
	v->a[136192] = anon_sym_GT_AMP_DASH;
	v->a[136193] = anon_sym_LT_LT_DASH;
	v->a[136194] = anon_sym_LT_LT_LT;
	v->a[136195] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[136196] = anon_sym_DOLLAR_LBRACK;
	v->a[136197] = anon_sym_DQUOTE;
	v->a[136198] = sym_raw_string;
	v->a[136199] = sym_ansi_c_string;
	small_parse_table_6810(v);
}

/* EOF small_parse_table_1361.c */
