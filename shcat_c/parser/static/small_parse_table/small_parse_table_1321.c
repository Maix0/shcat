/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1321.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6605(t_small_parse_table_array *v)
{
	v->a[132100] = sym_raw_string;
	v->a[132101] = sym_ansi_c_string;
	v->a[132102] = anon_sym_DOLLAR_LBRACE;
	v->a[132103] = anon_sym_DOLLAR_BQUOTE;
	v->a[132104] = anon_sym_LT_LPAREN;
	v->a[132105] = anon_sym_GT_LPAREN;
	v->a[132106] = 3;
	v->a[132107] = actions(71);
	v->a[132108] = 1;
	v->a[132109] = sym_comment;
	v->a[132110] = actions(1251);
	v->a[132111] = 13;
	v->a[132112] = anon_sym_PIPE;
	v->a[132113] = anon_sym_LT;
	v->a[132114] = anon_sym_GT;
	v->a[132115] = anon_sym_LT_LT;
	v->a[132116] = anon_sym_AMP_GT;
	v->a[132117] = anon_sym_LT_AMP;
	v->a[132118] = anon_sym_GT_AMP;
	v->a[132119] = anon_sym_DOLLAR;
	small_parse_table_6606(v);
}

void	small_parse_table_6606(t_small_parse_table_array *v)
{
	v->a[132120] = aux_sym_number_token1;
	v->a[132121] = aux_sym_number_token2;
	v->a[132122] = anon_sym_DOLLAR_LPAREN;
	v->a[132123] = anon_sym_BQUOTE;
	v->a[132124] = sym_word;
	v->a[132125] = actions(1253);
	v->a[132126] = 27;
	v->a[132127] = sym_file_descriptor;
	v->a[132128] = sym__concat;
	v->a[132129] = sym_variable_name;
	v->a[132130] = sym_test_operator;
	v->a[132131] = sym__brace_start;
	v->a[132132] = anon_sym_LPAREN_LPAREN;
	v->a[132133] = anon_sym_PIPE_PIPE;
	v->a[132134] = anon_sym_AMP_AMP;
	v->a[132135] = anon_sym_GT_GT;
	v->a[132136] = anon_sym_PIPE_AMP;
	v->a[132137] = anon_sym_AMP_GT_GT;
	v->a[132138] = anon_sym_GT_PIPE;
	v->a[132139] = anon_sym_LT_AMP_DASH;
	small_parse_table_6607(v);
}

void	small_parse_table_6607(t_small_parse_table_array *v)
{
	v->a[132140] = anon_sym_GT_AMP_DASH;
	v->a[132141] = anon_sym_LT_LT_DASH;
	v->a[132142] = anon_sym_LT_LT_LT;
	v->a[132143] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[132144] = anon_sym_DOLLAR_LBRACK;
	v->a[132145] = aux_sym_concatenation_token1;
	v->a[132146] = sym__special_character;
	v->a[132147] = anon_sym_DQUOTE;
	v->a[132148] = sym_raw_string;
	v->a[132149] = sym_ansi_c_string;
	v->a[132150] = anon_sym_DOLLAR_LBRACE;
	v->a[132151] = anon_sym_DOLLAR_BQUOTE;
	v->a[132152] = anon_sym_LT_LPAREN;
	v->a[132153] = anon_sym_GT_LPAREN;
	v->a[132154] = 3;
	v->a[132155] = actions(71);
	v->a[132156] = 1;
	v->a[132157] = sym_comment;
	v->a[132158] = actions(1356);
	v->a[132159] = 13;
	small_parse_table_6608(v);
}

void	small_parse_table_6608(t_small_parse_table_array *v)
{
	v->a[132160] = anon_sym_PIPE;
	v->a[132161] = anon_sym_LT;
	v->a[132162] = anon_sym_GT;
	v->a[132163] = anon_sym_LT_LT;
	v->a[132164] = anon_sym_AMP_GT;
	v->a[132165] = anon_sym_LT_AMP;
	v->a[132166] = anon_sym_GT_AMP;
	v->a[132167] = anon_sym_DOLLAR;
	v->a[132168] = aux_sym_number_token1;
	v->a[132169] = aux_sym_number_token2;
	v->a[132170] = anon_sym_DOLLAR_LPAREN;
	v->a[132171] = anon_sym_BQUOTE;
	v->a[132172] = sym_word;
	v->a[132173] = actions(1358);
	v->a[132174] = 27;
	v->a[132175] = sym_file_descriptor;
	v->a[132176] = sym__concat;
	v->a[132177] = sym_variable_name;
	v->a[132178] = sym_test_operator;
	v->a[132179] = sym__brace_start;
	small_parse_table_6609(v);
}

void	small_parse_table_6609(t_small_parse_table_array *v)
{
	v->a[132180] = anon_sym_LPAREN_LPAREN;
	v->a[132181] = anon_sym_PIPE_PIPE;
	v->a[132182] = anon_sym_AMP_AMP;
	v->a[132183] = anon_sym_GT_GT;
	v->a[132184] = anon_sym_PIPE_AMP;
	v->a[132185] = anon_sym_AMP_GT_GT;
	v->a[132186] = anon_sym_GT_PIPE;
	v->a[132187] = anon_sym_LT_AMP_DASH;
	v->a[132188] = anon_sym_GT_AMP_DASH;
	v->a[132189] = anon_sym_LT_LT_DASH;
	v->a[132190] = anon_sym_LT_LT_LT;
	v->a[132191] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[132192] = anon_sym_DOLLAR_LBRACK;
	v->a[132193] = aux_sym_concatenation_token1;
	v->a[132194] = sym__special_character;
	v->a[132195] = anon_sym_DQUOTE;
	v->a[132196] = sym_raw_string;
	v->a[132197] = sym_ansi_c_string;
	v->a[132198] = anon_sym_DOLLAR_LBRACE;
	v->a[132199] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_6610(v);
}

/* EOF small_parse_table_1321.c */
