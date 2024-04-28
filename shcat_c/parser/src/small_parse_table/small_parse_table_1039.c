/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1039.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5195(t_small_parse_table_array *v)
{
	v->a[103900] = sym_comment;
	v->a[103901] = actions(363);
	v->a[103902] = 1;
	v->a[103903] = anon_sym_DOLLAR_LBRACK;
	v->a[103904] = actions(367);
	v->a[103905] = 1;
	v->a[103906] = anon_sym_DOLLAR;
	v->a[103907] = actions(371);
	v->a[103908] = 1;
	v->a[103909] = anon_sym_DQUOTE;
	v->a[103910] = actions(375);
	v->a[103911] = 1;
	v->a[103912] = aux_sym_number_token1;
	v->a[103913] = actions(377);
	v->a[103914] = 1;
	v->a[103915] = aux_sym_number_token2;
	v->a[103916] = actions(379);
	v->a[103917] = 1;
	v->a[103918] = anon_sym_DOLLAR_LBRACE;
	v->a[103919] = actions(381);
	small_parse_table_5196(v);
}

void	small_parse_table_5196(t_small_parse_table_array *v)
{
	v->a[103920] = 1;
	v->a[103921] = anon_sym_DOLLAR_LPAREN;
	v->a[103922] = actions(385);
	v->a[103923] = 1;
	v->a[103924] = anon_sym_DOLLAR_BQUOTE;
	v->a[103925] = actions(391);
	v->a[103926] = 1;
	v->a[103927] = sym__brace_start;
	v->a[103928] = actions(1091);
	v->a[103929] = 1;
	v->a[103930] = sym_word;
	v->a[103931] = actions(1093);
	v->a[103932] = 1;
	v->a[103933] = anon_sym_LPAREN;
	v->a[103934] = actions(1095);
	v->a[103935] = 1;
	v->a[103936] = anon_sym_BANG;
	v->a[103937] = actions(1103);
	v->a[103938] = 1;
	v->a[103939] = anon_sym_TILDE;
	small_parse_table_5197(v);
}

void	small_parse_table_5197(t_small_parse_table_array *v)
{
	v->a[103940] = actions(1113);
	v->a[103941] = 1;
	v->a[103942] = sym_test_operator;
	v->a[103943] = actions(5809);
	v->a[103944] = 1;
	v->a[103945] = anon_sym_BQUOTE;
	v->a[103946] = actions(5916);
	v->a[103947] = 1;
	v->a[103948] = sym__special_character;
	v->a[103949] = state(2472);
	v->a[103950] = 1;
	v->a[103951] = aux_sym__literal_repeat1;
	v->a[103952] = state(2814);
	v->a[103953] = 1;
	v->a[103954] = sym__expression;
	v->a[103955] = actions(352);
	v->a[103956] = 2;
	v->a[103957] = anon_sym_LPAREN_LPAREN;
	v->a[103958] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[103959] = actions(387);
	small_parse_table_5198(v);
}

void	small_parse_table_5198(t_small_parse_table_array *v)
{
	v->a[103960] = 2;
	v->a[103961] = anon_sym_LT_LPAREN;
	v->a[103962] = anon_sym_GT_LPAREN;
	v->a[103963] = actions(1099);
	v->a[103964] = 2;
	v->a[103965] = anon_sym_PLUS_PLUS2;
	v->a[103966] = anon_sym_DASH_DASH2;
	v->a[103967] = actions(1101);
	v->a[103968] = 2;
	v->a[103969] = anon_sym_DASH2;
	v->a[103970] = anon_sym_PLUS2;
	v->a[103971] = actions(1109);
	v->a[103972] = 2;
	v->a[103973] = sym_raw_string;
	v->a[103974] = sym_ansi_c_string;
	v->a[103975] = state(2863);
	v->a[103976] = 6;
	v->a[103977] = sym_binary_expression;
	v->a[103978] = sym_ternary_expression;
	v->a[103979] = sym_unary_expression;
	small_parse_table_5199(v);
}

void	small_parse_table_5199(t_small_parse_table_array *v)
{
	v->a[103980] = sym_postfix_expression;
	v->a[103981] = sym_parenthesized_expression;
	v->a[103982] = sym_concatenation;
	v->a[103983] = state(2451);
	v->a[103984] = 9;
	v->a[103985] = sym_arithmetic_expansion;
	v->a[103986] = sym_brace_expression;
	v->a[103987] = sym_string;
	v->a[103988] = sym_translated_string;
	v->a[103989] = sym_number;
	v->a[103990] = sym_simple_expansion;
	v->a[103991] = sym_expansion;
	v->a[103992] = sym_command_substitution;
	v->a[103993] = sym_process_substitution;
	v->a[103994] = 7;
	v->a[103995] = actions(3);
	v->a[103996] = 1;
	v->a[103997] = sym_comment;
	v->a[103998] = actions(5828);
	v->a[103999] = 1;
	small_parse_table_5200(v);
}

/* EOF small_parse_table_1039.c */
