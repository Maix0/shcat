/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2199.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10995(t_small_parse_table_array *v)
{
	v->a[219900] = sym_arithmetic_expansion;
	v->a[219901] = sym_brace_expression;
	v->a[219902] = sym_string;
	v->a[219903] = sym_translated_string;
	v->a[219904] = sym_number;
	v->a[219905] = sym_simple_expansion;
	v->a[219906] = sym_expansion;
	v->a[219907] = sym_command_substitution;
	v->a[219908] = sym_process_substitution;
	v->a[219909] = 18;
	v->a[219910] = actions(3);
	v->a[219911] = 1;
	v->a[219912] = sym_comment;
	v->a[219913] = actions(8268);
	v->a[219914] = 1;
	v->a[219915] = anon_sym_DOLLAR_LBRACK;
	v->a[219916] = actions(8270);
	v->a[219917] = 1;
	v->a[219918] = anon_sym_DOLLAR;
	v->a[219919] = actions(8274);
	small_parse_table_10996(v);
}

void	small_parse_table_10996(t_small_parse_table_array *v)
{
	v->a[219920] = 1;
	v->a[219921] = anon_sym_DQUOTE;
	v->a[219922] = actions(8278);
	v->a[219923] = 1;
	v->a[219924] = aux_sym_number_token1;
	v->a[219925] = actions(8280);
	v->a[219926] = 1;
	v->a[219927] = aux_sym_number_token2;
	v->a[219928] = actions(8282);
	v->a[219929] = 1;
	v->a[219930] = anon_sym_DOLLAR_LBRACE;
	v->a[219931] = actions(8284);
	v->a[219932] = 1;
	v->a[219933] = anon_sym_DOLLAR_LPAREN;
	v->a[219934] = actions(8286);
	v->a[219935] = 1;
	v->a[219936] = anon_sym_BQUOTE;
	v->a[219937] = actions(8288);
	v->a[219938] = 1;
	v->a[219939] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_10997(v);
}

void	small_parse_table_10997(t_small_parse_table_array *v)
{
	v->a[219940] = actions(8298);
	v->a[219941] = 1;
	v->a[219942] = sym__brace_start;
	v->a[219943] = actions(10480);
	v->a[219944] = 1;
	v->a[219945] = sym_word;
	v->a[219946] = actions(10486);
	v->a[219947] = 1;
	v->a[219948] = sym__comment_word;
	v->a[219949] = actions(8264);
	v->a[219950] = 2;
	v->a[219951] = anon_sym_LPAREN_LPAREN;
	v->a[219952] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[219953] = actions(8290);
	v->a[219954] = 2;
	v->a[219955] = anon_sym_LT_LPAREN;
	v->a[219956] = anon_sym_GT_LPAREN;
	v->a[219957] = actions(10482);
	v->a[219958] = 2;
	v->a[219959] = sym_test_operator;
	small_parse_table_10998(v);
}

void	small_parse_table_10998(t_small_parse_table_array *v)
{
	v->a[219960] = sym__special_character;
	v->a[219961] = actions(10484);
	v->a[219962] = 3;
	v->a[219963] = sym__bare_dollar;
	v->a[219964] = sym_raw_string;
	v->a[219965] = sym_ansi_c_string;
	v->a[219966] = state(1465);
	v->a[219967] = 9;
	v->a[219968] = sym_arithmetic_expansion;
	v->a[219969] = sym_brace_expression;
	v->a[219970] = sym_string;
	v->a[219971] = sym_translated_string;
	v->a[219972] = sym_number;
	v->a[219973] = sym_simple_expansion;
	v->a[219974] = sym_expansion;
	v->a[219975] = sym_command_substitution;
	v->a[219976] = sym_process_substitution;
	v->a[219977] = 18;
	v->a[219978] = actions(3);
	v->a[219979] = 1;
	small_parse_table_10999(v);
}

void	small_parse_table_10999(t_small_parse_table_array *v)
{
	v->a[219980] = sym_comment;
	v->a[219981] = actions(1831);
	v->a[219982] = 1;
	v->a[219983] = anon_sym_DOLLAR;
	v->a[219984] = actions(1837);
	v->a[219985] = 1;
	v->a[219986] = aux_sym_number_token1;
	v->a[219987] = actions(1839);
	v->a[219988] = 1;
	v->a[219989] = aux_sym_number_token2;
	v->a[219990] = actions(1843);
	v->a[219991] = 1;
	v->a[219992] = anon_sym_DOLLAR_LPAREN;
	v->a[219993] = actions(1857);
	v->a[219994] = 1;
	v->a[219995] = sym__brace_start;
	v->a[219996] = actions(8232);
	v->a[219997] = 1;
	v->a[219998] = anon_sym_DOLLAR_LBRACK;
	v->a[219999] = actions(8236);
	small_parse_table_11000(v);
}

/* EOF small_parse_table_2199.c */
