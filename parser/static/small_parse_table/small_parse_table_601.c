/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_601.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3005(t_small_parse_table_array *v)
{
	v->a[60100] = actions(1871);
	v->a[60101] = 1;
	v->a[60102] = sym_file_descriptor;
	v->a[60103] = state(830);
	v->a[60104] = 1;
	v->a[60105] = sym_terminator;
	v->a[60106] = actions(700);
	v->a[60107] = 2;
	v->a[60108] = anon_sym_LT_LT;
	v->a[60109] = anon_sym_LT_LT_DASH;
	v->a[60110] = actions(936);
	v->a[60111] = 2;
	v->a[60112] = anon_sym_AMP_AMP;
	v->a[60113] = anon_sym_PIPE_PIPE;
	v->a[60114] = actions(696);
	v->a[60115] = 3;
	v->a[60116] = anon_sym_SEMI_SEMI;
	v->a[60117] = anon_sym_AMP;
	v->a[60118] = anon_sym_SEMI;
	v->a[60119] = state(1034);
	small_parse_table_3006(v);
}

void	small_parse_table_3006(t_small_parse_table_array *v)
{
	v->a[60120] = 3;
	v->a[60121] = sym_file_redirect;
	v->a[60122] = sym_heredoc_redirect;
	v->a[60123] = aux_sym_redirected_statement_repeat1;
	v->a[60124] = actions(1869);
	v->a[60125] = 7;
	v->a[60126] = anon_sym_LT;
	v->a[60127] = anon_sym_GT;
	v->a[60128] = anon_sym_GT_GT;
	v->a[60129] = anon_sym_LT_AMP;
	v->a[60130] = anon_sym_GT_AMP;
	v->a[60131] = anon_sym_GT_PIPE;
	v->a[60132] = anon_sym_LT_GT;
	v->a[60133] = 7;
	v->a[60134] = actions(3);
	v->a[60135] = 1;
	v->a[60136] = sym_comment;
	v->a[60137] = actions(1865);
	v->a[60138] = 1;
	v->a[60139] = sym_file_descriptor;
	small_parse_table_3007(v);
}

void	small_parse_table_3007(t_small_parse_table_array *v)
{
	v->a[60140] = actions(700);
	v->a[60141] = 2;
	v->a[60142] = anon_sym_LT_LT;
	v->a[60143] = anon_sym_LT_LT_DASH;
	v->a[60144] = actions(1976);
	v->a[60145] = 2;
	v->a[60146] = ts_builtin_sym_end;
	v->a[60147] = aux_sym_heredoc_redirect_token1;
	v->a[60148] = state(1050);
	v->a[60149] = 3;
	v->a[60150] = sym_file_redirect;
	v->a[60151] = sym_heredoc_redirect;
	v->a[60152] = aux_sym_redirected_statement_repeat1;
	v->a[60153] = actions(1974);
	v->a[60154] = 6;
	v->a[60155] = anon_sym_PIPE;
	v->a[60156] = anon_sym_SEMI_SEMI;
	v->a[60157] = anon_sym_AMP_AMP;
	v->a[60158] = anon_sym_PIPE_PIPE;
	v->a[60159] = anon_sym_AMP;
	small_parse_table_3008(v);
}

void	small_parse_table_3008(t_small_parse_table_array *v)
{
	v->a[60160] = anon_sym_SEMI;
	v->a[60161] = actions(1861);
	v->a[60162] = 7;
	v->a[60163] = anon_sym_LT;
	v->a[60164] = anon_sym_GT;
	v->a[60165] = anon_sym_GT_GT;
	v->a[60166] = anon_sym_LT_AMP;
	v->a[60167] = anon_sym_GT_AMP;
	v->a[60168] = anon_sym_GT_PIPE;
	v->a[60169] = anon_sym_LT_GT;
	v->a[60170] = 10;
	v->a[60171] = actions(3);
	v->a[60172] = 1;
	v->a[60173] = sym_comment;
	v->a[60174] = actions(694);
	v->a[60175] = 1;
	v->a[60176] = anon_sym_BQUOTE;
	v->a[60177] = actions(1857);
	v->a[60178] = 1;
	v->a[60179] = aux_sym_heredoc_redirect_token1;
	small_parse_table_3009(v);
}

void	small_parse_table_3009(t_small_parse_table_array *v)
{
	v->a[60180] = actions(1871);
	v->a[60181] = 1;
	v->a[60182] = sym_file_descriptor;
	v->a[60183] = state(832);
	v->a[60184] = 1;
	v->a[60185] = sym_terminator;
	v->a[60186] = actions(700);
	v->a[60187] = 2;
	v->a[60188] = anon_sym_LT_LT;
	v->a[60189] = anon_sym_LT_LT_DASH;
	v->a[60190] = actions(936);
	v->a[60191] = 2;
	v->a[60192] = anon_sym_AMP_AMP;
	v->a[60193] = anon_sym_PIPE_PIPE;
	v->a[60194] = actions(696);
	v->a[60195] = 3;
	v->a[60196] = anon_sym_SEMI_SEMI;
	v->a[60197] = anon_sym_AMP;
	v->a[60198] = anon_sym_SEMI;
	v->a[60199] = state(1034);
	small_parse_table_3010(v);
}

/* EOF small_parse_table_601.c */
