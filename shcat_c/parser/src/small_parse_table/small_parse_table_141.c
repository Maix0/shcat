/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_141.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_705(t_small_parse_table_array *v)
{
	v->a[14100] = sym_expansion;
	v->a[14101] = sym_command_substitution;
	v->a[14102] = sym_process_substitution;
	v->a[14103] = actions(1613);
	v->a[14104] = 16;
	v->a[14105] = anon_sym_PIPE_PIPE;
	v->a[14106] = anon_sym_AMP_AMP;
	v->a[14107] = anon_sym_PIPE;
	v->a[14108] = anon_sym_LT;
	v->a[14109] = anon_sym_GT;
	v->a[14110] = anon_sym_LT_LT;
	v->a[14111] = anon_sym_GT_GT;
	v->a[14112] = anon_sym_PIPE_AMP;
	v->a[14113] = anon_sym_AMP_GT;
	v->a[14114] = anon_sym_AMP_GT_GT;
	v->a[14115] = anon_sym_LT_AMP;
	v->a[14116] = anon_sym_GT_AMP;
	v->a[14117] = anon_sym_GT_PIPE;
	v->a[14118] = anon_sym_LT_AMP_DASH;
	v->a[14119] = anon_sym_GT_AMP_DASH;
	small_parse_table_706(v);
}

void	small_parse_table_706(t_small_parse_table_array *v)
{
	v->a[14120] = anon_sym_LT_LT_DASH;
	v->a[14121] = 8;
	v->a[14122] = actions(3);
	v->a[14123] = 1;
	v->a[14124] = sym_comment;
	v->a[14125] = actions(3274);
	v->a[14126] = 1;
	v->a[14127] = anon_sym_DQUOTE;
	v->a[14128] = actions(3278);
	v->a[14129] = 1;
	v->a[14130] = sym_variable_name;
	v->a[14131] = state(1825);
	v->a[14132] = 1;
	v->a[14133] = sym_string;
	v->a[14134] = actions(3276);
	v->a[14135] = 2;
	v->a[14136] = aux_sym__simple_variable_name_token1;
	v->a[14137] = aux_sym__multiline_variable_name_token1;
	v->a[14138] = actions(1241);
	v->a[14139] = 3;
	small_parse_table_707(v);
}

void	small_parse_table_707(t_small_parse_table_array *v)
{
	v->a[14140] = sym_file_descriptor;
	v->a[14141] = sym_test_operator;
	v->a[14142] = sym__brace_start;
	v->a[14143] = actions(3272);
	v->a[14144] = 9;
	v->a[14145] = anon_sym_DASH;
	v->a[14146] = anon_sym_STAR;
	v->a[14147] = anon_sym_BANG;
	v->a[14148] = anon_sym_QMARK;
	v->a[14149] = anon_sym_DOLLAR;
	v->a[14150] = anon_sym_POUND;
	v->a[14151] = anon_sym_AT2;
	v->a[14152] = anon_sym_0;
	v->a[14153] = anon_sym__;
	v->a[14154] = actions(1239);
	v->a[14155] = 37;
	v->a[14156] = anon_sym_LPAREN_LPAREN;
	v->a[14157] = anon_sym_SEMI;
	v->a[14158] = anon_sym_PIPE_PIPE;
	v->a[14159] = anon_sym_AMP_AMP;
	small_parse_table_708(v);
}

void	small_parse_table_708(t_small_parse_table_array *v)
{
	v->a[14160] = anon_sym_PIPE;
	v->a[14161] = anon_sym_AMP;
	v->a[14162] = anon_sym_LT;
	v->a[14163] = anon_sym_GT;
	v->a[14164] = anon_sym_LT_LT;
	v->a[14165] = anon_sym_GT_GT;
	v->a[14166] = anon_sym_SEMI_SEMI;
	v->a[14167] = anon_sym_SEMI_AMP;
	v->a[14168] = anon_sym_SEMI_SEMI_AMP;
	v->a[14169] = anon_sym_PIPE_AMP;
	v->a[14170] = anon_sym_AMP_GT;
	v->a[14171] = anon_sym_AMP_GT_GT;
	v->a[14172] = anon_sym_LT_AMP;
	v->a[14173] = anon_sym_GT_AMP;
	v->a[14174] = anon_sym_GT_PIPE;
	v->a[14175] = anon_sym_LT_AMP_DASH;
	v->a[14176] = anon_sym_GT_AMP_DASH;
	v->a[14177] = anon_sym_LT_LT_DASH;
	v->a[14178] = aux_sym_heredoc_redirect_token1;
	v->a[14179] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_709(v);
}

void	small_parse_table_709(t_small_parse_table_array *v)
{
	v->a[14180] = anon_sym_DOLLAR_LBRACK;
	v->a[14181] = sym__special_character;
	v->a[14182] = sym_raw_string;
	v->a[14183] = sym_ansi_c_string;
	v->a[14184] = aux_sym_number_token1;
	v->a[14185] = aux_sym_number_token2;
	v->a[14186] = anon_sym_DOLLAR_LBRACE;
	v->a[14187] = anon_sym_DOLLAR_LPAREN;
	v->a[14188] = anon_sym_BQUOTE;
	v->a[14189] = anon_sym_DOLLAR_BQUOTE;
	v->a[14190] = anon_sym_LT_LPAREN;
	v->a[14191] = anon_sym_GT_LPAREN;
	v->a[14192] = sym_word;
	v->a[14193] = 8;
	v->a[14194] = actions(3);
	v->a[14195] = 1;
	v->a[14196] = sym_comment;
	v->a[14197] = actions(3282);
	v->a[14198] = 1;
	v->a[14199] = anon_sym_DQUOTE;
	small_parse_table_710(v);
}

/* EOF small_parse_table_141.c */
