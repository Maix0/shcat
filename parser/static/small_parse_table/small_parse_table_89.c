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
	v->a[8900] = 1;
	v->a[8901] = sym__statement_not_pipeline;
	v->a[8902] = actions(11);
	v->a[8903] = 2;
	v->a[8904] = anon_sym_while;
	v->a[8905] = anon_sym_until;
	v->a[8906] = actions(61);
	v->a[8907] = 2;
	v->a[8908] = anon_sym_LT_AMP_DASH;
	v->a[8909] = anon_sym_GT_AMP_DASH;
	v->a[8910] = state(397);
	v->a[8911] = 6;
	v->a[8912] = sym_arithmetic_expansion;
	v->a[8913] = sym_string;
	v->a[8914] = sym_number;
	v->a[8915] = sym_simple_expansion;
	v->a[8916] = sym_expansion;
	v->a[8917] = sym_command_substitution;
	v->a[8918] = actions(59);
	v->a[8919] = 8;
	small_parse_table_446(v);
}

void	small_parse_table_446(t_small_parse_table_array *v)
{
	v->a[8920] = anon_sym_LT;
	v->a[8921] = anon_sym_GT;
	v->a[8922] = anon_sym_GT_GT;
	v->a[8923] = anon_sym_AMP_GT;
	v->a[8924] = anon_sym_AMP_GT_GT;
	v->a[8925] = anon_sym_LT_AMP;
	v->a[8926] = anon_sym_GT_AMP;
	v->a[8927] = anon_sym_GT_PIPE;
	v->a[8928] = state(1204);
	v->a[8929] = 12;
	v->a[8930] = sym_redirected_statement;
	v->a[8931] = sym_for_statement;
	v->a[8932] = sym_while_statement;
	v->a[8933] = sym_if_statement;
	v->a[8934] = sym_case_statement;
	v->a[8935] = sym_function_definition;
	v->a[8936] = sym_compound_statement;
	v->a[8937] = sym_subshell;
	v->a[8938] = sym_list;
	v->a[8939] = sym_negated_command;
	small_parse_table_447(v);
}

void	small_parse_table_447(t_small_parse_table_array *v)
{
	v->a[8940] = sym_command;
	v->a[8941] = sym_variable_assignments;
	v->a[8942] = 34;
	v->a[8943] = actions(3);
	v->a[8944] = 1;
	v->a[8945] = sym_comment;
	v->a[8946] = actions(9);
	v->a[8947] = 1;
	v->a[8948] = anon_sym_for;
	v->a[8949] = actions(13);
	v->a[8950] = 1;
	v->a[8951] = anon_sym_if;
	v->a[8952] = actions(15);
	v->a[8953] = 1;
	v->a[8954] = anon_sym_case;
	v->a[8955] = actions(17);
	v->a[8956] = 1;
	v->a[8957] = anon_sym_LPAREN;
	v->a[8958] = actions(19);
	v->a[8959] = 1;
	small_parse_table_448(v);
}

void	small_parse_table_448(t_small_parse_table_array *v)
{
	v->a[8960] = anon_sym_LBRACE;
	v->a[8961] = actions(63);
	v->a[8962] = 1;
	v->a[8963] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[8964] = actions(65);
	v->a[8965] = 1;
	v->a[8966] = anon_sym_DOLLAR;
	v->a[8967] = actions(67);
	v->a[8968] = 1;
	v->a[8969] = anon_sym_DQUOTE;
	v->a[8970] = actions(71);
	v->a[8971] = 1;
	v->a[8972] = aux_sym_number_token1;
	v->a[8973] = actions(73);
	v->a[8974] = 1;
	v->a[8975] = aux_sym_number_token2;
	v->a[8976] = actions(75);
	v->a[8977] = 1;
	v->a[8978] = anon_sym_DOLLAR_LBRACE;
	v->a[8979] = actions(77);
	small_parse_table_449(v);
}

void	small_parse_table_449(t_small_parse_table_array *v)
{
	v->a[8980] = 1;
	v->a[8981] = anon_sym_DOLLAR_LPAREN;
	v->a[8982] = actions(79);
	v->a[8983] = 1;
	v->a[8984] = anon_sym_BQUOTE;
	v->a[8985] = actions(248);
	v->a[8986] = 1;
	v->a[8987] = sym_word;
	v->a[8988] = actions(250);
	v->a[8989] = 1;
	v->a[8990] = anon_sym_BANG;
	v->a[8991] = actions(256);
	v->a[8992] = 1;
	v->a[8993] = sym_raw_string;
	v->a[8994] = actions(258);
	v->a[8995] = 1;
	v->a[8996] = sym_file_descriptor;
	v->a[8997] = actions(260);
	v->a[8998] = 1;
	v->a[8999] = sym_variable_name;
	small_parse_table_450(v);
}

/* EOF small_parse_table_89.c */
