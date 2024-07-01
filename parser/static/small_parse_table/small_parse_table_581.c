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
	v->a[58100] = 2;
	v->a[58101] = sym_file_descriptor;
	v->a[58102] = sym__bare_dollar;
	v->a[58103] = actions(1097);
	v->a[58104] = 23;
	v->a[58105] = anon_sym_LPAREN;
	v->a[58106] = anon_sym_PIPE;
	v->a[58107] = anon_sym_AMP_AMP;
	v->a[58108] = anon_sym_PIPE_PIPE;
	v->a[58109] = anon_sym_LT;
	v->a[58110] = anon_sym_GT;
	v->a[58111] = anon_sym_GT_GT;
	v->a[58112] = anon_sym_LT_AMP;
	v->a[58113] = anon_sym_GT_AMP;
	v->a[58114] = anon_sym_GT_PIPE;
	v->a[58115] = anon_sym_LT_AMP_DASH;
	v->a[58116] = anon_sym_GT_AMP_DASH;
	v->a[58117] = anon_sym_LT_LT;
	v->a[58118] = anon_sym_LT_LT_DASH;
	v->a[58119] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_2906(v);
}

void	small_parse_table_2906(t_small_parse_table_array *v)
{
	v->a[58120] = anon_sym_DOLLAR;
	v->a[58121] = anon_sym_DQUOTE;
	v->a[58122] = sym_raw_string;
	v->a[58123] = sym_number;
	v->a[58124] = anon_sym_DOLLAR_LBRACE;
	v->a[58125] = anon_sym_DOLLAR_LPAREN;
	v->a[58126] = anon_sym_BQUOTE;
	v->a[58127] = sym_word;
	v->a[58128] = 5;
	v->a[58129] = actions(3);
	v->a[58130] = 1;
	v->a[58131] = sym_comment;
	v->a[58132] = state(1386);
	v->a[58133] = 1;
	v->a[58134] = sym_concatenation;
	v->a[58135] = actions(790);
	v->a[58136] = 2;
	v->a[58137] = sym_file_descriptor;
	v->a[58138] = sym_variable_name;
	v->a[58139] = state(1184);
	small_parse_table_2907(v);
}

void	small_parse_table_2907(t_small_parse_table_array *v)
{
	v->a[58140] = 5;
	v->a[58141] = sym_arithmetic_expansion;
	v->a[58142] = sym_string;
	v->a[58143] = sym_simple_expansion;
	v->a[58144] = sym_expansion;
	v->a[58145] = sym_command_substitution;
	v->a[58146] = actions(788);
	v->a[58147] = 17;
	v->a[58148] = anon_sym_LT;
	v->a[58149] = anon_sym_GT;
	v->a[58150] = anon_sym_GT_GT;
	v->a[58151] = anon_sym_LT_AMP;
	v->a[58152] = anon_sym_GT_AMP;
	v->a[58153] = anon_sym_GT_PIPE;
	v->a[58154] = anon_sym_LT_AMP_DASH;
	v->a[58155] = anon_sym_GT_AMP_DASH;
	v->a[58156] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[58157] = anon_sym_DOLLAR;
	v->a[58158] = anon_sym_DQUOTE;
	v->a[58159] = sym_raw_string;
	small_parse_table_2908(v);
}

void	small_parse_table_2908(t_small_parse_table_array *v)
{
	v->a[58160] = sym_number;
	v->a[58161] = anon_sym_DOLLAR_LBRACE;
	v->a[58162] = anon_sym_DOLLAR_LPAREN;
	v->a[58163] = anon_sym_BQUOTE;
	v->a[58164] = sym_word;
	v->a[58165] = 6;
	v->a[58166] = actions(3);
	v->a[58167] = 1;
	v->a[58168] = sym_comment;
	v->a[58169] = actions(1085);
	v->a[58170] = 1;
	v->a[58171] = sym_file_descriptor;
	v->a[58172] = actions(1975);
	v->a[58173] = 1;
	v->a[58174] = aux_sym_concatenation_token1;
	v->a[58175] = actions(1977);
	v->a[58176] = 1;
	v->a[58177] = sym__concat;
	v->a[58178] = state(983);
	v->a[58179] = 1;
	small_parse_table_2909(v);
}

void	small_parse_table_2909(t_small_parse_table_array *v)
{
	v->a[58180] = aux_sym_concatenation_repeat1;
	v->a[58181] = actions(1081);
	v->a[58182] = 20;
	v->a[58183] = anon_sym_AMP_AMP;
	v->a[58184] = anon_sym_PIPE_PIPE;
	v->a[58185] = anon_sym_LT;
	v->a[58186] = anon_sym_GT;
	v->a[58187] = anon_sym_GT_GT;
	v->a[58188] = anon_sym_LT_AMP;
	v->a[58189] = anon_sym_GT_AMP;
	v->a[58190] = anon_sym_GT_PIPE;
	v->a[58191] = anon_sym_LT_AMP_DASH;
	v->a[58192] = anon_sym_GT_AMP_DASH;
	v->a[58193] = aux_sym_heredoc_redirect_token1;
	v->a[58194] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[58195] = anon_sym_DOLLAR;
	v->a[58196] = anon_sym_DQUOTE;
	v->a[58197] = sym_raw_string;
	v->a[58198] = sym_number;
	v->a[58199] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_2910(v);
}

/* EOF small_parse_table_581.c */
