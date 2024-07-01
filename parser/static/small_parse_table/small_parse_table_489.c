/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_489.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2445(t_small_parse_table_array *v)
{
	v->a[48900] = actions(664);
	v->a[48901] = 1;
	v->a[48902] = sym_comment;
	v->a[48903] = actions(1560);
	v->a[48904] = 1;
	v->a[48905] = anon_sym_LPAREN;
	v->a[48906] = actions(1562);
	v->a[48907] = 1;
	v->a[48908] = anon_sym_BANG;
	v->a[48909] = actions(1570);
	v->a[48910] = 1;
	v->a[48911] = anon_sym_TILDE;
	v->a[48912] = actions(1572);
	v->a[48913] = 1;
	v->a[48914] = anon_sym_DOLLAR;
	v->a[48915] = actions(1574);
	v->a[48916] = 1;
	v->a[48917] = anon_sym_DQUOTE;
	v->a[48918] = actions(1578);
	v->a[48919] = 1;
	small_parse_table_2446(v);
}

void	small_parse_table_2446(t_small_parse_table_array *v)
{
	v->a[48920] = anon_sym_DOLLAR_LBRACE;
	v->a[48921] = actions(1580);
	v->a[48922] = 1;
	v->a[48923] = anon_sym_DOLLAR_LPAREN;
	v->a[48924] = actions(1582);
	v->a[48925] = 1;
	v->a[48926] = anon_sym_BQUOTE;
	v->a[48927] = actions(1584);
	v->a[48928] = 1;
	v->a[48929] = sym_variable_name;
	v->a[48930] = actions(1566);
	v->a[48931] = 2;
	v->a[48932] = anon_sym_PLUS_PLUS;
	v->a[48933] = anon_sym_DASH_DASH;
	v->a[48934] = actions(1568);
	v->a[48935] = 2;
	v->a[48936] = anon_sym_DASH2;
	v->a[48937] = anon_sym_PLUS2;
	v->a[48938] = actions(1576);
	v->a[48939] = 2;
	small_parse_table_2447(v);
}

void	small_parse_table_2447(t_small_parse_table_array *v)
{
	v->a[48940] = sym_number;
	v->a[48941] = aux_sym__simple_variable_name_token1;
	v->a[48942] = state(255);
	v->a[48943] = 3;
	v->a[48944] = sym_string;
	v->a[48945] = sym_simple_expansion;
	v->a[48946] = sym_expansion;
	v->a[48947] = state(213);
	v->a[48948] = 8;
	v->a[48949] = sym__arithmetic_expression;
	v->a[48950] = sym_arithmetic_literal;
	v->a[48951] = sym_arithmetic_binary_expression;
	v->a[48952] = sym_arithmetic_ternary_expression;
	v->a[48953] = sym_arithmetic_unary_expression;
	v->a[48954] = sym_arithmetic_postfix_expression;
	v->a[48955] = sym_arithmetic_parenthesized_expression;
	v->a[48956] = sym_command_substitution;
	v->a[48957] = 15;
	v->a[48958] = actions(664);
	v->a[48959] = 1;
	small_parse_table_2448(v);
}

void	small_parse_table_2448(t_small_parse_table_array *v)
{
	v->a[48960] = sym_comment;
	v->a[48961] = actions(1560);
	v->a[48962] = 1;
	v->a[48963] = anon_sym_LPAREN;
	v->a[48964] = actions(1562);
	v->a[48965] = 1;
	v->a[48966] = anon_sym_BANG;
	v->a[48967] = actions(1570);
	v->a[48968] = 1;
	v->a[48969] = anon_sym_TILDE;
	v->a[48970] = actions(1572);
	v->a[48971] = 1;
	v->a[48972] = anon_sym_DOLLAR;
	v->a[48973] = actions(1574);
	v->a[48974] = 1;
	v->a[48975] = anon_sym_DQUOTE;
	v->a[48976] = actions(1578);
	v->a[48977] = 1;
	v->a[48978] = anon_sym_DOLLAR_LBRACE;
	v->a[48979] = actions(1580);
	small_parse_table_2449(v);
}

void	small_parse_table_2449(t_small_parse_table_array *v)
{
	v->a[48980] = 1;
	v->a[48981] = anon_sym_DOLLAR_LPAREN;
	v->a[48982] = actions(1582);
	v->a[48983] = 1;
	v->a[48984] = anon_sym_BQUOTE;
	v->a[48985] = actions(1584);
	v->a[48986] = 1;
	v->a[48987] = sym_variable_name;
	v->a[48988] = actions(1566);
	v->a[48989] = 2;
	v->a[48990] = anon_sym_PLUS_PLUS;
	v->a[48991] = anon_sym_DASH_DASH;
	v->a[48992] = actions(1568);
	v->a[48993] = 2;
	v->a[48994] = anon_sym_DASH2;
	v->a[48995] = anon_sym_PLUS2;
	v->a[48996] = actions(1576);
	v->a[48997] = 2;
	v->a[48998] = sym_number;
	v->a[48999] = aux_sym__simple_variable_name_token1;
	small_parse_table_2450(v);
}

/* EOF small_parse_table_489.c */
