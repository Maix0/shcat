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
	v->a[75100] = anon_sym_AMP_AMP;
	v->a[75101] = anon_sym_PIPE_PIPE;
	v->a[75102] = anon_sym_GT_GT;
	v->a[75103] = anon_sym_LT_AMP;
	v->a[75104] = anon_sym_GT_AMP;
	v->a[75105] = anon_sym_GT_PIPE;
	v->a[75106] = anon_sym_LT_GT;
	v->a[75107] = anon_sym_LT_LT_DASH;
	v->a[75108] = 7;
	v->a[75109] = actions(3);
	v->a[75110] = 1;
	v->a[75111] = sym_comment;
	v->a[75112] = actions(2995);
	v->a[75113] = 1;
	v->a[75114] = aux_sym__simple_variable_name_token1;
	v->a[75115] = actions(2999);
	v->a[75116] = 1;
	v->a[75117] = sym_variable_name;
	v->a[75118] = actions(3031);
	v->a[75119] = 1;
	small_parse_table_3756(v);
}

void	small_parse_table_3756(t_small_parse_table_array *v)
{
	v->a[75120] = anon_sym_RBRACE;
	v->a[75121] = state(2034);
	v->a[75122] = 1;
	v->a[75123] = sym__expansion_body;
	v->a[75124] = actions(2997);
	v->a[75125] = 2;
	v->a[75126] = anon_sym_0;
	v->a[75127] = anon_sym__;
	v->a[75128] = actions(2993);
	v->a[75129] = 7;
	v->a[75130] = anon_sym_BANG;
	v->a[75131] = anon_sym_DASH;
	v->a[75132] = anon_sym_STAR;
	v->a[75133] = anon_sym_QMARK;
	v->a[75134] = anon_sym_DOLLAR;
	v->a[75135] = anon_sym_POUND;
	v->a[75136] = anon_sym_AT;
	v->a[75137] = 5;
	v->a[75138] = actions(3);
	v->a[75139] = 1;
	small_parse_table_3757(v);
}

void	small_parse_table_3757(t_small_parse_table_array *v)
{
	v->a[75140] = sym_comment;
	v->a[75141] = actions(2764);
	v->a[75142] = 1;
	v->a[75143] = aux_sym_concatenation_token1;
	v->a[75144] = actions(3033);
	v->a[75145] = 1;
	v->a[75146] = sym__concat;
	v->a[75147] = state(1390);
	v->a[75148] = 1;
	v->a[75149] = aux_sym_concatenation_repeat1;
	v->a[75150] = actions(1043);
	v->a[75151] = 10;
	v->a[75152] = aux_sym_heredoc_redirect_token1;
	v->a[75153] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[75154] = anon_sym_DOLLAR;
	v->a[75155] = anon_sym_DQUOTE;
	v->a[75156] = sym_raw_string;
	v->a[75157] = sym_number;
	v->a[75158] = anon_sym_DOLLAR_LBRACE;
	v->a[75159] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_3758(v);
}

void	small_parse_table_3758(t_small_parse_table_array *v)
{
	v->a[75160] = anon_sym_BQUOTE;
	v->a[75161] = sym_word;
	v->a[75162] = 3;
	v->a[75163] = actions(664);
	v->a[75164] = 1;
	v->a[75165] = sym_comment;
	v->a[75166] = actions(2071);
	v->a[75167] = 4;
	v->a[75168] = anon_sym_PIPE;
	v->a[75169] = anon_sym_LT;
	v->a[75170] = anon_sym_GT;
	v->a[75171] = anon_sym_LT_LT;
	v->a[75172] = actions(2069);
	v->a[75173] = 9;
	v->a[75174] = sym_file_descriptor;
	v->a[75175] = anon_sym_AMP_AMP;
	v->a[75176] = anon_sym_PIPE_PIPE;
	v->a[75177] = anon_sym_GT_GT;
	v->a[75178] = anon_sym_LT_AMP;
	v->a[75179] = anon_sym_GT_AMP;
	small_parse_table_3759(v);
}

void	small_parse_table_3759(t_small_parse_table_array *v)
{
	v->a[75180] = anon_sym_GT_PIPE;
	v->a[75181] = anon_sym_LT_GT;
	v->a[75182] = anon_sym_LT_LT_DASH;
	v->a[75183] = 3;
	v->a[75184] = actions(664);
	v->a[75185] = 1;
	v->a[75186] = sym_comment;
	v->a[75187] = actions(2243);
	v->a[75188] = 4;
	v->a[75189] = anon_sym_PIPE;
	v->a[75190] = anon_sym_LT;
	v->a[75191] = anon_sym_GT;
	v->a[75192] = anon_sym_LT_LT;
	v->a[75193] = actions(2241);
	v->a[75194] = 9;
	v->a[75195] = sym_file_descriptor;
	v->a[75196] = anon_sym_AMP_AMP;
	v->a[75197] = anon_sym_PIPE_PIPE;
	v->a[75198] = anon_sym_GT_GT;
	v->a[75199] = anon_sym_LT_AMP;
	small_parse_table_3760(v);
}

/* EOF small_parse_table_751.c */
