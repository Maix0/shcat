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
	v->a[56900] = 1;
	v->a[56901] = sym_comment;
	v->a[56902] = actions(1831);
	v->a[56903] = 1;
	v->a[56904] = anon_sym_LPAREN;
	v->a[56905] = actions(1833);
	v->a[56906] = 1;
	v->a[56907] = anon_sym_BANG;
	v->a[56908] = actions(1841);
	v->a[56909] = 1;
	v->a[56910] = anon_sym_TILDE;
	v->a[56911] = actions(1843);
	v->a[56912] = 1;
	v->a[56913] = anon_sym_DOLLAR;
	v->a[56914] = actions(1845);
	v->a[56915] = 1;
	v->a[56916] = anon_sym_DQUOTE;
	v->a[56917] = actions(1849);
	v->a[56918] = 1;
	v->a[56919] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_2846(v);
}

void	small_parse_table_2846(t_small_parse_table_array *v)
{
	v->a[56920] = actions(1851);
	v->a[56921] = 1;
	v->a[56922] = anon_sym_DOLLAR_LPAREN;
	v->a[56923] = actions(1853);
	v->a[56924] = 1;
	v->a[56925] = anon_sym_BQUOTE;
	v->a[56926] = actions(1855);
	v->a[56927] = 1;
	v->a[56928] = sym_variable_name;
	v->a[56929] = actions(1931);
	v->a[56930] = 1;
	v->a[56931] = anon_sym_RPAREN_RPAREN;
	v->a[56932] = actions(1837);
	v->a[56933] = 2;
	v->a[56934] = anon_sym_PLUS_PLUS;
	v->a[56935] = anon_sym_DASH_DASH;
	v->a[56936] = actions(1839);
	v->a[56937] = 2;
	v->a[56938] = anon_sym_DASH2;
	v->a[56939] = anon_sym_PLUS2;
	small_parse_table_2847(v);
}

void	small_parse_table_2847(t_small_parse_table_array *v)
{
	v->a[56940] = actions(1847);
	v->a[56941] = 2;
	v->a[56942] = sym_number;
	v->a[56943] = aux_sym__simple_variable_name_token1;
	v->a[56944] = state(370);
	v->a[56945] = 3;
	v->a[56946] = sym_string;
	v->a[56947] = sym_simple_expansion;
	v->a[56948] = sym_expansion;
	v->a[56949] = state(473);
	v->a[56950] = 8;
	v->a[56951] = sym__arithmetic_expression;
	v->a[56952] = sym_arithmetic_literal;
	v->a[56953] = sym_arithmetic_binary_expression;
	v->a[56954] = sym_arithmetic_ternary_expression;
	v->a[56955] = sym_arithmetic_unary_expression;
	v->a[56956] = sym_arithmetic_postfix_expression;
	v->a[56957] = sym_arithmetic_parenthesized_expression;
	v->a[56958] = sym_command_substitution;
	v->a[56959] = 5;
	small_parse_table_2848(v);
}

void	small_parse_table_2848(t_small_parse_table_array *v)
{
	v->a[56960] = actions(3);
	v->a[56961] = 1;
	v->a[56962] = sym_comment;
	v->a[56963] = state(1336);
	v->a[56964] = 1;
	v->a[56965] = sym_concatenation;
	v->a[56966] = actions(754);
	v->a[56967] = 2;
	v->a[56968] = sym_file_descriptor;
	v->a[56969] = sym_variable_name;
	v->a[56970] = state(1128);
	v->a[56971] = 5;
	v->a[56972] = sym_arithmetic_expansion;
	v->a[56973] = sym_string;
	v->a[56974] = sym_simple_expansion;
	v->a[56975] = sym_expansion;
	v->a[56976] = sym_command_substitution;
	v->a[56977] = actions(756);
	v->a[56978] = 19;
	v->a[56979] = anon_sym_LT;
	small_parse_table_2849(v);
}

void	small_parse_table_2849(t_small_parse_table_array *v)
{
	v->a[56980] = anon_sym_GT;
	v->a[56981] = anon_sym_GT_GT;
	v->a[56982] = anon_sym_AMP_GT;
	v->a[56983] = anon_sym_AMP_GT_GT;
	v->a[56984] = anon_sym_LT_AMP;
	v->a[56985] = anon_sym_GT_AMP;
	v->a[56986] = anon_sym_GT_PIPE;
	v->a[56987] = anon_sym_LT_AMP_DASH;
	v->a[56988] = anon_sym_GT_AMP_DASH;
	v->a[56989] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[56990] = anon_sym_DOLLAR;
	v->a[56991] = anon_sym_DQUOTE;
	v->a[56992] = sym_raw_string;
	v->a[56993] = sym_number;
	v->a[56994] = anon_sym_DOLLAR_LBRACE;
	v->a[56995] = anon_sym_DOLLAR_LPAREN;
	v->a[56996] = anon_sym_BQUOTE;
	v->a[56997] = sym_word;
	v->a[56998] = 3;
	v->a[56999] = actions(3);
	small_parse_table_2850(v);
}

/* EOF small_parse_table_569.c */
