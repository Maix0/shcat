/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_975.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4875(t_small_parse_table_array *v)
{
	v->a[97500] = 1;
	v->a[97501] = sym__special_character;
	v->a[97502] = actions(5809);
	v->a[97503] = 1;
	v->a[97504] = anon_sym_BQUOTE;
	v->a[97505] = state(2641);
	v->a[97506] = 1;
	v->a[97507] = aux_sym__literal_repeat1;
	v->a[97508] = state(2989);
	v->a[97509] = 1;
	v->a[97510] = sym__expression;
	v->a[97511] = actions(183);
	v->a[97512] = 2;
	v->a[97513] = anon_sym_PLUS_PLUS2;
	v->a[97514] = anon_sym_DASH_DASH2;
	v->a[97515] = actions(185);
	v->a[97516] = 2;
	v->a[97517] = anon_sym_DASH2;
	v->a[97518] = anon_sym_PLUS2;
	v->a[97519] = actions(352);
	small_parse_table_4876(v);
}

void	small_parse_table_4876(t_small_parse_table_array *v)
{
	v->a[97520] = 2;
	v->a[97521] = anon_sym_LPAREN_LPAREN;
	v->a[97522] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[97523] = actions(373);
	v->a[97524] = 2;
	v->a[97525] = sym_raw_string;
	v->a[97526] = sym_ansi_c_string;
	v->a[97527] = actions(387);
	v->a[97528] = 2;
	v->a[97529] = anon_sym_LT_LPAREN;
	v->a[97530] = anon_sym_GT_LPAREN;
	v->a[97531] = state(3071);
	v->a[97532] = 6;
	v->a[97533] = sym_binary_expression;
	v->a[97534] = sym_ternary_expression;
	v->a[97535] = sym_unary_expression;
	v->a[97536] = sym_postfix_expression;
	v->a[97537] = sym_parenthesized_expression;
	v->a[97538] = sym_concatenation;
	v->a[97539] = state(2521);
	small_parse_table_4877(v);
}

void	small_parse_table_4877(t_small_parse_table_array *v)
{
	v->a[97540] = 9;
	v->a[97541] = sym_arithmetic_expansion;
	v->a[97542] = sym_brace_expression;
	v->a[97543] = sym_string;
	v->a[97544] = sym_translated_string;
	v->a[97545] = sym_number;
	v->a[97546] = sym_simple_expansion;
	v->a[97547] = sym_expansion;
	v->a[97548] = sym_command_substitution;
	v->a[97549] = sym_process_substitution;
	v->a[97550] = 3;
	v->a[97551] = actions(71);
	v->a[97552] = 1;
	v->a[97553] = sym_comment;
	v->a[97554] = actions(1316);
	v->a[97555] = 16;
	v->a[97556] = anon_sym_PIPE;
	v->a[97557] = anon_sym_EQ_EQ;
	v->a[97558] = anon_sym_LT;
	v->a[97559] = anon_sym_GT;
	small_parse_table_4878(v);
}

void	small_parse_table_4878(t_small_parse_table_array *v)
{
	v->a[97560] = anon_sym_LT_LT;
	v->a[97561] = anon_sym_LPAREN;
	v->a[97562] = anon_sym_EQ_TILDE;
	v->a[97563] = anon_sym_AMP_GT;
	v->a[97564] = anon_sym_LT_AMP;
	v->a[97565] = anon_sym_GT_AMP;
	v->a[97566] = anon_sym_DOLLAR;
	v->a[97567] = aux_sym_number_token1;
	v->a[97568] = aux_sym_number_token2;
	v->a[97569] = anon_sym_DOLLAR_LPAREN;
	v->a[97570] = anon_sym_BQUOTE;
	v->a[97571] = sym_word;
	v->a[97572] = actions(1318);
	v->a[97573] = 27;
	v->a[97574] = sym_file_descriptor;
	v->a[97575] = sym__concat;
	v->a[97576] = sym_test_operator;
	v->a[97577] = sym__bare_dollar;
	v->a[97578] = sym__brace_start;
	v->a[97579] = anon_sym_LPAREN_LPAREN;
	small_parse_table_4879(v);
}

void	small_parse_table_4879(t_small_parse_table_array *v)
{
	v->a[97580] = anon_sym_PIPE_PIPE;
	v->a[97581] = anon_sym_AMP_AMP;
	v->a[97582] = anon_sym_GT_GT;
	v->a[97583] = anon_sym_PIPE_AMP;
	v->a[97584] = anon_sym_AMP_GT_GT;
	v->a[97585] = anon_sym_GT_PIPE;
	v->a[97586] = anon_sym_LT_AMP_DASH;
	v->a[97587] = anon_sym_GT_AMP_DASH;
	v->a[97588] = anon_sym_LT_LT_DASH;
	v->a[97589] = anon_sym_LT_LT_LT;
	v->a[97590] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[97591] = anon_sym_DOLLAR_LBRACK;
	v->a[97592] = aux_sym_concatenation_token1;
	v->a[97593] = sym__special_character;
	v->a[97594] = anon_sym_DQUOTE;
	v->a[97595] = sym_raw_string;
	v->a[97596] = sym_ansi_c_string;
	v->a[97597] = anon_sym_DOLLAR_LBRACE;
	v->a[97598] = anon_sym_DOLLAR_BQUOTE;
	v->a[97599] = anon_sym_LT_LPAREN;
	small_parse_table_4880(v);
}

/* EOF small_parse_table_975.c */
