/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_91.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_455(t_small_parse_table_array *v)
{
	v->a[9100] = actions(2660);
	v->a[9101] = 1;
	v->a[9102] = sym_test_operator;
	v->a[9103] = actions(2662);
	v->a[9104] = 1;
	v->a[9105] = sym__bare_dollar;
	v->a[9106] = actions(2664);
	v->a[9107] = 1;
	v->a[9108] = sym__brace_start;
	v->a[9109] = state(727);
	v->a[9110] = 1;
	v->a[9111] = aux_sym_command_repeat2;
	v->a[9112] = state(2417);
	v->a[9113] = 1;
	v->a[9114] = aux_sym__literal_repeat1;
	v->a[9115] = state(2558);
	v->a[9116] = 1;
	v->a[9117] = sym_concatenation;
	v->a[9118] = state(2562);
	v->a[9119] = 1;
	small_parse_table_456(v);
}

void	small_parse_table_456(t_small_parse_table_array *v)
{
	v->a[9120] = sym_herestring_redirect;
	v->a[9121] = state(5634);
	v->a[9122] = 1;
	v->a[9123] = sym_subshell;
	v->a[9124] = actions(2630);
	v->a[9125] = 2;
	v->a[9126] = anon_sym_LPAREN_LPAREN;
	v->a[9127] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[9128] = actions(2632);
	v->a[9129] = 2;
	v->a[9130] = anon_sym_EQ_EQ;
	v->a[9131] = anon_sym_EQ_TILDE;
	v->a[9132] = actions(2644);
	v->a[9133] = 2;
	v->a[9134] = sym_raw_string;
	v->a[9135] = sym_ansi_c_string;
	v->a[9136] = actions(2658);
	v->a[9137] = 2;
	v->a[9138] = anon_sym_LT_LPAREN;
	v->a[9139] = anon_sym_GT_LPAREN;
	small_parse_table_457(v);
}

void	small_parse_table_457(t_small_parse_table_array *v)
{
	v->a[9140] = actions(1404);
	v->a[9141] = 7;
	v->a[9142] = anon_sym_PIPE;
	v->a[9143] = anon_sym_LT;
	v->a[9144] = anon_sym_GT;
	v->a[9145] = anon_sym_LT_LT;
	v->a[9146] = anon_sym_AMP_GT;
	v->a[9147] = anon_sym_LT_AMP;
	v->a[9148] = anon_sym_GT_AMP;
	v->a[9149] = state(2211);
	v->a[9150] = 9;
	v->a[9151] = sym_arithmetic_expansion;
	v->a[9152] = sym_brace_expression;
	v->a[9153] = sym_string;
	v->a[9154] = sym_translated_string;
	v->a[9155] = sym_number;
	v->a[9156] = sym_simple_expansion;
	v->a[9157] = sym_expansion;
	v->a[9158] = sym_command_substitution;
	v->a[9159] = sym_process_substitution;
	small_parse_table_458(v);
}

void	small_parse_table_458(t_small_parse_table_array *v)
{
	v->a[9160] = actions(1408);
	v->a[9161] = 10;
	v->a[9162] = sym_file_descriptor;
	v->a[9163] = anon_sym_PIPE_PIPE;
	v->a[9164] = anon_sym_AMP_AMP;
	v->a[9165] = anon_sym_GT_GT;
	v->a[9166] = anon_sym_PIPE_AMP;
	v->a[9167] = anon_sym_AMP_GT_GT;
	v->a[9168] = anon_sym_GT_PIPE;
	v->a[9169] = anon_sym_LT_AMP_DASH;
	v->a[9170] = anon_sym_GT_AMP_DASH;
	v->a[9171] = anon_sym_LT_LT_DASH;
	v->a[9172] = 21;
	v->a[9173] = actions(3);
	v->a[9174] = 1;
	v->a[9175] = sym_comment;
	v->a[9176] = actions(2676);
	v->a[9177] = 1;
	v->a[9178] = anon_sym_DOLLAR_LBRACK;
	v->a[9179] = actions(2679);
	small_parse_table_459(v);
}

void	small_parse_table_459(t_small_parse_table_array *v)
{
	v->a[9180] = 1;
	v->a[9181] = anon_sym_DOLLAR;
	v->a[9182] = actions(2682);
	v->a[9183] = 1;
	v->a[9184] = sym__special_character;
	v->a[9185] = actions(2685);
	v->a[9186] = 1;
	v->a[9187] = anon_sym_DQUOTE;
	v->a[9188] = actions(2688);
	v->a[9189] = 1;
	v->a[9190] = aux_sym_number_token1;
	v->a[9191] = actions(2691);
	v->a[9192] = 1;
	v->a[9193] = aux_sym_number_token2;
	v->a[9194] = actions(2694);
	v->a[9195] = 1;
	v->a[9196] = anon_sym_DOLLAR_LBRACE;
	v->a[9197] = actions(2697);
	v->a[9198] = 1;
	v->a[9199] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_460(v);
}

/* EOF small_parse_table_91.c */
