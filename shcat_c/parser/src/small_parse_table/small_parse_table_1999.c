/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1999.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9995(t_small_parse_table_array *v)
{
	v->a[199900] = actions(379);
	v->a[199901] = 1;
	v->a[199902] = anon_sym_DOLLAR_LBRACE;
	v->a[199903] = actions(381);
	v->a[199904] = 1;
	v->a[199905] = anon_sym_DOLLAR_LPAREN;
	v->a[199906] = actions(385);
	v->a[199907] = 1;
	v->a[199908] = anon_sym_DOLLAR_BQUOTE;
	v->a[199909] = actions(391);
	v->a[199910] = 1;
	v->a[199911] = sym__brace_start;
	v->a[199912] = actions(5809);
	v->a[199913] = 1;
	v->a[199914] = anon_sym_BQUOTE;
	v->a[199915] = actions(8836);
	v->a[199916] = 1;
	v->a[199917] = sym_word;
	v->a[199918] = actions(8844);
	v->a[199919] = 1;
	small_parse_table_9996(v);
}

void	small_parse_table_9996(t_small_parse_table_array *v)
{
	v->a[199920] = sym_test_operator;
	v->a[199921] = actions(9084);
	v->a[199922] = 1;
	v->a[199923] = anon_sym_RBRACK;
	v->a[199924] = actions(352);
	v->a[199925] = 2;
	v->a[199926] = anon_sym_LPAREN_LPAREN;
	v->a[199927] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[199928] = actions(387);
	v->a[199929] = 2;
	v->a[199930] = anon_sym_LT_LPAREN;
	v->a[199931] = anon_sym_GT_LPAREN;
	v->a[199932] = actions(8840);
	v->a[199933] = 2;
	v->a[199934] = sym__special_character;
	v->a[199935] = sym__comment_word;
	v->a[199936] = actions(8842);
	v->a[199937] = 3;
	v->a[199938] = sym__bare_dollar;
	v->a[199939] = sym_raw_string;
	small_parse_table_9997(v);
}

void	small_parse_table_9997(t_small_parse_table_array *v)
{
	v->a[199940] = sym_ansi_c_string;
	v->a[199941] = state(2730);
	v->a[199942] = 9;
	v->a[199943] = sym_arithmetic_expansion;
	v->a[199944] = sym_brace_expression;
	v->a[199945] = sym_string;
	v->a[199946] = sym_translated_string;
	v->a[199947] = sym_number;
	v->a[199948] = sym_simple_expansion;
	v->a[199949] = sym_expansion;
	v->a[199950] = sym_command_substitution;
	v->a[199951] = sym_process_substitution;
	v->a[199952] = 20;
	v->a[199953] = actions(71);
	v->a[199954] = 1;
	v->a[199955] = sym_comment;
	v->a[199956] = actions(3612);
	v->a[199957] = 1;
	v->a[199958] = anon_sym_DOLLAR;
	v->a[199959] = actions(3616);
	small_parse_table_9998(v);
}

void	small_parse_table_9998(t_small_parse_table_array *v)
{
	v->a[199960] = 1;
	v->a[199961] = aux_sym_number_token1;
	v->a[199962] = actions(3618);
	v->a[199963] = 1;
	v->a[199964] = aux_sym_number_token2;
	v->a[199965] = actions(3622);
	v->a[199966] = 1;
	v->a[199967] = anon_sym_DOLLAR_LPAREN;
	v->a[199968] = actions(3632);
	v->a[199969] = 1;
	v->a[199970] = sym__brace_start;
	v->a[199971] = actions(4131);
	v->a[199972] = 1;
	v->a[199973] = sym_word;
	v->a[199974] = actions(4135);
	v->a[199975] = 1;
	v->a[199976] = sym_test_operator;
	v->a[199977] = actions(8850);
	v->a[199978] = 1;
	v->a[199979] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_9999(v);
}

void	small_parse_table_9999(t_small_parse_table_array *v)
{
	v->a[199980] = actions(8854);
	v->a[199981] = 1;
	v->a[199982] = anon_sym_DQUOTE;
	v->a[199983] = actions(8858);
	v->a[199984] = 1;
	v->a[199985] = anon_sym_DOLLAR_LBRACE;
	v->a[199986] = actions(8860);
	v->a[199987] = 1;
	v->a[199988] = anon_sym_BQUOTE;
	v->a[199989] = actions(8862);
	v->a[199990] = 1;
	v->a[199991] = anon_sym_DOLLAR_BQUOTE;
	v->a[199992] = actions(9086);
	v->a[199993] = 1;
	v->a[199994] = sym__special_character;
	v->a[199995] = state(2270);
	v->a[199996] = 1;
	v->a[199997] = aux_sym__literal_repeat1;
	v->a[199998] = actions(8848);
	v->a[199999] = 2;
	small_parse_table_10000(v);
}

/* EOF small_parse_table_1999.c */
