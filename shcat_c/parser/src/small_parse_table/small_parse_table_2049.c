/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2049.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10245(t_small_parse_table_array *v)
{
	v->a[204900] = anon_sym_TILDE;
	v->a[204901] = actions(9288);
	v->a[204902] = 1;
	v->a[204903] = anon_sym_DOLLAR;
	v->a[204904] = actions(9290);
	v->a[204905] = 1;
	v->a[204906] = anon_sym_DQUOTE;
	v->a[204907] = actions(9292);
	v->a[204908] = 1;
	v->a[204909] = aux_sym_number_token1;
	v->a[204910] = actions(9294);
	v->a[204911] = 1;
	v->a[204912] = aux_sym_number_token2;
	v->a[204913] = actions(9296);
	v->a[204914] = 1;
	v->a[204915] = anon_sym_DOLLAR_LBRACE;
	v->a[204916] = actions(9298);
	v->a[204917] = 1;
	v->a[204918] = anon_sym_DOLLAR_LPAREN;
	v->a[204919] = actions(9300);
	small_parse_table_10246(v);
}

void	small_parse_table_10246(t_small_parse_table_array *v)
{
	v->a[204920] = 1;
	v->a[204921] = anon_sym_BQUOTE;
	v->a[204922] = actions(9302);
	v->a[204923] = 1;
	v->a[204924] = anon_sym_DOLLAR_BQUOTE;
	v->a[204925] = actions(9494);
	v->a[204926] = 1;
	v->a[204927] = aux_sym__simple_variable_name_token1;
	v->a[204928] = state(2801);
	v->a[204929] = 1;
	v->a[204930] = sym__arithmetic_binary_expression;
	v->a[204931] = state(2803);
	v->a[204932] = 1;
	v->a[204933] = sym__arithmetic_ternary_expression;
	v->a[204934] = state(2809);
	v->a[204935] = 1;
	v->a[204936] = sym__arithmetic_unary_expression;
	v->a[204937] = state(2825);
	v->a[204938] = 1;
	v->a[204939] = sym__arithmetic_postfix_expression;
	small_parse_table_10247(v);
}

void	small_parse_table_10247(t_small_parse_table_array *v)
{
	v->a[204940] = actions(9282);
	v->a[204941] = 2;
	v->a[204942] = anon_sym_PLUS_PLUS2;
	v->a[204943] = anon_sym_DASH_DASH2;
	v->a[204944] = actions(9284);
	v->a[204945] = 2;
	v->a[204946] = anon_sym_DASH2;
	v->a[204947] = anon_sym_PLUS2;
	v->a[204948] = state(2746);
	v->a[204949] = 9;
	v->a[204950] = sym_subscript;
	v->a[204951] = sym__arithmetic_expression;
	v->a[204952] = sym__arithmetic_literal;
	v->a[204953] = sym__arithmetic_parenthesized_expression;
	v->a[204954] = sym_string;
	v->a[204955] = sym_number;
	v->a[204956] = sym_simple_expansion;
	v->a[204957] = sym_expansion;
	v->a[204958] = sym_command_substitution;
	v->a[204959] = 21;
	small_parse_table_10248(v);
}

void	small_parse_table_10248(t_small_parse_table_array *v)
{
	v->a[204960] = actions(71);
	v->a[204961] = 1;
	v->a[204962] = sym_comment;
	v->a[204963] = actions(3064);
	v->a[204964] = 1;
	v->a[204965] = sym_variable_name;
	v->a[204966] = actions(9278);
	v->a[204967] = 1;
	v->a[204968] = anon_sym_LPAREN;
	v->a[204969] = actions(9280);
	v->a[204970] = 1;
	v->a[204971] = anon_sym_BANG;
	v->a[204972] = actions(9286);
	v->a[204973] = 1;
	v->a[204974] = anon_sym_TILDE;
	v->a[204975] = actions(9288);
	v->a[204976] = 1;
	v->a[204977] = anon_sym_DOLLAR;
	v->a[204978] = actions(9290);
	v->a[204979] = 1;
	small_parse_table_10249(v);
}

void	small_parse_table_10249(t_small_parse_table_array *v)
{
	v->a[204980] = anon_sym_DQUOTE;
	v->a[204981] = actions(9292);
	v->a[204982] = 1;
	v->a[204983] = aux_sym_number_token1;
	v->a[204984] = actions(9294);
	v->a[204985] = 1;
	v->a[204986] = aux_sym_number_token2;
	v->a[204987] = actions(9296);
	v->a[204988] = 1;
	v->a[204989] = anon_sym_DOLLAR_LBRACE;
	v->a[204990] = actions(9298);
	v->a[204991] = 1;
	v->a[204992] = anon_sym_DOLLAR_LPAREN;
	v->a[204993] = actions(9300);
	v->a[204994] = 1;
	v->a[204995] = anon_sym_BQUOTE;
	v->a[204996] = actions(9302);
	v->a[204997] = 1;
	v->a[204998] = anon_sym_DOLLAR_BQUOTE;
	v->a[204999] = actions(9496);
	small_parse_table_10250(v);
}

/* EOF small_parse_table_2049.c */
