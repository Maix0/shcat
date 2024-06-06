/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_751.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3755(t_small_parse_table_array *v)
{
	v->a[75100] = sym_string;
	v->a[75101] = sym_number;
	v->a[75102] = sym_simple_expansion;
	v->a[75103] = sym_expansion;
	v->a[75104] = sym_command_substitution;
	v->a[75105] = 3;
	v->a[75106] = actions(57);
	v->a[75107] = 1;
	v->a[75108] = sym_comment;
	v->a[75109] = actions(3018);
	v->a[75110] = 13;
	v->a[75111] = anon_sym_PIPE;
	v->a[75112] = anon_sym_LT;
	v->a[75113] = anon_sym_GT;
	v->a[75114] = anon_sym_AMP_GT;
	v->a[75115] = anon_sym_LT_AMP;
	v->a[75116] = anon_sym_GT_AMP;
	v->a[75117] = anon_sym_LT_LT;
	v->a[75118] = anon_sym_DOLLAR;
	v->a[75119] = aux_sym_number_token1;
	small_parse_table_3756(v);
}

void	small_parse_table_3756(t_small_parse_table_array *v)
{
	v->a[75120] = aux_sym_number_token2;
	v->a[75121] = anon_sym_DOLLAR_LPAREN;
	v->a[75122] = anon_sym_BQUOTE;
	v->a[75123] = sym_word;
	v->a[75124] = actions(3020);
	v->a[75125] = 21;
	v->a[75126] = sym_file_descriptor;
	v->a[75127] = sym__concat;
	v->a[75128] = sym_test_operator;
	v->a[75129] = sym__bare_dollar;
	v->a[75130] = sym__brace_start;
	v->a[75131] = anon_sym_PIPE_AMP;
	v->a[75132] = anon_sym_AMP_AMP;
	v->a[75133] = anon_sym_PIPE_PIPE;
	v->a[75134] = anon_sym_GT_GT;
	v->a[75135] = anon_sym_AMP_GT_GT;
	v->a[75136] = anon_sym_GT_PIPE;
	v->a[75137] = anon_sym_LT_AMP_DASH;
	v->a[75138] = anon_sym_GT_AMP_DASH;
	v->a[75139] = anon_sym_LT_LT_DASH;
	small_parse_table_3757(v);
}

void	small_parse_table_3757(t_small_parse_table_array *v)
{
	v->a[75140] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[75141] = aux_sym_concatenation_token1;
	v->a[75142] = sym__special_character;
	v->a[75143] = anon_sym_DQUOTE;
	v->a[75144] = sym_raw_string;
	v->a[75145] = anon_sym_DOLLAR_LBRACE;
	v->a[75146] = anon_sym_DOLLAR_BQUOTE;
	v->a[75147] = 3;
	v->a[75148] = actions(57);
	v->a[75149] = 1;
	v->a[75150] = sym_comment;
	v->a[75151] = actions(3022);
	v->a[75152] = 13;
	v->a[75153] = anon_sym_PIPE;
	v->a[75154] = anon_sym_LT;
	v->a[75155] = anon_sym_GT;
	v->a[75156] = anon_sym_AMP_GT;
	v->a[75157] = anon_sym_LT_AMP;
	v->a[75158] = anon_sym_GT_AMP;
	v->a[75159] = anon_sym_LT_LT;
	small_parse_table_3758(v);
}

void	small_parse_table_3758(t_small_parse_table_array *v)
{
	v->a[75160] = anon_sym_DOLLAR;
	v->a[75161] = aux_sym_number_token1;
	v->a[75162] = aux_sym_number_token2;
	v->a[75163] = anon_sym_DOLLAR_LPAREN;
	v->a[75164] = anon_sym_BQUOTE;
	v->a[75165] = sym_word;
	v->a[75166] = actions(3024);
	v->a[75167] = 21;
	v->a[75168] = sym_file_descriptor;
	v->a[75169] = sym__concat;
	v->a[75170] = sym_test_operator;
	v->a[75171] = sym__bare_dollar;
	v->a[75172] = sym__brace_start;
	v->a[75173] = anon_sym_PIPE_AMP;
	v->a[75174] = anon_sym_AMP_AMP;
	v->a[75175] = anon_sym_PIPE_PIPE;
	v->a[75176] = anon_sym_GT_GT;
	v->a[75177] = anon_sym_AMP_GT_GT;
	v->a[75178] = anon_sym_GT_PIPE;
	v->a[75179] = anon_sym_LT_AMP_DASH;
	small_parse_table_3759(v);
}

void	small_parse_table_3759(t_small_parse_table_array *v)
{
	v->a[75180] = anon_sym_GT_AMP_DASH;
	v->a[75181] = anon_sym_LT_LT_DASH;
	v->a[75182] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[75183] = aux_sym_concatenation_token1;
	v->a[75184] = sym__special_character;
	v->a[75185] = anon_sym_DQUOTE;
	v->a[75186] = sym_raw_string;
	v->a[75187] = anon_sym_DOLLAR_LBRACE;
	v->a[75188] = anon_sym_DOLLAR_BQUOTE;
	v->a[75189] = 5;
	v->a[75190] = actions(57);
	v->a[75191] = 1;
	v->a[75192] = sym_comment;
	v->a[75193] = actions(4455);
	v->a[75194] = 1;
	v->a[75195] = sym__special_character;
	v->a[75196] = state(1579);
	v->a[75197] = 1;
	v->a[75198] = aux_sym__literal_repeat1;
	v->a[75199] = actions(3195);
	small_parse_table_3760(v);
}

/* EOF small_parse_table_751.c */
