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
	v->a[8900] = actions(9);
	v->a[8901] = 1;
	v->a[8902] = anon_sym_for;
	v->a[8903] = actions(13);
	v->a[8904] = 1;
	v->a[8905] = anon_sym_if;
	v->a[8906] = actions(15);
	v->a[8907] = 1;
	v->a[8908] = anon_sym_case;
	v->a[8909] = actions(17);
	v->a[8910] = 1;
	v->a[8911] = anon_sym_LPAREN;
	v->a[8912] = actions(19);
	v->a[8913] = 1;
	v->a[8914] = anon_sym_LBRACE;
	v->a[8915] = actions(55);
	v->a[8916] = 1;
	v->a[8917] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[8918] = actions(57);
	v->a[8919] = 1;
	small_parse_table_446(v);
}

void	small_parse_table_446(t_small_parse_table_array *v)
{
	v->a[8920] = anon_sym_DOLLAR;
	v->a[8921] = actions(59);
	v->a[8922] = 1;
	v->a[8923] = anon_sym_DQUOTE;
	v->a[8924] = actions(63);
	v->a[8925] = 1;
	v->a[8926] = anon_sym_DOLLAR_LBRACE;
	v->a[8927] = actions(65);
	v->a[8928] = 1;
	v->a[8929] = anon_sym_DOLLAR_LPAREN;
	v->a[8930] = actions(67);
	v->a[8931] = 1;
	v->a[8932] = anon_sym_BQUOTE;
	v->a[8933] = actions(69);
	v->a[8934] = 1;
	v->a[8935] = sym_file_descriptor;
	v->a[8936] = actions(71);
	v->a[8937] = 1;
	v->a[8938] = sym_variable_name;
	v->a[8939] = actions(223);
	small_parse_table_447(v);
}

void	small_parse_table_447(t_small_parse_table_array *v)
{
	v->a[8940] = 1;
	v->a[8941] = sym_word;
	v->a[8942] = actions(225);
	v->a[8943] = 1;
	v->a[8944] = anon_sym_BANG;
	v->a[8945] = state(129);
	v->a[8946] = 1;
	v->a[8947] = aux_sym__statements_repeat1;
	v->a[8948] = state(178);
	v->a[8949] = 1;
	v->a[8950] = sym_command_name;
	v->a[8951] = state(339);
	v->a[8952] = 1;
	v->a[8953] = sym_variable_assignment;
	v->a[8954] = state(585);
	v->a[8955] = 1;
	v->a[8956] = aux_sym_command_repeat1;
	v->a[8957] = state(661);
	v->a[8958] = 1;
	v->a[8959] = sym_concatenation;
	small_parse_table_448(v);
}

void	small_parse_table_448(t_small_parse_table_array *v)
{
	v->a[8960] = state(774);
	v->a[8961] = 1;
	v->a[8962] = sym_file_redirect;
	v->a[8963] = state(1089);
	v->a[8964] = 1;
	v->a[8965] = sym_pipeline;
	v->a[8966] = state(1149);
	v->a[8967] = 1;
	v->a[8968] = aux_sym_redirected_statement_repeat2;
	v->a[8969] = state(1922);
	v->a[8970] = 1;
	v->a[8971] = sym__statement_not_pipeline;
	v->a[8972] = state(2021);
	v->a[8973] = 1;
	v->a[8974] = sym__statements;
	v->a[8975] = actions(11);
	v->a[8976] = 2;
	v->a[8977] = anon_sym_while;
	v->a[8978] = anon_sym_until;
	v->a[8979] = actions(61);
	small_parse_table_449(v);
}

void	small_parse_table_449(t_small_parse_table_array *v)
{
	v->a[8980] = 2;
	v->a[8981] = sym_raw_string;
	v->a[8982] = sym_number;
	v->a[8983] = state(455);
	v->a[8984] = 5;
	v->a[8985] = sym_arithmetic_expansion;
	v->a[8986] = sym_string;
	v->a[8987] = sym_simple_expansion;
	v->a[8988] = sym_expansion;
	v->a[8989] = sym_command_substitution;
	v->a[8990] = actions(53);
	v->a[8991] = 7;
	v->a[8992] = anon_sym_LT;
	v->a[8993] = anon_sym_GT;
	v->a[8994] = anon_sym_GT_GT;
	v->a[8995] = anon_sym_LT_AMP;
	v->a[8996] = anon_sym_GT_AMP;
	v->a[8997] = anon_sym_GT_PIPE;
	v->a[8998] = anon_sym_LT_GT;
	v->a[8999] = state(965);
	small_parse_table_450(v);
}

/* EOF small_parse_table_89.c */
