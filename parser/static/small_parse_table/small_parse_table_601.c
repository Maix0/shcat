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
	v->a[60100] = anon_sym_DQUOTE;
	v->a[60101] = sym_raw_string;
	v->a[60102] = sym_number;
	v->a[60103] = anon_sym_DOLLAR_LBRACE;
	v->a[60104] = anon_sym_DOLLAR_LPAREN;
	v->a[60105] = anon_sym_BQUOTE;
	v->a[60106] = sym_word;
	v->a[60107] = 12;
	v->a[60108] = actions(3);
	v->a[60109] = 1;
	v->a[60110] = sym_comment;
	v->a[60111] = actions(680);
	v->a[60112] = 1;
	v->a[60113] = anon_sym_BQUOTE;
	v->a[60114] = actions(682);
	v->a[60115] = 1;
	v->a[60116] = anon_sym_PIPE;
	v->a[60117] = actions(2009);
	v->a[60118] = 1;
	v->a[60119] = aux_sym_heredoc_redirect_token1;
	small_parse_table_3006(v);
}

void	small_parse_table_3006(t_small_parse_table_array *v)
{
	v->a[60120] = actions(2041);
	v->a[60121] = 1;
	v->a[60122] = sym_file_descriptor;
	v->a[60123] = state(871);
	v->a[60124] = 1;
	v->a[60125] = sym_terminator;
	v->a[60126] = actions(754);
	v->a[60127] = 2;
	v->a[60128] = anon_sym_LT_LT;
	v->a[60129] = anon_sym_LT_LT_DASH;
	v->a[60130] = actions(963);
	v->a[60131] = 2;
	v->a[60132] = anon_sym_AMP_AMP;
	v->a[60133] = anon_sym_PIPE_PIPE;
	v->a[60134] = actions(2039);
	v->a[60135] = 2;
	v->a[60136] = anon_sym_LT_AMP_DASH;
	v->a[60137] = anon_sym_GT_AMP_DASH;
	v->a[60138] = actions(750);
	v->a[60139] = 3;
	small_parse_table_3007(v);
}

void	small_parse_table_3007(t_small_parse_table_array *v)
{
	v->a[60140] = anon_sym_SEMI_SEMI;
	v->a[60141] = anon_sym_AMP;
	v->a[60142] = anon_sym_SEMI;
	v->a[60143] = state(1165);
	v->a[60144] = 3;
	v->a[60145] = sym_file_redirect;
	v->a[60146] = sym_heredoc_redirect;
	v->a[60147] = aux_sym_redirected_statement_repeat1;
	v->a[60148] = actions(2037);
	v->a[60149] = 6;
	v->a[60150] = anon_sym_LT;
	v->a[60151] = anon_sym_GT;
	v->a[60152] = anon_sym_GT_GT;
	v->a[60153] = anon_sym_LT_AMP;
	v->a[60154] = anon_sym_GT_AMP;
	v->a[60155] = anon_sym_GT_PIPE;
	v->a[60156] = 12;
	v->a[60157] = actions(3);
	v->a[60158] = 1;
	v->a[60159] = sym_comment;
	small_parse_table_3008(v);
}

void	small_parse_table_3008(t_small_parse_table_array *v)
{
	v->a[60160] = actions(682);
	v->a[60161] = 1;
	v->a[60162] = anon_sym_PIPE;
	v->a[60163] = actions(779);
	v->a[60164] = 1;
	v->a[60165] = ts_builtin_sym_end;
	v->a[60166] = actions(2029);
	v->a[60167] = 1;
	v->a[60168] = aux_sym_heredoc_redirect_token1;
	v->a[60169] = actions(2031);
	v->a[60170] = 1;
	v->a[60171] = sym_file_descriptor;
	v->a[60172] = state(806);
	v->a[60173] = 1;
	v->a[60174] = sym_terminator;
	v->a[60175] = actions(754);
	v->a[60176] = 2;
	v->a[60177] = anon_sym_LT_LT;
	v->a[60178] = anon_sym_LT_LT_DASH;
	v->a[60179] = actions(783);
	small_parse_table_3009(v);
}

void	small_parse_table_3009(t_small_parse_table_array *v)
{
	v->a[60180] = 2;
	v->a[60181] = anon_sym_AMP_AMP;
	v->a[60182] = anon_sym_PIPE_PIPE;
	v->a[60183] = actions(2027);
	v->a[60184] = 2;
	v->a[60185] = anon_sym_LT_AMP_DASH;
	v->a[60186] = anon_sym_GT_AMP_DASH;
	v->a[60187] = actions(781);
	v->a[60188] = 3;
	v->a[60189] = anon_sym_SEMI_SEMI;
	v->a[60190] = anon_sym_AMP;
	v->a[60191] = anon_sym_SEMI;
	v->a[60192] = state(1160);
	v->a[60193] = 3;
	v->a[60194] = sym_file_redirect;
	v->a[60195] = sym_heredoc_redirect;
	v->a[60196] = aux_sym_redirected_statement_repeat1;
	v->a[60197] = actions(2025);
	v->a[60198] = 6;
	v->a[60199] = anon_sym_LT;
	small_parse_table_3010(v);
}

/* EOF small_parse_table_601.c */
