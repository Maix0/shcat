/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2059.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10295(t_small_parse_table_array *v)
{
	v->a[205900] = 1;
	v->a[205901] = anon_sym_DQUOTE;
	v->a[205902] = actions(9378);
	v->a[205903] = 1;
	v->a[205904] = aux_sym_number_token1;
	v->a[205905] = actions(9380);
	v->a[205906] = 1;
	v->a[205907] = aux_sym_number_token2;
	v->a[205908] = actions(9382);
	v->a[205909] = 1;
	v->a[205910] = anon_sym_DOLLAR_LBRACE;
	v->a[205911] = actions(9384);
	v->a[205912] = 1;
	v->a[205913] = anon_sym_DOLLAR_LPAREN;
	v->a[205914] = actions(9386);
	v->a[205915] = 1;
	v->a[205916] = anon_sym_BQUOTE;
	v->a[205917] = actions(9388);
	v->a[205918] = 1;
	v->a[205919] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_10296(v);
}

void	small_parse_table_10296(t_small_parse_table_array *v)
{
	v->a[205920] = actions(9392);
	v->a[205921] = 1;
	v->a[205922] = sym_variable_name;
	v->a[205923] = actions(9572);
	v->a[205924] = 1;
	v->a[205925] = aux_sym__simple_variable_name_token1;
	v->a[205926] = state(3391);
	v->a[205927] = 1;
	v->a[205928] = sym__arithmetic_binary_expression;
	v->a[205929] = state(3396);
	v->a[205930] = 1;
	v->a[205931] = sym__arithmetic_ternary_expression;
	v->a[205932] = state(3398);
	v->a[205933] = 1;
	v->a[205934] = sym__arithmetic_unary_expression;
	v->a[205935] = state(3400);
	v->a[205936] = 1;
	v->a[205937] = sym__arithmetic_postfix_expression;
	v->a[205938] = actions(9368);
	v->a[205939] = 2;
	small_parse_table_10297(v);
}

void	small_parse_table_10297(t_small_parse_table_array *v)
{
	v->a[205940] = anon_sym_PLUS_PLUS2;
	v->a[205941] = anon_sym_DASH_DASH2;
	v->a[205942] = actions(9370);
	v->a[205943] = 2;
	v->a[205944] = anon_sym_DASH2;
	v->a[205945] = anon_sym_PLUS2;
	v->a[205946] = state(3363);
	v->a[205947] = 9;
	v->a[205948] = sym_subscript;
	v->a[205949] = sym__arithmetic_expression;
	v->a[205950] = sym__arithmetic_literal;
	v->a[205951] = sym__arithmetic_parenthesized_expression;
	v->a[205952] = sym_string;
	v->a[205953] = sym_number;
	v->a[205954] = sym_simple_expansion;
	v->a[205955] = sym_expansion;
	v->a[205956] = sym_command_substitution;
	v->a[205957] = 21;
	v->a[205958] = actions(71);
	v->a[205959] = 1;
	small_parse_table_10298(v);
}

void	small_parse_table_10298(t_small_parse_table_array *v)
{
	v->a[205960] = sym_comment;
	v->a[205961] = actions(9364);
	v->a[205962] = 1;
	v->a[205963] = anon_sym_LPAREN;
	v->a[205964] = actions(9366);
	v->a[205965] = 1;
	v->a[205966] = anon_sym_BANG;
	v->a[205967] = actions(9372);
	v->a[205968] = 1;
	v->a[205969] = anon_sym_TILDE;
	v->a[205970] = actions(9374);
	v->a[205971] = 1;
	v->a[205972] = anon_sym_DOLLAR;
	v->a[205973] = actions(9376);
	v->a[205974] = 1;
	v->a[205975] = anon_sym_DQUOTE;
	v->a[205976] = actions(9378);
	v->a[205977] = 1;
	v->a[205978] = aux_sym_number_token1;
	v->a[205979] = actions(9380);
	small_parse_table_10299(v);
}

void	small_parse_table_10299(t_small_parse_table_array *v)
{
	v->a[205980] = 1;
	v->a[205981] = aux_sym_number_token2;
	v->a[205982] = actions(9382);
	v->a[205983] = 1;
	v->a[205984] = anon_sym_DOLLAR_LBRACE;
	v->a[205985] = actions(9384);
	v->a[205986] = 1;
	v->a[205987] = anon_sym_DOLLAR_LPAREN;
	v->a[205988] = actions(9386);
	v->a[205989] = 1;
	v->a[205990] = anon_sym_BQUOTE;
	v->a[205991] = actions(9388);
	v->a[205992] = 1;
	v->a[205993] = anon_sym_DOLLAR_BQUOTE;
	v->a[205994] = actions(9392);
	v->a[205995] = 1;
	v->a[205996] = sym_variable_name;
	v->a[205997] = actions(9574);
	v->a[205998] = 1;
	v->a[205999] = aux_sym__simple_variable_name_token1;
	small_parse_table_10300(v);
}

/* EOF small_parse_table_2059.c */
