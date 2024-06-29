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
	v->a[11900] = aux_sym_redirected_statement_repeat2;
	v->a[11901] = state(2116);
	v->a[11902] = 1;
	v->a[11903] = sym__statement_not_pipeline;
	v->a[11904] = state(2286);
	v->a[11905] = 1;
	v->a[11906] = sym__statements;
	v->a[11907] = actions(11);
	v->a[11908] = 2;
	v->a[11909] = anon_sym_while;
	v->a[11910] = anon_sym_until;
	v->a[11911] = actions(57);
	v->a[11912] = 2;
	v->a[11913] = anon_sym_LT_AMP_DASH;
	v->a[11914] = anon_sym_GT_AMP_DASH;
	v->a[11915] = actions(65);
	v->a[11916] = 2;
	v->a[11917] = sym_raw_string;
	v->a[11918] = sym_number;
	v->a[11919] = state(420);
	small_parse_table_596(v);
}

void	small_parse_table_596(t_small_parse_table_array *v)
{
	v->a[11920] = 5;
	v->a[11921] = sym_arithmetic_expansion;
	v->a[11922] = sym_string;
	v->a[11923] = sym_simple_expansion;
	v->a[11924] = sym_expansion;
	v->a[11925] = sym_command_substitution;
	v->a[11926] = actions(55);
	v->a[11927] = 8;
	v->a[11928] = anon_sym_LT;
	v->a[11929] = anon_sym_GT;
	v->a[11930] = anon_sym_GT_GT;
	v->a[11931] = anon_sym_AMP_GT;
	v->a[11932] = anon_sym_AMP_GT_GT;
	v->a[11933] = anon_sym_LT_AMP;
	v->a[11934] = anon_sym_GT_AMP;
	v->a[11935] = anon_sym_GT_PIPE;
	v->a[11936] = state(1057);
	v->a[11937] = 12;
	v->a[11938] = sym_redirected_statement;
	v->a[11939] = sym_for_statement;
	small_parse_table_597(v);
}

void	small_parse_table_597(t_small_parse_table_array *v)
{
	v->a[11940] = sym_while_statement;
	v->a[11941] = sym_if_statement;
	v->a[11942] = sym_case_statement;
	v->a[11943] = sym_function_definition;
	v->a[11944] = sym_compound_statement;
	v->a[11945] = sym_subshell;
	v->a[11946] = sym_list;
	v->a[11947] = sym_negated_command;
	v->a[11948] = sym_command;
	v->a[11949] = sym__variable_assignments;
	v->a[11950] = 32;
	v->a[11951] = actions(3);
	v->a[11952] = 1;
	v->a[11953] = sym_comment;
	v->a[11954] = actions(141);
	v->a[11955] = 1;
	v->a[11956] = sym_word;
	v->a[11957] = actions(144);
	v->a[11958] = 1;
	v->a[11959] = anon_sym_for;
	small_parse_table_598(v);
}

void	small_parse_table_598(t_small_parse_table_array *v)
{
	v->a[11960] = actions(150);
	v->a[11961] = 1;
	v->a[11962] = anon_sym_if;
	v->a[11963] = actions(153);
	v->a[11964] = 1;
	v->a[11965] = anon_sym_RBRACE;
	v->a[11966] = actions(155);
	v->a[11967] = 1;
	v->a[11968] = anon_sym_case;
	v->a[11969] = actions(158);
	v->a[11970] = 1;
	v->a[11971] = anon_sym_LPAREN;
	v->a[11972] = actions(161);
	v->a[11973] = 1;
	v->a[11974] = anon_sym_LBRACE;
	v->a[11975] = actions(164);
	v->a[11976] = 1;
	v->a[11977] = anon_sym_BANG;
	v->a[11978] = actions(173);
	v->a[11979] = 1;
	small_parse_table_599(v);
}

void	small_parse_table_599(t_small_parse_table_array *v)
{
	v->a[11980] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[11981] = actions(176);
	v->a[11982] = 1;
	v->a[11983] = anon_sym_DOLLAR;
	v->a[11984] = actions(179);
	v->a[11985] = 1;
	v->a[11986] = anon_sym_DQUOTE;
	v->a[11987] = actions(185);
	v->a[11988] = 1;
	v->a[11989] = anon_sym_DOLLAR_LBRACE;
	v->a[11990] = actions(188);
	v->a[11991] = 1;
	v->a[11992] = anon_sym_DOLLAR_LPAREN;
	v->a[11993] = actions(191);
	v->a[11994] = 1;
	v->a[11995] = anon_sym_BQUOTE;
	v->a[11996] = actions(194);
	v->a[11997] = 1;
	v->a[11998] = sym_file_descriptor;
	v->a[11999] = actions(197);
	small_parse_table_600(v);
}

/* EOF small_parse_table_119.c */
