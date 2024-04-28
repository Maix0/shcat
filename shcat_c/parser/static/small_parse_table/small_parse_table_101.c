/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_101.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_505(t_small_parse_table_array *v)
{
	v->a[10100] = anon_sym_LT_AMP;
	v->a[10101] = anon_sym_GT_AMP;
	v->a[10102] = anon_sym_GT_PIPE;
	v->a[10103] = anon_sym_LT_AMP_DASH;
	v->a[10104] = anon_sym_GT_AMP_DASH;
	v->a[10105] = anon_sym_LT_LT_DASH;
	v->a[10106] = 21;
	v->a[10107] = actions(3);
	v->a[10108] = 1;
	v->a[10109] = sym_comment;
	v->a[10110] = actions(2861);
	v->a[10111] = 1;
	v->a[10112] = anon_sym_DOLLAR_LBRACK;
	v->a[10113] = actions(2863);
	v->a[10114] = 1;
	v->a[10115] = anon_sym_DOLLAR;
	v->a[10116] = actions(2865);
	v->a[10117] = 1;
	v->a[10118] = sym__special_character;
	v->a[10119] = actions(2867);
	small_parse_table_506(v);
}

void	small_parse_table_506(t_small_parse_table_array *v)
{
	v->a[10120] = 1;
	v->a[10121] = anon_sym_DQUOTE;
	v->a[10122] = actions(2869);
	v->a[10123] = 1;
	v->a[10124] = aux_sym_number_token1;
	v->a[10125] = actions(2871);
	v->a[10126] = 1;
	v->a[10127] = aux_sym_number_token2;
	v->a[10128] = actions(2873);
	v->a[10129] = 1;
	v->a[10130] = anon_sym_DOLLAR_LBRACE;
	v->a[10131] = actions(2875);
	v->a[10132] = 1;
	v->a[10133] = anon_sym_DOLLAR_LPAREN;
	v->a[10134] = actions(2877);
	v->a[10135] = 1;
	v->a[10136] = anon_sym_BQUOTE;
	v->a[10137] = actions(2879);
	v->a[10138] = 1;
	v->a[10139] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_507(v);
}

void	small_parse_table_507(t_small_parse_table_array *v)
{
	v->a[10140] = actions(2883);
	v->a[10141] = 1;
	v->a[10142] = sym_test_operator;
	v->a[10143] = actions(2885);
	v->a[10144] = 1;
	v->a[10145] = sym__brace_start;
	v->a[10146] = state(4262);
	v->a[10147] = 1;
	v->a[10148] = aux_sym__literal_repeat1;
	v->a[10149] = state(4820);
	v->a[10150] = 1;
	v->a[10151] = sym_concatenation;
	v->a[10152] = actions(2496);
	v->a[10153] = 2;
	v->a[10154] = sym_file_descriptor;
	v->a[10155] = aux_sym_heredoc_redirect_token1;
	v->a[10156] = actions(2859);
	v->a[10157] = 2;
	v->a[10158] = anon_sym_LPAREN_LPAREN;
	v->a[10159] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_508(v);
}

void	small_parse_table_508(t_small_parse_table_array *v)
{
	v->a[10160] = actions(2881);
	v->a[10161] = 2;
	v->a[10162] = anon_sym_LT_LPAREN;
	v->a[10163] = anon_sym_GT_LPAREN;
	v->a[10164] = actions(2857);
	v->a[10165] = 3;
	v->a[10166] = sym_raw_string;
	v->a[10167] = sym_ansi_c_string;
	v->a[10168] = sym_word;
	v->a[10169] = state(4240);
	v->a[10170] = 9;
	v->a[10171] = sym_arithmetic_expansion;
	v->a[10172] = sym_brace_expression;
	v->a[10173] = sym_string;
	v->a[10174] = sym_translated_string;
	v->a[10175] = sym_number;
	v->a[10176] = sym_simple_expansion;
	v->a[10177] = sym_expansion;
	v->a[10178] = sym_command_substitution;
	v->a[10179] = sym_process_substitution;
	small_parse_table_509(v);
}

void	small_parse_table_509(t_small_parse_table_array *v)
{
	v->a[10180] = actions(2494);
	v->a[10181] = 23;
	v->a[10182] = anon_sym_SEMI;
	v->a[10183] = anon_sym_PIPE_PIPE;
	v->a[10184] = anon_sym_AMP_AMP;
	v->a[10185] = anon_sym_PIPE;
	v->a[10186] = anon_sym_AMP;
	v->a[10187] = anon_sym_LT;
	v->a[10188] = anon_sym_GT;
	v->a[10189] = anon_sym_LT_LT;
	v->a[10190] = anon_sym_GT_GT;
	v->a[10191] = anon_sym_esac;
	v->a[10192] = anon_sym_SEMI_SEMI;
	v->a[10193] = anon_sym_SEMI_AMP;
	v->a[10194] = anon_sym_SEMI_SEMI_AMP;
	v->a[10195] = anon_sym_PIPE_AMP;
	v->a[10196] = anon_sym_AMP_GT;
	v->a[10197] = anon_sym_AMP_GT_GT;
	v->a[10198] = anon_sym_LT_AMP;
	v->a[10199] = anon_sym_GT_AMP;
	small_parse_table_510(v);
}

/* EOF small_parse_table_101.c */
