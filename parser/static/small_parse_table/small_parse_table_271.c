/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_271.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1355(t_small_parse_table_array *v)
{
	v->a[27100] = state(800);
	v->a[27101] = 6;
	v->a[27102] = sym_arithmetic_expansion;
	v->a[27103] = sym_string;
	v->a[27104] = sym_number;
	v->a[27105] = sym_simple_expansion;
	v->a[27106] = sym_expansion;
	v->a[27107] = sym_command_substitution;
	v->a[27108] = actions(515);
	v->a[27109] = 15;
	v->a[27110] = anon_sym_PIPE;
	v->a[27111] = anon_sym_AMP_AMP;
	v->a[27112] = anon_sym_PIPE_PIPE;
	v->a[27113] = anon_sym_LT;
	v->a[27114] = anon_sym_GT;
	v->a[27115] = anon_sym_GT_GT;
	v->a[27116] = anon_sym_AMP_GT;
	v->a[27117] = anon_sym_AMP_GT_GT;
	v->a[27118] = anon_sym_LT_AMP;
	v->a[27119] = anon_sym_GT_AMP;
	small_parse_table_1356(v);
}

void	small_parse_table_1356(t_small_parse_table_array *v)
{
	v->a[27120] = anon_sym_GT_PIPE;
	v->a[27121] = anon_sym_LT_AMP_DASH;
	v->a[27122] = anon_sym_GT_AMP_DASH;
	v->a[27123] = anon_sym_LT_LT;
	v->a[27124] = anon_sym_LT_LT_DASH;
	v->a[27125] = 11;
	v->a[27126] = actions(3);
	v->a[27127] = 1;
	v->a[27128] = sym_comment;
	v->a[27129] = actions(1002);
	v->a[27130] = 1;
	v->a[27131] = anon_sym_PIPE;
	v->a[27132] = actions(1006);
	v->a[27133] = 1;
	v->a[27134] = sym_file_descriptor;
	v->a[27135] = actions(1041);
	v->a[27136] = 1;
	v->a[27137] = sym_variable_name;
	v->a[27138] = actions(1033);
	v->a[27139] = 2;
	small_parse_table_1357(v);
}

void	small_parse_table_1357(t_small_parse_table_array *v)
{
	v->a[27140] = anon_sym_esac;
	v->a[27141] = anon_sym_SEMI_SEMI;
	v->a[27142] = actions(1035);
	v->a[27143] = 2;
	v->a[27144] = anon_sym_AMP_AMP;
	v->a[27145] = anon_sym_PIPE_PIPE;
	v->a[27146] = actions(1037);
	v->a[27147] = 2;
	v->a[27148] = anon_sym_LT_LT;
	v->a[27149] = anon_sym_LT_LT_DASH;
	v->a[27150] = state(1039);
	v->a[27151] = 2;
	v->a[27152] = sym_variable_assignment;
	v->a[27153] = aux_sym_variable_assignments_repeat1;
	v->a[27154] = actions(1039);
	v->a[27155] = 3;
	v->a[27156] = aux_sym_heredoc_redirect_token1;
	v->a[27157] = anon_sym_AMP;
	v->a[27158] = anon_sym_SEMI;
	v->a[27159] = state(1035);
	small_parse_table_1358(v);
}

void	small_parse_table_1358(t_small_parse_table_array *v)
{
	v->a[27160] = 3;
	v->a[27161] = sym_file_redirect;
	v->a[27162] = sym_heredoc_redirect;
	v->a[27163] = aux_sym_redirected_statement_repeat1;
	v->a[27164] = actions(1000);
	v->a[27165] = 20;
	v->a[27166] = anon_sym_LT;
	v->a[27167] = anon_sym_GT;
	v->a[27168] = anon_sym_GT_GT;
	v->a[27169] = anon_sym_AMP_GT;
	v->a[27170] = anon_sym_AMP_GT_GT;
	v->a[27171] = anon_sym_LT_AMP;
	v->a[27172] = anon_sym_GT_AMP;
	v->a[27173] = anon_sym_GT_PIPE;
	v->a[27174] = anon_sym_LT_AMP_DASH;
	v->a[27175] = anon_sym_GT_AMP_DASH;
	v->a[27176] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27177] = anon_sym_DOLLAR;
	v->a[27178] = anon_sym_DQUOTE;
	v->a[27179] = sym_raw_string;
	small_parse_table_1359(v);
}

void	small_parse_table_1359(t_small_parse_table_array *v)
{
	v->a[27180] = aux_sym_number_token1;
	v->a[27181] = aux_sym_number_token2;
	v->a[27182] = anon_sym_DOLLAR_LBRACE;
	v->a[27183] = anon_sym_DOLLAR_LPAREN;
	v->a[27184] = anon_sym_BQUOTE;
	v->a[27185] = sym_word;
	v->a[27186] = 6;
	v->a[27187] = actions(3);
	v->a[27188] = 1;
	v->a[27189] = sym_comment;
	v->a[27190] = actions(413);
	v->a[27191] = 1;
	v->a[27192] = sym_file_descriptor;
	v->a[27193] = actions(1048);
	v->a[27194] = 1;
	v->a[27195] = sym_variable_name;
	v->a[27196] = actions(1046);
	v->a[27197] = 2;
	v->a[27198] = aux_sym__simple_variable_name_token1;
	v->a[27199] = aux_sym__multiline_variable_name_token1;
	small_parse_table_1360(v);
}

/* EOF small_parse_table_271.c */
