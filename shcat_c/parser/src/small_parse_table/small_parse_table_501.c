/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_501.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2505(t_small_parse_table_array *v)
{
	v->a[50100] = anon_sym_AMP_GT_GT;
	v->a[50101] = anon_sym_LT_AMP;
	v->a[50102] = anon_sym_GT_AMP;
	v->a[50103] = anon_sym_GT_PIPE;
	v->a[50104] = anon_sym_LT_AMP_DASH;
	v->a[50105] = anon_sym_GT_AMP_DASH;
	v->a[50106] = anon_sym_LT_LT_DASH;
	v->a[50107] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[50108] = anon_sym_DOLLAR_LBRACK;
	v->a[50109] = anon_sym_DOLLAR;
	v->a[50110] = sym__special_character;
	v->a[50111] = anon_sym_DQUOTE;
	v->a[50112] = sym_raw_string;
	v->a[50113] = sym_ansi_c_string;
	v->a[50114] = aux_sym_number_token1;
	v->a[50115] = aux_sym_number_token2;
	v->a[50116] = anon_sym_DOLLAR_LBRACE;
	v->a[50117] = anon_sym_DOLLAR_LPAREN;
	v->a[50118] = anon_sym_BQUOTE;
	v->a[50119] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_2506(v);
}

void	small_parse_table_2506(t_small_parse_table_array *v)
{
	v->a[50120] = anon_sym_LT_LPAREN;
	v->a[50121] = anon_sym_GT_LPAREN;
	v->a[50122] = aux_sym__simple_variable_name_token1;
	v->a[50123] = sym_word;
	v->a[50124] = 6;
	v->a[50125] = actions(3);
	v->a[50126] = 1;
	v->a[50127] = sym_comment;
	v->a[50128] = actions(5397);
	v->a[50129] = 1;
	v->a[50130] = aux_sym_concatenation_token1;
	v->a[50131] = actions(5399);
	v->a[50132] = 1;
	v->a[50133] = sym__concat;
	v->a[50134] = state(1251);
	v->a[50135] = 1;
	v->a[50136] = aux_sym_concatenation_repeat1;
	v->a[50137] = actions(5069);
	v->a[50138] = 5;
	v->a[50139] = sym_file_descriptor;
	small_parse_table_2507(v);
}

void	small_parse_table_2507(t_small_parse_table_array *v)
{
	v->a[50140] = sym_variable_name;
	v->a[50141] = sym_test_operator;
	v->a[50142] = sym__brace_start;
	v->a[50143] = aux_sym_heredoc_redirect_token1;
	v->a[50144] = actions(5067);
	v->a[50145] = 39;
	v->a[50146] = anon_sym_LPAREN_LPAREN;
	v->a[50147] = anon_sym_SEMI;
	v->a[50148] = anon_sym_PIPE_PIPE;
	v->a[50149] = anon_sym_AMP_AMP;
	v->a[50150] = anon_sym_PIPE;
	v->a[50151] = anon_sym_AMP;
	v->a[50152] = anon_sym_LT;
	v->a[50153] = anon_sym_GT;
	v->a[50154] = anon_sym_LT_LT;
	v->a[50155] = anon_sym_GT_GT;
	v->a[50156] = anon_sym_SEMI_SEMI;
	v->a[50157] = anon_sym_SEMI_AMP;
	v->a[50158] = anon_sym_SEMI_SEMI_AMP;
	v->a[50159] = anon_sym_PIPE_AMP;
	small_parse_table_2508(v);
}

void	small_parse_table_2508(t_small_parse_table_array *v)
{
	v->a[50160] = anon_sym_AMP_GT;
	v->a[50161] = anon_sym_AMP_GT_GT;
	v->a[50162] = anon_sym_LT_AMP;
	v->a[50163] = anon_sym_GT_AMP;
	v->a[50164] = anon_sym_GT_PIPE;
	v->a[50165] = anon_sym_LT_AMP_DASH;
	v->a[50166] = anon_sym_GT_AMP_DASH;
	v->a[50167] = anon_sym_LT_LT_DASH;
	v->a[50168] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[50169] = anon_sym_DOLLAR_LBRACK;
	v->a[50170] = anon_sym_DOLLAR;
	v->a[50171] = sym__special_character;
	v->a[50172] = anon_sym_DQUOTE;
	v->a[50173] = sym_raw_string;
	v->a[50174] = sym_ansi_c_string;
	v->a[50175] = aux_sym_number_token1;
	v->a[50176] = aux_sym_number_token2;
	v->a[50177] = anon_sym_DOLLAR_LBRACE;
	v->a[50178] = anon_sym_DOLLAR_LPAREN;
	v->a[50179] = anon_sym_BQUOTE;
	small_parse_table_2509(v);
}

void	small_parse_table_2509(t_small_parse_table_array *v)
{
	v->a[50180] = anon_sym_DOLLAR_BQUOTE;
	v->a[50181] = anon_sym_LT_LPAREN;
	v->a[50182] = anon_sym_GT_LPAREN;
	v->a[50183] = aux_sym__simple_variable_name_token1;
	v->a[50184] = sym_word;
	v->a[50185] = 3;
	v->a[50186] = actions(3);
	v->a[50187] = 1;
	v->a[50188] = sym_comment;
	v->a[50189] = actions(4465);
	v->a[50190] = 5;
	v->a[50191] = sym_file_descriptor;
	v->a[50192] = sym_test_operator;
	v->a[50193] = sym__bare_dollar;
	v->a[50194] = sym__brace_start;
	v->a[50195] = aux_sym_heredoc_redirect_token1;
	v->a[50196] = actions(4463);
	v->a[50197] = 42;
	v->a[50198] = anon_sym_LPAREN_LPAREN;
	v->a[50199] = anon_sym_SEMI;
	small_parse_table_2510(v);
}

/* EOF small_parse_table_501.c */
