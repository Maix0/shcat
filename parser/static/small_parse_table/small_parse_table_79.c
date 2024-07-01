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
	v->a[7900] = sym_variable_assignment;
	v->a[7901] = state(603);
	v->a[7902] = 1;
	v->a[7903] = sym_concatenation;
	v->a[7904] = state(623);
	v->a[7905] = 1;
	v->a[7906] = sym_file_redirect;
	v->a[7907] = state(673);
	v->a[7908] = 1;
	v->a[7909] = aux_sym_command_repeat1;
	v->a[7910] = state(1020);
	v->a[7911] = 1;
	v->a[7912] = sym_pipeline;
	v->a[7913] = state(1136);
	v->a[7914] = 1;
	v->a[7915] = aux_sym_redirected_statement_repeat2;
	v->a[7916] = state(1898);
	v->a[7917] = 1;
	v->a[7918] = sym__statement_not_pipeline;
	v->a[7919] = state(2082);
	small_parse_table_396(v);
}

void	small_parse_table_396(t_small_parse_table_array *v)
{
	v->a[7920] = 1;
	v->a[7921] = sym__statements;
	v->a[7922] = actions(11);
	v->a[7923] = 2;
	v->a[7924] = anon_sym_while;
	v->a[7925] = anon_sym_until;
	v->a[7926] = actions(217);
	v->a[7927] = 2;
	v->a[7928] = sym_raw_string;
	v->a[7929] = sym_number;
	v->a[7930] = state(362);
	v->a[7931] = 5;
	v->a[7932] = sym_arithmetic_expansion;
	v->a[7933] = sym_string;
	v->a[7934] = sym_simple_expansion;
	v->a[7935] = sym_expansion;
	v->a[7936] = sym_command_substitution;
	v->a[7937] = actions(215);
	v->a[7938] = 7;
	v->a[7939] = anon_sym_LT;
	small_parse_table_397(v);
}

void	small_parse_table_397(t_small_parse_table_array *v)
{
	v->a[7940] = anon_sym_GT;
	v->a[7941] = anon_sym_GT_GT;
	v->a[7942] = anon_sym_LT_AMP;
	v->a[7943] = anon_sym_GT_AMP;
	v->a[7944] = anon_sym_GT_PIPE;
	v->a[7945] = anon_sym_LT_GT;
	v->a[7946] = state(1003);
	v->a[7947] = 12;
	v->a[7948] = sym_redirected_statement;
	v->a[7949] = sym_for_statement;
	v->a[7950] = sym_while_statement;
	v->a[7951] = sym_if_statement;
	v->a[7952] = sym_case_statement;
	v->a[7953] = sym_function_definition;
	v->a[7954] = sym_compound_statement;
	v->a[7955] = sym_subshell;
	v->a[7956] = sym_list;
	v->a[7957] = sym_negated_command;
	v->a[7958] = sym_command;
	v->a[7959] = sym__variable_assignments;
	small_parse_table_398(v);
}

void	small_parse_table_398(t_small_parse_table_array *v)
{
	v->a[7960] = 31;
	v->a[7961] = actions(3);
	v->a[7962] = 1;
	v->a[7963] = sym_comment;
	v->a[7964] = actions(9);
	v->a[7965] = 1;
	v->a[7966] = anon_sym_for;
	v->a[7967] = actions(13);
	v->a[7968] = 1;
	v->a[7969] = anon_sym_if;
	v->a[7970] = actions(15);
	v->a[7971] = 1;
	v->a[7972] = anon_sym_case;
	v->a[7973] = actions(17);
	v->a[7974] = 1;
	v->a[7975] = anon_sym_LPAREN;
	v->a[7976] = actions(19);
	v->a[7977] = 1;
	v->a[7978] = anon_sym_LBRACE;
	v->a[7979] = actions(55);
	small_parse_table_399(v);
}

void	small_parse_table_399(t_small_parse_table_array *v)
{
	v->a[7980] = 1;
	v->a[7981] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[7982] = actions(57);
	v->a[7983] = 1;
	v->a[7984] = anon_sym_DOLLAR;
	v->a[7985] = actions(59);
	v->a[7986] = 1;
	v->a[7987] = anon_sym_DQUOTE;
	v->a[7988] = actions(63);
	v->a[7989] = 1;
	v->a[7990] = anon_sym_DOLLAR_LBRACE;
	v->a[7991] = actions(65);
	v->a[7992] = 1;
	v->a[7993] = anon_sym_DOLLAR_LPAREN;
	v->a[7994] = actions(67);
	v->a[7995] = 1;
	v->a[7996] = anon_sym_BQUOTE;
	v->a[7997] = actions(69);
	v->a[7998] = 1;
	v->a[7999] = sym_file_descriptor;
	small_parse_table_400(v);
}

/* EOF small_parse_table_79.c */
