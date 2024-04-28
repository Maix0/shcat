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
	v->a[12100] = actions(3);
	v->a[12101] = 1;
	v->a[12102] = sym_comment;
	v->a[12103] = state(1801);
	v->a[12104] = 1;
	v->a[12105] = aux_sym__literal_repeat1;
	v->a[12106] = state(651);
	v->a[12107] = 2;
	v->a[12108] = sym_concatenation;
	v->a[12109] = aux_sym_for_statement_repeat1;
	v->a[12110] = actions(2074);
	v->a[12111] = 6;
	v->a[12112] = sym_file_descriptor;
	v->a[12113] = sym_variable_name;
	v->a[12114] = sym_test_operator;
	v->a[12115] = sym__brace_start;
	v->a[12116] = ts_builtin_sym_end;
	v->a[12117] = aux_sym_heredoc_redirect_token1;
	v->a[12118] = state(1399);
	v->a[12119] = 9;
	small_parse_table_606(v);
}

void	small_parse_table_606(t_small_parse_table_array *v)
{
	v->a[12120] = sym_arithmetic_expansion;
	v->a[12121] = sym_brace_expression;
	v->a[12122] = sym_string;
	v->a[12123] = sym_translated_string;
	v->a[12124] = sym_number;
	v->a[12125] = sym_simple_expansion;
	v->a[12126] = sym_expansion;
	v->a[12127] = sym_command_substitution;
	v->a[12128] = sym_process_substitution;
	v->a[12129] = actions(2072);
	v->a[12130] = 37;
	v->a[12131] = anon_sym_LPAREN_LPAREN;
	v->a[12132] = anon_sym_SEMI;
	v->a[12133] = anon_sym_PIPE_PIPE;
	v->a[12134] = anon_sym_AMP_AMP;
	v->a[12135] = anon_sym_PIPE;
	v->a[12136] = anon_sym_AMP;
	v->a[12137] = anon_sym_LT;
	v->a[12138] = anon_sym_GT;
	v->a[12139] = anon_sym_LT_LT;
	small_parse_table_607(v);
}

void	small_parse_table_607(t_small_parse_table_array *v)
{
	v->a[12140] = anon_sym_GT_GT;
	v->a[12141] = anon_sym_SEMI_SEMI;
	v->a[12142] = anon_sym_PIPE_AMP;
	v->a[12143] = anon_sym_AMP_GT;
	v->a[12144] = anon_sym_AMP_GT_GT;
	v->a[12145] = anon_sym_LT_AMP;
	v->a[12146] = anon_sym_GT_AMP;
	v->a[12147] = anon_sym_GT_PIPE;
	v->a[12148] = anon_sym_LT_AMP_DASH;
	v->a[12149] = anon_sym_GT_AMP_DASH;
	v->a[12150] = anon_sym_LT_LT_DASH;
	v->a[12151] = anon_sym_LT_LT_LT;
	v->a[12152] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[12153] = anon_sym_DOLLAR_LBRACK;
	v->a[12154] = anon_sym_DOLLAR;
	v->a[12155] = sym__special_character;
	v->a[12156] = anon_sym_DQUOTE;
	v->a[12157] = sym_raw_string;
	v->a[12158] = sym_ansi_c_string;
	v->a[12159] = aux_sym_number_token1;
	small_parse_table_608(v);
}

void	small_parse_table_608(t_small_parse_table_array *v)
{
	v->a[12160] = aux_sym_number_token2;
	v->a[12161] = anon_sym_DOLLAR_LBRACE;
	v->a[12162] = anon_sym_DOLLAR_LPAREN;
	v->a[12163] = anon_sym_BQUOTE;
	v->a[12164] = anon_sym_DOLLAR_BQUOTE;
	v->a[12165] = anon_sym_LT_LPAREN;
	v->a[12166] = anon_sym_GT_LPAREN;
	v->a[12167] = sym_word;
	v->a[12168] = 5;
	v->a[12169] = actions(71);
	v->a[12170] = 1;
	v->a[12171] = sym_comment;
	v->a[12172] = actions(2725);
	v->a[12173] = 2;
	v->a[12174] = anon_sym_SEMI_AMP;
	v->a[12175] = anon_sym_SEMI_SEMI_AMP;
	v->a[12176] = actions(2727);
	v->a[12177] = 2;
	v->a[12178] = anon_sym_esac;
	v->a[12179] = anon_sym_SEMI_SEMI;
	small_parse_table_609(v);
}

void	small_parse_table_609(t_small_parse_table_array *v)
{
	v->a[12180] = actions(2717);
	v->a[12181] = 23;
	v->a[12182] = sym_file_descriptor;
	v->a[12183] = sym_variable_name;
	v->a[12184] = sym_test_operator;
	v->a[12185] = sym__brace_start;
	v->a[12186] = anon_sym_LPAREN_LPAREN;
	v->a[12187] = anon_sym_GT_GT;
	v->a[12188] = anon_sym_LBRACE;
	v->a[12189] = anon_sym_LBRACK_LBRACK;
	v->a[12190] = anon_sym_AMP_GT_GT;
	v->a[12191] = anon_sym_GT_PIPE;
	v->a[12192] = anon_sym_LT_AMP_DASH;
	v->a[12193] = anon_sym_GT_AMP_DASH;
	v->a[12194] = anon_sym_LT_LT_LT;
	v->a[12195] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[12196] = anon_sym_DOLLAR_LBRACK;
	v->a[12197] = anon_sym_DQUOTE;
	v->a[12198] = sym_raw_string;
	v->a[12199] = sym_ansi_c_string;
	small_parse_table_610(v);
}

/* EOF small_parse_table_121.c */
