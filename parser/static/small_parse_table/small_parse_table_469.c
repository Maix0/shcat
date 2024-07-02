/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_469.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2345(t_small_parse_table_array *v)
{
	v->a[46900] = anon_sym_DOLLAR;
	v->a[46901] = actions(1588);
	v->a[46902] = 1;
	v->a[46903] = anon_sym_DQUOTE;
	v->a[46904] = actions(1592);
	v->a[46905] = 1;
	v->a[46906] = anon_sym_DOLLAR_LBRACE;
	v->a[46907] = actions(1594);
	v->a[46908] = 1;
	v->a[46909] = anon_sym_DOLLAR_LPAREN;
	v->a[46910] = actions(1596);
	v->a[46911] = 1;
	v->a[46912] = anon_sym_BQUOTE;
	v->a[46913] = actions(1598);
	v->a[46914] = 1;
	v->a[46915] = sym_variable_name;
	v->a[46916] = actions(1693);
	v->a[46917] = 1;
	v->a[46918] = anon_sym_RPAREN_RPAREN;
	v->a[46919] = actions(1580);
	small_parse_table_2346(v);
}

void	small_parse_table_2346(t_small_parse_table_array *v)
{
	v->a[46920] = 2;
	v->a[46921] = anon_sym_PLUS_PLUS;
	v->a[46922] = anon_sym_DASH_DASH;
	v->a[46923] = actions(1582);
	v->a[46924] = 2;
	v->a[46925] = anon_sym_DASH2;
	v->a[46926] = anon_sym_PLUS2;
	v->a[46927] = actions(1590);
	v->a[46928] = 2;
	v->a[46929] = sym_number;
	v->a[46930] = aux_sym__simple_variable_name_token1;
	v->a[46931] = state(238);
	v->a[46932] = 3;
	v->a[46933] = sym_string;
	v->a[46934] = sym_simple_expansion;
	v->a[46935] = sym_expansion;
	v->a[46936] = state(304);
	v->a[46937] = 8;
	v->a[46938] = sym__arithmetic_expression;
	v->a[46939] = sym_arithmetic_literal;
	small_parse_table_2347(v);
}

void	small_parse_table_2347(t_small_parse_table_array *v)
{
	v->a[46940] = sym_arithmetic_binary_expression;
	v->a[46941] = sym_arithmetic_ternary_expression;
	v->a[46942] = sym_arithmetic_unary_expression;
	v->a[46943] = sym_arithmetic_postfix_expression;
	v->a[46944] = sym_arithmetic_parenthesized_expression;
	v->a[46945] = sym_command_substitution;
	v->a[46946] = 4;
	v->a[46947] = actions(3);
	v->a[46948] = 1;
	v->a[46949] = sym_comment;
	v->a[46950] = actions(1661);
	v->a[46951] = 1;
	v->a[46952] = ts_builtin_sym_end;
	v->a[46953] = actions(1426);
	v->a[46954] = 2;
	v->a[46955] = sym_file_descriptor;
	v->a[46956] = sym_variable_name;
	v->a[46957] = actions(1422);
	v->a[46958] = 24;
	v->a[46959] = anon_sym_for;
	small_parse_table_2348(v);
}

void	small_parse_table_2348(t_small_parse_table_array *v)
{
	v->a[46960] = anon_sym_while;
	v->a[46961] = anon_sym_until;
	v->a[46962] = anon_sym_if;
	v->a[46963] = anon_sym_case;
	v->a[46964] = anon_sym_LPAREN;
	v->a[46965] = anon_sym_LBRACE;
	v->a[46966] = anon_sym_BANG;
	v->a[46967] = anon_sym_LT;
	v->a[46968] = anon_sym_GT;
	v->a[46969] = anon_sym_GT_GT;
	v->a[46970] = anon_sym_LT_AMP;
	v->a[46971] = anon_sym_GT_AMP;
	v->a[46972] = anon_sym_GT_PIPE;
	v->a[46973] = anon_sym_LT_GT;
	v->a[46974] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[46975] = anon_sym_DOLLAR;
	v->a[46976] = anon_sym_DQUOTE;
	v->a[46977] = sym_raw_string;
	v->a[46978] = sym_number;
	v->a[46979] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_2349(v);
}

void	small_parse_table_2349(t_small_parse_table_array *v)
{
	v->a[46980] = anon_sym_DOLLAR_LPAREN;
	v->a[46981] = anon_sym_BQUOTE;
	v->a[46982] = sym_word;
	v->a[46983] = 4;
	v->a[46984] = actions(3);
	v->a[46985] = 1;
	v->a[46986] = sym_comment;
	v->a[46987] = actions(1661);
	v->a[46988] = 1;
	v->a[46989] = ts_builtin_sym_end;
	v->a[46990] = actions(1426);
	v->a[46991] = 2;
	v->a[46992] = sym_file_descriptor;
	v->a[46993] = sym_variable_name;
	v->a[46994] = actions(1422);
	v->a[46995] = 24;
	v->a[46996] = anon_sym_for;
	v->a[46997] = anon_sym_while;
	v->a[46998] = anon_sym_until;
	v->a[46999] = anon_sym_if;
	small_parse_table_2350(v);
}

/* EOF small_parse_table_469.c */
