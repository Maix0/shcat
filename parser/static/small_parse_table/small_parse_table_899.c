/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_899.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4495(t_small_parse_table_array *v)
{
	v->a[89900] = aux_sym_number_token1;
	v->a[89901] = actions(4600);
	v->a[89902] = 1;
	v->a[89903] = aux_sym_number_token2;
	v->a[89904] = actions(4602);
	v->a[89905] = 1;
	v->a[89906] = anon_sym_DOLLAR_LBRACE;
	v->a[89907] = actions(4604);
	v->a[89908] = 1;
	v->a[89909] = anon_sym_DOLLAR_LPAREN;
	v->a[89910] = actions(4606);
	v->a[89911] = 1;
	v->a[89912] = anon_sym_BQUOTE;
	v->a[89913] = actions(4608);
	v->a[89914] = 1;
	v->a[89915] = anon_sym_DOLLAR_BQUOTE;
	v->a[89916] = actions(4961);
	v->a[89917] = 1;
	v->a[89918] = aux_sym__simple_variable_name_token1;
	v->a[89919] = actions(4963);
	small_parse_table_4496(v);
}

void	small_parse_table_4496(t_small_parse_table_array *v)
{
	v->a[89920] = 1;
	v->a[89921] = sym_variable_name;
	v->a[89922] = state(1476);
	v->a[89923] = 1;
	v->a[89924] = sym__arithmetic_postfix_expression;
	v->a[89925] = state(1478);
	v->a[89926] = 1;
	v->a[89927] = sym__arithmetic_unary_expression;
	v->a[89928] = state(1490);
	v->a[89929] = 1;
	v->a[89930] = sym__arithmetic_ternary_expression;
	v->a[89931] = state(1511);
	v->a[89932] = 1;
	v->a[89933] = sym__arithmetic_binary_expression;
	v->a[89934] = actions(4588);
	v->a[89935] = 2;
	v->a[89936] = anon_sym_PLUS_PLUS;
	v->a[89937] = anon_sym_DASH_DASH;
	v->a[89938] = actions(4590);
	v->a[89939] = 2;
	small_parse_table_4497(v);
}

void	small_parse_table_4497(t_small_parse_table_array *v)
{
	v->a[89940] = anon_sym_DASH2;
	v->a[89941] = anon_sym_PLUS2;
	v->a[89942] = state(1410);
	v->a[89943] = 8;
	v->a[89944] = sym__arithmetic_expression;
	v->a[89945] = sym__arithmetic_literal;
	v->a[89946] = sym__arithmetic_parenthesized_expression;
	v->a[89947] = sym_string;
	v->a[89948] = sym_number;
	v->a[89949] = sym_simple_expansion;
	v->a[89950] = sym_expansion;
	v->a[89951] = sym_command_substitution;
	v->a[89952] = 21;
	v->a[89953] = actions(57);
	v->a[89954] = 1;
	v->a[89955] = sym_comment;
	v->a[89956] = actions(4584);
	v->a[89957] = 1;
	v->a[89958] = anon_sym_LPAREN;
	v->a[89959] = actions(4586);
	small_parse_table_4498(v);
}

void	small_parse_table_4498(t_small_parse_table_array *v)
{
	v->a[89960] = 1;
	v->a[89961] = anon_sym_BANG;
	v->a[89962] = actions(4592);
	v->a[89963] = 1;
	v->a[89964] = anon_sym_TILDE;
	v->a[89965] = actions(4594);
	v->a[89966] = 1;
	v->a[89967] = anon_sym_DOLLAR;
	v->a[89968] = actions(4596);
	v->a[89969] = 1;
	v->a[89970] = anon_sym_DQUOTE;
	v->a[89971] = actions(4598);
	v->a[89972] = 1;
	v->a[89973] = aux_sym_number_token1;
	v->a[89974] = actions(4600);
	v->a[89975] = 1;
	v->a[89976] = aux_sym_number_token2;
	v->a[89977] = actions(4602);
	v->a[89978] = 1;
	v->a[89979] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_4499(v);
}

void	small_parse_table_4499(t_small_parse_table_array *v)
{
	v->a[89980] = actions(4604);
	v->a[89981] = 1;
	v->a[89982] = anon_sym_DOLLAR_LPAREN;
	v->a[89983] = actions(4606);
	v->a[89984] = 1;
	v->a[89985] = anon_sym_BQUOTE;
	v->a[89986] = actions(4608);
	v->a[89987] = 1;
	v->a[89988] = anon_sym_DOLLAR_BQUOTE;
	v->a[89989] = actions(4965);
	v->a[89990] = 1;
	v->a[89991] = aux_sym__simple_variable_name_token1;
	v->a[89992] = actions(4967);
	v->a[89993] = 1;
	v->a[89994] = sym_variable_name;
	v->a[89995] = state(1476);
	v->a[89996] = 1;
	v->a[89997] = sym__arithmetic_postfix_expression;
	v->a[89998] = state(1478);
	v->a[89999] = 1;
	small_parse_table_4500(v);
}

/* EOF small_parse_table_899.c */
