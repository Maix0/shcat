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
	v->a[11900] = actions(61);
	v->a[11901] = 1;
	v->a[11902] = anon_sym_DOLLAR;
	v->a[11903] = actions(63);
	v->a[11904] = 1;
	v->a[11905] = anon_sym_DQUOTE;
	v->a[11906] = actions(67);
	v->a[11907] = 1;
	v->a[11908] = anon_sym_DOLLAR_LBRACE;
	v->a[11909] = actions(69);
	v->a[11910] = 1;
	v->a[11911] = anon_sym_DOLLAR_LPAREN;
	v->a[11912] = actions(71);
	v->a[11913] = 1;
	v->a[11914] = anon_sym_BQUOTE;
	v->a[11915] = actions(220);
	v->a[11916] = 1;
	v->a[11917] = sym_word;
	v->a[11918] = actions(222);
	v->a[11919] = 1;
	small_parse_table_596(v);
}

void	small_parse_table_596(t_small_parse_table_array *v)
{
	v->a[11920] = anon_sym_BANG;
	v->a[11921] = actions(230);
	v->a[11922] = 1;
	v->a[11923] = sym_file_descriptor;
	v->a[11924] = actions(232);
	v->a[11925] = 1;
	v->a[11926] = sym_variable_name;
	v->a[11927] = state(133);
	v->a[11928] = 1;
	v->a[11929] = aux_sym__statements_repeat1;
	v->a[11930] = state(180);
	v->a[11931] = 1;
	v->a[11932] = sym_command_name;
	v->a[11933] = state(231);
	v->a[11934] = 1;
	v->a[11935] = sym_variable_assignment;
	v->a[11936] = state(650);
	v->a[11937] = 1;
	v->a[11938] = sym_concatenation;
	v->a[11939] = state(675);
	small_parse_table_597(v);
}

void	small_parse_table_597(t_small_parse_table_array *v)
{
	v->a[11940] = 1;
	v->a[11941] = sym_file_redirect;
	v->a[11942] = state(710);
	v->a[11943] = 1;
	v->a[11944] = aux_sym_command_repeat1;
	v->a[11945] = state(1095);
	v->a[11946] = 1;
	v->a[11947] = sym_pipeline;
	v->a[11948] = state(1282);
	v->a[11949] = 1;
	v->a[11950] = aux_sym_redirected_statement_repeat2;
	v->a[11951] = state(2127);
	v->a[11952] = 1;
	v->a[11953] = sym__statement_not_pipeline;
	v->a[11954] = state(2314);
	v->a[11955] = 1;
	v->a[11956] = sym__statements;
	v->a[11957] = actions(11);
	v->a[11958] = 2;
	v->a[11959] = anon_sym_while;
	small_parse_table_598(v);
}

void	small_parse_table_598(t_small_parse_table_array *v)
{
	v->a[11960] = anon_sym_until;
	v->a[11961] = actions(226);
	v->a[11962] = 2;
	v->a[11963] = anon_sym_LT_AMP_DASH;
	v->a[11964] = anon_sym_GT_AMP_DASH;
	v->a[11965] = actions(228);
	v->a[11966] = 2;
	v->a[11967] = sym_raw_string;
	v->a[11968] = sym_number;
	v->a[11969] = state(382);
	v->a[11970] = 5;
	v->a[11971] = sym_arithmetic_expansion;
	v->a[11972] = sym_string;
	v->a[11973] = sym_simple_expansion;
	v->a[11974] = sym_expansion;
	v->a[11975] = sym_command_substitution;
	v->a[11976] = actions(224);
	v->a[11977] = 6;
	v->a[11978] = anon_sym_LT;
	v->a[11979] = anon_sym_GT;
	small_parse_table_599(v);
}

void	small_parse_table_599(t_small_parse_table_array *v)
{
	v->a[11980] = anon_sym_GT_GT;
	v->a[11981] = anon_sym_LT_AMP;
	v->a[11982] = anon_sym_GT_AMP;
	v->a[11983] = anon_sym_GT_PIPE;
	v->a[11984] = state(1087);
	v->a[11985] = 12;
	v->a[11986] = sym_redirected_statement;
	v->a[11987] = sym_for_statement;
	v->a[11988] = sym_while_statement;
	v->a[11989] = sym_if_statement;
	v->a[11990] = sym_case_statement;
	v->a[11991] = sym_function_definition;
	v->a[11992] = sym_compound_statement;
	v->a[11993] = sym_subshell;
	v->a[11994] = sym_list;
	v->a[11995] = sym_negated_command;
	v->a[11996] = sym_command;
	v->a[11997] = sym__variable_assignments;
	v->a[11998] = 32;
	v->a[11999] = actions(3);
	small_parse_table_600(v);
}

/* EOF small_parse_table_119.c */
