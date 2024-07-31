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
	v->a[8900] = sym_command;
	v->a[8901] = sym__variable_assignments;
	v->a[8902] = 30;
	v->a[8903] = actions(3);
	v->a[8904] = 1;
	v->a[8905] = sym_comment;
	v->a[8906] = actions(9);
	v->a[8907] = 1;
	v->a[8908] = anon_sym_for;
	v->a[8909] = actions(13);
	v->a[8910] = 1;
	v->a[8911] = anon_sym_if;
	v->a[8912] = actions(15);
	v->a[8913] = 1;
	v->a[8914] = anon_sym_case;
	v->a[8915] = actions(17);
	v->a[8916] = 1;
	v->a[8917] = anon_sym_LPAREN;
	v->a[8918] = actions(19);
	v->a[8919] = 1;
	small_parse_table_446(v);
}

void	small_parse_table_446(t_small_parse_table_array *v)
{
	v->a[8920] = anon_sym_LBRACE;
	v->a[8921] = actions(41);
	v->a[8922] = 1;
	v->a[8923] = sym_word;
	v->a[8924] = actions(49);
	v->a[8925] = 1;
	v->a[8926] = anon_sym_BANG;
	v->a[8927] = actions(53);
	v->a[8928] = 1;
	v->a[8929] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[8930] = actions(55);
	v->a[8931] = 1;
	v->a[8932] = anon_sym_DOLLAR;
	v->a[8933] = actions(57);
	v->a[8934] = 1;
	v->a[8935] = anon_sym_DQUOTE;
	v->a[8936] = actions(61);
	v->a[8937] = 1;
	v->a[8938] = anon_sym_DOLLAR_LBRACE;
	v->a[8939] = actions(63);
	small_parse_table_447(v);
}

void	small_parse_table_447(t_small_parse_table_array *v)
{
	v->a[8940] = 1;
	v->a[8941] = anon_sym_DOLLAR_LPAREN;
	v->a[8942] = actions(65);
	v->a[8943] = 1;
	v->a[8944] = anon_sym_BQUOTE;
	v->a[8945] = actions(67);
	v->a[8946] = 1;
	v->a[8947] = sym_variable_name;
	v->a[8948] = actions(232);
	v->a[8949] = 1;
	v->a[8950] = anon_sym_then;
	v->a[8951] = state(36);
	v->a[8952] = 1;
	v->a[8953] = aux_sym__terminated_statement;
	v->a[8954] = state(271);
	v->a[8955] = 1;
	v->a[8956] = sym_command_name;
	v->a[8957] = state(298);
	v->a[8958] = 1;
	v->a[8959] = sym_variable_assignment;
	small_parse_table_448(v);
}

void	small_parse_table_448(t_small_parse_table_array *v)
{
	v->a[8960] = state(482);
	v->a[8961] = 1;
	v->a[8962] = aux_sym_command_repeat1;
	v->a[8963] = state(600);
	v->a[8964] = 1;
	v->a[8965] = sym_file_redirect;
	v->a[8966] = state(602);
	v->a[8967] = 1;
	v->a[8968] = sym_concatenation;
	v->a[8969] = state(1012);
	v->a[8970] = 1;
	v->a[8971] = sym_pipeline;
	v->a[8972] = state(1068);
	v->a[8973] = 1;
	v->a[8974] = aux_sym_redirected_statement_repeat2;
	v->a[8975] = state(1609);
	v->a[8976] = 1;
	v->a[8977] = sym__statement_not_pipeline;
	v->a[8978] = actions(11);
	v->a[8979] = 2;
	small_parse_table_449(v);
}

void	small_parse_table_449(t_small_parse_table_array *v)
{
	v->a[8980] = anon_sym_while;
	v->a[8981] = anon_sym_until;
	v->a[8982] = actions(59);
	v->a[8983] = 2;
	v->a[8984] = sym_raw_string;
	v->a[8985] = sym_number;
	v->a[8986] = state(425);
	v->a[8987] = 5;
	v->a[8988] = sym_arithmetic_expansion;
	v->a[8989] = sym_string;
	v->a[8990] = sym_simple_expansion;
	v->a[8991] = sym_expansion;
	v->a[8992] = sym_command_substitution;
	v->a[8993] = actions(51);
	v->a[8994] = 7;
	v->a[8995] = anon_sym_LT;
	v->a[8996] = anon_sym_GT;
	v->a[8997] = anon_sym_GT_GT;
	v->a[8998] = anon_sym_LT_AMP;
	v->a[8999] = anon_sym_GT_AMP;
	small_parse_table_450(v);
}

/* EOF small_parse_table_89.c */
