/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1230.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6150(t_small_parse_table_array *v)
{
	v->a[123000] = sym_arithmetic_expansion;
	v->a[123001] = sym_brace_expression;
	v->a[123002] = sym_string;
	v->a[123003] = sym_translated_string;
	v->a[123004] = sym_number;
	v->a[123005] = sym_simple_expansion;
	v->a[123006] = sym_expansion;
	v->a[123007] = sym_command_substitution;
	v->a[123008] = sym_process_substitution;
	v->a[123009] = 6;
	v->a[123010] = actions(71);
	v->a[123011] = 1;
	v->a[123012] = sym_comment;
	v->a[123013] = actions(6514);
	v->a[123014] = 1;
	v->a[123015] = aux_sym_concatenation_token1;
	v->a[123016] = actions(6516);
	v->a[123017] = 1;
	v->a[123018] = sym__concat;
	v->a[123019] = state(2359);
	small_parse_table_6151(v);
}

void	small_parse_table_6151(t_small_parse_table_array *v)
{
	v->a[123020] = 1;
	v->a[123021] = aux_sym_concatenation_repeat1;
	v->a[123022] = actions(1286);
	v->a[123023] = 13;
	v->a[123024] = anon_sym_PIPE;
	v->a[123025] = anon_sym_LT;
	v->a[123026] = anon_sym_GT;
	v->a[123027] = anon_sym_LT_LT;
	v->a[123028] = anon_sym_AMP_GT;
	v->a[123029] = anon_sym_LT_AMP;
	v->a[123030] = anon_sym_GT_AMP;
	v->a[123031] = anon_sym_DOLLAR;
	v->a[123032] = aux_sym_number_token1;
	v->a[123033] = aux_sym_number_token2;
	v->a[123034] = anon_sym_DOLLAR_LPAREN;
	v->a[123035] = anon_sym_BQUOTE;
	v->a[123036] = sym_word;
	v->a[123037] = actions(1288);
	v->a[123038] = 25;
	v->a[123039] = sym_file_descriptor;
	small_parse_table_6152(v);
}

void	small_parse_table_6152(t_small_parse_table_array *v)
{
	v->a[123040] = sym_variable_name;
	v->a[123041] = sym_test_operator;
	v->a[123042] = sym__brace_start;
	v->a[123043] = anon_sym_LPAREN_LPAREN;
	v->a[123044] = anon_sym_PIPE_PIPE;
	v->a[123045] = anon_sym_AMP_AMP;
	v->a[123046] = anon_sym_GT_GT;
	v->a[123047] = anon_sym_PIPE_AMP;
	v->a[123048] = anon_sym_AMP_GT_GT;
	v->a[123049] = anon_sym_GT_PIPE;
	v->a[123050] = anon_sym_LT_AMP_DASH;
	v->a[123051] = anon_sym_GT_AMP_DASH;
	v->a[123052] = anon_sym_LT_LT_DASH;
	v->a[123053] = anon_sym_LT_LT_LT;
	v->a[123054] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[123055] = anon_sym_DOLLAR_LBRACK;
	v->a[123056] = sym__special_character;
	v->a[123057] = anon_sym_DQUOTE;
	v->a[123058] = sym_raw_string;
	v->a[123059] = sym_ansi_c_string;
	small_parse_table_6153(v);
}

void	small_parse_table_6153(t_small_parse_table_array *v)
{
	v->a[123060] = anon_sym_DOLLAR_LBRACE;
	v->a[123061] = anon_sym_DOLLAR_BQUOTE;
	v->a[123062] = anon_sym_LT_LPAREN;
	v->a[123063] = anon_sym_GT_LPAREN;
	v->a[123064] = 3;
	v->a[123065] = actions(71);
	v->a[123066] = 1;
	v->a[123067] = sym_comment;
	v->a[123068] = actions(1261);
	v->a[123069] = 15;
	v->a[123070] = anon_sym_PIPE;
	v->a[123071] = anon_sym_EQ_EQ;
	v->a[123072] = anon_sym_LT;
	v->a[123073] = anon_sym_GT;
	v->a[123074] = anon_sym_LT_LT;
	v->a[123075] = anon_sym_LPAREN;
	v->a[123076] = anon_sym_EQ_TILDE;
	v->a[123077] = anon_sym_AMP_GT;
	v->a[123078] = anon_sym_LT_AMP;
	v->a[123079] = anon_sym_GT_AMP;
	small_parse_table_6154(v);
}

void	small_parse_table_6154(t_small_parse_table_array *v)
{
	v->a[123080] = anon_sym_DOLLAR;
	v->a[123081] = aux_sym_number_token1;
	v->a[123082] = aux_sym_number_token2;
	v->a[123083] = anon_sym_DOLLAR_LPAREN;
	v->a[123084] = sym_word;
	v->a[123085] = actions(1263);
	v->a[123086] = 26;
	v->a[123087] = sym_file_descriptor;
	v->a[123088] = sym_test_operator;
	v->a[123089] = sym__bare_dollar;
	v->a[123090] = sym__brace_start;
	v->a[123091] = anon_sym_LPAREN_LPAREN;
	v->a[123092] = anon_sym_PIPE_PIPE;
	v->a[123093] = anon_sym_AMP_AMP;
	v->a[123094] = anon_sym_GT_GT;
	v->a[123095] = anon_sym_PIPE_AMP;
	v->a[123096] = anon_sym_AMP_GT_GT;
	v->a[123097] = anon_sym_GT_PIPE;
	v->a[123098] = anon_sym_LT_AMP_DASH;
	v->a[123099] = anon_sym_GT_AMP_DASH;
	small_parse_table_6155(v);
}

/* EOF small_parse_table_1230.c */
