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
	v->a[8900] = sym_raw_string;
	v->a[8901] = sym_number;
	v->a[8902] = actions(51);
	v->a[8903] = 3;
	v->a[8904] = anon_sym_LT;
	v->a[8905] = anon_sym_GT;
	v->a[8906] = anon_sym_GT_GT;
	v->a[8907] = state(401);
	v->a[8908] = 5;
	v->a[8909] = sym_arithmetic_expansion;
	v->a[8910] = sym_string;
	v->a[8911] = sym_simple_expansion;
	v->a[8912] = sym_expansion;
	v->a[8913] = sym_command_substitution;
	v->a[8914] = state(820);
	v->a[8915] = 12;
	v->a[8916] = sym_redirected_statement;
	v->a[8917] = sym_for_statement;
	v->a[8918] = sym_while_statement;
	v->a[8919] = sym_if_statement;
	small_parse_table_446(v);
}

void	small_parse_table_446(t_small_parse_table_array *v)
{
	v->a[8920] = sym_case_statement;
	v->a[8921] = sym_function_definition;
	v->a[8922] = sym_compound_statement;
	v->a[8923] = sym_subshell;
	v->a[8924] = sym_list;
	v->a[8925] = sym_negated_command;
	v->a[8926] = sym_command;
	v->a[8927] = sym__variable_assignments;
	v->a[8928] = 30;
	v->a[8929] = actions(3);
	v->a[8930] = 1;
	v->a[8931] = sym_comment;
	v->a[8932] = actions(9);
	v->a[8933] = 1;
	v->a[8934] = anon_sym_for;
	v->a[8935] = actions(13);
	v->a[8936] = 1;
	v->a[8937] = anon_sym_if;
	v->a[8938] = actions(15);
	v->a[8939] = 1;
	small_parse_table_447(v);
}

void	small_parse_table_447(t_small_parse_table_array *v)
{
	v->a[8940] = anon_sym_case;
	v->a[8941] = actions(17);
	v->a[8942] = 1;
	v->a[8943] = anon_sym_LPAREN;
	v->a[8944] = actions(19);
	v->a[8945] = 1;
	v->a[8946] = anon_sym_LBRACE;
	v->a[8947] = actions(41);
	v->a[8948] = 1;
	v->a[8949] = sym_word;
	v->a[8950] = actions(49);
	v->a[8951] = 1;
	v->a[8952] = anon_sym_BANG;
	v->a[8953] = actions(53);
	v->a[8954] = 1;
	v->a[8955] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[8956] = actions(55);
	v->a[8957] = 1;
	v->a[8958] = anon_sym_DOLLAR;
	v->a[8959] = actions(57);
	small_parse_table_448(v);
}

void	small_parse_table_448(t_small_parse_table_array *v)
{
	v->a[8960] = 1;
	v->a[8961] = anon_sym_DQUOTE;
	v->a[8962] = actions(61);
	v->a[8963] = 1;
	v->a[8964] = anon_sym_DOLLAR_LBRACE;
	v->a[8965] = actions(63);
	v->a[8966] = 1;
	v->a[8967] = anon_sym_DOLLAR_LPAREN;
	v->a[8968] = actions(65);
	v->a[8969] = 1;
	v->a[8970] = anon_sym_BQUOTE;
	v->a[8971] = actions(67);
	v->a[8972] = 1;
	v->a[8973] = sym_variable_name;
	v->a[8974] = actions(236);
	v->a[8975] = 1;
	v->a[8976] = anon_sym_then;
	v->a[8977] = state(38);
	v->a[8978] = 1;
	v->a[8979] = aux_sym__terminated_statement;
	small_parse_table_449(v);
}

void	small_parse_table_449(t_small_parse_table_array *v)
{
	v->a[8980] = state(185);
	v->a[8981] = 1;
	v->a[8982] = sym_command_name;
	v->a[8983] = state(237);
	v->a[8984] = 1;
	v->a[8985] = sym_variable_assignment;
	v->a[8986] = state(411);
	v->a[8987] = 1;
	v->a[8988] = aux_sym_command_repeat1;
	v->a[8989] = state(551);
	v->a[8990] = 1;
	v->a[8991] = sym_file_redirect;
	v->a[8992] = state(555);
	v->a[8993] = 1;
	v->a[8994] = sym_concatenation;
	v->a[8995] = state(1059);
	v->a[8996] = 1;
	v->a[8997] = sym_pipeline;
	v->a[8998] = state(1126);
	v->a[8999] = 1;
	small_parse_table_450(v);
}

/* EOF small_parse_table_89.c */
