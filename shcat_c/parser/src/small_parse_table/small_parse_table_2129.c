/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2129.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10645(t_small_parse_table_array *v)
{
	v->a[212900] = actions(3);
	v->a[212901] = 1;
	v->a[212902] = sym_comment;
	v->a[212903] = actions(3401);
	v->a[212904] = 1;
	v->a[212905] = aux_sym_number_token1;
	v->a[212906] = actions(3403);
	v->a[212907] = 1;
	v->a[212908] = aux_sym_number_token2;
	v->a[212909] = actions(3407);
	v->a[212910] = 1;
	v->a[212911] = anon_sym_DOLLAR_LPAREN;
	v->a[212912] = actions(3417);
	v->a[212913] = 1;
	v->a[212914] = sym__brace_start;
	v->a[212915] = actions(8926);
	v->a[212916] = 1;
	v->a[212917] = anon_sym_DOLLAR_LBRACK;
	v->a[212918] = actions(8930);
	v->a[212919] = 1;
	small_parse_table_10646(v);
}

void	small_parse_table_10646(t_small_parse_table_array *v)
{
	v->a[212920] = anon_sym_DQUOTE;
	v->a[212921] = actions(8934);
	v->a[212922] = 1;
	v->a[212923] = anon_sym_DOLLAR_LBRACE;
	v->a[212924] = actions(8936);
	v->a[212925] = 1;
	v->a[212926] = anon_sym_BQUOTE;
	v->a[212927] = actions(8938);
	v->a[212928] = 1;
	v->a[212929] = anon_sym_DOLLAR_BQUOTE;
	v->a[212930] = actions(9696);
	v->a[212931] = 1;
	v->a[212932] = sym_word;
	v->a[212933] = actions(9704);
	v->a[212934] = 1;
	v->a[212935] = sym__comment_word;
	v->a[212936] = actions(10152);
	v->a[212937] = 1;
	v->a[212938] = anon_sym_DOLLAR;
	v->a[212939] = actions(8924);
	small_parse_table_10647(v);
}

void	small_parse_table_10647(t_small_parse_table_array *v)
{
	v->a[212940] = 2;
	v->a[212941] = anon_sym_LPAREN_LPAREN;
	v->a[212942] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[212943] = actions(8940);
	v->a[212944] = 2;
	v->a[212945] = anon_sym_LT_LPAREN;
	v->a[212946] = anon_sym_GT_LPAREN;
	v->a[212947] = actions(9700);
	v->a[212948] = 2;
	v->a[212949] = sym_test_operator;
	v->a[212950] = sym__special_character;
	v->a[212951] = actions(9702);
	v->a[212952] = 3;
	v->a[212953] = sym__bare_dollar;
	v->a[212954] = sym_raw_string;
	v->a[212955] = sym_ansi_c_string;
	v->a[212956] = state(1851);
	v->a[212957] = 9;
	v->a[212958] = sym_arithmetic_expansion;
	v->a[212959] = sym_brace_expression;
	small_parse_table_10648(v);
}

void	small_parse_table_10648(t_small_parse_table_array *v)
{
	v->a[212960] = sym_string;
	v->a[212961] = sym_translated_string;
	v->a[212962] = sym_number;
	v->a[212963] = sym_simple_expansion;
	v->a[212964] = sym_expansion;
	v->a[212965] = sym_command_substitution;
	v->a[212966] = sym_process_substitution;
	v->a[212967] = 21;
	v->a[212968] = actions(71);
	v->a[212969] = 1;
	v->a[212970] = sym_comment;
	v->a[212971] = actions(3064);
	v->a[212972] = 1;
	v->a[212973] = sym_variable_name;
	v->a[212974] = actions(9278);
	v->a[212975] = 1;
	v->a[212976] = anon_sym_LPAREN;
	v->a[212977] = actions(9280);
	v->a[212978] = 1;
	v->a[212979] = anon_sym_BANG;
	small_parse_table_10649(v);
}

void	small_parse_table_10649(t_small_parse_table_array *v)
{
	v->a[212980] = actions(9286);
	v->a[212981] = 1;
	v->a[212982] = anon_sym_TILDE;
	v->a[212983] = actions(9288);
	v->a[212984] = 1;
	v->a[212985] = anon_sym_DOLLAR;
	v->a[212986] = actions(9290);
	v->a[212987] = 1;
	v->a[212988] = anon_sym_DQUOTE;
	v->a[212989] = actions(9292);
	v->a[212990] = 1;
	v->a[212991] = aux_sym_number_token1;
	v->a[212992] = actions(9294);
	v->a[212993] = 1;
	v->a[212994] = aux_sym_number_token2;
	v->a[212995] = actions(9296);
	v->a[212996] = 1;
	v->a[212997] = anon_sym_DOLLAR_LBRACE;
	v->a[212998] = actions(9298);
	v->a[212999] = 1;
	small_parse_table_10650(v);
}

/* EOF small_parse_table_2129.c */
