/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1159.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5795(t_small_parse_table_array *v)
{
	v->a[115900] = anon_sym_DQUOTE;
	v->a[115901] = actions(1153);
	v->a[115902] = 1;
	v->a[115903] = aux_sym_number_token1;
	v->a[115904] = actions(1155);
	v->a[115905] = 1;
	v->a[115906] = aux_sym_number_token2;
	v->a[115907] = actions(1157);
	v->a[115908] = 1;
	v->a[115909] = anon_sym_DOLLAR_LBRACE;
	v->a[115910] = actions(1159);
	v->a[115911] = 1;
	v->a[115912] = anon_sym_DOLLAR_LPAREN;
	v->a[115913] = actions(1163);
	v->a[115914] = 1;
	v->a[115915] = anon_sym_DOLLAR_BQUOTE;
	v->a[115916] = actions(1167);
	v->a[115917] = 1;
	v->a[115918] = sym_test_operator;
	v->a[115919] = actions(1169);
	small_parse_table_5796(v);
}

void	small_parse_table_5796(t_small_parse_table_array *v)
{
	v->a[115920] = 1;
	v->a[115921] = sym__brace_start;
	v->a[115922] = actions(3060);
	v->a[115923] = 1;
	v->a[115924] = anon_sym_BQUOTE;
	v->a[115925] = state(2484);
	v->a[115926] = 1;
	v->a[115927] = aux_sym__literal_repeat1;
	v->a[115928] = state(3129);
	v->a[115929] = 1;
	v->a[115930] = sym__expression;
	v->a[115931] = actions(1129);
	v->a[115932] = 2;
	v->a[115933] = anon_sym_LPAREN_LPAREN;
	v->a[115934] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[115935] = actions(1135);
	v->a[115936] = 2;
	v->a[115937] = anon_sym_PLUS_PLUS2;
	v->a[115938] = anon_sym_DASH_DASH2;
	v->a[115939] = actions(1137);
	small_parse_table_5797(v);
}

void	small_parse_table_5797(t_small_parse_table_array *v)
{
	v->a[115940] = 2;
	v->a[115941] = anon_sym_DASH2;
	v->a[115942] = anon_sym_PLUS2;
	v->a[115943] = actions(1151);
	v->a[115944] = 2;
	v->a[115945] = sym_raw_string;
	v->a[115946] = sym_ansi_c_string;
	v->a[115947] = actions(1165);
	v->a[115948] = 2;
	v->a[115949] = anon_sym_LT_LPAREN;
	v->a[115950] = anon_sym_GT_LPAREN;
	v->a[115951] = state(2594);
	v->a[115952] = 6;
	v->a[115953] = sym_binary_expression;
	v->a[115954] = sym_ternary_expression;
	v->a[115955] = sym_unary_expression;
	v->a[115956] = sym_postfix_expression;
	v->a[115957] = sym_parenthesized_expression;
	v->a[115958] = sym_concatenation;
	v->a[115959] = state(2573);
	small_parse_table_5798(v);
}

void	small_parse_table_5798(t_small_parse_table_array *v)
{
	v->a[115960] = 9;
	v->a[115961] = sym_arithmetic_expansion;
	v->a[115962] = sym_brace_expression;
	v->a[115963] = sym_string;
	v->a[115964] = sym_translated_string;
	v->a[115965] = sym_number;
	v->a[115966] = sym_simple_expansion;
	v->a[115967] = sym_expansion;
	v->a[115968] = sym_command_substitution;
	v->a[115969] = sym_process_substitution;
	v->a[115970] = 26;
	v->a[115971] = actions(71);
	v->a[115972] = 1;
	v->a[115973] = sym_comment;
	v->a[115974] = actions(1127);
	v->a[115975] = 1;
	v->a[115976] = sym_word;
	v->a[115977] = actions(1131);
	v->a[115978] = 1;
	v->a[115979] = anon_sym_LPAREN;
	small_parse_table_5799(v);
}

void	small_parse_table_5799(t_small_parse_table_array *v)
{
	v->a[115980] = actions(1133);
	v->a[115981] = 1;
	v->a[115982] = anon_sym_BANG;
	v->a[115983] = actions(1139);
	v->a[115984] = 1;
	v->a[115985] = anon_sym_TILDE;
	v->a[115986] = actions(1141);
	v->a[115987] = 1;
	v->a[115988] = anon_sym_DOLLAR_LBRACK;
	v->a[115989] = actions(1145);
	v->a[115990] = 1;
	v->a[115991] = anon_sym_DOLLAR;
	v->a[115992] = actions(1147);
	v->a[115993] = 1;
	v->a[115994] = sym__special_character;
	v->a[115995] = actions(1149);
	v->a[115996] = 1;
	v->a[115997] = anon_sym_DQUOTE;
	v->a[115998] = actions(1153);
	v->a[115999] = 1;
	small_parse_table_5800(v);
}

/* EOF small_parse_table_1159.c */
