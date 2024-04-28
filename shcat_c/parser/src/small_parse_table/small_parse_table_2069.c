/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2069.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10345(t_small_parse_table_array *v)
{
	v->a[206900] = 1;
	v->a[206901] = aux_sym_number_token1;
	v->a[206902] = actions(8114);
	v->a[206903] = 1;
	v->a[206904] = aux_sym_number_token2;
	v->a[206905] = actions(8116);
	v->a[206906] = 1;
	v->a[206907] = anon_sym_DOLLAR_LBRACE;
	v->a[206908] = actions(8118);
	v->a[206909] = 1;
	v->a[206910] = anon_sym_DOLLAR_LPAREN;
	v->a[206911] = actions(8120);
	v->a[206912] = 1;
	v->a[206913] = anon_sym_BQUOTE;
	v->a[206914] = actions(8122);
	v->a[206915] = 1;
	v->a[206916] = anon_sym_DOLLAR_BQUOTE;
	v->a[206917] = actions(8132);
	v->a[206918] = 1;
	v->a[206919] = sym__brace_start;
	small_parse_table_10346(v);
}

void	small_parse_table_10346(t_small_parse_table_array *v)
{
	v->a[206920] = actions(9600);
	v->a[206921] = 1;
	v->a[206922] = sym_word;
	v->a[206923] = actions(9608);
	v->a[206924] = 1;
	v->a[206925] = sym__comment_word;
	v->a[206926] = actions(9616);
	v->a[206927] = 1;
	v->a[206928] = anon_sym_DOLLAR;
	v->a[206929] = actions(8098);
	v->a[206930] = 2;
	v->a[206931] = anon_sym_LPAREN_LPAREN;
	v->a[206932] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[206933] = actions(8124);
	v->a[206934] = 2;
	v->a[206935] = anon_sym_LT_LPAREN;
	v->a[206936] = anon_sym_GT_LPAREN;
	v->a[206937] = actions(9604);
	v->a[206938] = 2;
	v->a[206939] = sym_test_operator;
	small_parse_table_10347(v);
}

void	small_parse_table_10347(t_small_parse_table_array *v)
{
	v->a[206940] = sym__special_character;
	v->a[206941] = actions(9606);
	v->a[206942] = 3;
	v->a[206943] = sym__bare_dollar;
	v->a[206944] = sym_raw_string;
	v->a[206945] = sym_ansi_c_string;
	v->a[206946] = state(1199);
	v->a[206947] = 9;
	v->a[206948] = sym_arithmetic_expansion;
	v->a[206949] = sym_brace_expression;
	v->a[206950] = sym_string;
	v->a[206951] = sym_translated_string;
	v->a[206952] = sym_number;
	v->a[206953] = sym_simple_expansion;
	v->a[206954] = sym_expansion;
	v->a[206955] = sym_command_substitution;
	v->a[206956] = sym_process_substitution;
	v->a[206957] = 18;
	v->a[206958] = actions(3);
	v->a[206959] = 1;
	small_parse_table_10348(v);
}

void	small_parse_table_10348(t_small_parse_table_array *v)
{
	v->a[206960] = sym_comment;
	v->a[206961] = actions(363);
	v->a[206962] = 1;
	v->a[206963] = anon_sym_DOLLAR_LBRACK;
	v->a[206964] = actions(371);
	v->a[206965] = 1;
	v->a[206966] = anon_sym_DQUOTE;
	v->a[206967] = actions(375);
	v->a[206968] = 1;
	v->a[206969] = aux_sym_number_token1;
	v->a[206970] = actions(377);
	v->a[206971] = 1;
	v->a[206972] = aux_sym_number_token2;
	v->a[206973] = actions(379);
	v->a[206974] = 1;
	v->a[206975] = anon_sym_DOLLAR_LBRACE;
	v->a[206976] = actions(381);
	v->a[206977] = 1;
	v->a[206978] = anon_sym_DOLLAR_LPAREN;
	v->a[206979] = actions(385);
	small_parse_table_10349(v);
}

void	small_parse_table_10349(t_small_parse_table_array *v)
{
	v->a[206980] = 1;
	v->a[206981] = anon_sym_DOLLAR_BQUOTE;
	v->a[206982] = actions(391);
	v->a[206983] = 1;
	v->a[206984] = sym__brace_start;
	v->a[206985] = actions(5809);
	v->a[206986] = 1;
	v->a[206987] = anon_sym_BQUOTE;
	v->a[206988] = actions(8836);
	v->a[206989] = 1;
	v->a[206990] = sym_word;
	v->a[206991] = actions(8840);
	v->a[206992] = 1;
	v->a[206993] = sym__comment_word;
	v->a[206994] = actions(9618);
	v->a[206995] = 1;
	v->a[206996] = anon_sym_DOLLAR;
	v->a[206997] = actions(352);
	v->a[206998] = 2;
	v->a[206999] = anon_sym_LPAREN_LPAREN;
	small_parse_table_10350(v);
}

/* EOF small_parse_table_2069.c */
