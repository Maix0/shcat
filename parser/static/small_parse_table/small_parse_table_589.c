/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_589.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2945(t_small_parse_table_array *v)
{
	v->a[58900] = actions(2101);
	v->a[58901] = 1;
	v->a[58902] = aux_sym__simple_variable_name_token1;
	v->a[58903] = actions(2103);
	v->a[58904] = 1;
	v->a[58905] = sym_variable_name;
	v->a[58906] = actions(2081);
	v->a[58907] = 2;
	v->a[58908] = anon_sym_PLUS_PLUS;
	v->a[58909] = anon_sym_DASH_DASH;
	v->a[58910] = actions(2083);
	v->a[58911] = 2;
	v->a[58912] = anon_sym_DASH2;
	v->a[58913] = anon_sym_PLUS2;
	v->a[58914] = state(588);
	v->a[58915] = 4;
	v->a[58916] = sym_string;
	v->a[58917] = sym_number;
	v->a[58918] = sym_simple_expansion;
	v->a[58919] = sym_expansion;
	small_parse_table_2946(v);
}

void	small_parse_table_2946(t_small_parse_table_array *v)
{
	v->a[58920] = state(556);
	v->a[58921] = 8;
	v->a[58922] = sym__arithmetic_expression;
	v->a[58923] = sym_arithmetic_literal;
	v->a[58924] = sym_arithmetic_binary_expression;
	v->a[58925] = sym_arithmetic_ternary_expression;
	v->a[58926] = sym_arithmetic_unary_expression;
	v->a[58927] = sym_arithmetic_postfix_expression;
	v->a[58928] = sym_arithmetic_parenthesized_expression;
	v->a[58929] = sym_command_substitution;
	v->a[58930] = 17;
	v->a[58931] = actions(1404);
	v->a[58932] = 1;
	v->a[58933] = sym_comment;
	v->a[58934] = actions(1979);
	v->a[58935] = 1;
	v->a[58936] = anon_sym_LPAREN;
	v->a[58937] = actions(1981);
	v->a[58938] = 1;
	v->a[58939] = anon_sym_BANG;
	small_parse_table_2947(v);
}

void	small_parse_table_2947(t_small_parse_table_array *v)
{
	v->a[58940] = actions(1989);
	v->a[58941] = 1;
	v->a[58942] = anon_sym_TILDE;
	v->a[58943] = actions(1991);
	v->a[58944] = 1;
	v->a[58945] = anon_sym_DOLLAR;
	v->a[58946] = actions(1993);
	v->a[58947] = 1;
	v->a[58948] = anon_sym_DQUOTE;
	v->a[58949] = actions(1995);
	v->a[58950] = 1;
	v->a[58951] = aux_sym_number_token1;
	v->a[58952] = actions(1997);
	v->a[58953] = 1;
	v->a[58954] = aux_sym_number_token2;
	v->a[58955] = actions(1999);
	v->a[58956] = 1;
	v->a[58957] = anon_sym_DOLLAR_LBRACE;
	v->a[58958] = actions(2001);
	v->a[58959] = 1;
	small_parse_table_2948(v);
}

void	small_parse_table_2948(t_small_parse_table_array *v)
{
	v->a[58960] = anon_sym_DOLLAR_LPAREN;
	v->a[58961] = actions(2003);
	v->a[58962] = 1;
	v->a[58963] = anon_sym_BQUOTE;
	v->a[58964] = actions(2005);
	v->a[58965] = 1;
	v->a[58966] = aux_sym__simple_variable_name_token1;
	v->a[58967] = actions(2007);
	v->a[58968] = 1;
	v->a[58969] = sym_variable_name;
	v->a[58970] = actions(1985);
	v->a[58971] = 2;
	v->a[58972] = anon_sym_PLUS_PLUS;
	v->a[58973] = anon_sym_DASH_DASH;
	v->a[58974] = actions(1987);
	v->a[58975] = 2;
	v->a[58976] = anon_sym_DASH2;
	v->a[58977] = anon_sym_PLUS2;
	v->a[58978] = state(530);
	v->a[58979] = 4;
	small_parse_table_2949(v);
}

void	small_parse_table_2949(t_small_parse_table_array *v)
{
	v->a[58980] = sym_string;
	v->a[58981] = sym_number;
	v->a[58982] = sym_simple_expansion;
	v->a[58983] = sym_expansion;
	v->a[58984] = state(408);
	v->a[58985] = 8;
	v->a[58986] = sym__arithmetic_expression;
	v->a[58987] = sym_arithmetic_literal;
	v->a[58988] = sym_arithmetic_binary_expression;
	v->a[58989] = sym_arithmetic_ternary_expression;
	v->a[58990] = sym_arithmetic_unary_expression;
	v->a[58991] = sym_arithmetic_postfix_expression;
	v->a[58992] = sym_arithmetic_parenthesized_expression;
	v->a[58993] = sym_command_substitution;
	v->a[58994] = 17;
	v->a[58995] = actions(1404);
	v->a[58996] = 1;
	v->a[58997] = sym_comment;
	v->a[58998] = actions(1979);
	v->a[58999] = 1;
	small_parse_table_2950(v);
}

/* EOF small_parse_table_589.c */
