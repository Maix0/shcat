/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_79.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_395(t_small_parse_table_array *v)
{
	v->a[7900] = anon_sym_DOLLAR;
	v->a[7901] = actions(57);
	v->a[7902] = 1;
	v->a[7903] = anon_sym_DQUOTE;
	v->a[7904] = actions(61);
	v->a[7905] = 1;
	v->a[7906] = anon_sym_DOLLAR_LBRACE;
	v->a[7907] = actions(63);
	v->a[7908] = 1;
	v->a[7909] = anon_sym_DOLLAR_LPAREN;
	v->a[7910] = actions(65);
	v->a[7911] = 1;
	v->a[7912] = anon_sym_BQUOTE;
	v->a[7913] = actions(67);
	v->a[7914] = 1;
	v->a[7915] = sym_variable_name;
	v->a[7916] = actions(202);
	v->a[7917] = 1;
	v->a[7918] = sym_word;
	v->a[7919] = actions(204);
	small_parse_table_396(v);
}

void	small_parse_table_396(t_small_parse_table_array *v)
{
	v->a[7920] = 1;
	v->a[7921] = anon_sym_BANG;
	v->a[7922] = state(119);
	v->a[7923] = 1;
	v->a[7924] = aux_sym__statements_repeat1;
	v->a[7925] = state(272);
	v->a[7926] = 1;
	v->a[7927] = sym_command_name;
	v->a[7928] = state(283);
	v->a[7929] = 1;
	v->a[7930] = sym_variable_assignment;
	v->a[7931] = state(486);
	v->a[7932] = 1;
	v->a[7933] = aux_sym_command_repeat1;
	v->a[7934] = state(602);
	v->a[7935] = 1;
	v->a[7936] = sym_concatenation;
	v->a[7937] = state(636);
	v->a[7938] = 1;
	v->a[7939] = sym_file_redirect;
	small_parse_table_397(v);
}

void	small_parse_table_397(t_small_parse_table_array *v)
{
	v->a[7940] = state(951);
	v->a[7941] = 1;
	v->a[7942] = sym_pipeline;
	v->a[7943] = state(1006);
	v->a[7944] = 1;
	v->a[7945] = aux_sym_redirected_statement_repeat2;
	v->a[7946] = state(1605);
	v->a[7947] = 1;
	v->a[7948] = sym__statement_not_pipeline;
	v->a[7949] = state(1709);
	v->a[7950] = 1;
	v->a[7951] = sym__statements;
	v->a[7952] = actions(11);
	v->a[7953] = 2;
	v->a[7954] = anon_sym_while;
	v->a[7955] = anon_sym_until;
	v->a[7956] = actions(59);
	v->a[7957] = 2;
	v->a[7958] = sym_raw_string;
	v->a[7959] = sym_number;
	small_parse_table_398(v);
}

void	small_parse_table_398(t_small_parse_table_array *v)
{
	v->a[7960] = state(425);
	v->a[7961] = 5;
	v->a[7962] = sym_arithmetic_expansion;
	v->a[7963] = sym_string;
	v->a[7964] = sym_simple_expansion;
	v->a[7965] = sym_expansion;
	v->a[7966] = sym_command_substitution;
	v->a[7967] = actions(51);
	v->a[7968] = 7;
	v->a[7969] = anon_sym_LT;
	v->a[7970] = anon_sym_GT;
	v->a[7971] = anon_sym_GT_GT;
	v->a[7972] = anon_sym_LT_AMP;
	v->a[7973] = anon_sym_GT_AMP;
	v->a[7974] = anon_sym_GT_PIPE;
	v->a[7975] = anon_sym_LT_GT;
	v->a[7976] = state(849);
	v->a[7977] = 12;
	v->a[7978] = sym_redirected_statement;
	v->a[7979] = sym_for_statement;
	small_parse_table_399(v);
}

void	small_parse_table_399(t_small_parse_table_array *v)
{
	v->a[7980] = sym_while_statement;
	v->a[7981] = sym_if_statement;
	v->a[7982] = sym_case_statement;
	v->a[7983] = sym_function_definition;
	v->a[7984] = sym_compound_statement;
	v->a[7985] = sym_subshell;
	v->a[7986] = sym_list;
	v->a[7987] = sym_negated_command;
	v->a[7988] = sym_command;
	v->a[7989] = sym__variable_assignments;
	v->a[7990] = 30;
	v->a[7991] = actions(3);
	v->a[7992] = 1;
	v->a[7993] = sym_comment;
	v->a[7994] = actions(9);
	v->a[7995] = 1;
	v->a[7996] = anon_sym_for;
	v->a[7997] = actions(13);
	v->a[7998] = 1;
	v->a[7999] = anon_sym_if;
	small_parse_table_400(v);
}

/* EOF small_parse_table_79.c */
