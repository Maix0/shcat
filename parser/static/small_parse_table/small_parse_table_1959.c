/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1959.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9795(t_small_parse_table_array *v)
{
	v->a[195900] = actions(8589);
	v->a[195901] = 1;
	v->a[195902] = anon_sym_BQUOTE;
	v->a[195903] = actions(8591);
	v->a[195904] = 1;
	v->a[195905] = anon_sym_DOLLAR_BQUOTE;
	v->a[195906] = actions(8595);
	v->a[195907] = 1;
	v->a[195908] = sym_test_operator;
	v->a[195909] = actions(8597);
	v->a[195910] = 1;
	v->a[195911] = sym__brace_start;
	v->a[195912] = actions(8748);
	v->a[195913] = 1;
	v->a[195914] = anon_sym_RPAREN;
	v->a[195915] = state(5365);
	v->a[195916] = 1;
	v->a[195917] = aux_sym__literal_repeat1;
	v->a[195918] = actions(8567);
	v->a[195919] = 2;
	small_parse_table_9796(v);
}

void	small_parse_table_9796(t_small_parse_table_array *v)
{
	v->a[195920] = anon_sym_LPAREN_LPAREN;
	v->a[195921] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[195922] = actions(8579);
	v->a[195923] = 2;
	v->a[195924] = sym_raw_string;
	v->a[195925] = sym_ansi_c_string;
	v->a[195926] = actions(8593);
	v->a[195927] = 2;
	v->a[195928] = anon_sym_LT_LPAREN;
	v->a[195929] = anon_sym_GT_LPAREN;
	v->a[195930] = state(3606);
	v->a[195931] = 2;
	v->a[195932] = sym_concatenation;
	v->a[195933] = aux_sym_for_statement_repeat1;
	v->a[195934] = state(5045);
	v->a[195935] = 9;
	v->a[195936] = sym_arithmetic_expansion;
	v->a[195937] = sym_brace_expression;
	v->a[195938] = sym_string;
	v->a[195939] = sym_translated_string;
	small_parse_table_9797(v);
}

void	small_parse_table_9797(t_small_parse_table_array *v)
{
	v->a[195940] = sym_number;
	v->a[195941] = sym_simple_expansion;
	v->a[195942] = sym_expansion;
	v->a[195943] = sym_command_substitution;
	v->a[195944] = sym_process_substitution;
	v->a[195945] = 21;
	v->a[195946] = actions(3);
	v->a[195947] = 1;
	v->a[195948] = sym_comment;
	v->a[195949] = actions(3729);
	v->a[195950] = 1;
	v->a[195951] = anon_sym_DOLLAR_LBRACK;
	v->a[195952] = actions(3731);
	v->a[195953] = 1;
	v->a[195954] = anon_sym_DOLLAR;
	v->a[195955] = actions(3733);
	v->a[195956] = 1;
	v->a[195957] = sym__special_character;
	v->a[195958] = actions(3735);
	v->a[195959] = 1;
	small_parse_table_9798(v);
}

void	small_parse_table_9798(t_small_parse_table_array *v)
{
	v->a[195960] = anon_sym_DQUOTE;
	v->a[195961] = actions(3737);
	v->a[195962] = 1;
	v->a[195963] = aux_sym_number_token1;
	v->a[195964] = actions(3739);
	v->a[195965] = 1;
	v->a[195966] = aux_sym_number_token2;
	v->a[195967] = actions(3741);
	v->a[195968] = 1;
	v->a[195969] = anon_sym_DOLLAR_LBRACE;
	v->a[195970] = actions(3743);
	v->a[195971] = 1;
	v->a[195972] = anon_sym_DOLLAR_LPAREN;
	v->a[195973] = actions(3745);
	v->a[195974] = 1;
	v->a[195975] = anon_sym_BQUOTE;
	v->a[195976] = actions(3747);
	v->a[195977] = 1;
	v->a[195978] = anon_sym_DOLLAR_BQUOTE;
	v->a[195979] = actions(3753);
	small_parse_table_9799(v);
}

void	small_parse_table_9799(t_small_parse_table_array *v)
{
	v->a[195980] = 1;
	v->a[195981] = sym_test_operator;
	v->a[195982] = actions(3755);
	v->a[195983] = 1;
	v->a[195984] = sym__brace_start;
	v->a[195985] = actions(8750);
	v->a[195986] = 1;
	v->a[195987] = aux_sym_heredoc_redirect_token1;
	v->a[195988] = state(3571);
	v->a[195989] = 1;
	v->a[195990] = aux_sym__heredoc_command;
	v->a[195991] = state(5351);
	v->a[195992] = 1;
	v->a[195993] = aux_sym__literal_repeat1;
	v->a[195994] = state(5456);
	v->a[195995] = 1;
	v->a[195996] = sym_concatenation;
	v->a[195997] = actions(3715);
	v->a[195998] = 2;
	v->a[195999] = anon_sym_LPAREN_LPAREN;
	small_parse_table_9800(v);
}

/* EOF small_parse_table_1959.c */
