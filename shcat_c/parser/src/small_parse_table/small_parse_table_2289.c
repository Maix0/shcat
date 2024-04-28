/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2289.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11445(t_small_parse_table_array *v)
{
	v->a[228900] = actions(71);
	v->a[228901] = 1;
	v->a[228902] = sym_comment;
	v->a[228903] = actions(9364);
	v->a[228904] = 1;
	v->a[228905] = anon_sym_LPAREN;
	v->a[228906] = actions(9366);
	v->a[228907] = 1;
	v->a[228908] = anon_sym_BANG;
	v->a[228909] = actions(9372);
	v->a[228910] = 1;
	v->a[228911] = anon_sym_TILDE;
	v->a[228912] = actions(9374);
	v->a[228913] = 1;
	v->a[228914] = anon_sym_DOLLAR;
	v->a[228915] = actions(9376);
	v->a[228916] = 1;
	v->a[228917] = anon_sym_DQUOTE;
	v->a[228918] = actions(9378);
	v->a[228919] = 1;
	small_parse_table_11446(v);
}

void	small_parse_table_11446(t_small_parse_table_array *v)
{
	v->a[228920] = aux_sym_number_token1;
	v->a[228921] = actions(9380);
	v->a[228922] = 1;
	v->a[228923] = aux_sym_number_token2;
	v->a[228924] = actions(9382);
	v->a[228925] = 1;
	v->a[228926] = anon_sym_DOLLAR_LBRACE;
	v->a[228927] = actions(9384);
	v->a[228928] = 1;
	v->a[228929] = anon_sym_DOLLAR_LPAREN;
	v->a[228930] = actions(9386);
	v->a[228931] = 1;
	v->a[228932] = anon_sym_BQUOTE;
	v->a[228933] = actions(9388);
	v->a[228934] = 1;
	v->a[228935] = anon_sym_DOLLAR_BQUOTE;
	v->a[228936] = actions(9392);
	v->a[228937] = 1;
	v->a[228938] = sym_variable_name;
	v->a[228939] = actions(10858);
	small_parse_table_11447(v);
}

void	small_parse_table_11447(t_small_parse_table_array *v)
{
	v->a[228940] = 1;
	v->a[228941] = aux_sym__simple_variable_name_token1;
	v->a[228942] = state(3391);
	v->a[228943] = 1;
	v->a[228944] = sym__arithmetic_binary_expression;
	v->a[228945] = state(3396);
	v->a[228946] = 1;
	v->a[228947] = sym__arithmetic_ternary_expression;
	v->a[228948] = state(3398);
	v->a[228949] = 1;
	v->a[228950] = sym__arithmetic_unary_expression;
	v->a[228951] = state(3400);
	v->a[228952] = 1;
	v->a[228953] = sym__arithmetic_postfix_expression;
	v->a[228954] = actions(9368);
	v->a[228955] = 2;
	v->a[228956] = anon_sym_PLUS_PLUS2;
	v->a[228957] = anon_sym_DASH_DASH2;
	v->a[228958] = actions(9370);
	v->a[228959] = 2;
	small_parse_table_11448(v);
}

void	small_parse_table_11448(t_small_parse_table_array *v)
{
	v->a[228960] = anon_sym_DASH2;
	v->a[228961] = anon_sym_PLUS2;
	v->a[228962] = state(3446);
	v->a[228963] = 9;
	v->a[228964] = sym_subscript;
	v->a[228965] = sym__arithmetic_expression;
	v->a[228966] = sym__arithmetic_literal;
	v->a[228967] = sym__arithmetic_parenthesized_expression;
	v->a[228968] = sym_string;
	v->a[228969] = sym_number;
	v->a[228970] = sym_simple_expansion;
	v->a[228971] = sym_expansion;
	v->a[228972] = sym_command_substitution;
	v->a[228973] = 21;
	v->a[228974] = actions(71);
	v->a[228975] = 1;
	v->a[228976] = sym_comment;
	v->a[228977] = actions(3064);
	v->a[228978] = 1;
	v->a[228979] = sym_variable_name;
	small_parse_table_11449(v);
}

void	small_parse_table_11449(t_small_parse_table_array *v)
{
	v->a[228980] = actions(9278);
	v->a[228981] = 1;
	v->a[228982] = anon_sym_LPAREN;
	v->a[228983] = actions(9280);
	v->a[228984] = 1;
	v->a[228985] = anon_sym_BANG;
	v->a[228986] = actions(9286);
	v->a[228987] = 1;
	v->a[228988] = anon_sym_TILDE;
	v->a[228989] = actions(9288);
	v->a[228990] = 1;
	v->a[228991] = anon_sym_DOLLAR;
	v->a[228992] = actions(9290);
	v->a[228993] = 1;
	v->a[228994] = anon_sym_DQUOTE;
	v->a[228995] = actions(9292);
	v->a[228996] = 1;
	v->a[228997] = aux_sym_number_token1;
	v->a[228998] = actions(9294);
	v->a[228999] = 1;
	small_parse_table_11450(v);
}

/* EOF small_parse_table_2289.c */
