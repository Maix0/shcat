/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_569.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2845(t_small_parse_table_array *v)
{
	v->a[56900] = actions(1935);
	v->a[56901] = 2;
	v->a[56902] = sym_number;
	v->a[56903] = aux_sym__simple_variable_name_token1;
	v->a[56904] = state(334);
	v->a[56905] = 3;
	v->a[56906] = sym_string;
	v->a[56907] = sym_simple_expansion;
	v->a[56908] = sym_expansion;
	v->a[56909] = state(352);
	v->a[56910] = 8;
	v->a[56911] = sym__arithmetic_expression;
	v->a[56912] = sym_arithmetic_literal;
	v->a[56913] = sym_arithmetic_binary_expression;
	v->a[56914] = sym_arithmetic_ternary_expression;
	v->a[56915] = sym_arithmetic_unary_expression;
	v->a[56916] = sym_arithmetic_postfix_expression;
	v->a[56917] = sym_arithmetic_parenthesized_expression;
	v->a[56918] = sym_command_substitution;
	v->a[56919] = 15;
	small_parse_table_2846(v);
}

void	small_parse_table_2846(t_small_parse_table_array *v)
{
	v->a[56920] = actions(870);
	v->a[56921] = 1;
	v->a[56922] = sym_comment;
	v->a[56923] = actions(1744);
	v->a[56924] = 1;
	v->a[56925] = anon_sym_LPAREN;
	v->a[56926] = actions(1746);
	v->a[56927] = 1;
	v->a[56928] = anon_sym_BANG;
	v->a[56929] = actions(1754);
	v->a[56930] = 1;
	v->a[56931] = anon_sym_TILDE;
	v->a[56932] = actions(1756);
	v->a[56933] = 1;
	v->a[56934] = anon_sym_DOLLAR;
	v->a[56935] = actions(1758);
	v->a[56936] = 1;
	v->a[56937] = anon_sym_DQUOTE;
	v->a[56938] = actions(1762);
	v->a[56939] = 1;
	small_parse_table_2847(v);
}

void	small_parse_table_2847(t_small_parse_table_array *v)
{
	v->a[56940] = anon_sym_DOLLAR_LBRACE;
	v->a[56941] = actions(1764);
	v->a[56942] = 1;
	v->a[56943] = anon_sym_DOLLAR_LPAREN;
	v->a[56944] = actions(1766);
	v->a[56945] = 1;
	v->a[56946] = anon_sym_BQUOTE;
	v->a[56947] = actions(1768);
	v->a[56948] = 1;
	v->a[56949] = sym_variable_name;
	v->a[56950] = actions(1750);
	v->a[56951] = 2;
	v->a[56952] = anon_sym_PLUS_PLUS;
	v->a[56953] = anon_sym_DASH_DASH;
	v->a[56954] = actions(1752);
	v->a[56955] = 2;
	v->a[56956] = anon_sym_DASH2;
	v->a[56957] = anon_sym_PLUS2;
	v->a[56958] = actions(1760);
	v->a[56959] = 2;
	small_parse_table_2848(v);
}

void	small_parse_table_2848(t_small_parse_table_array *v)
{
	v->a[56960] = sym_number;
	v->a[56961] = aux_sym__simple_variable_name_token1;
	v->a[56962] = state(271);
	v->a[56963] = 3;
	v->a[56964] = sym_string;
	v->a[56965] = sym_simple_expansion;
	v->a[56966] = sym_expansion;
	v->a[56967] = state(298);
	v->a[56968] = 8;
	v->a[56969] = sym__arithmetic_expression;
	v->a[56970] = sym_arithmetic_literal;
	v->a[56971] = sym_arithmetic_binary_expression;
	v->a[56972] = sym_arithmetic_ternary_expression;
	v->a[56973] = sym_arithmetic_unary_expression;
	v->a[56974] = sym_arithmetic_postfix_expression;
	v->a[56975] = sym_arithmetic_parenthesized_expression;
	v->a[56976] = sym_command_substitution;
	v->a[56977] = 15;
	v->a[56978] = actions(870);
	v->a[56979] = 1;
	small_parse_table_2849(v);
}

void	small_parse_table_2849(t_small_parse_table_array *v)
{
	v->a[56980] = sym_comment;
	v->a[56981] = actions(1921);
	v->a[56982] = 1;
	v->a[56983] = anon_sym_LPAREN;
	v->a[56984] = actions(1923);
	v->a[56985] = 1;
	v->a[56986] = anon_sym_BANG;
	v->a[56987] = actions(1929);
	v->a[56988] = 1;
	v->a[56989] = anon_sym_TILDE;
	v->a[56990] = actions(1931);
	v->a[56991] = 1;
	v->a[56992] = anon_sym_DOLLAR;
	v->a[56993] = actions(1933);
	v->a[56994] = 1;
	v->a[56995] = anon_sym_DQUOTE;
	v->a[56996] = actions(1937);
	v->a[56997] = 1;
	v->a[56998] = anon_sym_DOLLAR_LBRACE;
	v->a[56999] = actions(1939);
	small_parse_table_2850(v);
}

/* EOF small_parse_table_569.c */
