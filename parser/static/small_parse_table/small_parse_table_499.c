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
	v->a[49900] = anon_sym_LT_LT;
	v->a[49901] = anon_sym_LT_LT_DASH;
	v->a[49902] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[49903] = anon_sym_DOLLAR;
	v->a[49904] = anon_sym_DQUOTE;
	v->a[49905] = sym_raw_string;
	v->a[49906] = sym_number;
	v->a[49907] = anon_sym_DOLLAR_LBRACE;
	v->a[49908] = anon_sym_DOLLAR_LPAREN;
	v->a[49909] = anon_sym_BQUOTE;
	v->a[49910] = sym_word;
	v->a[49911] = 15;
	v->a[49912] = actions(664);
	v->a[49913] = 1;
	v->a[49914] = sym_comment;
	v->a[49915] = actions(1740);
	v->a[49916] = 1;
	v->a[49917] = anon_sym_LPAREN;
	v->a[49918] = actions(1742);
	v->a[49919] = 1;
	small_parse_table_2496(v);
}

void	small_parse_table_2496(t_small_parse_table_array *v)
{
	v->a[49920] = anon_sym_BANG;
	v->a[49921] = actions(1748);
	v->a[49922] = 1;
	v->a[49923] = anon_sym_TILDE;
	v->a[49924] = actions(1750);
	v->a[49925] = 1;
	v->a[49926] = anon_sym_DOLLAR;
	v->a[49927] = actions(1752);
	v->a[49928] = 1;
	v->a[49929] = anon_sym_DQUOTE;
	v->a[49930] = actions(1756);
	v->a[49931] = 1;
	v->a[49932] = anon_sym_DOLLAR_LBRACE;
	v->a[49933] = actions(1758);
	v->a[49934] = 1;
	v->a[49935] = anon_sym_DOLLAR_LPAREN;
	v->a[49936] = actions(1760);
	v->a[49937] = 1;
	v->a[49938] = anon_sym_BQUOTE;
	v->a[49939] = actions(1762);
	small_parse_table_2497(v);
}

void	small_parse_table_2497(t_small_parse_table_array *v)
{
	v->a[49940] = 1;
	v->a[49941] = sym_variable_name;
	v->a[49942] = actions(1744);
	v->a[49943] = 2;
	v->a[49944] = anon_sym_PLUS_PLUS;
	v->a[49945] = anon_sym_DASH_DASH;
	v->a[49946] = actions(1746);
	v->a[49947] = 2;
	v->a[49948] = anon_sym_DASH2;
	v->a[49949] = anon_sym_PLUS2;
	v->a[49950] = actions(1754);
	v->a[49951] = 2;
	v->a[49952] = sym_number;
	v->a[49953] = aux_sym__simple_variable_name_token1;
	v->a[49954] = state(260);
	v->a[49955] = 3;
	v->a[49956] = sym_string;
	v->a[49957] = sym_simple_expansion;
	v->a[49958] = sym_expansion;
	v->a[49959] = state(305);
	small_parse_table_2498(v);
}

void	small_parse_table_2498(t_small_parse_table_array *v)
{
	v->a[49960] = 8;
	v->a[49961] = sym__arithmetic_expression;
	v->a[49962] = sym_arithmetic_literal;
	v->a[49963] = sym_arithmetic_binary_expression;
	v->a[49964] = sym_arithmetic_ternary_expression;
	v->a[49965] = sym_arithmetic_unary_expression;
	v->a[49966] = sym_arithmetic_postfix_expression;
	v->a[49967] = sym_arithmetic_parenthesized_expression;
	v->a[49968] = sym_command_substitution;
	v->a[49969] = 15;
	v->a[49970] = actions(664);
	v->a[49971] = 1;
	v->a[49972] = sym_comment;
	v->a[49973] = actions(1740);
	v->a[49974] = 1;
	v->a[49975] = anon_sym_LPAREN;
	v->a[49976] = actions(1742);
	v->a[49977] = 1;
	v->a[49978] = anon_sym_BANG;
	v->a[49979] = actions(1748);
	small_parse_table_2499(v);
}

void	small_parse_table_2499(t_small_parse_table_array *v)
{
	v->a[49980] = 1;
	v->a[49981] = anon_sym_TILDE;
	v->a[49982] = actions(1750);
	v->a[49983] = 1;
	v->a[49984] = anon_sym_DOLLAR;
	v->a[49985] = actions(1752);
	v->a[49986] = 1;
	v->a[49987] = anon_sym_DQUOTE;
	v->a[49988] = actions(1756);
	v->a[49989] = 1;
	v->a[49990] = anon_sym_DOLLAR_LBRACE;
	v->a[49991] = actions(1758);
	v->a[49992] = 1;
	v->a[49993] = anon_sym_DOLLAR_LPAREN;
	v->a[49994] = actions(1760);
	v->a[49995] = 1;
	v->a[49996] = anon_sym_BQUOTE;
	v->a[49997] = actions(1762);
	v->a[49998] = 1;
	v->a[49999] = sym_variable_name;
	small_parse_table_2500(v);
}

/* EOF small_parse_table_499.c */
