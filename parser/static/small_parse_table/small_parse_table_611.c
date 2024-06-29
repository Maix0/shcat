/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_611.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3055(t_small_parse_table_array *v)
{
	v->a[61100] = 1;
	v->a[61101] = sym_comment;
	v->a[61102] = actions(764);
	v->a[61103] = 1;
	v->a[61104] = anon_sym_BQUOTE;
	v->a[61105] = actions(766);
	v->a[61106] = 1;
	v->a[61107] = anon_sym_PIPE;
	v->a[61108] = actions(2031);
	v->a[61109] = 1;
	v->a[61110] = aux_sym_heredoc_redirect_token1;
	v->a[61111] = actions(2033);
	v->a[61112] = 1;
	v->a[61113] = sym_file_descriptor;
	v->a[61114] = state(849);
	v->a[61115] = 1;
	v->a[61116] = sym_terminator;
	v->a[61117] = actions(804);
	v->a[61118] = 2;
	v->a[61119] = anon_sym_LT_LT;
	small_parse_table_3056(v);
}

void	small_parse_table_3056(t_small_parse_table_array *v)
{
	v->a[61120] = anon_sym_LT_LT_DASH;
	v->a[61121] = actions(842);
	v->a[61122] = 2;
	v->a[61123] = anon_sym_AMP_AMP;
	v->a[61124] = anon_sym_PIPE_PIPE;
	v->a[61125] = actions(2029);
	v->a[61126] = 2;
	v->a[61127] = anon_sym_LT_AMP_DASH;
	v->a[61128] = anon_sym_GT_AMP_DASH;
	v->a[61129] = actions(800);
	v->a[61130] = 3;
	v->a[61131] = anon_sym_SEMI_SEMI;
	v->a[61132] = anon_sym_AMP;
	v->a[61133] = anon_sym_SEMI;
	v->a[61134] = state(1157);
	v->a[61135] = 3;
	v->a[61136] = sym_file_redirect;
	v->a[61137] = sym_heredoc_redirect;
	v->a[61138] = aux_sym_redirected_statement_repeat1;
	v->a[61139] = actions(2027);
	small_parse_table_3057(v);
}

void	small_parse_table_3057(t_small_parse_table_array *v)
{
	v->a[61140] = 8;
	v->a[61141] = anon_sym_LT;
	v->a[61142] = anon_sym_GT;
	v->a[61143] = anon_sym_GT_GT;
	v->a[61144] = anon_sym_AMP_GT;
	v->a[61145] = anon_sym_AMP_GT_GT;
	v->a[61146] = anon_sym_LT_AMP;
	v->a[61147] = anon_sym_GT_AMP;
	v->a[61148] = anon_sym_GT_PIPE;
	v->a[61149] = 12;
	v->a[61150] = actions(3);
	v->a[61151] = 1;
	v->a[61152] = sym_comment;
	v->a[61153] = actions(764);
	v->a[61154] = 1;
	v->a[61155] = anon_sym_BQUOTE;
	v->a[61156] = actions(766);
	v->a[61157] = 1;
	v->a[61158] = anon_sym_PIPE;
	v->a[61159] = actions(2031);
	small_parse_table_3058(v);
}

void	small_parse_table_3058(t_small_parse_table_array *v)
{
	v->a[61160] = 1;
	v->a[61161] = aux_sym_heredoc_redirect_token1;
	v->a[61162] = actions(2033);
	v->a[61163] = 1;
	v->a[61164] = sym_file_descriptor;
	v->a[61165] = state(851);
	v->a[61166] = 1;
	v->a[61167] = sym_terminator;
	v->a[61168] = actions(804);
	v->a[61169] = 2;
	v->a[61170] = anon_sym_LT_LT;
	v->a[61171] = anon_sym_LT_LT_DASH;
	v->a[61172] = actions(842);
	v->a[61173] = 2;
	v->a[61174] = anon_sym_AMP_AMP;
	v->a[61175] = anon_sym_PIPE_PIPE;
	v->a[61176] = actions(2029);
	v->a[61177] = 2;
	v->a[61178] = anon_sym_LT_AMP_DASH;
	v->a[61179] = anon_sym_GT_AMP_DASH;
	small_parse_table_3059(v);
}

void	small_parse_table_3059(t_small_parse_table_array *v)
{
	v->a[61180] = actions(800);
	v->a[61181] = 3;
	v->a[61182] = anon_sym_SEMI_SEMI;
	v->a[61183] = anon_sym_AMP;
	v->a[61184] = anon_sym_SEMI;
	v->a[61185] = state(1157);
	v->a[61186] = 3;
	v->a[61187] = sym_file_redirect;
	v->a[61188] = sym_heredoc_redirect;
	v->a[61189] = aux_sym_redirected_statement_repeat1;
	v->a[61190] = actions(2027);
	v->a[61191] = 8;
	v->a[61192] = anon_sym_LT;
	v->a[61193] = anon_sym_GT;
	v->a[61194] = anon_sym_GT_GT;
	v->a[61195] = anon_sym_AMP_GT;
	v->a[61196] = anon_sym_AMP_GT_GT;
	v->a[61197] = anon_sym_LT_AMP;
	v->a[61198] = anon_sym_GT_AMP;
	v->a[61199] = anon_sym_GT_PIPE;
	small_parse_table_3060(v);
}

/* EOF small_parse_table_611.c */
