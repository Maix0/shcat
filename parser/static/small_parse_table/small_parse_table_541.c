/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_541.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2705(t_small_parse_table_array *v)
{
	v->a[54100] = 5;
	v->a[54101] = actions(3);
	v->a[54102] = 1;
	v->a[54103] = sym_comment;
	v->a[54104] = actions(548);
	v->a[54105] = 2;
	v->a[54106] = sym_file_descriptor;
	v->a[54107] = sym_variable_name;
	v->a[54108] = state(883);
	v->a[54109] = 2;
	v->a[54110] = sym_concatenation;
	v->a[54111] = aux_sym_for_statement_repeat1;
	v->a[54112] = state(1109);
	v->a[54113] = 5;
	v->a[54114] = sym_arithmetic_expansion;
	v->a[54115] = sym_string;
	v->a[54116] = sym_simple_expansion;
	v->a[54117] = sym_expansion;
	v->a[54118] = sym_command_substitution;
	v->a[54119] = actions(546);
	small_parse_table_2706(v);
}

void	small_parse_table_2706(t_small_parse_table_array *v)
{
	v->a[54120] = 19;
	v->a[54121] = anon_sym_LT;
	v->a[54122] = anon_sym_GT;
	v->a[54123] = anon_sym_GT_GT;
	v->a[54124] = anon_sym_AMP_GT;
	v->a[54125] = anon_sym_AMP_GT_GT;
	v->a[54126] = anon_sym_LT_AMP;
	v->a[54127] = anon_sym_GT_AMP;
	v->a[54128] = anon_sym_GT_PIPE;
	v->a[54129] = anon_sym_LT_AMP_DASH;
	v->a[54130] = anon_sym_GT_AMP_DASH;
	v->a[54131] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[54132] = anon_sym_DOLLAR;
	v->a[54133] = anon_sym_DQUOTE;
	v->a[54134] = sym_raw_string;
	v->a[54135] = sym_number;
	v->a[54136] = anon_sym_DOLLAR_LBRACE;
	v->a[54137] = anon_sym_DOLLAR_LPAREN;
	v->a[54138] = anon_sym_BQUOTE;
	v->a[54139] = sym_word;
	small_parse_table_2707(v);
}

void	small_parse_table_2707(t_small_parse_table_array *v)
{
	v->a[54140] = 3;
	v->a[54141] = actions(3);
	v->a[54142] = 1;
	v->a[54143] = sym_comment;
	v->a[54144] = actions(1118);
	v->a[54145] = 3;
	v->a[54146] = sym_file_descriptor;
	v->a[54147] = sym__concat;
	v->a[54148] = sym_variable_name;
	v->a[54149] = actions(1116);
	v->a[54150] = 25;
	v->a[54151] = anon_sym_PIPE;
	v->a[54152] = anon_sym_AMP_AMP;
	v->a[54153] = anon_sym_PIPE_PIPE;
	v->a[54154] = anon_sym_LT;
	v->a[54155] = anon_sym_GT;
	v->a[54156] = anon_sym_GT_GT;
	v->a[54157] = anon_sym_AMP_GT;
	v->a[54158] = anon_sym_AMP_GT_GT;
	v->a[54159] = anon_sym_LT_AMP;
	small_parse_table_2708(v);
}

void	small_parse_table_2708(t_small_parse_table_array *v)
{
	v->a[54160] = anon_sym_GT_AMP;
	v->a[54161] = anon_sym_GT_PIPE;
	v->a[54162] = anon_sym_LT_AMP_DASH;
	v->a[54163] = anon_sym_GT_AMP_DASH;
	v->a[54164] = anon_sym_LT_LT;
	v->a[54165] = anon_sym_LT_LT_DASH;
	v->a[54166] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[54167] = aux_sym_concatenation_token1;
	v->a[54168] = anon_sym_DOLLAR;
	v->a[54169] = anon_sym_DQUOTE;
	v->a[54170] = sym_raw_string;
	v->a[54171] = sym_number;
	v->a[54172] = anon_sym_DOLLAR_LBRACE;
	v->a[54173] = anon_sym_DOLLAR_LPAREN;
	v->a[54174] = anon_sym_BQUOTE;
	v->a[54175] = sym_word;
	v->a[54176] = 3;
	v->a[54177] = actions(3);
	v->a[54178] = 1;
	v->a[54179] = sym_comment;
	small_parse_table_2709(v);
}

void	small_parse_table_2709(t_small_parse_table_array *v)
{
	v->a[54180] = actions(988);
	v->a[54181] = 3;
	v->a[54182] = sym_file_descriptor;
	v->a[54183] = sym__concat;
	v->a[54184] = sym__bare_dollar;
	v->a[54185] = actions(983);
	v->a[54186] = 25;
	v->a[54187] = anon_sym_PIPE;
	v->a[54188] = anon_sym_AMP_AMP;
	v->a[54189] = anon_sym_PIPE_PIPE;
	v->a[54190] = anon_sym_LT;
	v->a[54191] = anon_sym_GT;
	v->a[54192] = anon_sym_GT_GT;
	v->a[54193] = anon_sym_AMP_GT;
	v->a[54194] = anon_sym_AMP_GT_GT;
	v->a[54195] = anon_sym_LT_AMP;
	v->a[54196] = anon_sym_GT_AMP;
	v->a[54197] = anon_sym_GT_PIPE;
	v->a[54198] = anon_sym_LT_AMP_DASH;
	v->a[54199] = anon_sym_GT_AMP_DASH;
	small_parse_table_2710(v);
}

/* EOF small_parse_table_541.c */
