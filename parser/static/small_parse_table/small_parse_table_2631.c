/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2631.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13155(t_small_parse_table_array *v)
{
	v->a[263100] = anon_sym_DASH;
	v->a[263101] = anon_sym_STAR;
	v->a[263102] = anon_sym_QMARK;
	v->a[263103] = anon_sym_AT2;
	v->a[263104] = actions(11756);
	v->a[263105] = 5;
	v->a[263106] = anon_sym_BANG;
	v->a[263107] = anon_sym_DOLLAR;
	v->a[263108] = anon_sym_POUND;
	v->a[263109] = anon_sym_0;
	v->a[263110] = anon_sym__;
	v->a[263111] = 10;
	v->a[263112] = actions(3);
	v->a[263113] = 1;
	v->a[263114] = sym_comment;
	v->a[263115] = actions(4340);
	v->a[263116] = 1;
	v->a[263117] = aux_sym_heredoc_redirect_token1;
	v->a[263118] = actions(11457);
	v->a[263119] = 1;
	small_parse_table_13156(v);
}

void	small_parse_table_13156(t_small_parse_table_array *v)
{
	v->a[263120] = sym_file_descriptor;
	v->a[263121] = actions(4251);
	v->a[263122] = 2;
	v->a[263123] = anon_sym_PIPE_PIPE;
	v->a[263124] = anon_sym_AMP_AMP;
	v->a[263125] = actions(4255);
	v->a[263126] = 2;
	v->a[263127] = anon_sym_LT_LT;
	v->a[263128] = anon_sym_LT_LT_DASH;
	v->a[263129] = actions(4338);
	v->a[263130] = 2;
	v->a[263131] = anon_sym_SEMI;
	v->a[263132] = anon_sym_AMP;
	v->a[263133] = actions(11282);
	v->a[263134] = 2;
	v->a[263135] = anon_sym_LT_AMP_DASH;
	v->a[263136] = anon_sym_GT_AMP_DASH;
	v->a[263137] = state(4283);
	v->a[263138] = 3;
	v->a[263139] = sym_file_redirect;
	small_parse_table_13157(v);
}

void	small_parse_table_13157(t_small_parse_table_array *v)
{
	v->a[263140] = sym_heredoc_redirect;
	v->a[263141] = aux_sym_redirected_statement_repeat1;
	v->a[263142] = actions(2719);
	v->a[263143] = 4;
	v->a[263144] = anon_sym_esac;
	v->a[263145] = anon_sym_SEMI_SEMI;
	v->a[263146] = anon_sym_SEMI_AMP;
	v->a[263147] = anon_sym_SEMI_SEMI_AMP;
	v->a[263148] = actions(11280);
	v->a[263149] = 8;
	v->a[263150] = anon_sym_LT;
	v->a[263151] = anon_sym_GT;
	v->a[263152] = anon_sym_GT_GT;
	v->a[263153] = anon_sym_AMP_GT;
	v->a[263154] = anon_sym_AMP_GT_GT;
	v->a[263155] = anon_sym_LT_AMP;
	v->a[263156] = anon_sym_GT_AMP;
	v->a[263157] = anon_sym_GT_PIPE;
	v->a[263158] = 11;
	v->a[263159] = actions(3);
	small_parse_table_13158(v);
}

void	small_parse_table_13158(t_small_parse_table_array *v)
{
	v->a[263160] = 1;
	v->a[263161] = sym_comment;
	v->a[263162] = actions(2719);
	v->a[263163] = 1;
	v->a[263164] = anon_sym_BQUOTE;
	v->a[263165] = actions(5357);
	v->a[263166] = 1;
	v->a[263167] = aux_sym_heredoc_redirect_token1;
	v->a[263168] = actions(11856);
	v->a[263169] = 1;
	v->a[263170] = sym_file_descriptor;
	v->a[263171] = actions(4253);
	v->a[263172] = 2;
	v->a[263173] = anon_sym_PIPE;
	v->a[263174] = anon_sym_PIPE_AMP;
	v->a[263175] = actions(4692);
	v->a[263176] = 2;
	v->a[263177] = anon_sym_LT_LT;
	v->a[263178] = anon_sym_LT_LT_DASH;
	v->a[263179] = actions(5355);
	small_parse_table_13159(v);
}

void	small_parse_table_13159(t_small_parse_table_array *v)
{
	v->a[263180] = 2;
	v->a[263181] = anon_sym_PIPE_PIPE;
	v->a[263182] = anon_sym_AMP_AMP;
	v->a[263183] = actions(11487);
	v->a[263184] = 2;
	v->a[263185] = anon_sym_LT_AMP_DASH;
	v->a[263186] = anon_sym_GT_AMP_DASH;
	v->a[263187] = actions(5353);
	v->a[263188] = 3;
	v->a[263189] = anon_sym_SEMI;
	v->a[263190] = anon_sym_AMP;
	v->a[263191] = anon_sym_SEMI_SEMI;
	v->a[263192] = state(4697);
	v->a[263193] = 3;
	v->a[263194] = sym_file_redirect;
	v->a[263195] = sym_heredoc_redirect;
	v->a[263196] = aux_sym_redirected_statement_repeat1;
	v->a[263197] = actions(11485);
	v->a[263198] = 8;
	v->a[263199] = anon_sym_LT;
	small_parse_table_13160(v);
}

/* EOF small_parse_table_2631.c */
