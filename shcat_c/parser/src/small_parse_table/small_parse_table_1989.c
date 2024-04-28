/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1989.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9945(t_small_parse_table_array *v)
{
	v->a[198900] = 1;
	v->a[198901] = sym_word;
	v->a[198902] = actions(8844);
	v->a[198903] = 1;
	v->a[198904] = sym_test_operator;
	v->a[198905] = actions(9028);
	v->a[198906] = 1;
	v->a[198907] = anon_sym_RBRACK;
	v->a[198908] = actions(352);
	v->a[198909] = 2;
	v->a[198910] = anon_sym_LPAREN_LPAREN;
	v->a[198911] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[198912] = actions(387);
	v->a[198913] = 2;
	v->a[198914] = anon_sym_LT_LPAREN;
	v->a[198915] = anon_sym_GT_LPAREN;
	v->a[198916] = actions(8840);
	v->a[198917] = 2;
	v->a[198918] = sym__special_character;
	v->a[198919] = sym__comment_word;
	small_parse_table_9946(v);
}

void	small_parse_table_9946(t_small_parse_table_array *v)
{
	v->a[198920] = actions(8842);
	v->a[198921] = 3;
	v->a[198922] = sym__bare_dollar;
	v->a[198923] = sym_raw_string;
	v->a[198924] = sym_ansi_c_string;
	v->a[198925] = state(2730);
	v->a[198926] = 9;
	v->a[198927] = sym_arithmetic_expansion;
	v->a[198928] = sym_brace_expression;
	v->a[198929] = sym_string;
	v->a[198930] = sym_translated_string;
	v->a[198931] = sym_number;
	v->a[198932] = sym_simple_expansion;
	v->a[198933] = sym_expansion;
	v->a[198934] = sym_command_substitution;
	v->a[198935] = sym_process_substitution;
	v->a[198936] = 20;
	v->a[198937] = actions(71);
	v->a[198938] = 1;
	v->a[198939] = sym_comment;
	small_parse_table_9947(v);
}

void	small_parse_table_9947(t_small_parse_table_array *v)
{
	v->a[198940] = actions(3876);
	v->a[198941] = 1;
	v->a[198942] = sym_word;
	v->a[198943] = actions(3882);
	v->a[198944] = 1;
	v->a[198945] = anon_sym_DOLLAR;
	v->a[198946] = actions(3886);
	v->a[198947] = 1;
	v->a[198948] = aux_sym_number_token1;
	v->a[198949] = actions(3888);
	v->a[198950] = 1;
	v->a[198951] = aux_sym_number_token2;
	v->a[198952] = actions(3892);
	v->a[198953] = 1;
	v->a[198954] = anon_sym_DOLLAR_LPAREN;
	v->a[198955] = actions(3900);
	v->a[198956] = 1;
	v->a[198957] = sym_test_operator;
	v->a[198958] = actions(3902);
	v->a[198959] = 1;
	small_parse_table_9948(v);
}

void	small_parse_table_9948(t_small_parse_table_array *v)
{
	v->a[198960] = sym__brace_start;
	v->a[198961] = actions(8992);
	v->a[198962] = 1;
	v->a[198963] = anon_sym_DOLLAR_LBRACK;
	v->a[198964] = actions(8994);
	v->a[198965] = 1;
	v->a[198966] = sym__special_character;
	v->a[198967] = actions(8996);
	v->a[198968] = 1;
	v->a[198969] = anon_sym_DQUOTE;
	v->a[198970] = actions(9000);
	v->a[198971] = 1;
	v->a[198972] = anon_sym_DOLLAR_LBRACE;
	v->a[198973] = actions(9002);
	v->a[198974] = 1;
	v->a[198975] = anon_sym_BQUOTE;
	v->a[198976] = actions(9004);
	v->a[198977] = 1;
	v->a[198978] = anon_sym_DOLLAR_BQUOTE;
	v->a[198979] = state(2281);
	small_parse_table_9949(v);
}

void	small_parse_table_9949(t_small_parse_table_array *v)
{
	v->a[198980] = 1;
	v->a[198981] = aux_sym__literal_repeat1;
	v->a[198982] = actions(8990);
	v->a[198983] = 2;
	v->a[198984] = anon_sym_LPAREN_LPAREN;
	v->a[198985] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[198986] = actions(8998);
	v->a[198987] = 2;
	v->a[198988] = sym_raw_string;
	v->a[198989] = sym_ansi_c_string;
	v->a[198990] = actions(9006);
	v->a[198991] = 2;
	v->a[198992] = anon_sym_LT_LPAREN;
	v->a[198993] = anon_sym_GT_LPAREN;
	v->a[198994] = state(742);
	v->a[198995] = 2;
	v->a[198996] = sym_concatenation;
	v->a[198997] = aux_sym_for_statement_repeat1;
	v->a[198998] = state(1846);
	v->a[198999] = 9;
	small_parse_table_9950(v);
}

/* EOF small_parse_table_1989.c */
