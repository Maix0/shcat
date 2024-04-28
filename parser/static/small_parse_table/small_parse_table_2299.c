/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2299.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11495(t_small_parse_table_array *v)
{
	v->a[229900] = sym_simple_expansion;
	v->a[229901] = sym_expansion;
	v->a[229902] = sym_command_substitution;
	v->a[229903] = 21;
	v->a[229904] = actions(71);
	v->a[229905] = 1;
	v->a[229906] = sym_comment;
	v->a[229907] = actions(9364);
	v->a[229908] = 1;
	v->a[229909] = anon_sym_LPAREN;
	v->a[229910] = actions(9366);
	v->a[229911] = 1;
	v->a[229912] = anon_sym_BANG;
	v->a[229913] = actions(9372);
	v->a[229914] = 1;
	v->a[229915] = anon_sym_TILDE;
	v->a[229916] = actions(9374);
	v->a[229917] = 1;
	v->a[229918] = anon_sym_DOLLAR;
	v->a[229919] = actions(9376);
	small_parse_table_11496(v);
}

void	small_parse_table_11496(t_small_parse_table_array *v)
{
	v->a[229920] = 1;
	v->a[229921] = anon_sym_DQUOTE;
	v->a[229922] = actions(9378);
	v->a[229923] = 1;
	v->a[229924] = aux_sym_number_token1;
	v->a[229925] = actions(9380);
	v->a[229926] = 1;
	v->a[229927] = aux_sym_number_token2;
	v->a[229928] = actions(9382);
	v->a[229929] = 1;
	v->a[229930] = anon_sym_DOLLAR_LBRACE;
	v->a[229931] = actions(9384);
	v->a[229932] = 1;
	v->a[229933] = anon_sym_DOLLAR_LPAREN;
	v->a[229934] = actions(9386);
	v->a[229935] = 1;
	v->a[229936] = anon_sym_BQUOTE;
	v->a[229937] = actions(9388);
	v->a[229938] = 1;
	v->a[229939] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_11497(v);
}

void	small_parse_table_11497(t_small_parse_table_array *v)
{
	v->a[229940] = actions(9392);
	v->a[229941] = 1;
	v->a[229942] = sym_variable_name;
	v->a[229943] = actions(10888);
	v->a[229944] = 1;
	v->a[229945] = aux_sym__simple_variable_name_token1;
	v->a[229946] = state(3391);
	v->a[229947] = 1;
	v->a[229948] = sym__arithmetic_binary_expression;
	v->a[229949] = state(3396);
	v->a[229950] = 1;
	v->a[229951] = sym__arithmetic_ternary_expression;
	v->a[229952] = state(3398);
	v->a[229953] = 1;
	v->a[229954] = sym__arithmetic_unary_expression;
	v->a[229955] = state(3400);
	v->a[229956] = 1;
	v->a[229957] = sym__arithmetic_postfix_expression;
	v->a[229958] = actions(9368);
	v->a[229959] = 2;
	small_parse_table_11498(v);
}

void	small_parse_table_11498(t_small_parse_table_array *v)
{
	v->a[229960] = anon_sym_PLUS_PLUS2;
	v->a[229961] = anon_sym_DASH_DASH2;
	v->a[229962] = actions(9370);
	v->a[229963] = 2;
	v->a[229964] = anon_sym_DASH2;
	v->a[229965] = anon_sym_PLUS2;
	v->a[229966] = state(3447);
	v->a[229967] = 9;
	v->a[229968] = sym_subscript;
	v->a[229969] = sym__arithmetic_expression;
	v->a[229970] = sym__arithmetic_literal;
	v->a[229971] = sym__arithmetic_parenthesized_expression;
	v->a[229972] = sym_string;
	v->a[229973] = sym_number;
	v->a[229974] = sym_simple_expansion;
	v->a[229975] = sym_expansion;
	v->a[229976] = sym_command_substitution;
	v->a[229977] = 21;
	v->a[229978] = actions(71);
	v->a[229979] = 1;
	small_parse_table_11499(v);
}

void	small_parse_table_11499(t_small_parse_table_array *v)
{
	v->a[229980] = sym_comment;
	v->a[229981] = actions(3064);
	v->a[229982] = 1;
	v->a[229983] = sym_variable_name;
	v->a[229984] = actions(9278);
	v->a[229985] = 1;
	v->a[229986] = anon_sym_LPAREN;
	v->a[229987] = actions(9280);
	v->a[229988] = 1;
	v->a[229989] = anon_sym_BANG;
	v->a[229990] = actions(9286);
	v->a[229991] = 1;
	v->a[229992] = anon_sym_TILDE;
	v->a[229993] = actions(9288);
	v->a[229994] = 1;
	v->a[229995] = anon_sym_DOLLAR;
	v->a[229996] = actions(9290);
	v->a[229997] = 1;
	v->a[229998] = anon_sym_DQUOTE;
	v->a[229999] = actions(9292);
	small_parse_table_11500(v);
}

/* EOF small_parse_table_2299.c */
