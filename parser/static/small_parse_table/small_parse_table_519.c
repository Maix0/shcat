/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_519.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2595(t_small_parse_table_array *v)
{
	v->a[51900] = 1;
	v->a[51901] = sym_variable_name;
	v->a[51902] = actions(1830);
	v->a[51903] = 1;
	v->a[51904] = anon_sym_RPAREN_RPAREN;
	v->a[51905] = actions(1750);
	v->a[51906] = 2;
	v->a[51907] = anon_sym_PLUS_PLUS;
	v->a[51908] = anon_sym_DASH_DASH;
	v->a[51909] = actions(1752);
	v->a[51910] = 2;
	v->a[51911] = anon_sym_DASH2;
	v->a[51912] = anon_sym_PLUS2;
	v->a[51913] = actions(1760);
	v->a[51914] = 2;
	v->a[51915] = sym_number;
	v->a[51916] = aux_sym__simple_variable_name_token1;
	v->a[51917] = state(271);
	v->a[51918] = 3;
	v->a[51919] = sym_string;
	small_parse_table_2596(v);
}

void	small_parse_table_2596(t_small_parse_table_array *v)
{
	v->a[51920] = sym_simple_expansion;
	v->a[51921] = sym_expansion;
	v->a[51922] = state(329);
	v->a[51923] = 8;
	v->a[51924] = sym__arithmetic_expression;
	v->a[51925] = sym_arithmetic_literal;
	v->a[51926] = sym_arithmetic_binary_expression;
	v->a[51927] = sym_arithmetic_ternary_expression;
	v->a[51928] = sym_arithmetic_unary_expression;
	v->a[51929] = sym_arithmetic_postfix_expression;
	v->a[51930] = sym_arithmetic_parenthesized_expression;
	v->a[51931] = sym_command_substitution;
	v->a[51932] = 6;
	v->a[51933] = actions(3);
	v->a[51934] = 1;
	v->a[51935] = sym_comment;
	v->a[51936] = actions(1814);
	v->a[51937] = 1;
	v->a[51938] = aux_sym_concatenation_token1;
	v->a[51939] = actions(1816);
	small_parse_table_2597(v);
}

void	small_parse_table_2597(t_small_parse_table_array *v)
{
	v->a[51940] = 1;
	v->a[51941] = sym__concat;
	v->a[51942] = state(852);
	v->a[51943] = 1;
	v->a[51944] = aux_sym_concatenation_repeat1;
	v->a[51945] = actions(602);
	v->a[51946] = 2;
	v->a[51947] = sym_file_descriptor;
	v->a[51948] = sym_variable_name;
	v->a[51949] = actions(604);
	v->a[51950] = 22;
	v->a[51951] = anon_sym_PIPE;
	v->a[51952] = anon_sym_AMP_AMP;
	v->a[51953] = anon_sym_PIPE_PIPE;
	v->a[51954] = anon_sym_LT;
	v->a[51955] = anon_sym_GT;
	v->a[51956] = anon_sym_GT_GT;
	v->a[51957] = anon_sym_LT_AMP;
	v->a[51958] = anon_sym_GT_AMP;
	v->a[51959] = anon_sym_GT_PIPE;
	small_parse_table_2598(v);
}

void	small_parse_table_2598(t_small_parse_table_array *v)
{
	v->a[51960] = anon_sym_LT_AMP_DASH;
	v->a[51961] = anon_sym_GT_AMP_DASH;
	v->a[51962] = anon_sym_LT_LT;
	v->a[51963] = anon_sym_LT_LT_DASH;
	v->a[51964] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[51965] = anon_sym_DOLLAR;
	v->a[51966] = anon_sym_DQUOTE;
	v->a[51967] = sym_raw_string;
	v->a[51968] = sym_number;
	v->a[51969] = anon_sym_DOLLAR_LBRACE;
	v->a[51970] = anon_sym_DOLLAR_LPAREN;
	v->a[51971] = anon_sym_BQUOTE;
	v->a[51972] = sym_word;
	v->a[51973] = 16;
	v->a[51974] = actions(870);
	v->a[51975] = 1;
	v->a[51976] = sym_comment;
	v->a[51977] = actions(1744);
	v->a[51978] = 1;
	v->a[51979] = anon_sym_LPAREN;
	small_parse_table_2599(v);
}

void	small_parse_table_2599(t_small_parse_table_array *v)
{
	v->a[51980] = actions(1746);
	v->a[51981] = 1;
	v->a[51982] = anon_sym_BANG;
	v->a[51983] = actions(1754);
	v->a[51984] = 1;
	v->a[51985] = anon_sym_TILDE;
	v->a[51986] = actions(1756);
	v->a[51987] = 1;
	v->a[51988] = anon_sym_DOLLAR;
	v->a[51989] = actions(1758);
	v->a[51990] = 1;
	v->a[51991] = anon_sym_DQUOTE;
	v->a[51992] = actions(1762);
	v->a[51993] = 1;
	v->a[51994] = anon_sym_DOLLAR_LBRACE;
	v->a[51995] = actions(1764);
	v->a[51996] = 1;
	v->a[51997] = anon_sym_DOLLAR_LPAREN;
	v->a[51998] = actions(1766);
	v->a[51999] = 1;
	small_parse_table_2600(v);
}

/* EOF small_parse_table_519.c */
