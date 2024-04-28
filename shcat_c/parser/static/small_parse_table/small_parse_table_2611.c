/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2611.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13055(t_small_parse_table_array *v)
{
	v->a[261100] = sym_heredoc_redirect;
	v->a[261101] = aux_sym_redirected_statement_repeat1;
	v->a[261102] = actions(4270);
	v->a[261103] = 17;
	v->a[261104] = anon_sym_SEMI;
	v->a[261105] = anon_sym_PIPE_PIPE;
	v->a[261106] = anon_sym_AMP_AMP;
	v->a[261107] = anon_sym_AMP;
	v->a[261108] = anon_sym_LT;
	v->a[261109] = anon_sym_GT;
	v->a[261110] = anon_sym_LT_LT;
	v->a[261111] = anon_sym_GT_GT;
	v->a[261112] = anon_sym_SEMI_SEMI;
	v->a[261113] = anon_sym_AMP_GT;
	v->a[261114] = anon_sym_AMP_GT_GT;
	v->a[261115] = anon_sym_LT_AMP;
	v->a[261116] = anon_sym_GT_AMP;
	v->a[261117] = anon_sym_GT_PIPE;
	v->a[261118] = anon_sym_LT_AMP_DASH;
	v->a[261119] = anon_sym_GT_AMP_DASH;
	small_parse_table_13056(v);
}

void	small_parse_table_13056(t_small_parse_table_array *v)
{
	v->a[261120] = anon_sym_LT_LT_DASH;
	v->a[261121] = 8;
	v->a[261122] = actions(3);
	v->a[261123] = 1;
	v->a[261124] = sym_comment;
	v->a[261125] = actions(11455);
	v->a[261126] = 1;
	v->a[261127] = aux_sym_heredoc_redirect_token1;
	v->a[261128] = actions(11993);
	v->a[261129] = 1;
	v->a[261130] = sym_file_descriptor;
	v->a[261131] = actions(4692);
	v->a[261132] = 2;
	v->a[261133] = anon_sym_LT_LT;
	v->a[261134] = anon_sym_LT_LT_DASH;
	v->a[261135] = actions(11542);
	v->a[261136] = 2;
	v->a[261137] = anon_sym_LT_AMP_DASH;
	v->a[261138] = anon_sym_GT_AMP_DASH;
	v->a[261139] = state(4710);
	small_parse_table_13057(v);
}

void	small_parse_table_13057(t_small_parse_table_array *v)
{
	v->a[261140] = 3;
	v->a[261141] = sym_file_redirect;
	v->a[261142] = sym_heredoc_redirect;
	v->a[261143] = aux_sym_redirected_statement_repeat1;
	v->a[261144] = actions(11453);
	v->a[261145] = 8;
	v->a[261146] = anon_sym_SEMI;
	v->a[261147] = anon_sym_PIPE_PIPE;
	v->a[261148] = anon_sym_AMP_AMP;
	v->a[261149] = anon_sym_PIPE;
	v->a[261150] = anon_sym_AMP;
	v->a[261151] = anon_sym_RPAREN;
	v->a[261152] = anon_sym_SEMI_SEMI;
	v->a[261153] = anon_sym_PIPE_AMP;
	v->a[261154] = actions(11540);
	v->a[261155] = 8;
	v->a[261156] = anon_sym_LT;
	v->a[261157] = anon_sym_GT;
	v->a[261158] = anon_sym_GT_GT;
	v->a[261159] = anon_sym_AMP_GT;
	small_parse_table_13058(v);
}

void	small_parse_table_13058(t_small_parse_table_array *v)
{
	v->a[261160] = anon_sym_AMP_GT_GT;
	v->a[261161] = anon_sym_LT_AMP;
	v->a[261162] = anon_sym_GT_AMP;
	v->a[261163] = anon_sym_GT_PIPE;
	v->a[261164] = 8;
	v->a[261165] = actions(3);
	v->a[261166] = 1;
	v->a[261167] = sym_comment;
	v->a[261168] = actions(11410);
	v->a[261169] = 1;
	v->a[261170] = anon_sym_LT_LT_LT;
	v->a[261171] = actions(11414);
	v->a[261172] = 1;
	v->a[261173] = aux_sym_heredoc_redirect_token1;
	v->a[261174] = actions(11941);
	v->a[261175] = 1;
	v->a[261176] = sym_file_descriptor;
	v->a[261177] = actions(11487);
	v->a[261178] = 2;
	v->a[261179] = anon_sym_LT_AMP_DASH;
	small_parse_table_13059(v);
}

void	small_parse_table_13059(t_small_parse_table_array *v)
{
	v->a[261180] = anon_sym_GT_AMP_DASH;
	v->a[261181] = state(4868);
	v->a[261182] = 2;
	v->a[261183] = sym_file_redirect;
	v->a[261184] = sym_herestring_redirect;
	v->a[261185] = actions(11485);
	v->a[261186] = 8;
	v->a[261187] = anon_sym_LT;
	v->a[261188] = anon_sym_GT;
	v->a[261189] = anon_sym_GT_GT;
	v->a[261190] = anon_sym_AMP_GT;
	v->a[261191] = anon_sym_AMP_GT_GT;
	v->a[261192] = anon_sym_LT_AMP;
	v->a[261193] = anon_sym_GT_AMP;
	v->a[261194] = anon_sym_GT_PIPE;
	v->a[261195] = actions(11412);
	v->a[261196] = 10;
	v->a[261197] = anon_sym_SEMI;
	v->a[261198] = anon_sym_PIPE_PIPE;
	v->a[261199] = anon_sym_AMP_AMP;
	small_parse_table_13060(v);
}

/* EOF small_parse_table_2611.c */
