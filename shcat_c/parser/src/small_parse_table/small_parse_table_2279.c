/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2279.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11395(t_small_parse_table_array *v)
{
	v->a[227900] = actions(4649);
	v->a[227901] = 1;
	v->a[227902] = anon_sym_DOLLAR_LPAREN;
	v->a[227903] = actions(4651);
	v->a[227904] = 1;
	v->a[227905] = anon_sym_BQUOTE;
	v->a[227906] = actions(4653);
	v->a[227907] = 1;
	v->a[227908] = anon_sym_DOLLAR_BQUOTE;
	v->a[227909] = actions(4659);
	v->a[227910] = 1;
	v->a[227911] = sym__brace_start;
	v->a[227912] = actions(9330);
	v->a[227913] = 1;
	v->a[227914] = sym_word;
	v->a[227915] = actions(9338);
	v->a[227916] = 1;
	v->a[227917] = sym__comment_word;
	v->a[227918] = actions(10826);
	v->a[227919] = 1;
	small_parse_table_11396(v);
}

void	small_parse_table_11396(t_small_parse_table_array *v)
{
	v->a[227920] = anon_sym_DOLLAR;
	v->a[227921] = actions(4631);
	v->a[227922] = 2;
	v->a[227923] = anon_sym_LPAREN_LPAREN;
	v->a[227924] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[227925] = actions(4655);
	v->a[227926] = 2;
	v->a[227927] = anon_sym_LT_LPAREN;
	v->a[227928] = anon_sym_GT_LPAREN;
	v->a[227929] = actions(9334);
	v->a[227930] = 2;
	v->a[227931] = sym_test_operator;
	v->a[227932] = sym__special_character;
	v->a[227933] = actions(9336);
	v->a[227934] = 3;
	v->a[227935] = sym__bare_dollar;
	v->a[227936] = sym_raw_string;
	v->a[227937] = sym_ansi_c_string;
	v->a[227938] = state(2634);
	v->a[227939] = 9;
	small_parse_table_11397(v);
}

void	small_parse_table_11397(t_small_parse_table_array *v)
{
	v->a[227940] = sym_arithmetic_expansion;
	v->a[227941] = sym_brace_expression;
	v->a[227942] = sym_string;
	v->a[227943] = sym_translated_string;
	v->a[227944] = sym_number;
	v->a[227945] = sym_simple_expansion;
	v->a[227946] = sym_expansion;
	v->a[227947] = sym_command_substitution;
	v->a[227948] = sym_process_substitution;
	v->a[227949] = 21;
	v->a[227950] = actions(71);
	v->a[227951] = 1;
	v->a[227952] = sym_comment;
	v->a[227953] = actions(3602);
	v->a[227954] = 1;
	v->a[227955] = sym_variable_name;
	v->a[227956] = actions(9898);
	v->a[227957] = 1;
	v->a[227958] = anon_sym_LPAREN;
	v->a[227959] = actions(9900);
	small_parse_table_11398(v);
}

void	small_parse_table_11398(t_small_parse_table_array *v)
{
	v->a[227960] = 1;
	v->a[227961] = anon_sym_BANG;
	v->a[227962] = actions(9906);
	v->a[227963] = 1;
	v->a[227964] = anon_sym_TILDE;
	v->a[227965] = actions(9908);
	v->a[227966] = 1;
	v->a[227967] = anon_sym_DOLLAR;
	v->a[227968] = actions(9910);
	v->a[227969] = 1;
	v->a[227970] = anon_sym_DQUOTE;
	v->a[227971] = actions(9912);
	v->a[227972] = 1;
	v->a[227973] = aux_sym_number_token1;
	v->a[227974] = actions(9914);
	v->a[227975] = 1;
	v->a[227976] = aux_sym_number_token2;
	v->a[227977] = actions(9916);
	v->a[227978] = 1;
	v->a[227979] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_11399(v);
}

void	small_parse_table_11399(t_small_parse_table_array *v)
{
	v->a[227980] = actions(9918);
	v->a[227981] = 1;
	v->a[227982] = anon_sym_DOLLAR_LPAREN;
	v->a[227983] = actions(9920);
	v->a[227984] = 1;
	v->a[227985] = anon_sym_BQUOTE;
	v->a[227986] = actions(9922);
	v->a[227987] = 1;
	v->a[227988] = anon_sym_DOLLAR_BQUOTE;
	v->a[227989] = actions(10828);
	v->a[227990] = 1;
	v->a[227991] = aux_sym__simple_variable_name_token1;
	v->a[227992] = state(3359);
	v->a[227993] = 1;
	v->a[227994] = sym__arithmetic_postfix_expression;
	v->a[227995] = state(3361);
	v->a[227996] = 1;
	v->a[227997] = sym__arithmetic_unary_expression;
	v->a[227998] = state(3367);
	v->a[227999] = 1;
	small_parse_table_11400(v);
}

/* EOF small_parse_table_2279.c */
