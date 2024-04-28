/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2039.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10195(t_small_parse_table_array *v)
{
	v->a[203900] = anon_sym_TILDE;
	v->a[203901] = actions(9288);
	v->a[203902] = 1;
	v->a[203903] = anon_sym_DOLLAR;
	v->a[203904] = actions(9290);
	v->a[203905] = 1;
	v->a[203906] = anon_sym_DQUOTE;
	v->a[203907] = actions(9292);
	v->a[203908] = 1;
	v->a[203909] = aux_sym_number_token1;
	v->a[203910] = actions(9294);
	v->a[203911] = 1;
	v->a[203912] = aux_sym_number_token2;
	v->a[203913] = actions(9296);
	v->a[203914] = 1;
	v->a[203915] = anon_sym_DOLLAR_LBRACE;
	v->a[203916] = actions(9298);
	v->a[203917] = 1;
	v->a[203918] = anon_sym_DOLLAR_LPAREN;
	v->a[203919] = actions(9300);
	small_parse_table_10196(v);
}

void	small_parse_table_10196(t_small_parse_table_array *v)
{
	v->a[203920] = 1;
	v->a[203921] = anon_sym_BQUOTE;
	v->a[203922] = actions(9302);
	v->a[203923] = 1;
	v->a[203924] = anon_sym_DOLLAR_BQUOTE;
	v->a[203925] = actions(9426);
	v->a[203926] = 1;
	v->a[203927] = aux_sym__simple_variable_name_token1;
	v->a[203928] = state(2801);
	v->a[203929] = 1;
	v->a[203930] = sym__arithmetic_binary_expression;
	v->a[203931] = state(2803);
	v->a[203932] = 1;
	v->a[203933] = sym__arithmetic_ternary_expression;
	v->a[203934] = state(2809);
	v->a[203935] = 1;
	v->a[203936] = sym__arithmetic_unary_expression;
	v->a[203937] = state(2825);
	v->a[203938] = 1;
	v->a[203939] = sym__arithmetic_postfix_expression;
	small_parse_table_10197(v);
}

void	small_parse_table_10197(t_small_parse_table_array *v)
{
	v->a[203940] = actions(9282);
	v->a[203941] = 2;
	v->a[203942] = anon_sym_PLUS_PLUS2;
	v->a[203943] = anon_sym_DASH_DASH2;
	v->a[203944] = actions(9284);
	v->a[203945] = 2;
	v->a[203946] = anon_sym_DASH2;
	v->a[203947] = anon_sym_PLUS2;
	v->a[203948] = state(2744);
	v->a[203949] = 9;
	v->a[203950] = sym_subscript;
	v->a[203951] = sym__arithmetic_expression;
	v->a[203952] = sym__arithmetic_literal;
	v->a[203953] = sym__arithmetic_parenthesized_expression;
	v->a[203954] = sym_string;
	v->a[203955] = sym_number;
	v->a[203956] = sym_simple_expansion;
	v->a[203957] = sym_expansion;
	v->a[203958] = sym_command_substitution;
	v->a[203959] = 20;
	small_parse_table_10198(v);
}

void	small_parse_table_10198(t_small_parse_table_array *v)
{
	v->a[203960] = actions(71);
	v->a[203961] = 1;
	v->a[203962] = sym_comment;
	v->a[203963] = actions(2636);
	v->a[203964] = 1;
	v->a[203965] = anon_sym_DOLLAR_LBRACK;
	v->a[203966] = actions(2638);
	v->a[203967] = 1;
	v->a[203968] = anon_sym_DOLLAR;
	v->a[203969] = actions(2640);
	v->a[203970] = 1;
	v->a[203971] = sym__special_character;
	v->a[203972] = actions(2642);
	v->a[203973] = 1;
	v->a[203974] = anon_sym_DQUOTE;
	v->a[203975] = actions(2646);
	v->a[203976] = 1;
	v->a[203977] = aux_sym_number_token1;
	v->a[203978] = actions(2648);
	v->a[203979] = 1;
	small_parse_table_10199(v);
}

void	small_parse_table_10199(t_small_parse_table_array *v)
{
	v->a[203980] = aux_sym_number_token2;
	v->a[203981] = actions(2650);
	v->a[203982] = 1;
	v->a[203983] = anon_sym_DOLLAR_LBRACE;
	v->a[203984] = actions(2652);
	v->a[203985] = 1;
	v->a[203986] = anon_sym_DOLLAR_LPAREN;
	v->a[203987] = actions(2654);
	v->a[203988] = 1;
	v->a[203989] = anon_sym_BQUOTE;
	v->a[203990] = actions(2656);
	v->a[203991] = 1;
	v->a[203992] = anon_sym_DOLLAR_BQUOTE;
	v->a[203993] = actions(2664);
	v->a[203994] = 1;
	v->a[203995] = sym__brace_start;
	v->a[203996] = actions(9428);
	v->a[203997] = 1;
	v->a[203998] = sym_word;
	v->a[203999] = actions(9432);
	small_parse_table_10200(v);
}

/* EOF small_parse_table_2039.c */
