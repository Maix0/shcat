/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2379.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11895(t_small_parse_table_array *v)
{
	v->a[237900] = 1;
	v->a[237901] = anon_sym_LPAREN;
	v->a[237902] = actions(9366);
	v->a[237903] = 1;
	v->a[237904] = anon_sym_BANG;
	v->a[237905] = actions(9372);
	v->a[237906] = 1;
	v->a[237907] = anon_sym_TILDE;
	v->a[237908] = actions(9374);
	v->a[237909] = 1;
	v->a[237910] = anon_sym_DOLLAR;
	v->a[237911] = actions(9376);
	v->a[237912] = 1;
	v->a[237913] = anon_sym_DQUOTE;
	v->a[237914] = actions(9378);
	v->a[237915] = 1;
	v->a[237916] = aux_sym_number_token1;
	v->a[237917] = actions(9380);
	v->a[237918] = 1;
	v->a[237919] = aux_sym_number_token2;
	small_parse_table_11896(v);
}

void	small_parse_table_11896(t_small_parse_table_array *v)
{
	v->a[237920] = actions(9382);
	v->a[237921] = 1;
	v->a[237922] = anon_sym_DOLLAR_LBRACE;
	v->a[237923] = actions(9384);
	v->a[237924] = 1;
	v->a[237925] = anon_sym_DOLLAR_LPAREN;
	v->a[237926] = actions(9386);
	v->a[237927] = 1;
	v->a[237928] = anon_sym_BQUOTE;
	v->a[237929] = actions(9388);
	v->a[237930] = 1;
	v->a[237931] = anon_sym_DOLLAR_BQUOTE;
	v->a[237932] = actions(9392);
	v->a[237933] = 1;
	v->a[237934] = sym_variable_name;
	v->a[237935] = actions(11198);
	v->a[237936] = 1;
	v->a[237937] = aux_sym__simple_variable_name_token1;
	v->a[237938] = state(3391);
	v->a[237939] = 1;
	small_parse_table_11897(v);
}

void	small_parse_table_11897(t_small_parse_table_array *v)
{
	v->a[237940] = sym__arithmetic_binary_expression;
	v->a[237941] = state(3396);
	v->a[237942] = 1;
	v->a[237943] = sym__arithmetic_ternary_expression;
	v->a[237944] = state(3398);
	v->a[237945] = 1;
	v->a[237946] = sym__arithmetic_unary_expression;
	v->a[237947] = state(3400);
	v->a[237948] = 1;
	v->a[237949] = sym__arithmetic_postfix_expression;
	v->a[237950] = actions(9368);
	v->a[237951] = 2;
	v->a[237952] = anon_sym_PLUS_PLUS2;
	v->a[237953] = anon_sym_DASH_DASH2;
	v->a[237954] = actions(9370);
	v->a[237955] = 2;
	v->a[237956] = anon_sym_DASH2;
	v->a[237957] = anon_sym_PLUS2;
	v->a[237958] = state(3224);
	v->a[237959] = 9;
	small_parse_table_11898(v);
}

void	small_parse_table_11898(t_small_parse_table_array *v)
{
	v->a[237960] = sym_subscript;
	v->a[237961] = sym__arithmetic_expression;
	v->a[237962] = sym__arithmetic_literal;
	v->a[237963] = sym__arithmetic_parenthesized_expression;
	v->a[237964] = sym_string;
	v->a[237965] = sym_number;
	v->a[237966] = sym_simple_expansion;
	v->a[237967] = sym_expansion;
	v->a[237968] = sym_command_substitution;
	v->a[237969] = 21;
	v->a[237970] = actions(71);
	v->a[237971] = 1;
	v->a[237972] = sym_comment;
	v->a[237973] = actions(3064);
	v->a[237974] = 1;
	v->a[237975] = sym_variable_name;
	v->a[237976] = actions(9278);
	v->a[237977] = 1;
	v->a[237978] = anon_sym_LPAREN;
	v->a[237979] = actions(9280);
	small_parse_table_11899(v);
}

void	small_parse_table_11899(t_small_parse_table_array *v)
{
	v->a[237980] = 1;
	v->a[237981] = anon_sym_BANG;
	v->a[237982] = actions(9286);
	v->a[237983] = 1;
	v->a[237984] = anon_sym_TILDE;
	v->a[237985] = actions(9288);
	v->a[237986] = 1;
	v->a[237987] = anon_sym_DOLLAR;
	v->a[237988] = actions(9290);
	v->a[237989] = 1;
	v->a[237990] = anon_sym_DQUOTE;
	v->a[237991] = actions(9292);
	v->a[237992] = 1;
	v->a[237993] = aux_sym_number_token1;
	v->a[237994] = actions(9294);
	v->a[237995] = 1;
	v->a[237996] = aux_sym_number_token2;
	v->a[237997] = actions(9296);
	v->a[237998] = 1;
	v->a[237999] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_11900(v);
}

/* EOF small_parse_table_2379.c */
