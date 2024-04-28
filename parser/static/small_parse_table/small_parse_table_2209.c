/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2209.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11045(t_small_parse_table_array *v)
{
	v->a[220900] = anon_sym_DOLLAR_BQUOTE;
	v->a[220901] = actions(4181);
	v->a[220902] = 1;
	v->a[220903] = sym__brace_start;
	v->a[220904] = actions(9502);
	v->a[220905] = 1;
	v->a[220906] = sym_word;
	v->a[220907] = actions(9508);
	v->a[220908] = 1;
	v->a[220909] = sym__comment_word;
	v->a[220910] = actions(10576);
	v->a[220911] = 1;
	v->a[220912] = anon_sym_DOLLAR;
	v->a[220913] = actions(4149);
	v->a[220914] = 2;
	v->a[220915] = anon_sym_LPAREN_LPAREN;
	v->a[220916] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[220917] = actions(4173);
	v->a[220918] = 2;
	v->a[220919] = anon_sym_LT_LPAREN;
	small_parse_table_11046(v);
}

void	small_parse_table_11046(t_small_parse_table_array *v)
{
	v->a[220920] = anon_sym_GT_LPAREN;
	v->a[220921] = actions(9504);
	v->a[220922] = 2;
	v->a[220923] = sym_test_operator;
	v->a[220924] = sym__special_character;
	v->a[220925] = actions(9506);
	v->a[220926] = 3;
	v->a[220927] = sym__bare_dollar;
	v->a[220928] = sym_raw_string;
	v->a[220929] = sym_ansi_c_string;
	v->a[220930] = state(2580);
	v->a[220931] = 9;
	v->a[220932] = sym_arithmetic_expansion;
	v->a[220933] = sym_brace_expression;
	v->a[220934] = sym_string;
	v->a[220935] = sym_translated_string;
	v->a[220936] = sym_number;
	v->a[220937] = sym_simple_expansion;
	v->a[220938] = sym_expansion;
	v->a[220939] = sym_command_substitution;
	small_parse_table_11047(v);
}

void	small_parse_table_11047(t_small_parse_table_array *v)
{
	v->a[220940] = sym_process_substitution;
	v->a[220941] = 18;
	v->a[220942] = actions(3);
	v->a[220943] = 1;
	v->a[220944] = sym_comment;
	v->a[220945] = actions(264);
	v->a[220946] = 1;
	v->a[220947] = aux_sym_number_token1;
	v->a[220948] = actions(266);
	v->a[220949] = 1;
	v->a[220950] = aux_sym_number_token2;
	v->a[220951] = actions(270);
	v->a[220952] = 1;
	v->a[220953] = anon_sym_DOLLAR_LPAREN;
	v->a[220954] = actions(284);
	v->a[220955] = 1;
	v->a[220956] = sym__brace_start;
	v->a[220957] = actions(1075);
	v->a[220958] = 1;
	v->a[220959] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_11048(v);
}

void	small_parse_table_11048(t_small_parse_table_array *v)
{
	v->a[220960] = actions(1081);
	v->a[220961] = 1;
	v->a[220962] = anon_sym_DQUOTE;
	v->a[220963] = actions(1085);
	v->a[220964] = 1;
	v->a[220965] = anon_sym_DOLLAR_LBRACE;
	v->a[220966] = actions(1087);
	v->a[220967] = 1;
	v->a[220968] = anon_sym_DOLLAR_BQUOTE;
	v->a[220969] = actions(3598);
	v->a[220970] = 1;
	v->a[220971] = anon_sym_BQUOTE;
	v->a[220972] = actions(10428);
	v->a[220973] = 1;
	v->a[220974] = sym_word;
	v->a[220975] = actions(10434);
	v->a[220976] = 1;
	v->a[220977] = sym__comment_word;
	v->a[220978] = actions(10578);
	v->a[220979] = 1;
	small_parse_table_11049(v);
}

void	small_parse_table_11049(t_small_parse_table_array *v)
{
	v->a[220980] = anon_sym_DOLLAR;
	v->a[220981] = actions(1073);
	v->a[220982] = 2;
	v->a[220983] = anon_sym_LPAREN_LPAREN;
	v->a[220984] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[220985] = actions(1089);
	v->a[220986] = 2;
	v->a[220987] = anon_sym_LT_LPAREN;
	v->a[220988] = anon_sym_GT_LPAREN;
	v->a[220989] = actions(10430);
	v->a[220990] = 2;
	v->a[220991] = sym_test_operator;
	v->a[220992] = sym__special_character;
	v->a[220993] = actions(10432);
	v->a[220994] = 3;
	v->a[220995] = sym__bare_dollar;
	v->a[220996] = sym_raw_string;
	v->a[220997] = sym_ansi_c_string;
	v->a[220998] = state(2732);
	v->a[220999] = 9;
	small_parse_table_11050(v);
}

/* EOF small_parse_table_2209.c */
