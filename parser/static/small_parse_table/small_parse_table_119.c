/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_119.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_595(t_small_parse_table_array *v)
{
	v->a[11900] = sym_case_statement;
	v->a[11901] = sym_function_definition;
	v->a[11902] = sym_compound_statement;
	v->a[11903] = sym_subshell;
	v->a[11904] = sym_list;
	v->a[11905] = sym_negated_command;
	v->a[11906] = sym_command;
	v->a[11907] = sym__variable_assignments;
	v->a[11908] = 29;
	v->a[11909] = actions(3);
	v->a[11910] = 1;
	v->a[11911] = sym_comment;
	v->a[11912] = actions(9);
	v->a[11913] = 1;
	v->a[11914] = anon_sym_for;
	v->a[11915] = actions(13);
	v->a[11916] = 1;
	v->a[11917] = anon_sym_if;
	v->a[11918] = actions(15);
	v->a[11919] = 1;
	small_parse_table_596(v);
}

void	small_parse_table_596(t_small_parse_table_array *v)
{
	v->a[11920] = anon_sym_case;
	v->a[11921] = actions(17);
	v->a[11922] = 1;
	v->a[11923] = anon_sym_LPAREN;
	v->a[11924] = actions(19);
	v->a[11925] = 1;
	v->a[11926] = anon_sym_LBRACE;
	v->a[11927] = actions(41);
	v->a[11928] = 1;
	v->a[11929] = sym_word;
	v->a[11930] = actions(49);
	v->a[11931] = 1;
	v->a[11932] = anon_sym_BANG;
	v->a[11933] = actions(53);
	v->a[11934] = 1;
	v->a[11935] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[11936] = actions(55);
	v->a[11937] = 1;
	v->a[11938] = anon_sym_DOLLAR;
	v->a[11939] = actions(57);
	small_parse_table_597(v);
}

void	small_parse_table_597(t_small_parse_table_array *v)
{
	v->a[11940] = 1;
	v->a[11941] = anon_sym_DQUOTE;
	v->a[11942] = actions(61);
	v->a[11943] = 1;
	v->a[11944] = anon_sym_DOLLAR_LBRACE;
	v->a[11945] = actions(63);
	v->a[11946] = 1;
	v->a[11947] = anon_sym_DOLLAR_LPAREN;
	v->a[11948] = actions(65);
	v->a[11949] = 1;
	v->a[11950] = anon_sym_BQUOTE;
	v->a[11951] = actions(67);
	v->a[11952] = 1;
	v->a[11953] = sym_variable_name;
	v->a[11954] = state(56);
	v->a[11955] = 1;
	v->a[11956] = aux_sym__terminated_statement;
	v->a[11957] = state(185);
	v->a[11958] = 1;
	v->a[11959] = sym_command_name;
	small_parse_table_598(v);
}

void	small_parse_table_598(t_small_parse_table_array *v)
{
	v->a[11960] = state(209);
	v->a[11961] = 1;
	v->a[11962] = sym_variable_assignment;
	v->a[11963] = state(411);
	v->a[11964] = 1;
	v->a[11965] = aux_sym_command_repeat1;
	v->a[11966] = state(551);
	v->a[11967] = 1;
	v->a[11968] = sym_file_redirect;
	v->a[11969] = state(555);
	v->a[11970] = 1;
	v->a[11971] = sym_concatenation;
	v->a[11972] = state(974);
	v->a[11973] = 1;
	v->a[11974] = sym_pipeline;
	v->a[11975] = state(1126);
	v->a[11976] = 1;
	v->a[11977] = aux_sym_redirected_statement_repeat2;
	v->a[11978] = state(1561);
	v->a[11979] = 1;
	small_parse_table_599(v);
}

void	small_parse_table_599(t_small_parse_table_array *v)
{
	v->a[11980] = sym__statement_not_pipeline;
	v->a[11981] = actions(11);
	v->a[11982] = 2;
	v->a[11983] = anon_sym_while;
	v->a[11984] = anon_sym_until;
	v->a[11985] = actions(59);
	v->a[11986] = 2;
	v->a[11987] = sym_raw_string;
	v->a[11988] = sym_number;
	v->a[11989] = actions(51);
	v->a[11990] = 3;
	v->a[11991] = anon_sym_LT;
	v->a[11992] = anon_sym_GT;
	v->a[11993] = anon_sym_GT_GT;
	v->a[11994] = state(401);
	v->a[11995] = 5;
	v->a[11996] = sym_arithmetic_expansion;
	v->a[11997] = sym_string;
	v->a[11998] = sym_simple_expansion;
	v->a[11999] = sym_expansion;
	small_parse_table_600(v);
}

/* EOF small_parse_table_119.c */
