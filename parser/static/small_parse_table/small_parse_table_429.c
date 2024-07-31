/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_429.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2145(t_small_parse_table_array *v)
{
	v->a[42900] = state(169);
	v->a[42901] = 7;
	v->a[42902] = sym__arithmetic_expression;
	v->a[42903] = sym_arithmetic_literal;
	v->a[42904] = sym_arithmetic_binary_expression;
	v->a[42905] = sym_arithmetic_ternary_expression;
	v->a[42906] = sym_arithmetic_unary_expression;
	v->a[42907] = sym_arithmetic_postfix_expression;
	v->a[42908] = sym_arithmetic_parenthesized_expression;
	v->a[42909] = 12;
	v->a[42910] = actions(407);
	v->a[42911] = 1;
	v->a[42912] = sym_comment;
	v->a[42913] = actions(1540);
	v->a[42914] = 1;
	v->a[42915] = anon_sym_LPAREN;
	v->a[42916] = actions(1542);
	v->a[42917] = 1;
	v->a[42918] = anon_sym_BANG;
	v->a[42919] = actions(1548);
	small_parse_table_2146(v);
}

void	small_parse_table_2146(t_small_parse_table_array *v)
{
	v->a[42920] = 1;
	v->a[42921] = anon_sym_DOLLAR;
	v->a[42922] = actions(1550);
	v->a[42923] = 1;
	v->a[42924] = anon_sym_DQUOTE;
	v->a[42925] = actions(1554);
	v->a[42926] = 1;
	v->a[42927] = anon_sym_DOLLAR_LBRACE;
	v->a[42928] = actions(1556);
	v->a[42929] = 1;
	v->a[42930] = sym_variable_name;
	v->a[42931] = actions(1544);
	v->a[42932] = 2;
	v->a[42933] = anon_sym_PLUS_PLUS;
	v->a[42934] = anon_sym_DASH_DASH;
	v->a[42935] = actions(1546);
	v->a[42936] = 2;
	v->a[42937] = anon_sym_DASH2;
	v->a[42938] = anon_sym_PLUS2;
	v->a[42939] = actions(1552);
	small_parse_table_2147(v);
}

void	small_parse_table_2147(t_small_parse_table_array *v)
{
	v->a[42940] = 2;
	v->a[42941] = sym_number;
	v->a[42942] = aux_sym__simple_variable_name_token1;
	v->a[42943] = state(157);
	v->a[42944] = 3;
	v->a[42945] = sym_string;
	v->a[42946] = sym_simple_expansion;
	v->a[42947] = sym_expansion;
	v->a[42948] = state(241);
	v->a[42949] = 7;
	v->a[42950] = sym__arithmetic_expression;
	v->a[42951] = sym_arithmetic_literal;
	v->a[42952] = sym_arithmetic_binary_expression;
	v->a[42953] = sym_arithmetic_ternary_expression;
	v->a[42954] = sym_arithmetic_unary_expression;
	v->a[42955] = sym_arithmetic_postfix_expression;
	v->a[42956] = sym_arithmetic_parenthesized_expression;
	v->a[42957] = 12;
	v->a[42958] = actions(407);
	v->a[42959] = 1;
	small_parse_table_2148(v);
}

void	small_parse_table_2148(t_small_parse_table_array *v)
{
	v->a[42960] = sym_comment;
	v->a[42961] = actions(1540);
	v->a[42962] = 1;
	v->a[42963] = anon_sym_LPAREN;
	v->a[42964] = actions(1542);
	v->a[42965] = 1;
	v->a[42966] = anon_sym_BANG;
	v->a[42967] = actions(1548);
	v->a[42968] = 1;
	v->a[42969] = anon_sym_DOLLAR;
	v->a[42970] = actions(1550);
	v->a[42971] = 1;
	v->a[42972] = anon_sym_DQUOTE;
	v->a[42973] = actions(1554);
	v->a[42974] = 1;
	v->a[42975] = anon_sym_DOLLAR_LBRACE;
	v->a[42976] = actions(1556);
	v->a[42977] = 1;
	v->a[42978] = sym_variable_name;
	v->a[42979] = actions(1544);
	small_parse_table_2149(v);
}

void	small_parse_table_2149(t_small_parse_table_array *v)
{
	v->a[42980] = 2;
	v->a[42981] = anon_sym_PLUS_PLUS;
	v->a[42982] = anon_sym_DASH_DASH;
	v->a[42983] = actions(1546);
	v->a[42984] = 2;
	v->a[42985] = anon_sym_DASH2;
	v->a[42986] = anon_sym_PLUS2;
	v->a[42987] = actions(1552);
	v->a[42988] = 2;
	v->a[42989] = sym_number;
	v->a[42990] = aux_sym__simple_variable_name_token1;
	v->a[42991] = state(157);
	v->a[42992] = 3;
	v->a[42993] = sym_string;
	v->a[42994] = sym_simple_expansion;
	v->a[42995] = sym_expansion;
	v->a[42996] = state(199);
	v->a[42997] = 7;
	v->a[42998] = sym__arithmetic_expression;
	v->a[42999] = sym_arithmetic_literal;
	small_parse_table_2150(v);
}

/* EOF small_parse_table_429.c */
