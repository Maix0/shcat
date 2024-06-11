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
	v->a[60100] = anon_sym_BQUOTE;
	v->a[60101] = sym_word;
	v->a[60102] = 5;
	v->a[60103] = actions(3);
	v->a[60104] = 1;
	v->a[60105] = sym_comment;
	v->a[60106] = actions(608);
	v->a[60107] = 2;
	v->a[60108] = sym_file_descriptor;
	v->a[60109] = sym_variable_name;
	v->a[60110] = state(1034);
	v->a[60111] = 2;
	v->a[60112] = sym_concatenation;
	v->a[60113] = aux_sym_for_statement_repeat1;
	v->a[60114] = state(1200);
	v->a[60115] = 5;
	v->a[60116] = sym_arithmetic_expansion;
	v->a[60117] = sym_string;
	v->a[60118] = sym_simple_expansion;
	v->a[60119] = sym_expansion;
	small_parse_table_3006(v);
}

void	small_parse_table_3006(t_small_parse_table_array *v)
{
	v->a[60120] = sym_command_substitution;
	v->a[60121] = actions(610);
	v->a[60122] = 19;
	v->a[60123] = anon_sym_LT;
	v->a[60124] = anon_sym_GT;
	v->a[60125] = anon_sym_GT_GT;
	v->a[60126] = anon_sym_AMP_GT;
	v->a[60127] = anon_sym_AMP_GT_GT;
	v->a[60128] = anon_sym_LT_AMP;
	v->a[60129] = anon_sym_GT_AMP;
	v->a[60130] = anon_sym_GT_PIPE;
	v->a[60131] = anon_sym_LT_AMP_DASH;
	v->a[60132] = anon_sym_GT_AMP_DASH;
	v->a[60133] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[60134] = anon_sym_DOLLAR;
	v->a[60135] = anon_sym_DQUOTE;
	v->a[60136] = sym_raw_string;
	v->a[60137] = sym_number;
	v->a[60138] = anon_sym_DOLLAR_LBRACE;
	v->a[60139] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_3007(v);
}

void	small_parse_table_3007(t_small_parse_table_array *v)
{
	v->a[60140] = anon_sym_BQUOTE;
	v->a[60141] = sym_word;
	v->a[60142] = 3;
	v->a[60143] = actions(3);
	v->a[60144] = 1;
	v->a[60145] = sym_comment;
	v->a[60146] = actions(1205);
	v->a[60147] = 3;
	v->a[60148] = sym_file_descriptor;
	v->a[60149] = sym__concat;
	v->a[60150] = sym__bare_dollar;
	v->a[60151] = actions(1203);
	v->a[60152] = 25;
	v->a[60153] = anon_sym_PIPE;
	v->a[60154] = anon_sym_AMP_AMP;
	v->a[60155] = anon_sym_PIPE_PIPE;
	v->a[60156] = anon_sym_LT;
	v->a[60157] = anon_sym_GT;
	v->a[60158] = anon_sym_GT_GT;
	v->a[60159] = anon_sym_AMP_GT;
	small_parse_table_3008(v);
}

void	small_parse_table_3008(t_small_parse_table_array *v)
{
	v->a[60160] = anon_sym_AMP_GT_GT;
	v->a[60161] = anon_sym_LT_AMP;
	v->a[60162] = anon_sym_GT_AMP;
	v->a[60163] = anon_sym_GT_PIPE;
	v->a[60164] = anon_sym_LT_AMP_DASH;
	v->a[60165] = anon_sym_GT_AMP_DASH;
	v->a[60166] = anon_sym_LT_LT;
	v->a[60167] = anon_sym_LT_LT_DASH;
	v->a[60168] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[60169] = aux_sym_concatenation_token1;
	v->a[60170] = anon_sym_DOLLAR;
	v->a[60171] = anon_sym_DQUOTE;
	v->a[60172] = sym_raw_string;
	v->a[60173] = sym_number;
	v->a[60174] = anon_sym_DOLLAR_LBRACE;
	v->a[60175] = anon_sym_DOLLAR_LPAREN;
	v->a[60176] = anon_sym_BQUOTE;
	v->a[60177] = sym_word;
	v->a[60178] = 3;
	v->a[60179] = actions(3);
	small_parse_table_3009(v);
}

void	small_parse_table_3009(t_small_parse_table_array *v)
{
	v->a[60180] = 1;
	v->a[60181] = sym_comment;
	v->a[60182] = actions(1163);
	v->a[60183] = 3;
	v->a[60184] = sym_file_descriptor;
	v->a[60185] = sym__concat;
	v->a[60186] = sym__bare_dollar;
	v->a[60187] = actions(1161);
	v->a[60188] = 25;
	v->a[60189] = anon_sym_PIPE;
	v->a[60190] = anon_sym_AMP_AMP;
	v->a[60191] = anon_sym_PIPE_PIPE;
	v->a[60192] = anon_sym_LT;
	v->a[60193] = anon_sym_GT;
	v->a[60194] = anon_sym_GT_GT;
	v->a[60195] = anon_sym_AMP_GT;
	v->a[60196] = anon_sym_AMP_GT_GT;
	v->a[60197] = anon_sym_LT_AMP;
	v->a[60198] = anon_sym_GT_AMP;
	v->a[60199] = anon_sym_GT_PIPE;
	small_parse_table_3010(v);
}

/* EOF small_parse_table_601.c */
