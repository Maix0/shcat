/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2389.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11945(t_small_parse_table_array *v)
{
	v->a[238900] = sym__arithmetic_literal;
	v->a[238901] = sym__arithmetic_parenthesized_expression;
	v->a[238902] = sym_string;
	v->a[238903] = sym_number;
	v->a[238904] = sym_simple_expansion;
	v->a[238905] = sym_expansion;
	v->a[238906] = sym_command_substitution;
	v->a[238907] = 21;
	v->a[238908] = actions(71);
	v->a[238909] = 1;
	v->a[238910] = sym_comment;
	v->a[238911] = actions(9364);
	v->a[238912] = 1;
	v->a[238913] = anon_sym_LPAREN;
	v->a[238914] = actions(9366);
	v->a[238915] = 1;
	v->a[238916] = anon_sym_BANG;
	v->a[238917] = actions(9372);
	v->a[238918] = 1;
	v->a[238919] = anon_sym_TILDE;
	small_parse_table_11946(v);
}

void	small_parse_table_11946(t_small_parse_table_array *v)
{
	v->a[238920] = actions(9374);
	v->a[238921] = 1;
	v->a[238922] = anon_sym_DOLLAR;
	v->a[238923] = actions(9376);
	v->a[238924] = 1;
	v->a[238925] = anon_sym_DQUOTE;
	v->a[238926] = actions(9378);
	v->a[238927] = 1;
	v->a[238928] = aux_sym_number_token1;
	v->a[238929] = actions(9380);
	v->a[238930] = 1;
	v->a[238931] = aux_sym_number_token2;
	v->a[238932] = actions(9382);
	v->a[238933] = 1;
	v->a[238934] = anon_sym_DOLLAR_LBRACE;
	v->a[238935] = actions(9384);
	v->a[238936] = 1;
	v->a[238937] = anon_sym_DOLLAR_LPAREN;
	v->a[238938] = actions(9386);
	v->a[238939] = 1;
	small_parse_table_11947(v);
}

void	small_parse_table_11947(t_small_parse_table_array *v)
{
	v->a[238940] = anon_sym_BQUOTE;
	v->a[238941] = actions(9388);
	v->a[238942] = 1;
	v->a[238943] = anon_sym_DOLLAR_BQUOTE;
	v->a[238944] = actions(9392);
	v->a[238945] = 1;
	v->a[238946] = sym_variable_name;
	v->a[238947] = actions(11226);
	v->a[238948] = 1;
	v->a[238949] = aux_sym__simple_variable_name_token1;
	v->a[238950] = state(3391);
	v->a[238951] = 1;
	v->a[238952] = sym__arithmetic_binary_expression;
	v->a[238953] = state(3396);
	v->a[238954] = 1;
	v->a[238955] = sym__arithmetic_ternary_expression;
	v->a[238956] = state(3398);
	v->a[238957] = 1;
	v->a[238958] = sym__arithmetic_unary_expression;
	v->a[238959] = state(3400);
	small_parse_table_11948(v);
}

void	small_parse_table_11948(t_small_parse_table_array *v)
{
	v->a[238960] = 1;
	v->a[238961] = sym__arithmetic_postfix_expression;
	v->a[238962] = actions(9368);
	v->a[238963] = 2;
	v->a[238964] = anon_sym_PLUS_PLUS2;
	v->a[238965] = anon_sym_DASH_DASH2;
	v->a[238966] = actions(9370);
	v->a[238967] = 2;
	v->a[238968] = anon_sym_DASH2;
	v->a[238969] = anon_sym_PLUS2;
	v->a[238970] = state(3165);
	v->a[238971] = 9;
	v->a[238972] = sym_subscript;
	v->a[238973] = sym__arithmetic_expression;
	v->a[238974] = sym__arithmetic_literal;
	v->a[238975] = sym__arithmetic_parenthesized_expression;
	v->a[238976] = sym_string;
	v->a[238977] = sym_number;
	v->a[238978] = sym_simple_expansion;
	v->a[238979] = sym_expansion;
	small_parse_table_11949(v);
}

void	small_parse_table_11949(t_small_parse_table_array *v)
{
	v->a[238980] = sym_command_substitution;
	v->a[238981] = 21;
	v->a[238982] = actions(71);
	v->a[238983] = 1;
	v->a[238984] = sym_comment;
	v->a[238985] = actions(3064);
	v->a[238986] = 1;
	v->a[238987] = sym_variable_name;
	v->a[238988] = actions(9278);
	v->a[238989] = 1;
	v->a[238990] = anon_sym_LPAREN;
	v->a[238991] = actions(9280);
	v->a[238992] = 1;
	v->a[238993] = anon_sym_BANG;
	v->a[238994] = actions(9286);
	v->a[238995] = 1;
	v->a[238996] = anon_sym_TILDE;
	v->a[238997] = actions(9288);
	v->a[238998] = 1;
	v->a[238999] = anon_sym_DOLLAR;
	small_parse_table_11950(v);
}

/* EOF small_parse_table_2389.c */
