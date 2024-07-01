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
	v->a[7900] = anon_sym_GT_GT;
	v->a[7901] = anon_sym_LT_AMP;
	v->a[7902] = anon_sym_GT_AMP;
	v->a[7903] = anon_sym_GT_PIPE;
	v->a[7904] = state(1030);
	v->a[7905] = 12;
	v->a[7906] = sym_redirected_statement;
	v->a[7907] = sym_for_statement;
	v->a[7908] = sym_while_statement;
	v->a[7909] = sym_if_statement;
	v->a[7910] = sym_case_statement;
	v->a[7911] = sym_function_definition;
	v->a[7912] = sym_compound_statement;
	v->a[7913] = sym_subshell;
	v->a[7914] = sym_list;
	v->a[7915] = sym_negated_command;
	v->a[7916] = sym_command;
	v->a[7917] = sym__variable_assignments;
	v->a[7918] = 32;
	v->a[7919] = actions(3);
	small_parse_table_396(v);
}

void	small_parse_table_396(t_small_parse_table_array *v)
{
	v->a[7920] = 1;
	v->a[7921] = sym_comment;
	v->a[7922] = actions(9);
	v->a[7923] = 1;
	v->a[7924] = anon_sym_for;
	v->a[7925] = actions(13);
	v->a[7926] = 1;
	v->a[7927] = anon_sym_if;
	v->a[7928] = actions(15);
	v->a[7929] = 1;
	v->a[7930] = anon_sym_case;
	v->a[7931] = actions(17);
	v->a[7932] = 1;
	v->a[7933] = anon_sym_LPAREN;
	v->a[7934] = actions(19);
	v->a[7935] = 1;
	v->a[7936] = anon_sym_LBRACE;
	v->a[7937] = actions(59);
	v->a[7938] = 1;
	v->a[7939] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_397(v);
}

void	small_parse_table_397(t_small_parse_table_array *v)
{
	v->a[7940] = actions(61);
	v->a[7941] = 1;
	v->a[7942] = anon_sym_DOLLAR;
	v->a[7943] = actions(63);
	v->a[7944] = 1;
	v->a[7945] = anon_sym_DQUOTE;
	v->a[7946] = actions(67);
	v->a[7947] = 1;
	v->a[7948] = anon_sym_DOLLAR_LBRACE;
	v->a[7949] = actions(69);
	v->a[7950] = 1;
	v->a[7951] = anon_sym_DOLLAR_LPAREN;
	v->a[7952] = actions(71);
	v->a[7953] = 1;
	v->a[7954] = anon_sym_BQUOTE;
	v->a[7955] = actions(220);
	v->a[7956] = 1;
	v->a[7957] = sym_word;
	v->a[7958] = actions(222);
	v->a[7959] = 1;
	small_parse_table_398(v);
}

void	small_parse_table_398(t_small_parse_table_array *v)
{
	v->a[7960] = anon_sym_BANG;
	v->a[7961] = actions(230);
	v->a[7962] = 1;
	v->a[7963] = sym_file_descriptor;
	v->a[7964] = actions(232);
	v->a[7965] = 1;
	v->a[7966] = sym_variable_name;
	v->a[7967] = state(133);
	v->a[7968] = 1;
	v->a[7969] = aux_sym__statements_repeat1;
	v->a[7970] = state(180);
	v->a[7971] = 1;
	v->a[7972] = sym_command_name;
	v->a[7973] = state(231);
	v->a[7974] = 1;
	v->a[7975] = sym_variable_assignment;
	v->a[7976] = state(650);
	v->a[7977] = 1;
	v->a[7978] = sym_concatenation;
	v->a[7979] = state(710);
	small_parse_table_399(v);
}

void	small_parse_table_399(t_small_parse_table_array *v)
{
	v->a[7980] = 1;
	v->a[7981] = aux_sym_command_repeat1;
	v->a[7982] = state(753);
	v->a[7983] = 1;
	v->a[7984] = sym_file_redirect;
	v->a[7985] = state(1095);
	v->a[7986] = 1;
	v->a[7987] = sym_pipeline;
	v->a[7988] = state(1282);
	v->a[7989] = 1;
	v->a[7990] = aux_sym_redirected_statement_repeat2;
	v->a[7991] = state(2127);
	v->a[7992] = 1;
	v->a[7993] = sym__statement_not_pipeline;
	v->a[7994] = state(2213);
	v->a[7995] = 1;
	v->a[7996] = sym__statements;
	v->a[7997] = actions(11);
	v->a[7998] = 2;
	v->a[7999] = anon_sym_while;
	small_parse_table_400(v);
}

/* EOF small_parse_table_79.c */
