/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_89.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_445(t_small_parse_table_array *v)
{
	v->a[8900] = 2;
	v->a[8901] = sym_subshell;
	v->a[8902] = sym_test_command;
	v->a[8903] = actions(1390);
	v->a[8904] = 3;
	v->a[8905] = anon_sym_GT_GT;
	v->a[8906] = anon_sym_AMP_GT_GT;
	v->a[8907] = anon_sym_GT_PIPE;
	v->a[8908] = actions(1388);
	v->a[8909] = 5;
	v->a[8910] = anon_sym_LT;
	v->a[8911] = anon_sym_GT;
	v->a[8912] = anon_sym_AMP_GT;
	v->a[8913] = anon_sym_LT_AMP;
	v->a[8914] = anon_sym_GT_AMP;
	v->a[8915] = state(957);
	v->a[8916] = 9;
	v->a[8917] = sym_arithmetic_expansion;
	v->a[8918] = sym_brace_expression;
	v->a[8919] = sym_string;
	small_parse_table_446(v);
}

void	small_parse_table_446(t_small_parse_table_array *v)
{
	v->a[8920] = sym_translated_string;
	v->a[8921] = sym_number;
	v->a[8922] = sym_simple_expansion;
	v->a[8923] = sym_expansion;
	v->a[8924] = sym_command_substitution;
	v->a[8925] = sym_process_substitution;
	v->a[8926] = 37;
	v->a[8927] = actions(71);
	v->a[8928] = 1;
	v->a[8929] = sym_comment;
	v->a[8930] = actions(169);
	v->a[8931] = 1;
	v->a[8932] = anon_sym_LBRACK;
	v->a[8933] = actions(173);
	v->a[8934] = 1;
	v->a[8935] = anon_sym_LBRACK_LBRACK;
	v->a[8936] = actions(217);
	v->a[8937] = 1;
	v->a[8938] = sym_variable_name;
	v->a[8939] = actions(1027);
	small_parse_table_447(v);
}

void	small_parse_table_447(t_small_parse_table_array *v)
{
	v->a[8940] = 1;
	v->a[8941] = anon_sym_LPAREN_LPAREN;
	v->a[8942] = actions(1033);
	v->a[8943] = 1;
	v->a[8944] = anon_sym_LPAREN;
	v->a[8945] = actions(1041);
	v->a[8946] = 1;
	v->a[8947] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[8948] = actions(1043);
	v->a[8949] = 1;
	v->a[8950] = anon_sym_DOLLAR_LBRACK;
	v->a[8951] = actions(1045);
	v->a[8952] = 1;
	v->a[8953] = anon_sym_DOLLAR;
	v->a[8954] = actions(1047);
	v->a[8955] = 1;
	v->a[8956] = sym__special_character;
	v->a[8957] = actions(1049);
	v->a[8958] = 1;
	v->a[8959] = anon_sym_DQUOTE;
	small_parse_table_448(v);
}

void	small_parse_table_448(t_small_parse_table_array *v)
{
	v->a[8960] = actions(1053);
	v->a[8961] = 1;
	v->a[8962] = aux_sym_number_token1;
	v->a[8963] = actions(1055);
	v->a[8964] = 1;
	v->a[8965] = aux_sym_number_token2;
	v->a[8966] = actions(1057);
	v->a[8967] = 1;
	v->a[8968] = anon_sym_DOLLAR_LBRACE;
	v->a[8969] = actions(1059);
	v->a[8970] = 1;
	v->a[8971] = anon_sym_DOLLAR_LPAREN;
	v->a[8972] = actions(1061);
	v->a[8973] = 1;
	v->a[8974] = anon_sym_BQUOTE;
	v->a[8975] = actions(1063);
	v->a[8976] = 1;
	v->a[8977] = anon_sym_DOLLAR_BQUOTE;
	v->a[8978] = actions(1069);
	v->a[8979] = 1;
	small_parse_table_449(v);
}

void	small_parse_table_449(t_small_parse_table_array *v)
{
	v->a[8980] = sym_test_operator;
	v->a[8981] = actions(1071);
	v->a[8982] = 1;
	v->a[8983] = sym__brace_start;
	v->a[8984] = actions(1394);
	v->a[8985] = 1;
	v->a[8986] = anon_sym_LT_LT_LT;
	v->a[8987] = actions(1396);
	v->a[8988] = 1;
	v->a[8989] = sym_file_descriptor;
	v->a[8990] = actions(2668);
	v->a[8991] = 1;
	v->a[8992] = sym_word;
	v->a[8993] = state(620);
	v->a[8994] = 1;
	v->a[8995] = sym_command_name;
	v->a[8996] = state(955);
	v->a[8997] = 1;
	v->a[8998] = aux_sym_command_repeat1;
	v->a[8999] = state(2332);
	small_parse_table_450(v);
}

/* EOF small_parse_table_89.c */
