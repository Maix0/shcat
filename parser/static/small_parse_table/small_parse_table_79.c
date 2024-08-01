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
	v->a[7900] = aux_sym_redirected_statement_repeat2;
	v->a[7901] = state(1561);
	v->a[7902] = 1;
	v->a[7903] = sym__statement_not_pipeline;
	v->a[7904] = actions(11);
	v->a[7905] = 2;
	v->a[7906] = anon_sym_while;
	v->a[7907] = anon_sym_until;
	v->a[7908] = actions(59);
	v->a[7909] = 2;
	v->a[7910] = sym_raw_string;
	v->a[7911] = sym_number;
	v->a[7912] = actions(51);
	v->a[7913] = 3;
	v->a[7914] = anon_sym_LT;
	v->a[7915] = anon_sym_GT;
	v->a[7916] = anon_sym_GT_GT;
	v->a[7917] = state(401);
	v->a[7918] = 5;
	v->a[7919] = sym_arithmetic_expansion;
	small_parse_table_396(v);
}

void	small_parse_table_396(t_small_parse_table_array *v)
{
	v->a[7920] = sym_string;
	v->a[7921] = sym_simple_expansion;
	v->a[7922] = sym_expansion;
	v->a[7923] = sym_command_substitution;
	v->a[7924] = state(949);
	v->a[7925] = 12;
	v->a[7926] = sym_redirected_statement;
	v->a[7927] = sym_for_statement;
	v->a[7928] = sym_while_statement;
	v->a[7929] = sym_if_statement;
	v->a[7930] = sym_case_statement;
	v->a[7931] = sym_function_definition;
	v->a[7932] = sym_compound_statement;
	v->a[7933] = sym_subshell;
	v->a[7934] = sym_list;
	v->a[7935] = sym_negated_command;
	v->a[7936] = sym_command;
	v->a[7937] = sym__variable_assignments;
	v->a[7938] = 30;
	v->a[7939] = actions(3);
	small_parse_table_397(v);
}

void	small_parse_table_397(t_small_parse_table_array *v)
{
	v->a[7940] = 1;
	v->a[7941] = sym_comment;
	v->a[7942] = actions(9);
	v->a[7943] = 1;
	v->a[7944] = anon_sym_for;
	v->a[7945] = actions(13);
	v->a[7946] = 1;
	v->a[7947] = anon_sym_if;
	v->a[7948] = actions(15);
	v->a[7949] = 1;
	v->a[7950] = anon_sym_case;
	v->a[7951] = actions(17);
	v->a[7952] = 1;
	v->a[7953] = anon_sym_LPAREN;
	v->a[7954] = actions(19);
	v->a[7955] = 1;
	v->a[7956] = anon_sym_LBRACE;
	v->a[7957] = actions(41);
	v->a[7958] = 1;
	v->a[7959] = sym_word;
	small_parse_table_398(v);
}

void	small_parse_table_398(t_small_parse_table_array *v)
{
	v->a[7960] = actions(49);
	v->a[7961] = 1;
	v->a[7962] = anon_sym_BANG;
	v->a[7963] = actions(53);
	v->a[7964] = 1;
	v->a[7965] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[7966] = actions(55);
	v->a[7967] = 1;
	v->a[7968] = anon_sym_DOLLAR;
	v->a[7969] = actions(57);
	v->a[7970] = 1;
	v->a[7971] = anon_sym_DQUOTE;
	v->a[7972] = actions(61);
	v->a[7973] = 1;
	v->a[7974] = anon_sym_DOLLAR_LBRACE;
	v->a[7975] = actions(63);
	v->a[7976] = 1;
	v->a[7977] = anon_sym_DOLLAR_LPAREN;
	v->a[7978] = actions(65);
	v->a[7979] = 1;
	small_parse_table_399(v);
}

void	small_parse_table_399(t_small_parse_table_array *v)
{
	v->a[7980] = anon_sym_BQUOTE;
	v->a[7981] = actions(67);
	v->a[7982] = 1;
	v->a[7983] = sym_variable_name;
	v->a[7984] = actions(234);
	v->a[7985] = 1;
	v->a[7986] = anon_sym_done;
	v->a[7987] = state(38);
	v->a[7988] = 1;
	v->a[7989] = aux_sym__terminated_statement;
	v->a[7990] = state(185);
	v->a[7991] = 1;
	v->a[7992] = sym_command_name;
	v->a[7993] = state(237);
	v->a[7994] = 1;
	v->a[7995] = sym_variable_assignment;
	v->a[7996] = state(411);
	v->a[7997] = 1;
	v->a[7998] = aux_sym_command_repeat1;
	v->a[7999] = state(551);
	small_parse_table_400(v);
}

/* EOF small_parse_table_79.c */
