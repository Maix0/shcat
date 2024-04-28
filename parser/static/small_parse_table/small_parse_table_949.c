/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_949.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4745(t_small_parse_table_array *v)
{
	v->a[94900] = 2;
	v->a[94901] = anon_sym_PLUS_PLUS2;
	v->a[94902] = anon_sym_DASH_DASH2;
	v->a[94903] = actions(1137);
	v->a[94904] = 2;
	v->a[94905] = anon_sym_DASH2;
	v->a[94906] = anon_sym_PLUS2;
	v->a[94907] = actions(1151);
	v->a[94908] = 2;
	v->a[94909] = sym_raw_string;
	v->a[94910] = sym_ansi_c_string;
	v->a[94911] = actions(1165);
	v->a[94912] = 2;
	v->a[94913] = anon_sym_LT_LPAREN;
	v->a[94914] = anon_sym_GT_LPAREN;
	v->a[94915] = state(2594);
	v->a[94916] = 6;
	v->a[94917] = sym_binary_expression;
	v->a[94918] = sym_ternary_expression;
	v->a[94919] = sym_unary_expression;
	small_parse_table_4746(v);
}

void	small_parse_table_4746(t_small_parse_table_array *v)
{
	v->a[94920] = sym_postfix_expression;
	v->a[94921] = sym_parenthesized_expression;
	v->a[94922] = sym_concatenation;
	v->a[94923] = state(2573);
	v->a[94924] = 9;
	v->a[94925] = sym_arithmetic_expansion;
	v->a[94926] = sym_brace_expression;
	v->a[94927] = sym_string;
	v->a[94928] = sym_translated_string;
	v->a[94929] = sym_number;
	v->a[94930] = sym_simple_expansion;
	v->a[94931] = sym_expansion;
	v->a[94932] = sym_command_substitution;
	v->a[94933] = sym_process_substitution;
	v->a[94934] = 8;
	v->a[94935] = actions(3);
	v->a[94936] = 1;
	v->a[94937] = sym_comment;
	v->a[94938] = actions(5826);
	v->a[94939] = 1;
	small_parse_table_4747(v);
}

void	small_parse_table_4747(t_small_parse_table_array *v)
{
	v->a[94940] = aux_sym_heredoc_redirect_token1;
	v->a[94941] = actions(5828);
	v->a[94942] = 1;
	v->a[94943] = sym_file_descriptor;
	v->a[94944] = actions(6120);
	v->a[94945] = 1;
	v->a[94946] = anon_sym_RPAREN;
	v->a[94947] = actions(5831);
	v->a[94948] = 3;
	v->a[94949] = sym_variable_name;
	v->a[94950] = sym_test_operator;
	v->a[94951] = sym__brace_start;
	v->a[94952] = actions(5821);
	v->a[94953] = 9;
	v->a[94954] = anon_sym_SEMI;
	v->a[94955] = anon_sym_PIPE_PIPE;
	v->a[94956] = anon_sym_AMP_AMP;
	v->a[94957] = anon_sym_PIPE;
	v->a[94958] = anon_sym_AMP;
	v->a[94959] = anon_sym_LT_LT;
	small_parse_table_4748(v);
}

void	small_parse_table_4748(t_small_parse_table_array *v)
{
	v->a[94960] = anon_sym_SEMI_SEMI;
	v->a[94961] = anon_sym_PIPE_AMP;
	v->a[94962] = anon_sym_LT_LT_DASH;
	v->a[94963] = actions(5823);
	v->a[94964] = 11;
	v->a[94965] = anon_sym_LT;
	v->a[94966] = anon_sym_GT;
	v->a[94967] = anon_sym_GT_GT;
	v->a[94968] = anon_sym_AMP_GT;
	v->a[94969] = anon_sym_AMP_GT_GT;
	v->a[94970] = anon_sym_LT_AMP;
	v->a[94971] = anon_sym_GT_AMP;
	v->a[94972] = anon_sym_GT_PIPE;
	v->a[94973] = anon_sym_LT_AMP_DASH;
	v->a[94974] = anon_sym_GT_AMP_DASH;
	v->a[94975] = anon_sym_LT_LT_LT;
	v->a[94976] = actions(5819);
	v->a[94977] = 17;
	v->a[94978] = anon_sym_LPAREN_LPAREN;
	v->a[94979] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_4749(v);
}

void	small_parse_table_4749(t_small_parse_table_array *v)
{
	v->a[94980] = anon_sym_DOLLAR_LBRACK;
	v->a[94981] = anon_sym_DOLLAR;
	v->a[94982] = sym__special_character;
	v->a[94983] = anon_sym_DQUOTE;
	v->a[94984] = sym_raw_string;
	v->a[94985] = sym_ansi_c_string;
	v->a[94986] = aux_sym_number_token1;
	v->a[94987] = aux_sym_number_token2;
	v->a[94988] = anon_sym_DOLLAR_LBRACE;
	v->a[94989] = anon_sym_DOLLAR_LPAREN;
	v->a[94990] = anon_sym_BQUOTE;
	v->a[94991] = anon_sym_DOLLAR_BQUOTE;
	v->a[94992] = anon_sym_LT_LPAREN;
	v->a[94993] = anon_sym_GT_LPAREN;
	v->a[94994] = sym_word;
	v->a[94995] = 26;
	v->a[94996] = actions(71);
	v->a[94997] = 1;
	v->a[94998] = sym_comment;
	v->a[94999] = actions(1127);
	small_parse_table_4750(v);
}

/* EOF small_parse_table_949.c */
