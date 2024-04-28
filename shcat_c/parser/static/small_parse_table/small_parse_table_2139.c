/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2139.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10695(t_small_parse_table_array *v)
{
	v->a[213900] = actions(9386);
	v->a[213901] = 1;
	v->a[213902] = anon_sym_BQUOTE;
	v->a[213903] = actions(9388);
	v->a[213904] = 1;
	v->a[213905] = anon_sym_DOLLAR_BQUOTE;
	v->a[213906] = actions(9392);
	v->a[213907] = 1;
	v->a[213908] = sym_variable_name;
	v->a[213909] = actions(10186);
	v->a[213910] = 1;
	v->a[213911] = aux_sym__simple_variable_name_token1;
	v->a[213912] = state(3391);
	v->a[213913] = 1;
	v->a[213914] = sym__arithmetic_binary_expression;
	v->a[213915] = state(3396);
	v->a[213916] = 1;
	v->a[213917] = sym__arithmetic_ternary_expression;
	v->a[213918] = state(3398);
	v->a[213919] = 1;
	small_parse_table_10696(v);
}

void	small_parse_table_10696(t_small_parse_table_array *v)
{
	v->a[213920] = sym__arithmetic_unary_expression;
	v->a[213921] = state(3400);
	v->a[213922] = 1;
	v->a[213923] = sym__arithmetic_postfix_expression;
	v->a[213924] = actions(9368);
	v->a[213925] = 2;
	v->a[213926] = anon_sym_PLUS_PLUS2;
	v->a[213927] = anon_sym_DASH_DASH2;
	v->a[213928] = actions(9370);
	v->a[213929] = 2;
	v->a[213930] = anon_sym_DASH2;
	v->a[213931] = anon_sym_PLUS2;
	v->a[213932] = state(3334);
	v->a[213933] = 9;
	v->a[213934] = sym_subscript;
	v->a[213935] = sym__arithmetic_expression;
	v->a[213936] = sym__arithmetic_literal;
	v->a[213937] = sym__arithmetic_parenthesized_expression;
	v->a[213938] = sym_string;
	v->a[213939] = sym_number;
	small_parse_table_10697(v);
}

void	small_parse_table_10697(t_small_parse_table_array *v)
{
	v->a[213940] = sym_simple_expansion;
	v->a[213941] = sym_expansion;
	v->a[213942] = sym_command_substitution;
	v->a[213943] = 18;
	v->a[213944] = actions(3);
	v->a[213945] = 1;
	v->a[213946] = sym_comment;
	v->a[213947] = actions(1141);
	v->a[213948] = 1;
	v->a[213949] = anon_sym_DOLLAR_LBRACK;
	v->a[213950] = actions(1149);
	v->a[213951] = 1;
	v->a[213952] = anon_sym_DQUOTE;
	v->a[213953] = actions(1153);
	v->a[213954] = 1;
	v->a[213955] = aux_sym_number_token1;
	v->a[213956] = actions(1155);
	v->a[213957] = 1;
	v->a[213958] = aux_sym_number_token2;
	v->a[213959] = actions(1157);
	small_parse_table_10698(v);
}

void	small_parse_table_10698(t_small_parse_table_array *v)
{
	v->a[213960] = 1;
	v->a[213961] = anon_sym_DOLLAR_LBRACE;
	v->a[213962] = actions(1159);
	v->a[213963] = 1;
	v->a[213964] = anon_sym_DOLLAR_LPAREN;
	v->a[213965] = actions(1163);
	v->a[213966] = 1;
	v->a[213967] = anon_sym_DOLLAR_BQUOTE;
	v->a[213968] = actions(1169);
	v->a[213969] = 1;
	v->a[213970] = sym__brace_start;
	v->a[213971] = actions(3060);
	v->a[213972] = 1;
	v->a[213973] = anon_sym_BQUOTE;
	v->a[213974] = actions(10188);
	v->a[213975] = 1;
	v->a[213976] = sym_word;
	v->a[213977] = actions(10190);
	v->a[213978] = 1;
	v->a[213979] = anon_sym_DOLLAR;
	small_parse_table_10699(v);
}

void	small_parse_table_10699(t_small_parse_table_array *v)
{
	v->a[213980] = actions(10196);
	v->a[213981] = 1;
	v->a[213982] = sym__comment_word;
	v->a[213983] = actions(1129);
	v->a[213984] = 2;
	v->a[213985] = anon_sym_LPAREN_LPAREN;
	v->a[213986] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[213987] = actions(1165);
	v->a[213988] = 2;
	v->a[213989] = anon_sym_LT_LPAREN;
	v->a[213990] = anon_sym_GT_LPAREN;
	v->a[213991] = actions(10192);
	v->a[213992] = 2;
	v->a[213993] = sym_test_operator;
	v->a[213994] = sym__special_character;
	v->a[213995] = actions(10194);
	v->a[213996] = 3;
	v->a[213997] = sym__bare_dollar;
	v->a[213998] = sym_raw_string;
	v->a[213999] = sym_ansi_c_string;
	small_parse_table_10700(v);
}

/* EOF small_parse_table_2139.c */
