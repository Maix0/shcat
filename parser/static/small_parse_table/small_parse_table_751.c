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
	v->a[75100] = sym__comment_word;
	v->a[75101] = actions(2971);
	v->a[75102] = 1;
	v->a[75103] = sym__empty_value;
	v->a[75104] = state(1240);
	v->a[75105] = 1;
	v->a[75106] = sym_concatenation;
	v->a[75107] = actions(2951);
	v->a[75108] = 2;
	v->a[75109] = sym_raw_string;
	v->a[75110] = sym_word;
	v->a[75111] = state(986);
	v->a[75112] = 6;
	v->a[75113] = sym_arithmetic_expansion;
	v->a[75114] = sym_string;
	v->a[75115] = sym_number;
	v->a[75116] = sym_simple_expansion;
	v->a[75117] = sym_expansion;
	v->a[75118] = sym_command_substitution;
	v->a[75119] = 14;
	small_parse_table_3756(v);
}

void	small_parse_table_3756(t_small_parse_table_array *v)
{
	v->a[75120] = actions(3);
	v->a[75121] = 1;
	v->a[75122] = sym_comment;
	v->a[75123] = actions(933);
	v->a[75124] = 1;
	v->a[75125] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[75126] = actions(935);
	v->a[75127] = 1;
	v->a[75128] = anon_sym_DOLLAR;
	v->a[75129] = actions(937);
	v->a[75130] = 1;
	v->a[75131] = anon_sym_DQUOTE;
	v->a[75132] = actions(939);
	v->a[75133] = 1;
	v->a[75134] = aux_sym_number_token1;
	v->a[75135] = actions(941);
	v->a[75136] = 1;
	v->a[75137] = aux_sym_number_token2;
	v->a[75138] = actions(943);
	v->a[75139] = 1;
	small_parse_table_3757(v);
}

void	small_parse_table_3757(t_small_parse_table_array *v)
{
	v->a[75140] = anon_sym_DOLLAR_LBRACE;
	v->a[75141] = actions(945);
	v->a[75142] = 1;
	v->a[75143] = anon_sym_DOLLAR_LPAREN;
	v->a[75144] = actions(947);
	v->a[75145] = 1;
	v->a[75146] = anon_sym_BQUOTE;
	v->a[75147] = actions(2973);
	v->a[75148] = 1;
	v->a[75149] = aux_sym_heredoc_redirect_token1;
	v->a[75150] = state(1348);
	v->a[75151] = 1;
	v->a[75152] = aux_sym__heredoc_command;
	v->a[75153] = state(1832);
	v->a[75154] = 1;
	v->a[75155] = sym_concatenation;
	v->a[75156] = actions(921);
	v->a[75157] = 2;
	v->a[75158] = sym_raw_string;
	v->a[75159] = sym_word;
	small_parse_table_3758(v);
}

void	small_parse_table_3758(t_small_parse_table_array *v)
{
	v->a[75160] = state(1614);
	v->a[75161] = 6;
	v->a[75162] = sym_arithmetic_expansion;
	v->a[75163] = sym_string;
	v->a[75164] = sym_number;
	v->a[75165] = sym_simple_expansion;
	v->a[75166] = sym_expansion;
	v->a[75167] = sym_command_substitution;
	v->a[75168] = 14;
	v->a[75169] = actions(3);
	v->a[75170] = 1;
	v->a[75171] = sym_comment;
	v->a[75172] = actions(933);
	v->a[75173] = 1;
	v->a[75174] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[75175] = actions(935);
	v->a[75176] = 1;
	v->a[75177] = anon_sym_DOLLAR;
	v->a[75178] = actions(937);
	v->a[75179] = 1;
	small_parse_table_3759(v);
}

void	small_parse_table_3759(t_small_parse_table_array *v)
{
	v->a[75180] = anon_sym_DQUOTE;
	v->a[75181] = actions(939);
	v->a[75182] = 1;
	v->a[75183] = aux_sym_number_token1;
	v->a[75184] = actions(941);
	v->a[75185] = 1;
	v->a[75186] = aux_sym_number_token2;
	v->a[75187] = actions(943);
	v->a[75188] = 1;
	v->a[75189] = anon_sym_DOLLAR_LBRACE;
	v->a[75190] = actions(945);
	v->a[75191] = 1;
	v->a[75192] = anon_sym_DOLLAR_LPAREN;
	v->a[75193] = actions(947);
	v->a[75194] = 1;
	v->a[75195] = anon_sym_BQUOTE;
	v->a[75196] = actions(2975);
	v->a[75197] = 1;
	v->a[75198] = aux_sym_heredoc_redirect_token1;
	v->a[75199] = state(1348);
	small_parse_table_3760(v);
}

/* EOF small_parse_table_751.c */
