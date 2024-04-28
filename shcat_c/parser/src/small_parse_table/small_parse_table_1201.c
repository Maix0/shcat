/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1201.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6005(t_small_parse_table_array *v)
{
	v->a[120100] = anon_sym_BQUOTE;
	v->a[120101] = sym_word;
	v->a[120102] = actions(1306);
	v->a[120103] = 27;
	v->a[120104] = sym_file_descriptor;
	v->a[120105] = sym__concat;
	v->a[120106] = sym_test_operator;
	v->a[120107] = sym__bare_dollar;
	v->a[120108] = sym__brace_start;
	v->a[120109] = anon_sym_LPAREN_LPAREN;
	v->a[120110] = anon_sym_PIPE_PIPE;
	v->a[120111] = anon_sym_AMP_AMP;
	v->a[120112] = anon_sym_GT_GT;
	v->a[120113] = anon_sym_PIPE_AMP;
	v->a[120114] = anon_sym_AMP_GT_GT;
	v->a[120115] = anon_sym_GT_PIPE;
	v->a[120116] = anon_sym_LT_AMP_DASH;
	v->a[120117] = anon_sym_GT_AMP_DASH;
	v->a[120118] = anon_sym_LT_LT_DASH;
	v->a[120119] = anon_sym_LT_LT_LT;
	small_parse_table_6006(v);
}

void	small_parse_table_6006(t_small_parse_table_array *v)
{
	v->a[120120] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[120121] = anon_sym_DOLLAR_LBRACK;
	v->a[120122] = aux_sym_concatenation_token1;
	v->a[120123] = sym__special_character;
	v->a[120124] = anon_sym_DQUOTE;
	v->a[120125] = sym_raw_string;
	v->a[120126] = sym_ansi_c_string;
	v->a[120127] = anon_sym_DOLLAR_LBRACE;
	v->a[120128] = anon_sym_DOLLAR_BQUOTE;
	v->a[120129] = anon_sym_LT_LPAREN;
	v->a[120130] = anon_sym_GT_LPAREN;
	v->a[120131] = 5;
	v->a[120132] = actions(71);
	v->a[120133] = 1;
	v->a[120134] = sym_comment;
	v->a[120135] = state(2296);
	v->a[120136] = 1;
	v->a[120137] = aux_sym_concatenation_repeat1;
	v->a[120138] = actions(6451);
	v->a[120139] = 2;
	small_parse_table_6007(v);
}

void	small_parse_table_6007(t_small_parse_table_array *v)
{
	v->a[120140] = sym__concat;
	v->a[120141] = aux_sym_concatenation_token1;
	v->a[120142] = actions(1251);
	v->a[120143] = 14;
	v->a[120144] = anon_sym_PIPE;
	v->a[120145] = anon_sym_LT;
	v->a[120146] = anon_sym_GT;
	v->a[120147] = anon_sym_LT_LT;
	v->a[120148] = anon_sym_AMP_GT;
	v->a[120149] = anon_sym_LT_AMP;
	v->a[120150] = anon_sym_GT_AMP;
	v->a[120151] = anon_sym_DOLLAR;
	v->a[120152] = sym__special_character;
	v->a[120153] = aux_sym_number_token1;
	v->a[120154] = aux_sym_number_token2;
	v->a[120155] = anon_sym_DOLLAR_LPAREN;
	v->a[120156] = anon_sym_BQUOTE;
	v->a[120157] = sym_word;
	v->a[120158] = actions(1253);
	v->a[120159] = 25;
	small_parse_table_6008(v);
}

void	small_parse_table_6008(t_small_parse_table_array *v)
{
	v->a[120160] = sym_file_descriptor;
	v->a[120161] = sym_variable_name;
	v->a[120162] = sym_test_operator;
	v->a[120163] = sym__brace_start;
	v->a[120164] = anon_sym_LPAREN_LPAREN;
	v->a[120165] = anon_sym_PIPE_PIPE;
	v->a[120166] = anon_sym_AMP_AMP;
	v->a[120167] = anon_sym_GT_GT;
	v->a[120168] = anon_sym_PIPE_AMP;
	v->a[120169] = anon_sym_RBRACK;
	v->a[120170] = anon_sym_AMP_GT_GT;
	v->a[120171] = anon_sym_GT_PIPE;
	v->a[120172] = anon_sym_LT_AMP_DASH;
	v->a[120173] = anon_sym_GT_AMP_DASH;
	v->a[120174] = anon_sym_LT_LT_DASH;
	v->a[120175] = anon_sym_LT_LT_LT;
	v->a[120176] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[120177] = anon_sym_DOLLAR_LBRACK;
	v->a[120178] = anon_sym_DQUOTE;
	v->a[120179] = sym_raw_string;
	small_parse_table_6009(v);
}

void	small_parse_table_6009(t_small_parse_table_array *v)
{
	v->a[120180] = sym_ansi_c_string;
	v->a[120181] = anon_sym_DOLLAR_LBRACE;
	v->a[120182] = anon_sym_DOLLAR_BQUOTE;
	v->a[120183] = anon_sym_LT_LPAREN;
	v->a[120184] = anon_sym_GT_LPAREN;
	v->a[120185] = 6;
	v->a[120186] = actions(3);
	v->a[120187] = 1;
	v->a[120188] = sym_comment;
	v->a[120189] = actions(5638);
	v->a[120190] = 1;
	v->a[120191] = aux_sym_concatenation_token1;
	v->a[120192] = actions(6454);
	v->a[120193] = 1;
	v->a[120194] = sym__concat;
	v->a[120195] = state(1363);
	v->a[120196] = 1;
	v->a[120197] = aux_sym_concatenation_repeat1;
	v->a[120198] = actions(1288);
	v->a[120199] = 5;
	small_parse_table_6010(v);
}

/* EOF small_parse_table_1201.c */
