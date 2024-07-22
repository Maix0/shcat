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
	v->a[60100] = anon_sym_GT_PIPE;
	v->a[60101] = anon_sym_LT_GT;
	v->a[60102] = anon_sym_LT_LT;
	v->a[60103] = anon_sym_LT_LT_DASH;
	v->a[60104] = anon_sym_SEMI;
	v->a[60105] = 4;
	v->a[60106] = actions(3);
	v->a[60107] = 1;
	v->a[60108] = sym_comment;
	v->a[60109] = actions(1055);
	v->a[60110] = 3;
	v->a[60111] = sym_file_descriptor;
	v->a[60112] = ts_builtin_sym_end;
	v->a[60113] = aux_sym_heredoc_redirect_token1;
	v->a[60114] = state(1046);
	v->a[60115] = 3;
	v->a[60116] = sym_file_redirect;
	v->a[60117] = sym_heredoc_redirect;
	v->a[60118] = aux_sym_redirected_statement_repeat1;
	v->a[60119] = actions(1057);
	small_parse_table_3006(v);
}

void	small_parse_table_3006(t_small_parse_table_array *v)
{
	v->a[60120] = 14;
	v->a[60121] = anon_sym_PIPE;
	v->a[60122] = anon_sym_SEMI_SEMI;
	v->a[60123] = anon_sym_AMP_AMP;
	v->a[60124] = anon_sym_PIPE_PIPE;
	v->a[60125] = anon_sym_LT;
	v->a[60126] = anon_sym_GT;
	v->a[60127] = anon_sym_GT_GT;
	v->a[60128] = anon_sym_LT_AMP;
	v->a[60129] = anon_sym_GT_AMP;
	v->a[60130] = anon_sym_GT_PIPE;
	v->a[60131] = anon_sym_LT_GT;
	v->a[60132] = anon_sym_LT_LT;
	v->a[60133] = anon_sym_LT_LT_DASH;
	v->a[60134] = anon_sym_SEMI;
	v->a[60135] = 7;
	v->a[60136] = actions(3);
	v->a[60137] = 1;
	v->a[60138] = sym_comment;
	v->a[60139] = actions(2043);
	small_parse_table_3007(v);
}

void	small_parse_table_3007(t_small_parse_table_array *v)
{
	v->a[60140] = 1;
	v->a[60141] = sym_file_descriptor;
	v->a[60142] = actions(1965);
	v->a[60143] = 2;
	v->a[60144] = anon_sym_LT_LT;
	v->a[60145] = anon_sym_LT_LT_DASH;
	v->a[60146] = actions(1968);
	v->a[60147] = 2;
	v->a[60148] = ts_builtin_sym_end;
	v->a[60149] = aux_sym_heredoc_redirect_token1;
	v->a[60150] = state(1102);
	v->a[60151] = 3;
	v->a[60152] = sym_file_redirect;
	v->a[60153] = sym_heredoc_redirect;
	v->a[60154] = aux_sym_redirected_statement_repeat1;
	v->a[60155] = actions(1960);
	v->a[60156] = 5;
	v->a[60157] = anon_sym_PIPE;
	v->a[60158] = anon_sym_SEMI_SEMI;
	v->a[60159] = anon_sym_AMP_AMP;
	small_parse_table_3008(v);
}

void	small_parse_table_3008(t_small_parse_table_array *v)
{
	v->a[60160] = anon_sym_PIPE_PIPE;
	v->a[60161] = anon_sym_SEMI;
	v->a[60162] = actions(2040);
	v->a[60163] = 7;
	v->a[60164] = anon_sym_LT;
	v->a[60165] = anon_sym_GT;
	v->a[60166] = anon_sym_GT_GT;
	v->a[60167] = anon_sym_LT_AMP;
	v->a[60168] = anon_sym_GT_AMP;
	v->a[60169] = anon_sym_GT_PIPE;
	v->a[60170] = anon_sym_LT_GT;
	v->a[60171] = 5;
	v->a[60172] = actions(3);
	v->a[60173] = 1;
	v->a[60174] = sym_comment;
	v->a[60175] = actions(2046);
	v->a[60176] = 1;
	v->a[60177] = sym_variable_name;
	v->a[60178] = state(1103);
	v->a[60179] = 2;
	small_parse_table_3009(v);
}

void	small_parse_table_3009(t_small_parse_table_array *v)
{
	v->a[60180] = sym_variable_assignment;
	v->a[60181] = aux_sym__variable_assignments_repeat1;
	v->a[60182] = actions(1955);
	v->a[60183] = 3;
	v->a[60184] = sym_file_descriptor;
	v->a[60185] = ts_builtin_sym_end;
	v->a[60186] = aux_sym_heredoc_redirect_token1;
	v->a[60187] = actions(1953);
	v->a[60188] = 14;
	v->a[60189] = anon_sym_PIPE;
	v->a[60190] = anon_sym_SEMI_SEMI;
	v->a[60191] = anon_sym_AMP_AMP;
	v->a[60192] = anon_sym_PIPE_PIPE;
	v->a[60193] = anon_sym_LT;
	v->a[60194] = anon_sym_GT;
	v->a[60195] = anon_sym_GT_GT;
	v->a[60196] = anon_sym_LT_AMP;
	v->a[60197] = anon_sym_GT_AMP;
	v->a[60198] = anon_sym_GT_PIPE;
	v->a[60199] = anon_sym_LT_GT;
	small_parse_table_3010(v);
}

/* EOF small_parse_table_601.c */
