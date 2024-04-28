/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_359.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1795(t_small_parse_table_array *v)
{
	v->a[35900] = anon_sym_BQUOTE;
	v->a[35901] = anon_sym_DOLLAR_BQUOTE;
	v->a[35902] = anon_sym_LT_LPAREN;
	v->a[35903] = anon_sym_GT_LPAREN;
	v->a[35904] = sym_word;
	v->a[35905] = 10;
	v->a[35906] = actions(3);
	v->a[35907] = 1;
	v->a[35908] = sym_comment;
	v->a[35909] = actions(4272);
	v->a[35910] = 1;
	v->a[35911] = aux_sym_heredoc_redirect_token1;
	v->a[35912] = actions(4811);
	v->a[35913] = 1;
	v->a[35914] = sym_variable_name;
	v->a[35915] = state(6786);
	v->a[35916] = 1;
	v->a[35917] = sym_subscript;
	v->a[35918] = actions(4253);
	v->a[35919] = 2;
	small_parse_table_1796(v);
}

void	small_parse_table_1796(t_small_parse_table_array *v)
{
	v->a[35920] = anon_sym_PIPE;
	v->a[35921] = anon_sym_PIPE_AMP;
	v->a[35922] = state(4534);
	v->a[35923] = 2;
	v->a[35924] = sym_variable_assignment;
	v->a[35925] = aux_sym_variable_assignments_repeat1;
	v->a[35926] = actions(4261);
	v->a[35927] = 3;
	v->a[35928] = sym_file_descriptor;
	v->a[35929] = sym_test_operator;
	v->a[35930] = sym__brace_start;
	v->a[35931] = state(4746);
	v->a[35932] = 3;
	v->a[35933] = sym_file_redirect;
	v->a[35934] = sym_heredoc_redirect;
	v->a[35935] = aux_sym_redirected_statement_repeat1;
	v->a[35936] = actions(4270);
	v->a[35937] = 8;
	v->a[35938] = anon_sym_SEMI;
	v->a[35939] = anon_sym_PIPE_PIPE;
	small_parse_table_1797(v);
}

void	small_parse_table_1797(t_small_parse_table_array *v)
{
	v->a[35940] = anon_sym_AMP_AMP;
	v->a[35941] = anon_sym_AMP;
	v->a[35942] = anon_sym_LT_LT;
	v->a[35943] = anon_sym_RPAREN;
	v->a[35944] = anon_sym_SEMI_SEMI;
	v->a[35945] = anon_sym_LT_LT_DASH;
	v->a[35946] = actions(4247);
	v->a[35947] = 28;
	v->a[35948] = anon_sym_LPAREN_LPAREN;
	v->a[35949] = anon_sym_LT;
	v->a[35950] = anon_sym_GT;
	v->a[35951] = anon_sym_GT_GT;
	v->a[35952] = anon_sym_AMP_GT;
	v->a[35953] = anon_sym_AMP_GT_GT;
	v->a[35954] = anon_sym_LT_AMP;
	v->a[35955] = anon_sym_GT_AMP;
	v->a[35956] = anon_sym_GT_PIPE;
	v->a[35957] = anon_sym_LT_AMP_DASH;
	v->a[35958] = anon_sym_GT_AMP_DASH;
	v->a[35959] = anon_sym_LT_LT_LT;
	small_parse_table_1798(v);
}

void	small_parse_table_1798(t_small_parse_table_array *v)
{
	v->a[35960] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[35961] = anon_sym_DOLLAR_LBRACK;
	v->a[35962] = anon_sym_DOLLAR;
	v->a[35963] = sym__special_character;
	v->a[35964] = anon_sym_DQUOTE;
	v->a[35965] = sym_raw_string;
	v->a[35966] = sym_ansi_c_string;
	v->a[35967] = aux_sym_number_token1;
	v->a[35968] = aux_sym_number_token2;
	v->a[35969] = anon_sym_DOLLAR_LBRACE;
	v->a[35970] = anon_sym_DOLLAR_LPAREN;
	v->a[35971] = anon_sym_BQUOTE;
	v->a[35972] = anon_sym_DOLLAR_BQUOTE;
	v->a[35973] = anon_sym_LT_LPAREN;
	v->a[35974] = anon_sym_GT_LPAREN;
	v->a[35975] = sym_word;
	v->a[35976] = 6;
	v->a[35977] = actions(71);
	v->a[35978] = 1;
	v->a[35979] = sym_comment;
	small_parse_table_1799(v);
}

void	small_parse_table_1799(t_small_parse_table_array *v)
{
	v->a[35980] = state(2726);
	v->a[35981] = 1;
	v->a[35982] = aux_sym__literal_repeat1;
	v->a[35983] = state(2846);
	v->a[35984] = 1;
	v->a[35985] = sym_concatenation;
	v->a[35986] = state(2427);
	v->a[35987] = 9;
	v->a[35988] = sym_arithmetic_expansion;
	v->a[35989] = sym_brace_expression;
	v->a[35990] = sym_string;
	v->a[35991] = sym_translated_string;
	v->a[35992] = sym_number;
	v->a[35993] = sym_simple_expansion;
	v->a[35994] = sym_expansion;
	v->a[35995] = sym_command_substitution;
	v->a[35996] = sym_process_substitution;
	v->a[35997] = actions(2498);
	v->a[35998] = 12;
	v->a[35999] = anon_sym_PIPE;
	small_parse_table_1800(v);
}

/* EOF small_parse_table_359.c */
