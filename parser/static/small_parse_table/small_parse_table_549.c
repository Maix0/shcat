/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_549.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2745(t_small_parse_table_array *v)
{
	v->a[54900] = actions(1831);
	v->a[54901] = 1;
	v->a[54902] = anon_sym_LPAREN;
	v->a[54903] = actions(1833);
	v->a[54904] = 1;
	v->a[54905] = anon_sym_BANG;
	v->a[54906] = actions(1835);
	v->a[54907] = 1;
	v->a[54908] = anon_sym_RPAREN_RPAREN;
	v->a[54909] = actions(1841);
	v->a[54910] = 1;
	v->a[54911] = anon_sym_TILDE;
	v->a[54912] = actions(1843);
	v->a[54913] = 1;
	v->a[54914] = anon_sym_DOLLAR;
	v->a[54915] = actions(1845);
	v->a[54916] = 1;
	v->a[54917] = anon_sym_DQUOTE;
	v->a[54918] = actions(1849);
	v->a[54919] = 1;
	small_parse_table_2746(v);
}

void	small_parse_table_2746(t_small_parse_table_array *v)
{
	v->a[54920] = anon_sym_DOLLAR_LBRACE;
	v->a[54921] = actions(1851);
	v->a[54922] = 1;
	v->a[54923] = anon_sym_DOLLAR_LPAREN;
	v->a[54924] = actions(1853);
	v->a[54925] = 1;
	v->a[54926] = anon_sym_BQUOTE;
	v->a[54927] = actions(1855);
	v->a[54928] = 1;
	v->a[54929] = sym_variable_name;
	v->a[54930] = actions(1837);
	v->a[54931] = 2;
	v->a[54932] = anon_sym_PLUS_PLUS;
	v->a[54933] = anon_sym_DASH_DASH;
	v->a[54934] = actions(1839);
	v->a[54935] = 2;
	v->a[54936] = anon_sym_DASH2;
	v->a[54937] = anon_sym_PLUS2;
	v->a[54938] = actions(1847);
	v->a[54939] = 2;
	small_parse_table_2747(v);
}

void	small_parse_table_2747(t_small_parse_table_array *v)
{
	v->a[54940] = sym_number;
	v->a[54941] = aux_sym__simple_variable_name_token1;
	v->a[54942] = state(370);
	v->a[54943] = 3;
	v->a[54944] = sym_string;
	v->a[54945] = sym_simple_expansion;
	v->a[54946] = sym_expansion;
	v->a[54947] = state(503);
	v->a[54948] = 8;
	v->a[54949] = sym__arithmetic_expression;
	v->a[54950] = sym_arithmetic_literal;
	v->a[54951] = sym_arithmetic_binary_expression;
	v->a[54952] = sym_arithmetic_ternary_expression;
	v->a[54953] = sym_arithmetic_unary_expression;
	v->a[54954] = sym_arithmetic_postfix_expression;
	v->a[54955] = sym_arithmetic_parenthesized_expression;
	v->a[54956] = sym_command_substitution;
	v->a[54957] = 16;
	v->a[54958] = actions(1074);
	v->a[54959] = 1;
	small_parse_table_2748(v);
}

void	small_parse_table_2748(t_small_parse_table_array *v)
{
	v->a[54960] = sym_comment;
	v->a[54961] = actions(1831);
	v->a[54962] = 1;
	v->a[54963] = anon_sym_LPAREN;
	v->a[54964] = actions(1833);
	v->a[54965] = 1;
	v->a[54966] = anon_sym_BANG;
	v->a[54967] = actions(1841);
	v->a[54968] = 1;
	v->a[54969] = anon_sym_TILDE;
	v->a[54970] = actions(1843);
	v->a[54971] = 1;
	v->a[54972] = anon_sym_DOLLAR;
	v->a[54973] = actions(1845);
	v->a[54974] = 1;
	v->a[54975] = anon_sym_DQUOTE;
	v->a[54976] = actions(1849);
	v->a[54977] = 1;
	v->a[54978] = anon_sym_DOLLAR_LBRACE;
	v->a[54979] = actions(1851);
	small_parse_table_2749(v);
}

void	small_parse_table_2749(t_small_parse_table_array *v)
{
	v->a[54980] = 1;
	v->a[54981] = anon_sym_DOLLAR_LPAREN;
	v->a[54982] = actions(1853);
	v->a[54983] = 1;
	v->a[54984] = anon_sym_BQUOTE;
	v->a[54985] = actions(1855);
	v->a[54986] = 1;
	v->a[54987] = sym_variable_name;
	v->a[54988] = actions(1857);
	v->a[54989] = 1;
	v->a[54990] = anon_sym_RPAREN_RPAREN;
	v->a[54991] = actions(1837);
	v->a[54992] = 2;
	v->a[54993] = anon_sym_PLUS_PLUS;
	v->a[54994] = anon_sym_DASH_DASH;
	v->a[54995] = actions(1839);
	v->a[54996] = 2;
	v->a[54997] = anon_sym_DASH2;
	v->a[54998] = anon_sym_PLUS2;
	v->a[54999] = actions(1847);
	small_parse_table_2750(v);
}

/* EOF small_parse_table_549.c */
