/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_459.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2295(t_small_parse_table_array *v)
{
	v->a[45900] = actions(1570);
	v->a[45901] = 1;
	v->a[45902] = anon_sym_TILDE;
	v->a[45903] = actions(1572);
	v->a[45904] = 1;
	v->a[45905] = anon_sym_DOLLAR;
	v->a[45906] = actions(1574);
	v->a[45907] = 1;
	v->a[45908] = anon_sym_DQUOTE;
	v->a[45909] = actions(1578);
	v->a[45910] = 1;
	v->a[45911] = anon_sym_DOLLAR_LBRACE;
	v->a[45912] = actions(1580);
	v->a[45913] = 1;
	v->a[45914] = anon_sym_DOLLAR_LPAREN;
	v->a[45915] = actions(1582);
	v->a[45916] = 1;
	v->a[45917] = anon_sym_BQUOTE;
	v->a[45918] = actions(1584);
	v->a[45919] = 1;
	small_parse_table_2296(v);
}

void	small_parse_table_2296(t_small_parse_table_array *v)
{
	v->a[45920] = sym_variable_name;
	v->a[45921] = actions(1695);
	v->a[45922] = 1;
	v->a[45923] = anon_sym_RPAREN_RPAREN;
	v->a[45924] = actions(1566);
	v->a[45925] = 2;
	v->a[45926] = anon_sym_PLUS_PLUS;
	v->a[45927] = anon_sym_DASH_DASH;
	v->a[45928] = actions(1568);
	v->a[45929] = 2;
	v->a[45930] = anon_sym_DASH2;
	v->a[45931] = anon_sym_PLUS2;
	v->a[45932] = actions(1576);
	v->a[45933] = 2;
	v->a[45934] = sym_number;
	v->a[45935] = aux_sym__simple_variable_name_token1;
	v->a[45936] = state(255);
	v->a[45937] = 3;
	v->a[45938] = sym_string;
	v->a[45939] = sym_simple_expansion;
	small_parse_table_2297(v);
}

void	small_parse_table_2297(t_small_parse_table_array *v)
{
	v->a[45940] = sym_expansion;
	v->a[45941] = state(306);
	v->a[45942] = 8;
	v->a[45943] = sym__arithmetic_expression;
	v->a[45944] = sym_arithmetic_literal;
	v->a[45945] = sym_arithmetic_binary_expression;
	v->a[45946] = sym_arithmetic_ternary_expression;
	v->a[45947] = sym_arithmetic_unary_expression;
	v->a[45948] = sym_arithmetic_postfix_expression;
	v->a[45949] = sym_arithmetic_parenthesized_expression;
	v->a[45950] = sym_command_substitution;
	v->a[45951] = 16;
	v->a[45952] = actions(664);
	v->a[45953] = 1;
	v->a[45954] = sym_comment;
	v->a[45955] = actions(1560);
	v->a[45956] = 1;
	v->a[45957] = anon_sym_LPAREN;
	v->a[45958] = actions(1562);
	v->a[45959] = 1;
	small_parse_table_2298(v);
}

void	small_parse_table_2298(t_small_parse_table_array *v)
{
	v->a[45960] = anon_sym_BANG;
	v->a[45961] = actions(1570);
	v->a[45962] = 1;
	v->a[45963] = anon_sym_TILDE;
	v->a[45964] = actions(1572);
	v->a[45965] = 1;
	v->a[45966] = anon_sym_DOLLAR;
	v->a[45967] = actions(1574);
	v->a[45968] = 1;
	v->a[45969] = anon_sym_DQUOTE;
	v->a[45970] = actions(1578);
	v->a[45971] = 1;
	v->a[45972] = anon_sym_DOLLAR_LBRACE;
	v->a[45973] = actions(1580);
	v->a[45974] = 1;
	v->a[45975] = anon_sym_DOLLAR_LPAREN;
	v->a[45976] = actions(1582);
	v->a[45977] = 1;
	v->a[45978] = anon_sym_BQUOTE;
	v->a[45979] = actions(1584);
	small_parse_table_2299(v);
}

void	small_parse_table_2299(t_small_parse_table_array *v)
{
	v->a[45980] = 1;
	v->a[45981] = sym_variable_name;
	v->a[45982] = actions(1697);
	v->a[45983] = 1;
	v->a[45984] = anon_sym_RPAREN_RPAREN;
	v->a[45985] = actions(1566);
	v->a[45986] = 2;
	v->a[45987] = anon_sym_PLUS_PLUS;
	v->a[45988] = anon_sym_DASH_DASH;
	v->a[45989] = actions(1568);
	v->a[45990] = 2;
	v->a[45991] = anon_sym_DASH2;
	v->a[45992] = anon_sym_PLUS2;
	v->a[45993] = actions(1576);
	v->a[45994] = 2;
	v->a[45995] = sym_number;
	v->a[45996] = aux_sym__simple_variable_name_token1;
	v->a[45997] = state(255);
	v->a[45998] = 3;
	v->a[45999] = sym_string;
	small_parse_table_2300(v);
}

/* EOF small_parse_table_459.c */
