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
	v->a[54900] = sym_number;
	v->a[54901] = anon_sym_DOLLAR_LBRACE;
	v->a[54902] = anon_sym_DOLLAR_LPAREN;
	v->a[54903] = anon_sym_BQUOTE;
	v->a[54904] = sym_word;
	v->a[54905] = 3;
	v->a[54906] = actions(3);
	v->a[54907] = 1;
	v->a[54908] = sym_comment;
	v->a[54909] = actions(1283);
	v->a[54910] = 3;
	v->a[54911] = sym_file_descriptor;
	v->a[54912] = sym__concat;
	v->a[54913] = sym_variable_name;
	v->a[54914] = actions(1285);
	v->a[54915] = 23;
	v->a[54916] = anon_sym_PIPE;
	v->a[54917] = anon_sym_AMP_AMP;
	v->a[54918] = anon_sym_PIPE_PIPE;
	v->a[54919] = anon_sym_LT;
	small_parse_table_2746(v);
}

void	small_parse_table_2746(t_small_parse_table_array *v)
{
	v->a[54920] = anon_sym_GT;
	v->a[54921] = anon_sym_GT_GT;
	v->a[54922] = anon_sym_LT_AMP;
	v->a[54923] = anon_sym_GT_AMP;
	v->a[54924] = anon_sym_GT_PIPE;
	v->a[54925] = anon_sym_LT_AMP_DASH;
	v->a[54926] = anon_sym_GT_AMP_DASH;
	v->a[54927] = anon_sym_LT_LT;
	v->a[54928] = anon_sym_LT_LT_DASH;
	v->a[54929] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[54930] = aux_sym_concatenation_token1;
	v->a[54931] = anon_sym_DOLLAR;
	v->a[54932] = anon_sym_DQUOTE;
	v->a[54933] = sym_raw_string;
	v->a[54934] = sym_number;
	v->a[54935] = anon_sym_DOLLAR_LBRACE;
	v->a[54936] = anon_sym_DOLLAR_LPAREN;
	v->a[54937] = anon_sym_BQUOTE;
	v->a[54938] = sym_word;
	v->a[54939] = 15;
	small_parse_table_2747(v);
}

void	small_parse_table_2747(t_small_parse_table_array *v)
{
	v->a[54940] = actions(870);
	v->a[54941] = 1;
	v->a[54942] = sym_comment;
	v->a[54943] = actions(1921);
	v->a[54944] = 1;
	v->a[54945] = anon_sym_LPAREN;
	v->a[54946] = actions(1923);
	v->a[54947] = 1;
	v->a[54948] = anon_sym_BANG;
	v->a[54949] = actions(1929);
	v->a[54950] = 1;
	v->a[54951] = anon_sym_TILDE;
	v->a[54952] = actions(1931);
	v->a[54953] = 1;
	v->a[54954] = anon_sym_DOLLAR;
	v->a[54955] = actions(1933);
	v->a[54956] = 1;
	v->a[54957] = anon_sym_DQUOTE;
	v->a[54958] = actions(1937);
	v->a[54959] = 1;
	small_parse_table_2748(v);
}

void	small_parse_table_2748(t_small_parse_table_array *v)
{
	v->a[54960] = anon_sym_DOLLAR_LBRACE;
	v->a[54961] = actions(1939);
	v->a[54962] = 1;
	v->a[54963] = anon_sym_DOLLAR_LPAREN;
	v->a[54964] = actions(1941);
	v->a[54965] = 1;
	v->a[54966] = anon_sym_BQUOTE;
	v->a[54967] = actions(1943);
	v->a[54968] = 1;
	v->a[54969] = sym_variable_name;
	v->a[54970] = actions(1925);
	v->a[54971] = 2;
	v->a[54972] = anon_sym_PLUS_PLUS;
	v->a[54973] = anon_sym_DASH_DASH;
	v->a[54974] = actions(1927);
	v->a[54975] = 2;
	v->a[54976] = anon_sym_DASH2;
	v->a[54977] = anon_sym_PLUS2;
	v->a[54978] = actions(1935);
	v->a[54979] = 2;
	small_parse_table_2749(v);
}

void	small_parse_table_2749(t_small_parse_table_array *v)
{
	v->a[54980] = sym_number;
	v->a[54981] = aux_sym__simple_variable_name_token1;
	v->a[54982] = state(334);
	v->a[54983] = 3;
	v->a[54984] = sym_string;
	v->a[54985] = sym_simple_expansion;
	v->a[54986] = sym_expansion;
	v->a[54987] = state(366);
	v->a[54988] = 8;
	v->a[54989] = sym__arithmetic_expression;
	v->a[54990] = sym_arithmetic_literal;
	v->a[54991] = sym_arithmetic_binary_expression;
	v->a[54992] = sym_arithmetic_ternary_expression;
	v->a[54993] = sym_arithmetic_unary_expression;
	v->a[54994] = sym_arithmetic_postfix_expression;
	v->a[54995] = sym_arithmetic_parenthesized_expression;
	v->a[54996] = sym_command_substitution;
	v->a[54997] = 3;
	v->a[54998] = actions(3);
	v->a[54999] = 1;
	small_parse_table_2750(v);
}

/* EOF small_parse_table_549.c */
