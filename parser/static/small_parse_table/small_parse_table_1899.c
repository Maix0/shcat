/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1899.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9495(t_small_parse_table_array *v)
{
	v->a[189900] = anon_sym_DOLLAR_BQUOTE;
	v->a[189901] = actions(8248);
	v->a[189902] = 1;
	v->a[189903] = sym__comment_word;
	v->a[189904] = actions(8250);
	v->a[189905] = 1;
	v->a[189906] = sym__empty_value;
	v->a[189907] = actions(8252);
	v->a[189908] = 1;
	v->a[189909] = sym_test_operator;
	v->a[189910] = state(1720);
	v->a[189911] = 1;
	v->a[189912] = aux_sym__literal_repeat1;
	v->a[189913] = actions(8228);
	v->a[189914] = 2;
	v->a[189915] = anon_sym_LPAREN_LPAREN;
	v->a[189916] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[189917] = actions(8238);
	v->a[189918] = 2;
	v->a[189919] = sym_raw_string;
	small_parse_table_9496(v);
}

void	small_parse_table_9496(t_small_parse_table_array *v)
{
	v->a[189920] = sym_ansi_c_string;
	v->a[189921] = actions(8246);
	v->a[189922] = 2;
	v->a[189923] = anon_sym_LT_LPAREN;
	v->a[189924] = anon_sym_GT_LPAREN;
	v->a[189925] = state(1735);
	v->a[189926] = 2;
	v->a[189927] = sym_concatenation;
	v->a[189928] = sym_array;
	v->a[189929] = state(1166);
	v->a[189930] = 9;
	v->a[189931] = sym_arithmetic_expansion;
	v->a[189932] = sym_brace_expression;
	v->a[189933] = sym_string;
	v->a[189934] = sym_translated_string;
	v->a[189935] = sym_number;
	v->a[189936] = sym_simple_expansion;
	v->a[189937] = sym_expansion;
	v->a[189938] = sym_command_substitution;
	v->a[189939] = sym_process_substitution;
	small_parse_table_9497(v);
}

void	small_parse_table_9497(t_small_parse_table_array *v)
{
	v->a[189940] = 3;
	v->a[189941] = actions(71);
	v->a[189942] = 1;
	v->a[189943] = sym_comment;
	v->a[189944] = actions(1324);
	v->a[189945] = 11;
	v->a[189946] = anon_sym_LT;
	v->a[189947] = anon_sym_GT;
	v->a[189948] = anon_sym_AMP_GT;
	v->a[189949] = anon_sym_LT_AMP;
	v->a[189950] = anon_sym_GT_AMP;
	v->a[189951] = anon_sym_DOLLAR;
	v->a[189952] = aux_sym_number_token1;
	v->a[189953] = aux_sym_number_token2;
	v->a[189954] = anon_sym_DOLLAR_LPAREN;
	v->a[189955] = anon_sym_BQUOTE;
	v->a[189956] = sym_word;
	v->a[189957] = actions(1326);
	v->a[189958] = 23;
	v->a[189959] = sym_file_descriptor;
	small_parse_table_9498(v);
}

void	small_parse_table_9498(t_small_parse_table_array *v)
{
	v->a[189960] = sym__concat;
	v->a[189961] = sym_variable_name;
	v->a[189962] = sym_test_operator;
	v->a[189963] = sym__brace_start;
	v->a[189964] = anon_sym_LPAREN_LPAREN;
	v->a[189965] = anon_sym_GT_GT;
	v->a[189966] = anon_sym_AMP_GT_GT;
	v->a[189967] = anon_sym_GT_PIPE;
	v->a[189968] = anon_sym_LT_AMP_DASH;
	v->a[189969] = anon_sym_GT_AMP_DASH;
	v->a[189970] = anon_sym_LT_LT_LT;
	v->a[189971] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[189972] = anon_sym_DOLLAR_LBRACK;
	v->a[189973] = aux_sym_concatenation_token1;
	v->a[189974] = sym__special_character;
	v->a[189975] = anon_sym_DQUOTE;
	v->a[189976] = sym_raw_string;
	v->a[189977] = sym_ansi_c_string;
	v->a[189978] = anon_sym_DOLLAR_LBRACE;
	v->a[189979] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_9499(v);
}

void	small_parse_table_9499(t_small_parse_table_array *v)
{
	v->a[189980] = anon_sym_LT_LPAREN;
	v->a[189981] = anon_sym_GT_LPAREN;
	v->a[189982] = 23;
	v->a[189983] = actions(3);
	v->a[189984] = 1;
	v->a[189985] = sym_comment;
	v->a[189986] = actions(2263);
	v->a[189987] = 1;
	v->a[189988] = anon_sym_DOLLAR;
	v->a[189989] = actions(2269);
	v->a[189990] = 1;
	v->a[189991] = aux_sym_number_token1;
	v->a[189992] = actions(2271);
	v->a[189993] = 1;
	v->a[189994] = aux_sym_number_token2;
	v->a[189995] = actions(2275);
	v->a[189996] = 1;
	v->a[189997] = anon_sym_DOLLAR_LPAREN;
	v->a[189998] = actions(2289);
	v->a[189999] = 1;
	small_parse_table_9500(v);
}

/* EOF small_parse_table_1899.c */
