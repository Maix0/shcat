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
	v->a[11900] = 1;
	v->a[11901] = anon_sym_LPAREN;
	v->a[11902] = actions(19);
	v->a[11903] = 1;
	v->a[11904] = anon_sym_LBRACE;
	v->a[11905] = actions(49);
	v->a[11906] = 1;
	v->a[11907] = sym_word;
	v->a[11908] = actions(57);
	v->a[11909] = 1;
	v->a[11910] = anon_sym_BANG;
	v->a[11911] = actions(63);
	v->a[11912] = 1;
	v->a[11913] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[11914] = actions(65);
	v->a[11915] = 1;
	v->a[11916] = anon_sym_DOLLAR;
	v->a[11917] = actions(67);
	v->a[11918] = 1;
	v->a[11919] = anon_sym_DQUOTE;
	small_parse_table_596(v);
}

void	small_parse_table_596(t_small_parse_table_array *v)
{
	v->a[11920] = actions(69);
	v->a[11921] = 1;
	v->a[11922] = sym_raw_string;
	v->a[11923] = actions(71);
	v->a[11924] = 1;
	v->a[11925] = aux_sym_number_token1;
	v->a[11926] = actions(73);
	v->a[11927] = 1;
	v->a[11928] = aux_sym_number_token2;
	v->a[11929] = actions(75);
	v->a[11930] = 1;
	v->a[11931] = anon_sym_DOLLAR_LBRACE;
	v->a[11932] = actions(77);
	v->a[11933] = 1;
	v->a[11934] = anon_sym_DOLLAR_LPAREN;
	v->a[11935] = actions(79);
	v->a[11936] = 1;
	v->a[11937] = anon_sym_BQUOTE;
	v->a[11938] = actions(81);
	v->a[11939] = 1;
	small_parse_table_597(v);
}

void	small_parse_table_597(t_small_parse_table_array *v)
{
	v->a[11940] = sym_file_descriptor;
	v->a[11941] = actions(83);
	v->a[11942] = 1;
	v->a[11943] = sym_variable_name;
	v->a[11944] = actions(280);
	v->a[11945] = 1;
	v->a[11946] = anon_sym_done;
	v->a[11947] = state(85);
	v->a[11948] = 1;
	v->a[11949] = aux_sym__terminated_statement;
	v->a[11950] = state(190);
	v->a[11951] = 1;
	v->a[11952] = sym_command_name;
	v->a[11953] = state(303);
	v->a[11954] = 1;
	v->a[11955] = sym_variable_assignment;
	v->a[11956] = state(582);
	v->a[11957] = 1;
	v->a[11958] = sym_concatenation;
	v->a[11959] = state(587);
	small_parse_table_598(v);
}

void	small_parse_table_598(t_small_parse_table_array *v)
{
	v->a[11960] = 1;
	v->a[11961] = aux_sym_command_repeat1;
	v->a[11962] = state(718);
	v->a[11963] = 1;
	v->a[11964] = sym_file_redirect;
	v->a[11965] = state(1213);
	v->a[11966] = 1;
	v->a[11967] = aux_sym_redirected_statement_repeat2;
	v->a[11968] = state(1225);
	v->a[11969] = 1;
	v->a[11970] = sym_pipeline;
	v->a[11971] = state(2035);
	v->a[11972] = 1;
	v->a[11973] = sym__statement_not_pipeline;
	v->a[11974] = actions(11);
	v->a[11975] = 2;
	v->a[11976] = anon_sym_while;
	v->a[11977] = anon_sym_until;
	v->a[11978] = actions(61);
	v->a[11979] = 2;
	small_parse_table_599(v);
}

void	small_parse_table_599(t_small_parse_table_array *v)
{
	v->a[11980] = anon_sym_LT_AMP_DASH;
	v->a[11981] = anon_sym_GT_AMP_DASH;
	v->a[11982] = state(397);
	v->a[11983] = 6;
	v->a[11984] = sym_arithmetic_expansion;
	v->a[11985] = sym_string;
	v->a[11986] = sym_number;
	v->a[11987] = sym_simple_expansion;
	v->a[11988] = sym_expansion;
	v->a[11989] = sym_command_substitution;
	v->a[11990] = actions(59);
	v->a[11991] = 8;
	v->a[11992] = anon_sym_LT;
	v->a[11993] = anon_sym_GT;
	v->a[11994] = anon_sym_GT_GT;
	v->a[11995] = anon_sym_AMP_GT;
	v->a[11996] = anon_sym_AMP_GT_GT;
	v->a[11997] = anon_sym_LT_AMP;
	v->a[11998] = anon_sym_GT_AMP;
	v->a[11999] = anon_sym_GT_PIPE;
	small_parse_table_600(v);
}

/* EOF small_parse_table_119.c */
