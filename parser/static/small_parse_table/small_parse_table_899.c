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
	v->a[89900] = 1;
	v->a[89901] = anon_sym_DOLLAR;
	v->a[89902] = actions(3578);
	v->a[89903] = 1;
	v->a[89904] = anon_sym_DQUOTE;
	v->a[89905] = state(1863);
	v->a[89906] = 1;
	v->a[89907] = aux_sym_string_repeat1;
	v->a[89908] = state(1963);
	v->a[89909] = 4;
	v->a[89910] = sym_arithmetic_expansion;
	v->a[89911] = sym_simple_expansion;
	v->a[89912] = sym_expansion;
	v->a[89913] = sym_command_substitution;
	v->a[89914] = 10;
	v->a[89915] = actions(3);
	v->a[89916] = 1;
	v->a[89917] = sym_comment;
	v->a[89918] = actions(3414);
	v->a[89919] = 1;
	small_parse_table_4496(v);
}

void	small_parse_table_4496(t_small_parse_table_array *v)
{
	v->a[89920] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[89921] = actions(3420);
	v->a[89922] = 1;
	v->a[89923] = sym_string_content;
	v->a[89924] = actions(3422);
	v->a[89925] = 1;
	v->a[89926] = anon_sym_DOLLAR_LBRACE;
	v->a[89927] = actions(3424);
	v->a[89928] = 1;
	v->a[89929] = anon_sym_DOLLAR_LPAREN;
	v->a[89930] = actions(3426);
	v->a[89931] = 1;
	v->a[89932] = anon_sym_BQUOTE;
	v->a[89933] = actions(3580);
	v->a[89934] = 1;
	v->a[89935] = anon_sym_DOLLAR;
	v->a[89936] = actions(3582);
	v->a[89937] = 1;
	v->a[89938] = anon_sym_DQUOTE;
	v->a[89939] = state(1849);
	small_parse_table_4497(v);
}

void	small_parse_table_4497(t_small_parse_table_array *v)
{
	v->a[89940] = 1;
	v->a[89941] = aux_sym_string_repeat1;
	v->a[89942] = state(1963);
	v->a[89943] = 4;
	v->a[89944] = sym_arithmetic_expansion;
	v->a[89945] = sym_simple_expansion;
	v->a[89946] = sym_expansion;
	v->a[89947] = sym_command_substitution;
	v->a[89948] = 4;
	v->a[89949] = actions(3);
	v->a[89950] = 1;
	v->a[89951] = sym_comment;
	v->a[89952] = actions(1806);
	v->a[89953] = 1;
	v->a[89954] = sym_variable_name;
	v->a[89955] = actions(1804);
	v->a[89956] = 2;
	v->a[89957] = aux_sym__simple_variable_name_token1;
	v->a[89958] = aux_sym__multiline_variable_name_token1;
	v->a[89959] = actions(1802);
	small_parse_table_4498(v);
}

void	small_parse_table_4498(t_small_parse_table_array *v)
{
	v->a[89960] = 9;
	v->a[89961] = anon_sym_BANG;
	v->a[89962] = anon_sym_DASH;
	v->a[89963] = anon_sym_STAR;
	v->a[89964] = anon_sym_QMARK;
	v->a[89965] = anon_sym_DOLLAR;
	v->a[89966] = anon_sym_POUND;
	v->a[89967] = anon_sym_AT;
	v->a[89968] = anon_sym_0;
	v->a[89969] = anon_sym__;
	v->a[89970] = 4;
	v->a[89971] = actions(3);
	v->a[89972] = 1;
	v->a[89973] = sym_comment;
	v->a[89974] = actions(631);
	v->a[89975] = 1;
	v->a[89976] = sym_variable_name;
	v->a[89977] = actions(629);
	v->a[89978] = 2;
	v->a[89979] = aux_sym__simple_variable_name_token1;
	small_parse_table_4499(v);
}

void	small_parse_table_4499(t_small_parse_table_array *v)
{
	v->a[89980] = aux_sym__multiline_variable_name_token1;
	v->a[89981] = actions(627);
	v->a[89982] = 9;
	v->a[89983] = anon_sym_BANG;
	v->a[89984] = anon_sym_DASH;
	v->a[89985] = anon_sym_STAR;
	v->a[89986] = anon_sym_QMARK;
	v->a[89987] = anon_sym_DOLLAR;
	v->a[89988] = anon_sym_POUND;
	v->a[89989] = anon_sym_AT;
	v->a[89990] = anon_sym_0;
	v->a[89991] = anon_sym__;
	v->a[89992] = 10;
	v->a[89993] = actions(3);
	v->a[89994] = 1;
	v->a[89995] = sym_comment;
	v->a[89996] = actions(3414);
	v->a[89997] = 1;
	v->a[89998] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[89999] = actions(3420);
	small_parse_table_4500(v);
}

/* EOF small_parse_table_899.c */
