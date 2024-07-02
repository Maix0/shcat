/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_581.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2905(t_small_parse_table_array *v)
{
	v->a[58100] = anon_sym_GT;
	v->a[58101] = anon_sym_GT_GT;
	v->a[58102] = anon_sym_LT_AMP;
	v->a[58103] = anon_sym_GT_AMP;
	v->a[58104] = anon_sym_GT_PIPE;
	v->a[58105] = anon_sym_LT_GT;
	v->a[58106] = 6;
	v->a[58107] = actions(3);
	v->a[58108] = 1;
	v->a[58109] = sym_comment;
	v->a[58110] = actions(1881);
	v->a[58111] = 1;
	v->a[58112] = aux_sym_concatenation_token1;
	v->a[58113] = actions(1978);
	v->a[58114] = 1;
	v->a[58115] = sym__concat;
	v->a[58116] = state(893);
	v->a[58117] = 1;
	v->a[58118] = aux_sym_concatenation_repeat1;
	v->a[58119] = actions(1043);
	small_parse_table_2906(v);
}

void	small_parse_table_2906(t_small_parse_table_array *v)
{
	v->a[58120] = 3;
	v->a[58121] = sym_file_descriptor;
	v->a[58122] = sym_variable_name;
	v->a[58123] = aux_sym_heredoc_redirect_token1;
	v->a[58124] = actions(1045);
	v->a[58125] = 15;
	v->a[58126] = anon_sym_PIPE;
	v->a[58127] = anon_sym_SEMI_SEMI;
	v->a[58128] = anon_sym_AMP_AMP;
	v->a[58129] = anon_sym_PIPE_PIPE;
	v->a[58130] = anon_sym_LT;
	v->a[58131] = anon_sym_GT;
	v->a[58132] = anon_sym_GT_GT;
	v->a[58133] = anon_sym_LT_AMP;
	v->a[58134] = anon_sym_GT_AMP;
	v->a[58135] = anon_sym_GT_PIPE;
	v->a[58136] = anon_sym_LT_GT;
	v->a[58137] = anon_sym_LT_LT;
	v->a[58138] = anon_sym_LT_LT_DASH;
	v->a[58139] = anon_sym_AMP;
	small_parse_table_2907(v);
}

void	small_parse_table_2907(t_small_parse_table_array *v)
{
	v->a[58140] = anon_sym_SEMI;
	v->a[58141] = 7;
	v->a[58142] = actions(3);
	v->a[58143] = 1;
	v->a[58144] = sym_comment;
	v->a[58145] = actions(1871);
	v->a[58146] = 1;
	v->a[58147] = sym_file_descriptor;
	v->a[58148] = actions(1976);
	v->a[58149] = 1;
	v->a[58150] = aux_sym_heredoc_redirect_token1;
	v->a[58151] = actions(700);
	v->a[58152] = 2;
	v->a[58153] = anon_sym_LT_LT;
	v->a[58154] = anon_sym_LT_LT_DASH;
	v->a[58155] = state(1012);
	v->a[58156] = 3;
	v->a[58157] = sym_file_redirect;
	v->a[58158] = sym_heredoc_redirect;
	v->a[58159] = aux_sym_redirected_statement_repeat1;
	small_parse_table_2908(v);
}

void	small_parse_table_2908(t_small_parse_table_array *v)
{
	v->a[58160] = actions(1869);
	v->a[58161] = 7;
	v->a[58162] = anon_sym_LT;
	v->a[58163] = anon_sym_GT;
	v->a[58164] = anon_sym_GT_GT;
	v->a[58165] = anon_sym_LT_AMP;
	v->a[58166] = anon_sym_GT_AMP;
	v->a[58167] = anon_sym_GT_PIPE;
	v->a[58168] = anon_sym_LT_GT;
	v->a[58169] = actions(1974);
	v->a[58170] = 7;
	v->a[58171] = anon_sym_PIPE;
	v->a[58172] = anon_sym_SEMI_SEMI;
	v->a[58173] = anon_sym_AMP_AMP;
	v->a[58174] = anon_sym_PIPE_PIPE;
	v->a[58175] = anon_sym_AMP;
	v->a[58176] = anon_sym_BQUOTE;
	v->a[58177] = anon_sym_SEMI;
	v->a[58178] = 15;
	v->a[58179] = actions(3);
	small_parse_table_2909(v);
}

void	small_parse_table_2909(t_small_parse_table_array *v)
{
	v->a[58180] = 1;
	v->a[58181] = sym_comment;
	v->a[58182] = actions(1637);
	v->a[58183] = 1;
	v->a[58184] = anon_sym_LPAREN;
	v->a[58185] = actions(1641);
	v->a[58186] = 1;
	v->a[58187] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[58188] = actions(1643);
	v->a[58189] = 1;
	v->a[58190] = anon_sym_DOLLAR;
	v->a[58191] = actions(1645);
	v->a[58192] = 1;
	v->a[58193] = anon_sym_DQUOTE;
	v->a[58194] = actions(1647);
	v->a[58195] = 1;
	v->a[58196] = anon_sym_DOLLAR_LBRACE;
	v->a[58197] = actions(1649);
	v->a[58198] = 1;
	v->a[58199] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2910(v);
}

/* EOF small_parse_table_581.c */
