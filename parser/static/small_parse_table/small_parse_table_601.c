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
	v->a[60100] = anon_sym_PIPE_PIPE;
	v->a[60101] = anon_sym_LT;
	v->a[60102] = anon_sym_GT;
	v->a[60103] = anon_sym_GT_GT;
	v->a[60104] = anon_sym_AMP_GT;
	v->a[60105] = anon_sym_AMP_GT_GT;
	v->a[60106] = anon_sym_LT_AMP;
	v->a[60107] = anon_sym_GT_AMP;
	v->a[60108] = anon_sym_GT_PIPE;
	v->a[60109] = anon_sym_LT_AMP_DASH;
	v->a[60110] = anon_sym_GT_AMP_DASH;
	v->a[60111] = anon_sym_LT_LT;
	v->a[60112] = anon_sym_LT_LT_DASH;
	v->a[60113] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[60114] = anon_sym_DOLLAR;
	v->a[60115] = sym__special_character;
	v->a[60116] = anon_sym_DQUOTE;
	v->a[60117] = sym_raw_string;
	v->a[60118] = aux_sym_number_token1;
	v->a[60119] = aux_sym_number_token2;
	small_parse_table_3006(v);
}

void	small_parse_table_3006(t_small_parse_table_array *v)
{
	v->a[60120] = anon_sym_DOLLAR_LBRACE;
	v->a[60121] = anon_sym_DOLLAR_LPAREN;
	v->a[60122] = anon_sym_BQUOTE;
	v->a[60123] = anon_sym_DOLLAR_BQUOTE;
	v->a[60124] = aux_sym__simple_variable_name_token1;
	v->a[60125] = sym_word;
	v->a[60126] = 8;
	v->a[60127] = actions(3);
	v->a[60128] = 1;
	v->a[60129] = sym_comment;
	v->a[60130] = actions(3632);
	v->a[60131] = 1;
	v->a[60132] = aux_sym_heredoc_redirect_token1;
	v->a[60133] = actions(3634);
	v->a[60134] = 1;
	v->a[60135] = sym_file_descriptor;
	v->a[60136] = actions(3960);
	v->a[60137] = 1;
	v->a[60138] = anon_sym_RPAREN;
	v->a[60139] = actions(3637);
	small_parse_table_3007(v);
}

void	small_parse_table_3007(t_small_parse_table_array *v)
{
	v->a[60140] = 3;
	v->a[60141] = sym_variable_name;
	v->a[60142] = sym_test_operator;
	v->a[60143] = sym__brace_start;
	v->a[60144] = actions(3627);
	v->a[60145] = 9;
	v->a[60146] = anon_sym_PIPE;
	v->a[60147] = anon_sym_SEMI_SEMI;
	v->a[60148] = anon_sym_PIPE_AMP;
	v->a[60149] = anon_sym_AMP_AMP;
	v->a[60150] = anon_sym_PIPE_PIPE;
	v->a[60151] = anon_sym_LT_LT;
	v->a[60152] = anon_sym_LT_LT_DASH;
	v->a[60153] = anon_sym_AMP;
	v->a[60154] = anon_sym_SEMI;
	v->a[60155] = actions(3629);
	v->a[60156] = 10;
	v->a[60157] = anon_sym_LT;
	v->a[60158] = anon_sym_GT;
	v->a[60159] = anon_sym_GT_GT;
	small_parse_table_3008(v);
}

void	small_parse_table_3008(t_small_parse_table_array *v)
{
	v->a[60160] = anon_sym_AMP_GT;
	v->a[60161] = anon_sym_AMP_GT_GT;
	v->a[60162] = anon_sym_LT_AMP;
	v->a[60163] = anon_sym_GT_AMP;
	v->a[60164] = anon_sym_GT_PIPE;
	v->a[60165] = anon_sym_LT_AMP_DASH;
	v->a[60166] = anon_sym_GT_AMP_DASH;
	v->a[60167] = actions(3625);
	v->a[60168] = 12;
	v->a[60169] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[60170] = anon_sym_DOLLAR;
	v->a[60171] = sym__special_character;
	v->a[60172] = anon_sym_DQUOTE;
	v->a[60173] = sym_raw_string;
	v->a[60174] = aux_sym_number_token1;
	v->a[60175] = aux_sym_number_token2;
	v->a[60176] = anon_sym_DOLLAR_LBRACE;
	v->a[60177] = anon_sym_DOLLAR_LPAREN;
	v->a[60178] = anon_sym_BQUOTE;
	v->a[60179] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_3009(v);
}

void	small_parse_table_3009(t_small_parse_table_array *v)
{
	v->a[60180] = sym_word;
	v->a[60181] = 8;
	v->a[60182] = actions(3);
	v->a[60183] = 1;
	v->a[60184] = sym_comment;
	v->a[60185] = actions(3632);
	v->a[60186] = 1;
	v->a[60187] = aux_sym_heredoc_redirect_token1;
	v->a[60188] = actions(3634);
	v->a[60189] = 1;
	v->a[60190] = sym_file_descriptor;
	v->a[60191] = actions(3963);
	v->a[60192] = 1;
	v->a[60193] = anon_sym_RPAREN;
	v->a[60194] = actions(3637);
	v->a[60195] = 3;
	v->a[60196] = sym_variable_name;
	v->a[60197] = sym_test_operator;
	v->a[60198] = sym__brace_start;
	v->a[60199] = actions(3627);
	small_parse_table_3010(v);
}

/* EOF small_parse_table_601.c */
