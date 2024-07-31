/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_419.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2095(t_small_parse_table_array *v)
{
	v->a[41900] = 1;
	v->a[41901] = anon_sym_LPAREN;
	v->a[41902] = actions(1542);
	v->a[41903] = 1;
	v->a[41904] = anon_sym_BANG;
	v->a[41905] = actions(1548);
	v->a[41906] = 1;
	v->a[41907] = anon_sym_DOLLAR;
	v->a[41908] = actions(1550);
	v->a[41909] = 1;
	v->a[41910] = anon_sym_DQUOTE;
	v->a[41911] = actions(1554);
	v->a[41912] = 1;
	v->a[41913] = anon_sym_DOLLAR_LBRACE;
	v->a[41914] = actions(1556);
	v->a[41915] = 1;
	v->a[41916] = sym_variable_name;
	v->a[41917] = actions(1544);
	v->a[41918] = 2;
	v->a[41919] = anon_sym_PLUS_PLUS;
	small_parse_table_2096(v);
}

void	small_parse_table_2096(t_small_parse_table_array *v)
{
	v->a[41920] = anon_sym_DASH_DASH;
	v->a[41921] = actions(1546);
	v->a[41922] = 2;
	v->a[41923] = anon_sym_DASH2;
	v->a[41924] = anon_sym_PLUS2;
	v->a[41925] = actions(1552);
	v->a[41926] = 2;
	v->a[41927] = sym_number;
	v->a[41928] = aux_sym__simple_variable_name_token1;
	v->a[41929] = state(157);
	v->a[41930] = 3;
	v->a[41931] = sym_string;
	v->a[41932] = sym_simple_expansion;
	v->a[41933] = sym_expansion;
	v->a[41934] = state(165);
	v->a[41935] = 7;
	v->a[41936] = sym__arithmetic_expression;
	v->a[41937] = sym_arithmetic_literal;
	v->a[41938] = sym_arithmetic_binary_expression;
	v->a[41939] = sym_arithmetic_ternary_expression;
	small_parse_table_2097(v);
}

void	small_parse_table_2097(t_small_parse_table_array *v)
{
	v->a[41940] = sym_arithmetic_unary_expression;
	v->a[41941] = sym_arithmetic_postfix_expression;
	v->a[41942] = sym_arithmetic_parenthesized_expression;
	v->a[41943] = 12;
	v->a[41944] = actions(407);
	v->a[41945] = 1;
	v->a[41946] = sym_comment;
	v->a[41947] = actions(1522);
	v->a[41948] = 1;
	v->a[41949] = anon_sym_LPAREN;
	v->a[41950] = actions(1524);
	v->a[41951] = 1;
	v->a[41952] = anon_sym_BANG;
	v->a[41953] = actions(1530);
	v->a[41954] = 1;
	v->a[41955] = anon_sym_DOLLAR;
	v->a[41956] = actions(1532);
	v->a[41957] = 1;
	v->a[41958] = anon_sym_DQUOTE;
	v->a[41959] = actions(1536);
	small_parse_table_2098(v);
}

void	small_parse_table_2098(t_small_parse_table_array *v)
{
	v->a[41960] = 1;
	v->a[41961] = anon_sym_DOLLAR_LBRACE;
	v->a[41962] = actions(1538);
	v->a[41963] = 1;
	v->a[41964] = sym_variable_name;
	v->a[41965] = actions(1526);
	v->a[41966] = 2;
	v->a[41967] = anon_sym_PLUS_PLUS;
	v->a[41968] = anon_sym_DASH_DASH;
	v->a[41969] = actions(1528);
	v->a[41970] = 2;
	v->a[41971] = anon_sym_DASH2;
	v->a[41972] = anon_sym_PLUS2;
	v->a[41973] = actions(1534);
	v->a[41974] = 2;
	v->a[41975] = sym_number;
	v->a[41976] = aux_sym__simple_variable_name_token1;
	v->a[41977] = state(206);
	v->a[41978] = 3;
	v->a[41979] = sym_string;
	small_parse_table_2099(v);
}

void	small_parse_table_2099(t_small_parse_table_array *v)
{
	v->a[41980] = sym_simple_expansion;
	v->a[41981] = sym_expansion;
	v->a[41982] = state(226);
	v->a[41983] = 7;
	v->a[41984] = sym__arithmetic_expression;
	v->a[41985] = sym_arithmetic_literal;
	v->a[41986] = sym_arithmetic_binary_expression;
	v->a[41987] = sym_arithmetic_ternary_expression;
	v->a[41988] = sym_arithmetic_unary_expression;
	v->a[41989] = sym_arithmetic_postfix_expression;
	v->a[41990] = sym_arithmetic_parenthesized_expression;
	v->a[41991] = 12;
	v->a[41992] = actions(407);
	v->a[41993] = 1;
	v->a[41994] = sym_comment;
	v->a[41995] = actions(1522);
	v->a[41996] = 1;
	v->a[41997] = anon_sym_LPAREN;
	v->a[41998] = actions(1524);
	v->a[41999] = 1;
	small_parse_table_2100(v);
}

/* EOF small_parse_table_419.c */
