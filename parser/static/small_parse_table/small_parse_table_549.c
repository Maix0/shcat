/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_549.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2745(t_small_parse_table_array *v)
{
	v->a[54900] = anon_sym_AMP_AMP;
	v->a[54901] = anon_sym_PIPE_PIPE;
	v->a[54902] = anon_sym_LT;
	v->a[54903] = anon_sym_GT;
	v->a[54904] = anon_sym_GT_GT;
	v->a[54905] = anon_sym_AMP_GT;
	v->a[54906] = anon_sym_AMP_GT_GT;
	v->a[54907] = anon_sym_LT_AMP;
	v->a[54908] = anon_sym_GT_AMP;
	v->a[54909] = anon_sym_GT_PIPE;
	v->a[54910] = anon_sym_LT_AMP_DASH;
	v->a[54911] = anon_sym_GT_AMP_DASH;
	v->a[54912] = anon_sym_LT_LT;
	v->a[54913] = anon_sym_LT_LT_DASH;
	v->a[54914] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[54915] = aux_sym_concatenation_token1;
	v->a[54916] = anon_sym_DOLLAR;
	v->a[54917] = anon_sym_DQUOTE;
	v->a[54918] = sym_raw_string;
	v->a[54919] = aux_sym_number_token1;
	small_parse_table_2746(v);
}

void	small_parse_table_2746(t_small_parse_table_array *v)
{
	v->a[54920] = aux_sym_number_token2;
	v->a[54921] = anon_sym_DOLLAR_LBRACE;
	v->a[54922] = anon_sym_DOLLAR_LPAREN;
	v->a[54923] = anon_sym_BQUOTE;
	v->a[54924] = sym_word;
	v->a[54925] = 18;
	v->a[54926] = actions(1404);
	v->a[54927] = 1;
	v->a[54928] = sym_comment;
	v->a[54929] = actions(1979);
	v->a[54930] = 1;
	v->a[54931] = anon_sym_LPAREN;
	v->a[54932] = actions(1981);
	v->a[54933] = 1;
	v->a[54934] = anon_sym_BANG;
	v->a[54935] = actions(1989);
	v->a[54936] = 1;
	v->a[54937] = anon_sym_TILDE;
	v->a[54938] = actions(1991);
	v->a[54939] = 1;
	small_parse_table_2747(v);
}

void	small_parse_table_2747(t_small_parse_table_array *v)
{
	v->a[54940] = anon_sym_DOLLAR;
	v->a[54941] = actions(1993);
	v->a[54942] = 1;
	v->a[54943] = anon_sym_DQUOTE;
	v->a[54944] = actions(1995);
	v->a[54945] = 1;
	v->a[54946] = aux_sym_number_token1;
	v->a[54947] = actions(1997);
	v->a[54948] = 1;
	v->a[54949] = aux_sym_number_token2;
	v->a[54950] = actions(1999);
	v->a[54951] = 1;
	v->a[54952] = anon_sym_DOLLAR_LBRACE;
	v->a[54953] = actions(2001);
	v->a[54954] = 1;
	v->a[54955] = anon_sym_DOLLAR_LPAREN;
	v->a[54956] = actions(2003);
	v->a[54957] = 1;
	v->a[54958] = anon_sym_BQUOTE;
	v->a[54959] = actions(2005);
	small_parse_table_2748(v);
}

void	small_parse_table_2748(t_small_parse_table_array *v)
{
	v->a[54960] = 1;
	v->a[54961] = aux_sym__simple_variable_name_token1;
	v->a[54962] = actions(2007);
	v->a[54963] = 1;
	v->a[54964] = sym_variable_name;
	v->a[54965] = actions(2037);
	v->a[54966] = 1;
	v->a[54967] = anon_sym_RPAREN_RPAREN;
	v->a[54968] = actions(1985);
	v->a[54969] = 2;
	v->a[54970] = anon_sym_PLUS_PLUS;
	v->a[54971] = anon_sym_DASH_DASH;
	v->a[54972] = actions(1987);
	v->a[54973] = 2;
	v->a[54974] = anon_sym_DASH2;
	v->a[54975] = anon_sym_PLUS2;
	v->a[54976] = state(530);
	v->a[54977] = 4;
	v->a[54978] = sym_string;
	v->a[54979] = sym_number;
	small_parse_table_2749(v);
}

void	small_parse_table_2749(t_small_parse_table_array *v)
{
	v->a[54980] = sym_simple_expansion;
	v->a[54981] = sym_expansion;
	v->a[54982] = state(635);
	v->a[54983] = 8;
	v->a[54984] = sym__arithmetic_expression;
	v->a[54985] = sym_arithmetic_literal;
	v->a[54986] = sym_arithmetic_binary_expression;
	v->a[54987] = sym_arithmetic_ternary_expression;
	v->a[54988] = sym_arithmetic_unary_expression;
	v->a[54989] = sym_arithmetic_postfix_expression;
	v->a[54990] = sym_arithmetic_parenthesized_expression;
	v->a[54991] = sym_command_substitution;
	v->a[54992] = 3;
	v->a[54993] = actions(3);
	v->a[54994] = 1;
	v->a[54995] = sym_comment;
	v->a[54996] = actions(1329);
	v->a[54997] = 3;
	v->a[54998] = sym_file_descriptor;
	v->a[54999] = sym__concat;
	small_parse_table_2750(v);
}

/* EOF small_parse_table_549.c */
