/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_499.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2495(t_small_parse_table_array *v)
{
	v->a[49900] = anon_sym_GT_GT;
	v->a[49901] = anon_sym_LT_AMP;
	v->a[49902] = anon_sym_GT_AMP;
	v->a[49903] = anon_sym_GT_PIPE;
	v->a[49904] = anon_sym_LT_GT;
	v->a[49905] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[49906] = anon_sym_DOLLAR;
	v->a[49907] = anon_sym_DQUOTE;
	v->a[49908] = sym_raw_string;
	v->a[49909] = sym_number;
	v->a[49910] = anon_sym_DOLLAR_LBRACE;
	v->a[49911] = anon_sym_DOLLAR_LPAREN;
	v->a[49912] = sym_word;
	v->a[49913] = 15;
	v->a[49914] = actions(680);
	v->a[49915] = 1;
	v->a[49916] = sym_comment;
	v->a[49917] = actions(1574);
	v->a[49918] = 1;
	v->a[49919] = anon_sym_LPAREN;
	small_parse_table_2496(v);
}

void	small_parse_table_2496(t_small_parse_table_array *v)
{
	v->a[49920] = actions(1576);
	v->a[49921] = 1;
	v->a[49922] = anon_sym_BANG;
	v->a[49923] = actions(1584);
	v->a[49924] = 1;
	v->a[49925] = anon_sym_TILDE;
	v->a[49926] = actions(1586);
	v->a[49927] = 1;
	v->a[49928] = anon_sym_DOLLAR;
	v->a[49929] = actions(1588);
	v->a[49930] = 1;
	v->a[49931] = anon_sym_DQUOTE;
	v->a[49932] = actions(1592);
	v->a[49933] = 1;
	v->a[49934] = anon_sym_DOLLAR_LBRACE;
	v->a[49935] = actions(1594);
	v->a[49936] = 1;
	v->a[49937] = anon_sym_DOLLAR_LPAREN;
	v->a[49938] = actions(1596);
	v->a[49939] = 1;
	small_parse_table_2497(v);
}

void	small_parse_table_2497(t_small_parse_table_array *v)
{
	v->a[49940] = anon_sym_BQUOTE;
	v->a[49941] = actions(1598);
	v->a[49942] = 1;
	v->a[49943] = sym_variable_name;
	v->a[49944] = actions(1580);
	v->a[49945] = 2;
	v->a[49946] = anon_sym_PLUS_PLUS;
	v->a[49947] = anon_sym_DASH_DASH;
	v->a[49948] = actions(1582);
	v->a[49949] = 2;
	v->a[49950] = anon_sym_DASH2;
	v->a[49951] = anon_sym_PLUS2;
	v->a[49952] = actions(1590);
	v->a[49953] = 2;
	v->a[49954] = sym_number;
	v->a[49955] = aux_sym__simple_variable_name_token1;
	v->a[49956] = state(238);
	v->a[49957] = 3;
	v->a[49958] = sym_string;
	v->a[49959] = sym_simple_expansion;
	small_parse_table_2498(v);
}

void	small_parse_table_2498(t_small_parse_table_array *v)
{
	v->a[49960] = sym_expansion;
	v->a[49961] = state(205);
	v->a[49962] = 8;
	v->a[49963] = sym__arithmetic_expression;
	v->a[49964] = sym_arithmetic_literal;
	v->a[49965] = sym_arithmetic_binary_expression;
	v->a[49966] = sym_arithmetic_ternary_expression;
	v->a[49967] = sym_arithmetic_unary_expression;
	v->a[49968] = sym_arithmetic_postfix_expression;
	v->a[49969] = sym_arithmetic_parenthesized_expression;
	v->a[49970] = sym_command_substitution;
	v->a[49971] = 15;
	v->a[49972] = actions(680);
	v->a[49973] = 1;
	v->a[49974] = sym_comment;
	v->a[49975] = actions(1574);
	v->a[49976] = 1;
	v->a[49977] = anon_sym_LPAREN;
	v->a[49978] = actions(1576);
	v->a[49979] = 1;
	small_parse_table_2499(v);
}

void	small_parse_table_2499(t_small_parse_table_array *v)
{
	v->a[49980] = anon_sym_BANG;
	v->a[49981] = actions(1584);
	v->a[49982] = 1;
	v->a[49983] = anon_sym_TILDE;
	v->a[49984] = actions(1586);
	v->a[49985] = 1;
	v->a[49986] = anon_sym_DOLLAR;
	v->a[49987] = actions(1588);
	v->a[49988] = 1;
	v->a[49989] = anon_sym_DQUOTE;
	v->a[49990] = actions(1592);
	v->a[49991] = 1;
	v->a[49992] = anon_sym_DOLLAR_LBRACE;
	v->a[49993] = actions(1594);
	v->a[49994] = 1;
	v->a[49995] = anon_sym_DOLLAR_LPAREN;
	v->a[49996] = actions(1596);
	v->a[49997] = 1;
	v->a[49998] = anon_sym_BQUOTE;
	v->a[49999] = actions(1598);
	small_parse_table_2500(v);
}

/* EOF small_parse_table_499.c */
