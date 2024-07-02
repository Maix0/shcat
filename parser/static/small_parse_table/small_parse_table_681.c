/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_681.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3405(t_small_parse_table_array *v)
{
	v->a[68100] = actions(2671);
	v->a[68101] = 1;
	v->a[68102] = anon_sym_DOLLAR_LPAREN;
	v->a[68103] = actions(2674);
	v->a[68104] = 1;
	v->a[68105] = anon_sym_BQUOTE;
	v->a[68106] = state(1331);
	v->a[68107] = 1;
	v->a[68108] = aux_sym__heredoc_command;
	v->a[68109] = state(1725);
	v->a[68110] = 1;
	v->a[68111] = sym_concatenation;
	v->a[68112] = actions(2654);
	v->a[68113] = 3;
	v->a[68114] = sym_raw_string;
	v->a[68115] = sym_number;
	v->a[68116] = sym_word;
	v->a[68117] = state(1589);
	v->a[68118] = 5;
	v->a[68119] = sym_arithmetic_expansion;
	small_parse_table_3406(v);
}

void	small_parse_table_3406(t_small_parse_table_array *v)
{
	v->a[68120] = sym_string;
	v->a[68121] = sym_simple_expansion;
	v->a[68122] = sym_expansion;
	v->a[68123] = sym_command_substitution;
	v->a[68124] = 8;
	v->a[68125] = actions(3);
	v->a[68126] = 1;
	v->a[68127] = sym_comment;
	v->a[68128] = actions(692);
	v->a[68129] = 1;
	v->a[68130] = anon_sym_PIPE;
	v->a[68131] = actions(2604);
	v->a[68132] = 1;
	v->a[68133] = sym_file_descriptor;
	v->a[68134] = actions(2677);
	v->a[68135] = 1;
	v->a[68136] = aux_sym_heredoc_redirect_token1;
	v->a[68137] = actions(700);
	v->a[68138] = 2;
	v->a[68139] = anon_sym_LT_LT;
	small_parse_table_3407(v);
}

void	small_parse_table_3407(t_small_parse_table_array *v)
{
	v->a[68140] = anon_sym_LT_LT_DASH;
	v->a[68141] = actions(1416);
	v->a[68142] = 2;
	v->a[68143] = anon_sym_AMP_AMP;
	v->a[68144] = anon_sym_PIPE_PIPE;
	v->a[68145] = state(1354);
	v->a[68146] = 3;
	v->a[68147] = sym_file_redirect;
	v->a[68148] = sym_heredoc_redirect;
	v->a[68149] = aux_sym_redirected_statement_repeat1;
	v->a[68150] = actions(2600);
	v->a[68151] = 7;
	v->a[68152] = anon_sym_LT;
	v->a[68153] = anon_sym_GT;
	v->a[68154] = anon_sym_GT_GT;
	v->a[68155] = anon_sym_LT_AMP;
	v->a[68156] = anon_sym_GT_AMP;
	v->a[68157] = anon_sym_GT_PIPE;
	v->a[68158] = anon_sym_LT_GT;
	v->a[68159] = 7;
	small_parse_table_3408(v);
}

void	small_parse_table_3408(t_small_parse_table_array *v)
{
	v->a[68160] = actions(3);
	v->a[68161] = 1;
	v->a[68162] = sym_comment;
	v->a[68163] = actions(1937);
	v->a[68164] = 1;
	v->a[68165] = aux_sym_heredoc_redirect_token1;
	v->a[68166] = actions(2682);
	v->a[68167] = 1;
	v->a[68168] = sym_file_descriptor;
	v->a[68169] = actions(1934);
	v->a[68170] = 2;
	v->a[68171] = anon_sym_LT_LT;
	v->a[68172] = anon_sym_LT_LT_DASH;
	v->a[68173] = actions(1929);
	v->a[68174] = 3;
	v->a[68175] = anon_sym_PIPE;
	v->a[68176] = anon_sym_AMP_AMP;
	v->a[68177] = anon_sym_PIPE_PIPE;
	v->a[68178] = state(1333);
	v->a[68179] = 3;
	small_parse_table_3409(v);
}

void	small_parse_table_3409(t_small_parse_table_array *v)
{
	v->a[68180] = sym_file_redirect;
	v->a[68181] = sym_heredoc_redirect;
	v->a[68182] = aux_sym_redirected_statement_repeat1;
	v->a[68183] = actions(2679);
	v->a[68184] = 7;
	v->a[68185] = anon_sym_LT;
	v->a[68186] = anon_sym_GT;
	v->a[68187] = anon_sym_GT_GT;
	v->a[68188] = anon_sym_LT_AMP;
	v->a[68189] = anon_sym_GT_AMP;
	v->a[68190] = anon_sym_GT_PIPE;
	v->a[68191] = anon_sym_LT_GT;
	v->a[68192] = 10;
	v->a[68193] = actions(3);
	v->a[68194] = 1;
	v->a[68195] = sym_comment;
	v->a[68196] = actions(329);
	v->a[68197] = 1;
	v->a[68198] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[68199] = actions(333);
	small_parse_table_3410(v);
}

/* EOF small_parse_table_681.c */
