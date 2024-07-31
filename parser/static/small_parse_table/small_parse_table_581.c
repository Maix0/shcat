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
	v->a[58100] = 1;
	v->a[58101] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[58102] = actions(874);
	v->a[58103] = 1;
	v->a[58104] = anon_sym_DOLLAR;
	v->a[58105] = actions(876);
	v->a[58106] = 1;
	v->a[58107] = anon_sym_DQUOTE;
	v->a[58108] = actions(878);
	v->a[58109] = 1;
	v->a[58110] = anon_sym_DOLLAR_LBRACE;
	v->a[58111] = actions(880);
	v->a[58112] = 1;
	v->a[58113] = anon_sym_DOLLAR_LPAREN;
	v->a[58114] = actions(882);
	v->a[58115] = 1;
	v->a[58116] = anon_sym_BQUOTE;
	v->a[58117] = state(279);
	v->a[58118] = 2;
	v->a[58119] = sym_concatenation;
	small_parse_table_2906(v);
}

void	small_parse_table_2906(t_small_parse_table_array *v)
{
	v->a[58120] = aux_sym_for_statement_repeat1;
	v->a[58121] = actions(870);
	v->a[58122] = 3;
	v->a[58123] = sym_raw_string;
	v->a[58124] = sym_number;
	v->a[58125] = sym_word;
	v->a[58126] = state(412);
	v->a[58127] = 5;
	v->a[58128] = sym_arithmetic_expansion;
	v->a[58129] = sym_string;
	v->a[58130] = sym_simple_expansion;
	v->a[58131] = sym_expansion;
	v->a[58132] = sym_command_substitution;
	v->a[58133] = 3;
	v->a[58134] = actions(3);
	v->a[58135] = 1;
	v->a[58136] = sym_comment;
	v->a[58137] = actions(1819);
	v->a[58138] = 1;
	v->a[58139] = aux_sym_heredoc_redirect_token1;
	small_parse_table_2907(v);
}

void	small_parse_table_2907(t_small_parse_table_array *v)
{
	v->a[58140] = actions(1821);
	v->a[58141] = 15;
	v->a[58142] = anon_sym_esac;
	v->a[58143] = anon_sym_PIPE;
	v->a[58144] = anon_sym_SEMI_SEMI;
	v->a[58145] = anon_sym_AMP_AMP;
	v->a[58146] = anon_sym_PIPE_PIPE;
	v->a[58147] = anon_sym_LT;
	v->a[58148] = anon_sym_GT;
	v->a[58149] = anon_sym_GT_GT;
	v->a[58150] = anon_sym_LT_AMP;
	v->a[58151] = anon_sym_GT_AMP;
	v->a[58152] = anon_sym_GT_PIPE;
	v->a[58153] = anon_sym_LT_GT;
	v->a[58154] = anon_sym_LT_LT;
	v->a[58155] = anon_sym_LT_LT_DASH;
	v->a[58156] = anon_sym_SEMI;
	v->a[58157] = 3;
	v->a[58158] = actions(3);
	v->a[58159] = 1;
	small_parse_table_2908(v);
}

void	small_parse_table_2908(t_small_parse_table_array *v)
{
	v->a[58160] = sym_comment;
	v->a[58161] = actions(1772);
	v->a[58162] = 1;
	v->a[58163] = aux_sym_heredoc_redirect_token1;
	v->a[58164] = actions(1774);
	v->a[58165] = 15;
	v->a[58166] = anon_sym_esac;
	v->a[58167] = anon_sym_PIPE;
	v->a[58168] = anon_sym_SEMI_SEMI;
	v->a[58169] = anon_sym_AMP_AMP;
	v->a[58170] = anon_sym_PIPE_PIPE;
	v->a[58171] = anon_sym_LT;
	v->a[58172] = anon_sym_GT;
	v->a[58173] = anon_sym_GT_GT;
	v->a[58174] = anon_sym_LT_AMP;
	v->a[58175] = anon_sym_GT_AMP;
	v->a[58176] = anon_sym_GT_PIPE;
	v->a[58177] = anon_sym_LT_GT;
	v->a[58178] = anon_sym_LT_LT;
	v->a[58179] = anon_sym_LT_LT_DASH;
	small_parse_table_2909(v);
}

void	small_parse_table_2909(t_small_parse_table_array *v)
{
	v->a[58180] = anon_sym_SEMI;
	v->a[58181] = 5;
	v->a[58182] = actions(3);
	v->a[58183] = 1;
	v->a[58184] = sym_comment;
	v->a[58185] = actions(746);
	v->a[58186] = 1;
	v->a[58187] = anon_sym_PIPE;
	v->a[58188] = actions(942);
	v->a[58189] = 1;
	v->a[58190] = aux_sym_heredoc_redirect_token1;
	v->a[58191] = state(1185);
	v->a[58192] = 3;
	v->a[58193] = sym_file_redirect;
	v->a[58194] = sym_heredoc_redirect;
	v->a[58195] = aux_sym_redirected_statement_repeat1;
	v->a[58196] = actions(916);
	v->a[58197] = 11;
	v->a[58198] = anon_sym_AMP_AMP;
	v->a[58199] = anon_sym_PIPE_PIPE;
	small_parse_table_2910(v);
}

/* EOF small_parse_table_581.c */
