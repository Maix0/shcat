/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_121.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_605(t_small_parse_table_array *v)
{
	v->a[12100] = sym__brace_start;
	v->a[12101] = actions(1802);
	v->a[12102] = 9;
	v->a[12103] = anon_sym_BANG;
	v->a[12104] = anon_sym_DASH;
	v->a[12105] = anon_sym_STAR;
	v->a[12106] = anon_sym_QMARK;
	v->a[12107] = anon_sym_DOLLAR;
	v->a[12108] = anon_sym_POUND;
	v->a[12109] = anon_sym_AT;
	v->a[12110] = anon_sym_0;
	v->a[12111] = anon_sym__;
	v->a[12112] = actions(810);
	v->a[12113] = 31;
	v->a[12114] = anon_sym_PIPE;
	v->a[12115] = anon_sym_SEMI_SEMI;
	v->a[12116] = anon_sym_PIPE_AMP;
	v->a[12117] = anon_sym_AMP_AMP;
	v->a[12118] = anon_sym_PIPE_PIPE;
	v->a[12119] = anon_sym_LT;
	small_parse_table_606(v);
}

void	small_parse_table_606(t_small_parse_table_array *v)
{
	v->a[12120] = anon_sym_GT;
	v->a[12121] = anon_sym_GT_GT;
	v->a[12122] = anon_sym_AMP_GT;
	v->a[12123] = anon_sym_AMP_GT_GT;
	v->a[12124] = anon_sym_LT_AMP;
	v->a[12125] = anon_sym_GT_AMP;
	v->a[12126] = anon_sym_GT_PIPE;
	v->a[12127] = anon_sym_LT_AMP_DASH;
	v->a[12128] = anon_sym_GT_AMP_DASH;
	v->a[12129] = anon_sym_LT_LT;
	v->a[12130] = anon_sym_LT_LT_DASH;
	v->a[12131] = aux_sym_heredoc_redirect_token1;
	v->a[12132] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[12133] = anon_sym_AMP;
	v->a[12134] = sym__special_character;
	v->a[12135] = anon_sym_DQUOTE;
	v->a[12136] = sym_raw_string;
	v->a[12137] = aux_sym_number_token1;
	v->a[12138] = aux_sym_number_token2;
	v->a[12139] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_607(v);
}

void	small_parse_table_607(t_small_parse_table_array *v)
{
	v->a[12140] = anon_sym_DOLLAR_LPAREN;
	v->a[12141] = anon_sym_BQUOTE;
	v->a[12142] = anon_sym_DOLLAR_BQUOTE;
	v->a[12143] = sym_word;
	v->a[12144] = anon_sym_SEMI;
	v->a[12145] = 19;
	v->a[12146] = actions(3);
	v->a[12147] = 1;
	v->a[12148] = sym_comment;
	v->a[12149] = actions(1737);
	v->a[12150] = 1;
	v->a[12151] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[12152] = actions(1739);
	v->a[12153] = 1;
	v->a[12154] = anon_sym_DOLLAR;
	v->a[12155] = actions(1743);
	v->a[12156] = 1;
	v->a[12157] = anon_sym_DQUOTE;
	v->a[12158] = actions(1745);
	v->a[12159] = 1;
	small_parse_table_608(v);
}

void	small_parse_table_608(t_small_parse_table_array *v)
{
	v->a[12160] = aux_sym_number_token1;
	v->a[12161] = actions(1747);
	v->a[12162] = 1;
	v->a[12163] = aux_sym_number_token2;
	v->a[12164] = actions(1749);
	v->a[12165] = 1;
	v->a[12166] = anon_sym_DOLLAR_LBRACE;
	v->a[12167] = actions(1751);
	v->a[12168] = 1;
	v->a[12169] = anon_sym_DOLLAR_LPAREN;
	v->a[12170] = actions(1755);
	v->a[12171] = 1;
	v->a[12172] = anon_sym_DOLLAR_BQUOTE;
	v->a[12173] = actions(1761);
	v->a[12174] = 1;
	v->a[12175] = sym__brace_start;
	v->a[12176] = actions(2286);
	v->a[12177] = 1;
	v->a[12178] = sym__special_character;
	v->a[12179] = actions(2288);
	small_parse_table_609(v);
}

void	small_parse_table_609(t_small_parse_table_array *v)
{
	v->a[12180] = 1;
	v->a[12181] = aux_sym__simple_variable_name_token1;
	v->a[12182] = actions(2290);
	v->a[12183] = 1;
	v->a[12184] = sym_test_operator;
	v->a[12185] = state(1219);
	v->a[12186] = 1;
	v->a[12187] = aux_sym__literal_repeat1;
	v->a[12188] = actions(1041);
	v->a[12189] = 2;
	v->a[12190] = sym_file_descriptor;
	v->a[12191] = aux_sym_heredoc_redirect_token1;
	v->a[12192] = actions(2284);
	v->a[12193] = 2;
	v->a[12194] = sym_raw_string;
	v->a[12195] = sym_word;
	v->a[12196] = state(412);
	v->a[12197] = 2;
	v->a[12198] = sym_concatenation;
	v->a[12199] = aux_sym_unset_command_repeat1;
	small_parse_table_610(v);
}

/* EOF small_parse_table_121.c */
