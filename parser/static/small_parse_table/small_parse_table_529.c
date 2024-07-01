/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_529.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2645(t_small_parse_table_array *v)
{
	v->a[52900] = 1;
	v->a[52901] = sym_comment;
	v->a[52902] = actions(1744);
	v->a[52903] = 1;
	v->a[52904] = anon_sym_LPAREN;
	v->a[52905] = actions(1746);
	v->a[52906] = 1;
	v->a[52907] = anon_sym_BANG;
	v->a[52908] = actions(1754);
	v->a[52909] = 1;
	v->a[52910] = anon_sym_TILDE;
	v->a[52911] = actions(1756);
	v->a[52912] = 1;
	v->a[52913] = anon_sym_DOLLAR;
	v->a[52914] = actions(1758);
	v->a[52915] = 1;
	v->a[52916] = anon_sym_DQUOTE;
	v->a[52917] = actions(1762);
	v->a[52918] = 1;
	v->a[52919] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_2646(v);
}

void	small_parse_table_2646(t_small_parse_table_array *v)
{
	v->a[52920] = actions(1764);
	v->a[52921] = 1;
	v->a[52922] = anon_sym_DOLLAR_LPAREN;
	v->a[52923] = actions(1766);
	v->a[52924] = 1;
	v->a[52925] = anon_sym_BQUOTE;
	v->a[52926] = actions(1768);
	v->a[52927] = 1;
	v->a[52928] = sym_variable_name;
	v->a[52929] = actions(1858);
	v->a[52930] = 1;
	v->a[52931] = anon_sym_RPAREN_RPAREN;
	v->a[52932] = actions(1750);
	v->a[52933] = 2;
	v->a[52934] = anon_sym_PLUS_PLUS;
	v->a[52935] = anon_sym_DASH_DASH;
	v->a[52936] = actions(1752);
	v->a[52937] = 2;
	v->a[52938] = anon_sym_DASH2;
	v->a[52939] = anon_sym_PLUS2;
	small_parse_table_2647(v);
}

void	small_parse_table_2647(t_small_parse_table_array *v)
{
	v->a[52940] = actions(1760);
	v->a[52941] = 2;
	v->a[52942] = sym_number;
	v->a[52943] = aux_sym__simple_variable_name_token1;
	v->a[52944] = state(271);
	v->a[52945] = 3;
	v->a[52946] = sym_string;
	v->a[52947] = sym_simple_expansion;
	v->a[52948] = sym_expansion;
	v->a[52949] = state(363);
	v->a[52950] = 8;
	v->a[52951] = sym__arithmetic_expression;
	v->a[52952] = sym_arithmetic_literal;
	v->a[52953] = sym_arithmetic_binary_expression;
	v->a[52954] = sym_arithmetic_ternary_expression;
	v->a[52955] = sym_arithmetic_unary_expression;
	v->a[52956] = sym_arithmetic_postfix_expression;
	v->a[52957] = sym_arithmetic_parenthesized_expression;
	v->a[52958] = sym_command_substitution;
	v->a[52959] = 6;
	small_parse_table_2648(v);
}

void	small_parse_table_2648(t_small_parse_table_array *v)
{
	v->a[52960] = actions(3);
	v->a[52961] = 1;
	v->a[52962] = sym_comment;
	v->a[52963] = actions(1860);
	v->a[52964] = 1;
	v->a[52965] = aux_sym_concatenation_token1;
	v->a[52966] = actions(1863);
	v->a[52967] = 1;
	v->a[52968] = sym__concat;
	v->a[52969] = state(863);
	v->a[52970] = 1;
	v->a[52971] = aux_sym_concatenation_repeat1;
	v->a[52972] = actions(1194);
	v->a[52973] = 2;
	v->a[52974] = sym_file_descriptor;
	v->a[52975] = sym_variable_name;
	v->a[52976] = actions(1189);
	v->a[52977] = 22;
	v->a[52978] = anon_sym_PIPE;
	v->a[52979] = anon_sym_AMP_AMP;
	small_parse_table_2649(v);
}

void	small_parse_table_2649(t_small_parse_table_array *v)
{
	v->a[52980] = anon_sym_PIPE_PIPE;
	v->a[52981] = anon_sym_LT;
	v->a[52982] = anon_sym_GT;
	v->a[52983] = anon_sym_GT_GT;
	v->a[52984] = anon_sym_LT_AMP;
	v->a[52985] = anon_sym_GT_AMP;
	v->a[52986] = anon_sym_GT_PIPE;
	v->a[52987] = anon_sym_LT_AMP_DASH;
	v->a[52988] = anon_sym_GT_AMP_DASH;
	v->a[52989] = anon_sym_LT_LT;
	v->a[52990] = anon_sym_LT_LT_DASH;
	v->a[52991] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[52992] = anon_sym_DOLLAR;
	v->a[52993] = anon_sym_DQUOTE;
	v->a[52994] = sym_raw_string;
	v->a[52995] = sym_number;
	v->a[52996] = anon_sym_DOLLAR_LBRACE;
	v->a[52997] = anon_sym_DOLLAR_LPAREN;
	v->a[52998] = anon_sym_BQUOTE;
	v->a[52999] = sym_word;
	small_parse_table_2650(v);
}

/* EOF small_parse_table_529.c */
