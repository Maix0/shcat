/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_309.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1545(t_small_parse_table_array *v)
{
	v->a[30900] = aux_sym_heredoc_redirect_token1;
	v->a[30901] = actions(3533);
	v->a[30902] = 2;
	v->a[30903] = anon_sym_LPAREN_LPAREN;
	v->a[30904] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30905] = actions(3566);
	v->a[30906] = 2;
	v->a[30907] = anon_sym_LT_LPAREN;
	v->a[30908] = anon_sym_GT_LPAREN;
	v->a[30909] = state(875);
	v->a[30910] = 2;
	v->a[30911] = sym_concatenation;
	v->a[30912] = aux_sym_unset_command_repeat1;
	v->a[30913] = actions(4534);
	v->a[30914] = 3;
	v->a[30915] = sym_raw_string;
	v->a[30916] = sym_ansi_c_string;
	v->a[30917] = sym_word;
	v->a[30918] = state(2367);
	v->a[30919] = 9;
	small_parse_table_1546(v);
}

void	small_parse_table_1546(t_small_parse_table_array *v)
{
	v->a[30920] = sym_arithmetic_expansion;
	v->a[30921] = sym_brace_expression;
	v->a[30922] = sym_string;
	v->a[30923] = sym_translated_string;
	v->a[30924] = sym_number;
	v->a[30925] = sym_simple_expansion;
	v->a[30926] = sym_expansion;
	v->a[30927] = sym_command_substitution;
	v->a[30928] = sym_process_substitution;
	v->a[30929] = actions(2440);
	v->a[30930] = 16;
	v->a[30931] = anon_sym_PIPE_PIPE;
	v->a[30932] = anon_sym_AMP_AMP;
	v->a[30933] = anon_sym_PIPE;
	v->a[30934] = anon_sym_LT;
	v->a[30935] = anon_sym_GT;
	v->a[30936] = anon_sym_LT_LT;
	v->a[30937] = anon_sym_GT_GT;
	v->a[30938] = anon_sym_PIPE_AMP;
	v->a[30939] = anon_sym_AMP_GT;
	small_parse_table_1547(v);
}

void	small_parse_table_1547(t_small_parse_table_array *v)
{
	v->a[30940] = anon_sym_AMP_GT_GT;
	v->a[30941] = anon_sym_LT_AMP;
	v->a[30942] = anon_sym_GT_AMP;
	v->a[30943] = anon_sym_GT_PIPE;
	v->a[30944] = anon_sym_LT_AMP_DASH;
	v->a[30945] = anon_sym_GT_AMP_DASH;
	v->a[30946] = anon_sym_LT_LT_DASH;
	v->a[30947] = 6;
	v->a[30948] = actions(3);
	v->a[30949] = 1;
	v->a[30950] = sym_comment;
	v->a[30951] = actions(4374);
	v->a[30952] = 1;
	v->a[30953] = aux_sym_concatenation_token1;
	v->a[30954] = actions(4376);
	v->a[30955] = 1;
	v->a[30956] = sym__concat;
	v->a[30957] = state(891);
	v->a[30958] = 1;
	v->a[30959] = aux_sym_concatenation_repeat1;
	small_parse_table_1548(v);
}

void	small_parse_table_1548(t_small_parse_table_array *v)
{
	v->a[30960] = actions(4548);
	v->a[30961] = 5;
	v->a[30962] = sym_file_descriptor;
	v->a[30963] = sym_test_operator;
	v->a[30964] = sym__bare_dollar;
	v->a[30965] = sym__brace_start;
	v->a[30966] = aux_sym_heredoc_redirect_token1;
	v->a[30967] = actions(4546);
	v->a[30968] = 42;
	v->a[30969] = anon_sym_LPAREN_LPAREN;
	v->a[30970] = anon_sym_SEMI;
	v->a[30971] = anon_sym_PIPE_PIPE;
	v->a[30972] = anon_sym_AMP_AMP;
	v->a[30973] = anon_sym_PIPE;
	v->a[30974] = anon_sym_AMP;
	v->a[30975] = anon_sym_EQ_EQ;
	v->a[30976] = anon_sym_LT;
	v->a[30977] = anon_sym_GT;
	v->a[30978] = anon_sym_LT_LT;
	v->a[30979] = anon_sym_GT_GT;
	small_parse_table_1549(v);
}

void	small_parse_table_1549(t_small_parse_table_array *v)
{
	v->a[30980] = anon_sym_esac;
	v->a[30981] = anon_sym_SEMI_SEMI;
	v->a[30982] = anon_sym_SEMI_AMP;
	v->a[30983] = anon_sym_SEMI_SEMI_AMP;
	v->a[30984] = anon_sym_PIPE_AMP;
	v->a[30985] = anon_sym_EQ_TILDE;
	v->a[30986] = anon_sym_AMP_GT;
	v->a[30987] = anon_sym_AMP_GT_GT;
	v->a[30988] = anon_sym_LT_AMP;
	v->a[30989] = anon_sym_GT_AMP;
	v->a[30990] = anon_sym_GT_PIPE;
	v->a[30991] = anon_sym_LT_AMP_DASH;
	v->a[30992] = anon_sym_GT_AMP_DASH;
	v->a[30993] = anon_sym_LT_LT_DASH;
	v->a[30994] = anon_sym_LT_LT_LT;
	v->a[30995] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30996] = anon_sym_DOLLAR_LBRACK;
	v->a[30997] = anon_sym_DOLLAR;
	v->a[30998] = sym__special_character;
	v->a[30999] = anon_sym_DQUOTE;
	small_parse_table_1550(v);
}

/* EOF small_parse_table_309.c */
