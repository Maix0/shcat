/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_479.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2395(t_small_parse_table_array *v)
{
	v->a[47900] = sym_arithmetic_ternary_expression;
	v->a[47901] = sym_arithmetic_unary_expression;
	v->a[47902] = sym_arithmetic_postfix_expression;
	v->a[47903] = sym_arithmetic_parenthesized_expression;
	v->a[47904] = sym_command_substitution;
	v->a[47905] = 15;
	v->a[47906] = actions(680);
	v->a[47907] = 1;
	v->a[47908] = sym_comment;
	v->a[47909] = actions(1730);
	v->a[47910] = 1;
	v->a[47911] = anon_sym_LPAREN;
	v->a[47912] = actions(1732);
	v->a[47913] = 1;
	v->a[47914] = anon_sym_BANG;
	v->a[47915] = actions(1738);
	v->a[47916] = 1;
	v->a[47917] = anon_sym_TILDE;
	v->a[47918] = actions(1740);
	v->a[47919] = 1;
	small_parse_table_2396(v);
}

void	small_parse_table_2396(t_small_parse_table_array *v)
{
	v->a[47920] = anon_sym_DOLLAR;
	v->a[47921] = actions(1742);
	v->a[47922] = 1;
	v->a[47923] = anon_sym_DQUOTE;
	v->a[47924] = actions(1746);
	v->a[47925] = 1;
	v->a[47926] = anon_sym_DOLLAR_LBRACE;
	v->a[47927] = actions(1748);
	v->a[47928] = 1;
	v->a[47929] = anon_sym_DOLLAR_LPAREN;
	v->a[47930] = actions(1750);
	v->a[47931] = 1;
	v->a[47932] = anon_sym_BQUOTE;
	v->a[47933] = actions(1752);
	v->a[47934] = 1;
	v->a[47935] = sym_variable_name;
	v->a[47936] = actions(1734);
	v->a[47937] = 2;
	v->a[47938] = anon_sym_PLUS_PLUS;
	v->a[47939] = anon_sym_DASH_DASH;
	small_parse_table_2397(v);
}

void	small_parse_table_2397(t_small_parse_table_array *v)
{
	v->a[47940] = actions(1736);
	v->a[47941] = 2;
	v->a[47942] = anon_sym_DASH2;
	v->a[47943] = anon_sym_PLUS2;
	v->a[47944] = actions(1744);
	v->a[47945] = 2;
	v->a[47946] = sym_number;
	v->a[47947] = aux_sym__simple_variable_name_token1;
	v->a[47948] = state(264);
	v->a[47949] = 3;
	v->a[47950] = sym_string;
	v->a[47951] = sym_simple_expansion;
	v->a[47952] = sym_expansion;
	v->a[47953] = state(312);
	v->a[47954] = 8;
	v->a[47955] = sym__arithmetic_expression;
	v->a[47956] = sym_arithmetic_literal;
	v->a[47957] = sym_arithmetic_binary_expression;
	v->a[47958] = sym_arithmetic_ternary_expression;
	v->a[47959] = sym_arithmetic_unary_expression;
	small_parse_table_2398(v);
}

void	small_parse_table_2398(t_small_parse_table_array *v)
{
	v->a[47960] = sym_arithmetic_postfix_expression;
	v->a[47961] = sym_arithmetic_parenthesized_expression;
	v->a[47962] = sym_command_substitution;
	v->a[47963] = 15;
	v->a[47964] = actions(680);
	v->a[47965] = 1;
	v->a[47966] = sym_comment;
	v->a[47967] = actions(1730);
	v->a[47968] = 1;
	v->a[47969] = anon_sym_LPAREN;
	v->a[47970] = actions(1732);
	v->a[47971] = 1;
	v->a[47972] = anon_sym_BANG;
	v->a[47973] = actions(1738);
	v->a[47974] = 1;
	v->a[47975] = anon_sym_TILDE;
	v->a[47976] = actions(1740);
	v->a[47977] = 1;
	v->a[47978] = anon_sym_DOLLAR;
	v->a[47979] = actions(1742);
	small_parse_table_2399(v);
}

void	small_parse_table_2399(t_small_parse_table_array *v)
{
	v->a[47980] = 1;
	v->a[47981] = anon_sym_DQUOTE;
	v->a[47982] = actions(1746);
	v->a[47983] = 1;
	v->a[47984] = anon_sym_DOLLAR_LBRACE;
	v->a[47985] = actions(1748);
	v->a[47986] = 1;
	v->a[47987] = anon_sym_DOLLAR_LPAREN;
	v->a[47988] = actions(1750);
	v->a[47989] = 1;
	v->a[47990] = anon_sym_BQUOTE;
	v->a[47991] = actions(1752);
	v->a[47992] = 1;
	v->a[47993] = sym_variable_name;
	v->a[47994] = actions(1734);
	v->a[47995] = 2;
	v->a[47996] = anon_sym_PLUS_PLUS;
	v->a[47997] = anon_sym_DASH_DASH;
	v->a[47998] = actions(1736);
	v->a[47999] = 2;
	small_parse_table_2400(v);
}

/* EOF small_parse_table_479.c */
