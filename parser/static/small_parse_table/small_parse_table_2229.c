/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2229.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11145(t_small_parse_table_array *v)
{
	v->a[222900] = 2;
	v->a[222901] = sym_test_operator;
	v->a[222902] = sym__special_character;
	v->a[222903] = actions(10468);
	v->a[222904] = 3;
	v->a[222905] = sym__bare_dollar;
	v->a[222906] = sym_raw_string;
	v->a[222907] = sym_ansi_c_string;
	v->a[222908] = state(999);
	v->a[222909] = 9;
	v->a[222910] = sym_arithmetic_expansion;
	v->a[222911] = sym_brace_expression;
	v->a[222912] = sym_string;
	v->a[222913] = sym_translated_string;
	v->a[222914] = sym_number;
	v->a[222915] = sym_simple_expansion;
	v->a[222916] = sym_expansion;
	v->a[222917] = sym_command_substitution;
	v->a[222918] = sym_process_substitution;
	v->a[222919] = 21;
	small_parse_table_11146(v);
}

void	small_parse_table_11146(t_small_parse_table_array *v)
{
	v->a[222920] = actions(71);
	v->a[222921] = 1;
	v->a[222922] = sym_comment;
	v->a[222923] = actions(9364);
	v->a[222924] = 1;
	v->a[222925] = anon_sym_LPAREN;
	v->a[222926] = actions(9366);
	v->a[222927] = 1;
	v->a[222928] = anon_sym_BANG;
	v->a[222929] = actions(9372);
	v->a[222930] = 1;
	v->a[222931] = anon_sym_TILDE;
	v->a[222932] = actions(9374);
	v->a[222933] = 1;
	v->a[222934] = anon_sym_DOLLAR;
	v->a[222935] = actions(9376);
	v->a[222936] = 1;
	v->a[222937] = anon_sym_DQUOTE;
	v->a[222938] = actions(9378);
	v->a[222939] = 1;
	small_parse_table_11147(v);
}

void	small_parse_table_11147(t_small_parse_table_array *v)
{
	v->a[222940] = aux_sym_number_token1;
	v->a[222941] = actions(9380);
	v->a[222942] = 1;
	v->a[222943] = aux_sym_number_token2;
	v->a[222944] = actions(9382);
	v->a[222945] = 1;
	v->a[222946] = anon_sym_DOLLAR_LBRACE;
	v->a[222947] = actions(9384);
	v->a[222948] = 1;
	v->a[222949] = anon_sym_DOLLAR_LPAREN;
	v->a[222950] = actions(9386);
	v->a[222951] = 1;
	v->a[222952] = anon_sym_BQUOTE;
	v->a[222953] = actions(9388);
	v->a[222954] = 1;
	v->a[222955] = anon_sym_DOLLAR_BQUOTE;
	v->a[222956] = actions(9392);
	v->a[222957] = 1;
	v->a[222958] = sym_variable_name;
	v->a[222959] = actions(10642);
	small_parse_table_11148(v);
}

void	small_parse_table_11148(t_small_parse_table_array *v)
{
	v->a[222960] = 1;
	v->a[222961] = aux_sym__simple_variable_name_token1;
	v->a[222962] = state(3391);
	v->a[222963] = 1;
	v->a[222964] = sym__arithmetic_binary_expression;
	v->a[222965] = state(3396);
	v->a[222966] = 1;
	v->a[222967] = sym__arithmetic_ternary_expression;
	v->a[222968] = state(3398);
	v->a[222969] = 1;
	v->a[222970] = sym__arithmetic_unary_expression;
	v->a[222971] = state(3400);
	v->a[222972] = 1;
	v->a[222973] = sym__arithmetic_postfix_expression;
	v->a[222974] = actions(9368);
	v->a[222975] = 2;
	v->a[222976] = anon_sym_PLUS_PLUS2;
	v->a[222977] = anon_sym_DASH_DASH2;
	v->a[222978] = actions(9370);
	v->a[222979] = 2;
	small_parse_table_11149(v);
}

void	small_parse_table_11149(t_small_parse_table_array *v)
{
	v->a[222980] = anon_sym_DASH2;
	v->a[222981] = anon_sym_PLUS2;
	v->a[222982] = state(3309);
	v->a[222983] = 9;
	v->a[222984] = sym_subscript;
	v->a[222985] = sym__arithmetic_expression;
	v->a[222986] = sym__arithmetic_literal;
	v->a[222987] = sym__arithmetic_parenthesized_expression;
	v->a[222988] = sym_string;
	v->a[222989] = sym_number;
	v->a[222990] = sym_simple_expansion;
	v->a[222991] = sym_expansion;
	v->a[222992] = sym_command_substitution;
	v->a[222993] = 21;
	v->a[222994] = actions(71);
	v->a[222995] = 1;
	v->a[222996] = sym_comment;
	v->a[222997] = actions(3064);
	v->a[222998] = 1;
	v->a[222999] = sym_variable_name;
	small_parse_table_11150(v);
}

/* EOF small_parse_table_2229.c */
