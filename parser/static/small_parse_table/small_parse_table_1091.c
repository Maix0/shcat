/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1091.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5455(t_small_parse_table_array *v)
{
	v->a[109100] = sym_concatenation;
	v->a[109101] = aux_sym_for_statement_repeat1;
	v->a[109102] = state(2609);
	v->a[109103] = 7;
	v->a[109104] = sym_arithmetic_expansion;
	v->a[109105] = sym_brace_expression;
	v->a[109106] = sym_string;
	v->a[109107] = sym_number;
	v->a[109108] = sym_simple_expansion;
	v->a[109109] = sym_expansion;
	v->a[109110] = sym_command_substitution;
	v->a[109111] = 3;
	v->a[109112] = actions(3);
	v->a[109113] = 1;
	v->a[109114] = sym_comment;
	v->a[109115] = actions(6163);
	v->a[109116] = 3;
	v->a[109117] = sym_file_descriptor;
	v->a[109118] = ts_builtin_sym_end;
	v->a[109119] = aux_sym_heredoc_redirect_token1;
	small_parse_table_5456(v);
}

void	small_parse_table_5456(t_small_parse_table_array *v)
{
	v->a[109120] = actions(6161);
	v->a[109121] = 21;
	v->a[109122] = anon_sym_PIPE;
	v->a[109123] = anon_sym_RPAREN;
	v->a[109124] = anon_sym_SEMI_SEMI;
	v->a[109125] = anon_sym_PIPE_AMP;
	v->a[109126] = anon_sym_AMP_AMP;
	v->a[109127] = anon_sym_PIPE_PIPE;
	v->a[109128] = anon_sym_LT;
	v->a[109129] = anon_sym_GT;
	v->a[109130] = anon_sym_GT_GT;
	v->a[109131] = anon_sym_AMP_GT;
	v->a[109132] = anon_sym_AMP_GT_GT;
	v->a[109133] = anon_sym_LT_AMP;
	v->a[109134] = anon_sym_GT_AMP;
	v->a[109135] = anon_sym_GT_PIPE;
	v->a[109136] = anon_sym_LT_AMP_DASH;
	v->a[109137] = anon_sym_GT_AMP_DASH;
	v->a[109138] = anon_sym_LT_LT;
	v->a[109139] = anon_sym_LT_LT_DASH;
	small_parse_table_5457(v);
}

void	small_parse_table_5457(t_small_parse_table_array *v)
{
	v->a[109140] = anon_sym_AMP;
	v->a[109141] = anon_sym_BQUOTE;
	v->a[109142] = anon_sym_SEMI;
	v->a[109143] = 3;
	v->a[109144] = actions(3);
	v->a[109145] = 1;
	v->a[109146] = sym_comment;
	v->a[109147] = actions(6155);
	v->a[109148] = 3;
	v->a[109149] = sym_file_descriptor;
	v->a[109150] = ts_builtin_sym_end;
	v->a[109151] = aux_sym_heredoc_redirect_token1;
	v->a[109152] = actions(6153);
	v->a[109153] = 21;
	v->a[109154] = anon_sym_PIPE;
	v->a[109155] = anon_sym_RPAREN;
	v->a[109156] = anon_sym_SEMI_SEMI;
	v->a[109157] = anon_sym_PIPE_AMP;
	v->a[109158] = anon_sym_AMP_AMP;
	v->a[109159] = anon_sym_PIPE_PIPE;
	small_parse_table_5458(v);
}

void	small_parse_table_5458(t_small_parse_table_array *v)
{
	v->a[109160] = anon_sym_LT;
	v->a[109161] = anon_sym_GT;
	v->a[109162] = anon_sym_GT_GT;
	v->a[109163] = anon_sym_AMP_GT;
	v->a[109164] = anon_sym_AMP_GT_GT;
	v->a[109165] = anon_sym_LT_AMP;
	v->a[109166] = anon_sym_GT_AMP;
	v->a[109167] = anon_sym_GT_PIPE;
	v->a[109168] = anon_sym_LT_AMP_DASH;
	v->a[109169] = anon_sym_GT_AMP_DASH;
	v->a[109170] = anon_sym_LT_LT;
	v->a[109171] = anon_sym_LT_LT_DASH;
	v->a[109172] = anon_sym_AMP;
	v->a[109173] = anon_sym_BQUOTE;
	v->a[109174] = anon_sym_SEMI;
	v->a[109175] = 10;
	v->a[109176] = actions(3);
	v->a[109177] = 1;
	v->a[109178] = sym_comment;
	v->a[109179] = actions(3383);
	small_parse_table_5459(v);
}

void	small_parse_table_5459(t_small_parse_table_array *v)
{
	v->a[109180] = 1;
	v->a[109181] = aux_sym_heredoc_redirect_token1;
	v->a[109182] = actions(5970);
	v->a[109183] = 1;
	v->a[109184] = sym_file_descriptor;
	v->a[109185] = actions(2516);
	v->a[109186] = 2;
	v->a[109187] = anon_sym_PIPE;
	v->a[109188] = anon_sym_PIPE_AMP;
	v->a[109189] = actions(2945);
	v->a[109190] = 2;
	v->a[109191] = anon_sym_LT_LT;
	v->a[109192] = anon_sym_LT_LT_DASH;
	v->a[109193] = actions(3300);
	v->a[109194] = 2;
	v->a[109195] = anon_sym_AMP_AMP;
	v->a[109196] = anon_sym_PIPE_PIPE;
	v->a[109197] = actions(5968);
	v->a[109198] = 2;
	v->a[109199] = anon_sym_LT_AMP_DASH;
	small_parse_table_5460(v);
}

/* EOF small_parse_table_1091.c */
