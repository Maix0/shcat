/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1969.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9845(t_small_parse_table_array *v)
{
	v->a[196900] = anon_sym_DOLLAR_BQUOTE;
	v->a[196901] = actions(391);
	v->a[196902] = 1;
	v->a[196903] = sym__brace_start;
	v->a[196904] = actions(5809);
	v->a[196905] = 1;
	v->a[196906] = anon_sym_BQUOTE;
	v->a[196907] = actions(8836);
	v->a[196908] = 1;
	v->a[196909] = sym_word;
	v->a[196910] = actions(8844);
	v->a[196911] = 1;
	v->a[196912] = sym_test_operator;
	v->a[196913] = actions(8846);
	v->a[196914] = 1;
	v->a[196915] = anon_sym_RBRACK;
	v->a[196916] = actions(352);
	v->a[196917] = 2;
	v->a[196918] = anon_sym_LPAREN_LPAREN;
	v->a[196919] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_9846(v);
}

void	small_parse_table_9846(t_small_parse_table_array *v)
{
	v->a[196920] = actions(387);
	v->a[196921] = 2;
	v->a[196922] = anon_sym_LT_LPAREN;
	v->a[196923] = anon_sym_GT_LPAREN;
	v->a[196924] = actions(8840);
	v->a[196925] = 2;
	v->a[196926] = sym__special_character;
	v->a[196927] = sym__comment_word;
	v->a[196928] = actions(8842);
	v->a[196929] = 3;
	v->a[196930] = sym__bare_dollar;
	v->a[196931] = sym_raw_string;
	v->a[196932] = sym_ansi_c_string;
	v->a[196933] = state(2730);
	v->a[196934] = 9;
	v->a[196935] = sym_arithmetic_expansion;
	v->a[196936] = sym_brace_expression;
	v->a[196937] = sym_string;
	v->a[196938] = sym_translated_string;
	v->a[196939] = sym_number;
	small_parse_table_9847(v);
}

void	small_parse_table_9847(t_small_parse_table_array *v)
{
	v->a[196940] = sym_simple_expansion;
	v->a[196941] = sym_expansion;
	v->a[196942] = sym_command_substitution;
	v->a[196943] = sym_process_substitution;
	v->a[196944] = 20;
	v->a[196945] = actions(71);
	v->a[196946] = 1;
	v->a[196947] = sym_comment;
	v->a[196948] = actions(3731);
	v->a[196949] = 1;
	v->a[196950] = anon_sym_DOLLAR;
	v->a[196951] = actions(3737);
	v->a[196952] = 1;
	v->a[196953] = aux_sym_number_token1;
	v->a[196954] = actions(3739);
	v->a[196955] = 1;
	v->a[196956] = aux_sym_number_token2;
	v->a[196957] = actions(3743);
	v->a[196958] = 1;
	v->a[196959] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_9848(v);
}

void	small_parse_table_9848(t_small_parse_table_array *v)
{
	v->a[196960] = actions(3755);
	v->a[196961] = 1;
	v->a[196962] = sym__brace_start;
	v->a[196963] = actions(7759);
	v->a[196964] = 1;
	v->a[196965] = sym_word;
	v->a[196966] = actions(7767);
	v->a[196967] = 1;
	v->a[196968] = sym_test_operator;
	v->a[196969] = actions(8820);
	v->a[196970] = 1;
	v->a[196971] = anon_sym_DOLLAR_LBRACK;
	v->a[196972] = actions(8822);
	v->a[196973] = 1;
	v->a[196974] = sym__special_character;
	v->a[196975] = actions(8824);
	v->a[196976] = 1;
	v->a[196977] = anon_sym_DQUOTE;
	v->a[196978] = actions(8828);
	v->a[196979] = 1;
	small_parse_table_9849(v);
}

void	small_parse_table_9849(t_small_parse_table_array *v)
{
	v->a[196980] = anon_sym_DOLLAR_LBRACE;
	v->a[196981] = actions(8830);
	v->a[196982] = 1;
	v->a[196983] = anon_sym_BQUOTE;
	v->a[196984] = actions(8832);
	v->a[196985] = 1;
	v->a[196986] = anon_sym_DOLLAR_BQUOTE;
	v->a[196987] = state(4975);
	v->a[196988] = 1;
	v->a[196989] = aux_sym__literal_repeat1;
	v->a[196990] = actions(8818);
	v->a[196991] = 2;
	v->a[196992] = anon_sym_LPAREN_LPAREN;
	v->a[196993] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[196994] = actions(8826);
	v->a[196995] = 2;
	v->a[196996] = sym_raw_string;
	v->a[196997] = sym_ansi_c_string;
	v->a[196998] = actions(8834);
	v->a[196999] = 2;
	small_parse_table_9850(v);
}

/* EOF small_parse_table_1969.c */
