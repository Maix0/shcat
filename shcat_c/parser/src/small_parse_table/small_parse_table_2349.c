/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2349.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11745(t_small_parse_table_array *v)
{
	v->a[234900] = actions(9196);
	v->a[234901] = 2;
	v->a[234902] = anon_sym_LPAREN_LPAREN;
	v->a[234903] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[234904] = actions(9212);
	v->a[234905] = 2;
	v->a[234906] = anon_sym_LT_LPAREN;
	v->a[234907] = anon_sym_GT_LPAREN;
	v->a[234908] = actions(11076);
	v->a[234909] = 2;
	v->a[234910] = sym_raw_string;
	v->a[234911] = sym_ansi_c_string;
	v->a[234912] = state(1745);
	v->a[234913] = 9;
	v->a[234914] = sym_arithmetic_expansion;
	v->a[234915] = sym_brace_expression;
	v->a[234916] = sym_string;
	v->a[234917] = sym_translated_string;
	v->a[234918] = sym_number;
	v->a[234919] = sym_simple_expansion;
	small_parse_table_11746(v);
}

void	small_parse_table_11746(t_small_parse_table_array *v)
{
	v->a[234920] = sym_expansion;
	v->a[234921] = sym_command_substitution;
	v->a[234922] = sym_process_substitution;
	v->a[234923] = 18;
	v->a[234924] = actions(3);
	v->a[234925] = 1;
	v->a[234926] = sym_comment;
	v->a[234927] = actions(314);
	v->a[234928] = 1;
	v->a[234929] = anon_sym_DOLLAR_LBRACK;
	v->a[234930] = actions(320);
	v->a[234931] = 1;
	v->a[234932] = anon_sym_DQUOTE;
	v->a[234933] = actions(324);
	v->a[234934] = 1;
	v->a[234935] = aux_sym_number_token1;
	v->a[234936] = actions(326);
	v->a[234937] = 1;
	v->a[234938] = aux_sym_number_token2;
	v->a[234939] = actions(328);
	small_parse_table_11747(v);
}

void	small_parse_table_11747(t_small_parse_table_array *v)
{
	v->a[234940] = 1;
	v->a[234941] = anon_sym_DOLLAR_LBRACE;
	v->a[234942] = actions(330);
	v->a[234943] = 1;
	v->a[234944] = anon_sym_DOLLAR_LPAREN;
	v->a[234945] = actions(332);
	v->a[234946] = 1;
	v->a[234947] = anon_sym_BQUOTE;
	v->a[234948] = actions(334);
	v->a[234949] = 1;
	v->a[234950] = anon_sym_DOLLAR_BQUOTE;
	v->a[234951] = actions(344);
	v->a[234952] = 1;
	v->a[234953] = sym__brace_start;
	v->a[234954] = actions(9400);
	v->a[234955] = 1;
	v->a[234956] = sym_word;
	v->a[234957] = actions(9406);
	v->a[234958] = 1;
	v->a[234959] = sym__comment_word;
	small_parse_table_11748(v);
}

void	small_parse_table_11748(t_small_parse_table_array *v)
{
	v->a[234960] = actions(11080);
	v->a[234961] = 1;
	v->a[234962] = anon_sym_DOLLAR;
	v->a[234963] = actions(312);
	v->a[234964] = 2;
	v->a[234965] = anon_sym_LPAREN_LPAREN;
	v->a[234966] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[234967] = actions(336);
	v->a[234968] = 2;
	v->a[234969] = anon_sym_LT_LPAREN;
	v->a[234970] = anon_sym_GT_LPAREN;
	v->a[234971] = actions(9402);
	v->a[234972] = 2;
	v->a[234973] = sym_test_operator;
	v->a[234974] = sym__special_character;
	v->a[234975] = actions(9404);
	v->a[234976] = 3;
	v->a[234977] = sym__bare_dollar;
	v->a[234978] = sym_raw_string;
	v->a[234979] = sym_ansi_c_string;
	small_parse_table_11749(v);
}

void	small_parse_table_11749(t_small_parse_table_array *v)
{
	v->a[234980] = state(1037);
	v->a[234981] = 9;
	v->a[234982] = sym_arithmetic_expansion;
	v->a[234983] = sym_brace_expression;
	v->a[234984] = sym_string;
	v->a[234985] = sym_translated_string;
	v->a[234986] = sym_number;
	v->a[234987] = sym_simple_expansion;
	v->a[234988] = sym_expansion;
	v->a[234989] = sym_command_substitution;
	v->a[234990] = sym_process_substitution;
	v->a[234991] = 21;
	v->a[234992] = actions(71);
	v->a[234993] = 1;
	v->a[234994] = sym_comment;
	v->a[234995] = actions(3062);
	v->a[234996] = 1;
	v->a[234997] = aux_sym__simple_variable_name_token1;
	v->a[234998] = actions(3064);
	v->a[234999] = 1;
	small_parse_table_11750(v);
}

/* EOF small_parse_table_2349.c */
