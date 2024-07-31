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
	v->a[54100] = 1;
	v->a[54101] = anon_sym_DOLLAR_LPAREN;
	v->a[54102] = actions(940);
	v->a[54103] = 1;
	v->a[54104] = anon_sym_BQUOTE;
	v->a[54105] = actions(2083);
	v->a[54106] = 1;
	v->a[54107] = aux_sym_heredoc_redirect_token1;
	v->a[54108] = state(1095);
	v->a[54109] = 1;
	v->a[54110] = aux_sym__heredoc_command;
	v->a[54111] = state(1465);
	v->a[54112] = 1;
	v->a[54113] = sym_concatenation;
	v->a[54114] = actions(920);
	v->a[54115] = 3;
	v->a[54116] = sym_raw_string;
	v->a[54117] = sym_number;
	v->a[54118] = sym_word;
	v->a[54119] = state(1287);
	small_parse_table_2706(v);
}

void	small_parse_table_2706(t_small_parse_table_array *v)
{
	v->a[54120] = 5;
	v->a[54121] = sym_arithmetic_expansion;
	v->a[54122] = sym_string;
	v->a[54123] = sym_simple_expansion;
	v->a[54124] = sym_expansion;
	v->a[54125] = sym_command_substitution;
	v->a[54126] = 12;
	v->a[54127] = actions(3);
	v->a[54128] = 1;
	v->a[54129] = sym_comment;
	v->a[54130] = actions(1922);
	v->a[54131] = 1;
	v->a[54132] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[54133] = actions(1926);
	v->a[54134] = 1;
	v->a[54135] = anon_sym_DQUOTE;
	v->a[54136] = actions(1928);
	v->a[54137] = 1;
	v->a[54138] = anon_sym_DOLLAR_LBRACE;
	v->a[54139] = actions(1930);
	small_parse_table_2707(v);
}

void	small_parse_table_2707(t_small_parse_table_array *v)
{
	v->a[54140] = 1;
	v->a[54141] = anon_sym_DOLLAR_LPAREN;
	v->a[54142] = actions(1932);
	v->a[54143] = 1;
	v->a[54144] = anon_sym_BQUOTE;
	v->a[54145] = actions(2087);
	v->a[54146] = 1;
	v->a[54147] = anon_sym_DOLLAR;
	v->a[54148] = actions(2089);
	v->a[54149] = 1;
	v->a[54150] = sym__comment_word;
	v->a[54151] = actions(2091);
	v->a[54152] = 1;
	v->a[54153] = sym__empty_value;
	v->a[54154] = state(890);
	v->a[54155] = 1;
	v->a[54156] = sym_concatenation;
	v->a[54157] = actions(2085);
	v->a[54158] = 3;
	v->a[54159] = sym_raw_string;
	small_parse_table_2708(v);
}

void	small_parse_table_2708(t_small_parse_table_array *v)
{
	v->a[54160] = sym_number;
	v->a[54161] = sym_word;
	v->a[54162] = state(842);
	v->a[54163] = 5;
	v->a[54164] = sym_arithmetic_expansion;
	v->a[54165] = sym_string;
	v->a[54166] = sym_simple_expansion;
	v->a[54167] = sym_expansion;
	v->a[54168] = sym_command_substitution;
	v->a[54169] = 5;
	v->a[54170] = actions(3);
	v->a[54171] = 1;
	v->a[54172] = sym_comment;
	v->a[54173] = actions(1828);
	v->a[54174] = 1;
	v->a[54175] = aux_sym_heredoc_redirect_token1;
	v->a[54176] = state(1121);
	v->a[54177] = 2;
	v->a[54178] = sym_file_redirect;
	v->a[54179] = aux_sym_redirected_statement_repeat2;
	small_parse_table_2709(v);
}

void	small_parse_table_2709(t_small_parse_table_array *v)
{
	v->a[54180] = actions(1676);
	v->a[54181] = 7;
	v->a[54182] = anon_sym_LT;
	v->a[54183] = anon_sym_GT;
	v->a[54184] = anon_sym_GT_GT;
	v->a[54185] = anon_sym_LT_AMP;
	v->a[54186] = anon_sym_GT_AMP;
	v->a[54187] = anon_sym_GT_PIPE;
	v->a[54188] = anon_sym_LT_GT;
	v->a[54189] = actions(1826);
	v->a[54190] = 7;
	v->a[54191] = anon_sym_PIPE;
	v->a[54192] = anon_sym_SEMI_SEMI;
	v->a[54193] = anon_sym_AMP_AMP;
	v->a[54194] = anon_sym_PIPE_PIPE;
	v->a[54195] = anon_sym_LT_LT;
	v->a[54196] = anon_sym_LT_LT_DASH;
	v->a[54197] = anon_sym_SEMI;
	v->a[54198] = 10;
	v->a[54199] = actions(3);
	small_parse_table_2710(v);
}

/* EOF small_parse_table_541.c */
