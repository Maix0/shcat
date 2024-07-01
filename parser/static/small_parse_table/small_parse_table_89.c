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
	v->a[8900] = actions(61);
	v->a[8901] = 1;
	v->a[8902] = anon_sym_DOLLAR;
	v->a[8903] = actions(63);
	v->a[8904] = 1;
	v->a[8905] = anon_sym_DQUOTE;
	v->a[8906] = actions(67);
	v->a[8907] = 1;
	v->a[8908] = anon_sym_DOLLAR_LBRACE;
	v->a[8909] = actions(69);
	v->a[8910] = 1;
	v->a[8911] = anon_sym_DOLLAR_LPAREN;
	v->a[8912] = actions(71);
	v->a[8913] = 1;
	v->a[8914] = anon_sym_BQUOTE;
	v->a[8915] = actions(73);
	v->a[8916] = 1;
	v->a[8917] = sym_file_descriptor;
	v->a[8918] = actions(75);
	v->a[8919] = 1;
	small_parse_table_446(v);
}

void	small_parse_table_446(t_small_parse_table_array *v)
{
	v->a[8920] = sym_variable_name;
	v->a[8921] = actions(240);
	v->a[8922] = 1;
	v->a[8923] = sym_word;
	v->a[8924] = actions(242);
	v->a[8925] = 1;
	v->a[8926] = anon_sym_BANG;
	v->a[8927] = state(136);
	v->a[8928] = 1;
	v->a[8929] = aux_sym__statements_repeat1;
	v->a[8930] = state(188);
	v->a[8931] = 1;
	v->a[8932] = sym_command_name;
	v->a[8933] = state(297);
	v->a[8934] = 1;
	v->a[8935] = sym_variable_assignment;
	v->a[8936] = state(650);
	v->a[8937] = 1;
	v->a[8938] = sym_concatenation;
	v->a[8939] = state(749);
	small_parse_table_447(v);
}

void	small_parse_table_447(t_small_parse_table_array *v)
{
	v->a[8940] = 1;
	v->a[8941] = aux_sym_command_repeat1;
	v->a[8942] = state(795);
	v->a[8943] = 1;
	v->a[8944] = sym_file_redirect;
	v->a[8945] = state(1154);
	v->a[8946] = 1;
	v->a[8947] = sym_pipeline;
	v->a[8948] = state(1240);
	v->a[8949] = 1;
	v->a[8950] = aux_sym_redirected_statement_repeat2;
	v->a[8951] = state(2119);
	v->a[8952] = 1;
	v->a[8953] = sym__statement_not_pipeline;
	v->a[8954] = state(2226);
	v->a[8955] = 1;
	v->a[8956] = sym__statements;
	v->a[8957] = actions(11);
	v->a[8958] = 2;
	v->a[8959] = anon_sym_while;
	small_parse_table_448(v);
}

void	small_parse_table_448(t_small_parse_table_array *v)
{
	v->a[8960] = anon_sym_until;
	v->a[8961] = actions(57);
	v->a[8962] = 2;
	v->a[8963] = anon_sym_LT_AMP_DASH;
	v->a[8964] = anon_sym_GT_AMP_DASH;
	v->a[8965] = actions(65);
	v->a[8966] = 2;
	v->a[8967] = sym_raw_string;
	v->a[8968] = sym_number;
	v->a[8969] = state(443);
	v->a[8970] = 5;
	v->a[8971] = sym_arithmetic_expansion;
	v->a[8972] = sym_string;
	v->a[8973] = sym_simple_expansion;
	v->a[8974] = sym_expansion;
	v->a[8975] = sym_command_substitution;
	v->a[8976] = actions(55);
	v->a[8977] = 6;
	v->a[8978] = anon_sym_LT;
	v->a[8979] = anon_sym_GT;
	small_parse_table_449(v);
}

void	small_parse_table_449(t_small_parse_table_array *v)
{
	v->a[8980] = anon_sym_GT_GT;
	v->a[8981] = anon_sym_LT_AMP;
	v->a[8982] = anon_sym_GT_AMP;
	v->a[8983] = anon_sym_GT_PIPE;
	v->a[8984] = state(1030);
	v->a[8985] = 12;
	v->a[8986] = sym_redirected_statement;
	v->a[8987] = sym_for_statement;
	v->a[8988] = sym_while_statement;
	v->a[8989] = sym_if_statement;
	v->a[8990] = sym_case_statement;
	v->a[8991] = sym_function_definition;
	v->a[8992] = sym_compound_statement;
	v->a[8993] = sym_subshell;
	v->a[8994] = sym_list;
	v->a[8995] = sym_negated_command;
	v->a[8996] = sym_command;
	v->a[8997] = sym__variable_assignments;
	v->a[8998] = 32;
	v->a[8999] = actions(3);
	small_parse_table_450(v);
}

/* EOF small_parse_table_89.c */
