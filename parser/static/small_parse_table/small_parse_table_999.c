/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_999.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4995(t_small_parse_table_array *v)
{
	v->a[99900] = aux_sym_number_token2;
	v->a[99901] = actions(2470);
	v->a[99902] = 1;
	v->a[99903] = anon_sym_DOLLAR_LBRACE;
	v->a[99904] = actions(2472);
	v->a[99905] = 1;
	v->a[99906] = anon_sym_DOLLAR_LPAREN;
	v->a[99907] = actions(2474);
	v->a[99908] = 1;
	v->a[99909] = anon_sym_BQUOTE;
	v->a[99910] = actions(2476);
	v->a[99911] = 1;
	v->a[99912] = anon_sym_DOLLAR_BQUOTE;
	v->a[99913] = actions(2480);
	v->a[99914] = 1;
	v->a[99915] = sym_test_operator;
	v->a[99916] = actions(2482);
	v->a[99917] = 1;
	v->a[99918] = sym__brace_start;
	v->a[99919] = actions(5617);
	small_parse_table_4996(v);
}

void	small_parse_table_4996(t_small_parse_table_array *v)
{
	v->a[99920] = 1;
	v->a[99921] = aux_sym_heredoc_redirect_token1;
	v->a[99922] = state(2122);
	v->a[99923] = 1;
	v->a[99924] = aux_sym__heredoc_command;
	v->a[99925] = state(2852);
	v->a[99926] = 1;
	v->a[99927] = aux_sym__literal_repeat1;
	v->a[99928] = state(2882);
	v->a[99929] = 1;
	v->a[99930] = sym_concatenation;
	v->a[99931] = actions(2446);
	v->a[99932] = 2;
	v->a[99933] = sym_raw_string;
	v->a[99934] = sym_word;
	v->a[99935] = state(2716);
	v->a[99936] = 7;
	v->a[99937] = sym_arithmetic_expansion;
	v->a[99938] = sym_brace_expression;
	v->a[99939] = sym_string;
	small_parse_table_4997(v);
}

void	small_parse_table_4997(t_small_parse_table_array *v)
{
	v->a[99940] = sym_number;
	v->a[99941] = sym_simple_expansion;
	v->a[99942] = sym_expansion;
	v->a[99943] = sym_command_substitution;
	v->a[99944] = 19;
	v->a[99945] = actions(3);
	v->a[99946] = 1;
	v->a[99947] = sym_comment;
	v->a[99948] = actions(891);
	v->a[99949] = 1;
	v->a[99950] = anon_sym_DOLLAR;
	v->a[99951] = actions(897);
	v->a[99952] = 1;
	v->a[99953] = aux_sym_number_token1;
	v->a[99954] = actions(899);
	v->a[99955] = 1;
	v->a[99956] = aux_sym_number_token2;
	v->a[99957] = actions(903);
	v->a[99958] = 1;
	v->a[99959] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_4998(v);
}

void	small_parse_table_4998(t_small_parse_table_array *v)
{
	v->a[99960] = actions(915);
	v->a[99961] = 1;
	v->a[99962] = sym__brace_start;
	v->a[99963] = actions(5619);
	v->a[99964] = 1;
	v->a[99965] = sym_word;
	v->a[99966] = actions(5621);
	v->a[99967] = 1;
	v->a[99968] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[99969] = actions(5623);
	v->a[99970] = 1;
	v->a[99971] = sym__special_character;
	v->a[99972] = actions(5625);
	v->a[99973] = 1;
	v->a[99974] = anon_sym_DQUOTE;
	v->a[99975] = actions(5629);
	v->a[99976] = 1;
	v->a[99977] = anon_sym_DOLLAR_LBRACE;
	v->a[99978] = actions(5631);
	v->a[99979] = 1;
	small_parse_table_4999(v);
}

void	small_parse_table_4999(t_small_parse_table_array *v)
{
	v->a[99980] = anon_sym_BQUOTE;
	v->a[99981] = actions(5633);
	v->a[99982] = 1;
	v->a[99983] = anon_sym_DOLLAR_BQUOTE;
	v->a[99984] = actions(5635);
	v->a[99985] = 1;
	v->a[99986] = sym__comment_word;
	v->a[99987] = actions(5637);
	v->a[99988] = 1;
	v->a[99989] = sym__empty_value;
	v->a[99990] = state(789);
	v->a[99991] = 1;
	v->a[99992] = aux_sym__literal_repeat1;
	v->a[99993] = state(1145);
	v->a[99994] = 1;
	v->a[99995] = sym_concatenation;
	v->a[99996] = actions(5627);
	v->a[99997] = 2;
	v->a[99998] = sym_test_operator;
	v->a[99999] = sym_raw_string;
	small_parse_table_5000(v);
}

/* EOF small_parse_table_999.c */
