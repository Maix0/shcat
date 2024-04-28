/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2841.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_14205(t_small_parse_table_array *v)
{
	v->a[284100] = aux_sym_redirected_statement_repeat2;
	v->a[284101] = actions(11363);
	v->a[284102] = 4;
	v->a[284103] = anon_sym_PIPE_PIPE;
	v->a[284104] = anon_sym_AMP_AMP;
	v->a[284105] = anon_sym_PIPE_AMP;
	v->a[284106] = anon_sym_LT_LT_DASH;
	v->a[284107] = actions(12751);
	v->a[284108] = 5;
	v->a[284109] = anon_sym_LT;
	v->a[284110] = anon_sym_GT;
	v->a[284111] = anon_sym_AMP_GT;
	v->a[284112] = anon_sym_LT_AMP;
	v->a[284113] = anon_sym_GT_AMP;
	v->a[284114] = 9;
	v->a[284115] = actions(71);
	v->a[284116] = 1;
	v->a[284117] = sym_comment;
	v->a[284118] = actions(12770);
	v->a[284119] = 1;
	small_parse_table_14206(v);
}

void	small_parse_table_14206(t_small_parse_table_array *v)
{
	v->a[284120] = anon_sym_LT_LT_LT;
	v->a[284121] = actions(12773);
	v->a[284122] = 1;
	v->a[284123] = sym_file_descriptor;
	v->a[284124] = actions(11307);
	v->a[284125] = 2;
	v->a[284126] = anon_sym_PIPE;
	v->a[284127] = anon_sym_LT_LT;
	v->a[284128] = actions(12767);
	v->a[284129] = 2;
	v->a[284130] = anon_sym_LT_AMP_DASH;
	v->a[284131] = anon_sym_GT_AMP_DASH;
	v->a[284132] = actions(12764);
	v->a[284133] = 3;
	v->a[284134] = anon_sym_GT_GT;
	v->a[284135] = anon_sym_AMP_GT_GT;
	v->a[284136] = anon_sym_GT_PIPE;
	v->a[284137] = state(5363);
	v->a[284138] = 3;
	v->a[284139] = sym_file_redirect;
	small_parse_table_14207(v);
}

void	small_parse_table_14207(t_small_parse_table_array *v)
{
	v->a[284140] = sym_herestring_redirect;
	v->a[284141] = aux_sym_redirected_statement_repeat2;
	v->a[284142] = actions(11315);
	v->a[284143] = 4;
	v->a[284144] = anon_sym_PIPE_PIPE;
	v->a[284145] = anon_sym_AMP_AMP;
	v->a[284146] = anon_sym_PIPE_AMP;
	v->a[284147] = anon_sym_LT_LT_DASH;
	v->a[284148] = actions(12761);
	v->a[284149] = 5;
	v->a[284150] = anon_sym_LT;
	v->a[284151] = anon_sym_GT;
	v->a[284152] = anon_sym_AMP_GT;
	v->a[284153] = anon_sym_LT_AMP;
	v->a[284154] = anon_sym_GT_AMP;
	v->a[284155] = 3;
	v->a[284156] = actions(71);
	v->a[284157] = 1;
	v->a[284158] = sym_comment;
	v->a[284159] = actions(1348);
	small_parse_table_14208(v);
}

void	small_parse_table_14208(t_small_parse_table_array *v)
{
	v->a[284160] = 7;
	v->a[284161] = anon_sym_PIPE;
	v->a[284162] = anon_sym_LT;
	v->a[284163] = anon_sym_GT;
	v->a[284164] = anon_sym_LT_LT;
	v->a[284165] = anon_sym_AMP_GT;
	v->a[284166] = anon_sym_LT_AMP;
	v->a[284167] = anon_sym_GT_AMP;
	v->a[284168] = actions(1350);
	v->a[284169] = 14;
	v->a[284170] = sym_file_descriptor;
	v->a[284171] = sym__concat;
	v->a[284172] = anon_sym_PIPE_PIPE;
	v->a[284173] = anon_sym_AMP_AMP;
	v->a[284174] = anon_sym_GT_GT;
	v->a[284175] = anon_sym_PIPE_AMP;
	v->a[284176] = anon_sym_RBRACK;
	v->a[284177] = anon_sym_AMP_GT_GT;
	v->a[284178] = anon_sym_GT_PIPE;
	v->a[284179] = anon_sym_LT_AMP_DASH;
	small_parse_table_14209(v);
}

void	small_parse_table_14209(t_small_parse_table_array *v)
{
	v->a[284180] = anon_sym_GT_AMP_DASH;
	v->a[284181] = anon_sym_LT_LT_DASH;
	v->a[284182] = anon_sym_LT_LT_LT;
	v->a[284183] = aux_sym_concatenation_token1;
	v->a[284184] = 5;
	v->a[284185] = actions(71);
	v->a[284186] = 1;
	v->a[284187] = sym_comment;
	v->a[284188] = actions(12776);
	v->a[284189] = 1;
	v->a[284190] = sym__special_character;
	v->a[284191] = state(5274);
	v->a[284192] = 1;
	v->a[284193] = aux_sym__literal_repeat1;
	v->a[284194] = actions(5393);
	v->a[284195] = 5;
	v->a[284196] = anon_sym_DOLLAR;
	v->a[284197] = aux_sym_number_token1;
	v->a[284198] = aux_sym_number_token2;
	v->a[284199] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_14210(v);
}

/* EOF small_parse_table_2841.c */
