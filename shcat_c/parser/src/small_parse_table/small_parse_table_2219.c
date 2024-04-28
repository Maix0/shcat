/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2219.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11095(t_small_parse_table_array *v)
{
	v->a[221900] = state(2809);
	v->a[221901] = 1;
	v->a[221902] = sym__arithmetic_unary_expression;
	v->a[221903] = state(2825);
	v->a[221904] = 1;
	v->a[221905] = sym__arithmetic_postfix_expression;
	v->a[221906] = actions(9282);
	v->a[221907] = 2;
	v->a[221908] = anon_sym_PLUS_PLUS2;
	v->a[221909] = anon_sym_DASH_DASH2;
	v->a[221910] = actions(9284);
	v->a[221911] = 2;
	v->a[221912] = anon_sym_DASH2;
	v->a[221913] = anon_sym_PLUS2;
	v->a[221914] = state(2898);
	v->a[221915] = 9;
	v->a[221916] = sym_subscript;
	v->a[221917] = sym__arithmetic_expression;
	v->a[221918] = sym__arithmetic_literal;
	v->a[221919] = sym__arithmetic_parenthesized_expression;
	small_parse_table_11096(v);
}

void	small_parse_table_11096(t_small_parse_table_array *v)
{
	v->a[221920] = sym_string;
	v->a[221921] = sym_number;
	v->a[221922] = sym_simple_expansion;
	v->a[221923] = sym_expansion;
	v->a[221924] = sym_command_substitution;
	v->a[221925] = 18;
	v->a[221926] = actions(3);
	v->a[221927] = 1;
	v->a[221928] = sym_comment;
	v->a[221929] = actions(1043);
	v->a[221930] = 1;
	v->a[221931] = anon_sym_DOLLAR_LBRACK;
	v->a[221932] = actions(1049);
	v->a[221933] = 1;
	v->a[221934] = anon_sym_DQUOTE;
	v->a[221935] = actions(1053);
	v->a[221936] = 1;
	v->a[221937] = aux_sym_number_token1;
	v->a[221938] = actions(1055);
	v->a[221939] = 1;
	small_parse_table_11097(v);
}

void	small_parse_table_11097(t_small_parse_table_array *v)
{
	v->a[221940] = aux_sym_number_token2;
	v->a[221941] = actions(1057);
	v->a[221942] = 1;
	v->a[221943] = anon_sym_DOLLAR_LBRACE;
	v->a[221944] = actions(1059);
	v->a[221945] = 1;
	v->a[221946] = anon_sym_DOLLAR_LPAREN;
	v->a[221947] = actions(1061);
	v->a[221948] = 1;
	v->a[221949] = anon_sym_BQUOTE;
	v->a[221950] = actions(1063);
	v->a[221951] = 1;
	v->a[221952] = anon_sym_DOLLAR_BQUOTE;
	v->a[221953] = actions(1071);
	v->a[221954] = 1;
	v->a[221955] = sym__brace_start;
	v->a[221956] = actions(9706);
	v->a[221957] = 1;
	v->a[221958] = sym_word;
	v->a[221959] = actions(9712);
	small_parse_table_11098(v);
}

void	small_parse_table_11098(t_small_parse_table_array *v)
{
	v->a[221960] = 1;
	v->a[221961] = sym__comment_word;
	v->a[221962] = actions(10614);
	v->a[221963] = 1;
	v->a[221964] = anon_sym_DOLLAR;
	v->a[221965] = actions(1041);
	v->a[221966] = 2;
	v->a[221967] = anon_sym_LPAREN_LPAREN;
	v->a[221968] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[221969] = actions(1065);
	v->a[221970] = 2;
	v->a[221971] = anon_sym_LT_LPAREN;
	v->a[221972] = anon_sym_GT_LPAREN;
	v->a[221973] = actions(9708);
	v->a[221974] = 2;
	v->a[221975] = sym_test_operator;
	v->a[221976] = sym__special_character;
	v->a[221977] = actions(9710);
	v->a[221978] = 3;
	v->a[221979] = sym__bare_dollar;
	small_parse_table_11099(v);
}

void	small_parse_table_11099(t_small_parse_table_array *v)
{
	v->a[221980] = sym_raw_string;
	v->a[221981] = sym_ansi_c_string;
	v->a[221982] = state(2075);
	v->a[221983] = 9;
	v->a[221984] = sym_arithmetic_expansion;
	v->a[221985] = sym_brace_expression;
	v->a[221986] = sym_string;
	v->a[221987] = sym_translated_string;
	v->a[221988] = sym_number;
	v->a[221989] = sym_simple_expansion;
	v->a[221990] = sym_expansion;
	v->a[221991] = sym_command_substitution;
	v->a[221992] = sym_process_substitution;
	v->a[221993] = 18;
	v->a[221994] = actions(3);
	v->a[221995] = 1;
	v->a[221996] = sym_comment;
	v->a[221997] = actions(7958);
	v->a[221998] = 1;
	v->a[221999] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_11100(v);
}

/* EOF small_parse_table_2219.c */
