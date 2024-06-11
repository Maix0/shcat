/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_649.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3245(t_small_parse_table_array *v)
{
	v->a[64900] = actions(1887);
	v->a[64901] = 1;
	v->a[64902] = anon_sym_DOLLAR_LBRACE;
	v->a[64903] = actions(1889);
	v->a[64904] = 1;
	v->a[64905] = anon_sym_DOLLAR_LPAREN;
	v->a[64906] = actions(1891);
	v->a[64907] = 1;
	v->a[64908] = anon_sym_BQUOTE;
	v->a[64909] = actions(1893);
	v->a[64910] = 1;
	v->a[64911] = sym_variable_name;
	v->a[64912] = actions(1875);
	v->a[64913] = 2;
	v->a[64914] = anon_sym_PLUS_PLUS;
	v->a[64915] = anon_sym_DASH_DASH;
	v->a[64916] = actions(1877);
	v->a[64917] = 2;
	v->a[64918] = anon_sym_DASH2;
	v->a[64919] = anon_sym_PLUS2;
	small_parse_table_3246(v);
}

void	small_parse_table_3246(t_small_parse_table_array *v)
{
	v->a[64920] = actions(1885);
	v->a[64921] = 2;
	v->a[64922] = sym_number;
	v->a[64923] = aux_sym__simple_variable_name_token1;
	v->a[64924] = state(365);
	v->a[64925] = 3;
	v->a[64926] = sym_string;
	v->a[64927] = sym_simple_expansion;
	v->a[64928] = sym_expansion;
	v->a[64929] = state(329);
	v->a[64930] = 8;
	v->a[64931] = sym__arithmetic_expression;
	v->a[64932] = sym_arithmetic_literal;
	v->a[64933] = sym_arithmetic_binary_expression;
	v->a[64934] = sym_arithmetic_ternary_expression;
	v->a[64935] = sym_arithmetic_unary_expression;
	v->a[64936] = sym_arithmetic_postfix_expression;
	v->a[64937] = sym_arithmetic_parenthesized_expression;
	v->a[64938] = sym_command_substitution;
	v->a[64939] = 15;
	small_parse_table_3247(v);
}

void	small_parse_table_3247(t_small_parse_table_array *v)
{
	v->a[64940] = actions(1094);
	v->a[64941] = 1;
	v->a[64942] = sym_comment;
	v->a[64943] = actions(2003);
	v->a[64944] = 1;
	v->a[64945] = anon_sym_LPAREN;
	v->a[64946] = actions(2005);
	v->a[64947] = 1;
	v->a[64948] = anon_sym_BANG;
	v->a[64949] = actions(2011);
	v->a[64950] = 1;
	v->a[64951] = anon_sym_TILDE;
	v->a[64952] = actions(2013);
	v->a[64953] = 1;
	v->a[64954] = anon_sym_DOLLAR;
	v->a[64955] = actions(2015);
	v->a[64956] = 1;
	v->a[64957] = anon_sym_DQUOTE;
	v->a[64958] = actions(2019);
	v->a[64959] = 1;
	small_parse_table_3248(v);
}

void	small_parse_table_3248(t_small_parse_table_array *v)
{
	v->a[64960] = anon_sym_DOLLAR_LBRACE;
	v->a[64961] = actions(2021);
	v->a[64962] = 1;
	v->a[64963] = anon_sym_DOLLAR_LPAREN;
	v->a[64964] = actions(2023);
	v->a[64965] = 1;
	v->a[64966] = anon_sym_BQUOTE;
	v->a[64967] = actions(2025);
	v->a[64968] = 1;
	v->a[64969] = sym_variable_name;
	v->a[64970] = actions(2007);
	v->a[64971] = 2;
	v->a[64972] = anon_sym_PLUS_PLUS;
	v->a[64973] = anon_sym_DASH_DASH;
	v->a[64974] = actions(2009);
	v->a[64975] = 2;
	v->a[64976] = anon_sym_DASH2;
	v->a[64977] = anon_sym_PLUS2;
	v->a[64978] = actions(2017);
	v->a[64979] = 2;
	small_parse_table_3249(v);
}

void	small_parse_table_3249(t_small_parse_table_array *v)
{
	v->a[64980] = sym_number;
	v->a[64981] = aux_sym__simple_variable_name_token1;
	v->a[64982] = state(503);
	v->a[64983] = 3;
	v->a[64984] = sym_string;
	v->a[64985] = sym_simple_expansion;
	v->a[64986] = sym_expansion;
	v->a[64987] = state(549);
	v->a[64988] = 8;
	v->a[64989] = sym__arithmetic_expression;
	v->a[64990] = sym_arithmetic_literal;
	v->a[64991] = sym_arithmetic_binary_expression;
	v->a[64992] = sym_arithmetic_ternary_expression;
	v->a[64993] = sym_arithmetic_unary_expression;
	v->a[64994] = sym_arithmetic_postfix_expression;
	v->a[64995] = sym_arithmetic_parenthesized_expression;
	v->a[64996] = sym_command_substitution;
	v->a[64997] = 15;
	v->a[64998] = actions(1094);
	v->a[64999] = 1;
	small_parse_table_3250(v);
}

/* EOF small_parse_table_649.c */
