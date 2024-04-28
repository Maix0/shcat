/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1281.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6405(t_small_parse_table_array *v)
{
	v->a[128100] = sym_word;
	v->a[128101] = actions(1253);
	v->a[128102] = 24;
	v->a[128103] = sym_file_descriptor;
	v->a[128104] = sym_variable_name;
	v->a[128105] = sym_test_operator;
	v->a[128106] = sym__brace_start;
	v->a[128107] = anon_sym_LPAREN_LPAREN;
	v->a[128108] = anon_sym_PIPE_PIPE;
	v->a[128109] = anon_sym_AMP_AMP;
	v->a[128110] = anon_sym_GT_GT;
	v->a[128111] = anon_sym_PIPE_AMP;
	v->a[128112] = anon_sym_AMP_GT_GT;
	v->a[128113] = anon_sym_GT_PIPE;
	v->a[128114] = anon_sym_LT_AMP_DASH;
	v->a[128115] = anon_sym_GT_AMP_DASH;
	v->a[128116] = anon_sym_LT_LT_DASH;
	v->a[128117] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[128118] = anon_sym_DOLLAR_LBRACK;
	v->a[128119] = sym__special_character;
	small_parse_table_6406(v);
}

void	small_parse_table_6406(t_small_parse_table_array *v)
{
	v->a[128120] = anon_sym_DQUOTE;
	v->a[128121] = sym_raw_string;
	v->a[128122] = sym_ansi_c_string;
	v->a[128123] = anon_sym_DOLLAR_LBRACE;
	v->a[128124] = anon_sym_DOLLAR_BQUOTE;
	v->a[128125] = anon_sym_LT_LPAREN;
	v->a[128126] = anon_sym_GT_LPAREN;
	v->a[128127] = 5;
	v->a[128128] = actions(71);
	v->a[128129] = 1;
	v->a[128130] = sym_comment;
	v->a[128131] = state(2350);
	v->a[128132] = 1;
	v->a[128133] = aux_sym_concatenation_repeat1;
	v->a[128134] = actions(6514);
	v->a[128135] = 2;
	v->a[128136] = sym__concat;
	v->a[128137] = aux_sym_concatenation_token1;
	v->a[128138] = actions(4370);
	v->a[128139] = 13;
	small_parse_table_6407(v);
}

void	small_parse_table_6407(t_small_parse_table_array *v)
{
	v->a[128140] = anon_sym_PIPE;
	v->a[128141] = anon_sym_LT;
	v->a[128142] = anon_sym_GT;
	v->a[128143] = anon_sym_LT_LT;
	v->a[128144] = anon_sym_AMP_GT;
	v->a[128145] = anon_sym_LT_AMP;
	v->a[128146] = anon_sym_GT_AMP;
	v->a[128147] = anon_sym_DOLLAR;
	v->a[128148] = aux_sym_number_token1;
	v->a[128149] = aux_sym_number_token2;
	v->a[128150] = anon_sym_DOLLAR_LPAREN;
	v->a[128151] = anon_sym_BQUOTE;
	v->a[128152] = sym_word;
	v->a[128153] = actions(4372);
	v->a[128154] = 25;
	v->a[128155] = sym_file_descriptor;
	v->a[128156] = sym_variable_name;
	v->a[128157] = sym_test_operator;
	v->a[128158] = sym__brace_start;
	v->a[128159] = anon_sym_LPAREN_LPAREN;
	small_parse_table_6408(v);
}

void	small_parse_table_6408(t_small_parse_table_array *v)
{
	v->a[128160] = anon_sym_PIPE_PIPE;
	v->a[128161] = anon_sym_AMP_AMP;
	v->a[128162] = anon_sym_GT_GT;
	v->a[128163] = anon_sym_PIPE_AMP;
	v->a[128164] = anon_sym_AMP_GT_GT;
	v->a[128165] = anon_sym_GT_PIPE;
	v->a[128166] = anon_sym_LT_AMP_DASH;
	v->a[128167] = anon_sym_GT_AMP_DASH;
	v->a[128168] = anon_sym_LT_LT_DASH;
	v->a[128169] = anon_sym_LT_LT_LT;
	v->a[128170] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[128171] = anon_sym_DOLLAR_LBRACK;
	v->a[128172] = sym__special_character;
	v->a[128173] = anon_sym_DQUOTE;
	v->a[128174] = sym_raw_string;
	v->a[128175] = sym_ansi_c_string;
	v->a[128176] = anon_sym_DOLLAR_LBRACE;
	v->a[128177] = anon_sym_DOLLAR_BQUOTE;
	v->a[128178] = anon_sym_LT_LPAREN;
	v->a[128179] = anon_sym_GT_LPAREN;
	small_parse_table_6409(v);
}

void	small_parse_table_6409(t_small_parse_table_array *v)
{
	v->a[128180] = 5;
	v->a[128181] = actions(71);
	v->a[128182] = 1;
	v->a[128183] = sym_comment;
	v->a[128184] = state(2424);
	v->a[128185] = 1;
	v->a[128186] = aux_sym_concatenation_repeat1;
	v->a[128187] = actions(6526);
	v->a[128188] = 2;
	v->a[128189] = sym__concat;
	v->a[128190] = aux_sym_concatenation_token1;
	v->a[128191] = actions(5393);
	v->a[128192] = 14;
	v->a[128193] = anon_sym_PIPE;
	v->a[128194] = anon_sym_LT;
	v->a[128195] = anon_sym_GT;
	v->a[128196] = anon_sym_LT_LT;
	v->a[128197] = anon_sym_AMP_GT;
	v->a[128198] = anon_sym_LT_AMP;
	v->a[128199] = anon_sym_GT_AMP;
	small_parse_table_6410(v);
}

/* EOF small_parse_table_1281.c */
