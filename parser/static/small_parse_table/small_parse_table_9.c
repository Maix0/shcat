/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_9.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_45(t_small_parse_table_array *v)
{
	v->a[900] = anon_sym_BQUOTE;
	v->a[901] = actions(135);
	v->a[902] = 1;
	v->a[903] = sym_file_descriptor;
	v->a[904] = actions(137);
	v->a[905] = 1;
	v->a[906] = sym_variable_name;
	v->a[907] = state(12);
	v->a[908] = 1;
	v->a[909] = aux_sym__case_item_last_repeat2;
	v->a[910] = state(139);
	v->a[911] = 1;
	v->a[912] = aux_sym__statements_repeat1;
	v->a[913] = state(173);
	v->a[914] = 1;
	v->a[915] = sym_command_name;
	v->a[916] = state(269);
	v->a[917] = 1;
	v->a[918] = sym_variable_assignment;
	v->a[919] = state(663);
	small_parse_table_46(v);
}

void	small_parse_table_46(t_small_parse_table_array *v)
{
	v->a[920] = 1;
	v->a[921] = aux_sym_command_repeat1;
	v->a[922] = state(665);
	v->a[923] = 1;
	v->a[924] = sym_concatenation;
	v->a[925] = state(749);
	v->a[926] = 1;
	v->a[927] = sym_file_redirect;
	v->a[928] = state(1145);
	v->a[929] = 1;
	v->a[930] = aux_sym_redirected_statement_repeat2;
	v->a[931] = state(1190);
	v->a[932] = 1;
	v->a[933] = sym_pipeline;
	v->a[934] = state(2031);
	v->a[935] = 1;
	v->a[936] = sym__statements;
	v->a[937] = state(2040);
	v->a[938] = 1;
	v->a[939] = sym__statement_not_pipeline;
	small_parse_table_47(v);
}

void	small_parse_table_47(t_small_parse_table_array *v)
{
	v->a[940] = actions(99);
	v->a[941] = 2;
	v->a[942] = anon_sym_while;
	v->a[943] = anon_sym_until;
	v->a[944] = actions(115);
	v->a[945] = 2;
	v->a[946] = anon_sym_LT_AMP_DASH;
	v->a[947] = anon_sym_GT_AMP_DASH;
	v->a[948] = state(282);
	v->a[949] = 6;
	v->a[950] = sym_arithmetic_expansion;
	v->a[951] = sym_string;
	v->a[952] = sym_number;
	v->a[953] = sym_simple_expansion;
	v->a[954] = sym_expansion;
	v->a[955] = sym_command_substitution;
	v->a[956] = actions(113);
	v->a[957] = 8;
	v->a[958] = anon_sym_LT;
	v->a[959] = anon_sym_GT;
	small_parse_table_48(v);
}

void	small_parse_table_48(t_small_parse_table_array *v)
{
	v->a[960] = anon_sym_GT_GT;
	v->a[961] = anon_sym_AMP_GT;
	v->a[962] = anon_sym_AMP_GT_GT;
	v->a[963] = anon_sym_LT_AMP;
	v->a[964] = anon_sym_GT_AMP;
	v->a[965] = anon_sym_GT_PIPE;
	v->a[966] = state(1048);
	v->a[967] = 12;
	v->a[968] = sym_redirected_statement;
	v->a[969] = sym_for_statement;
	v->a[970] = sym_while_statement;
	v->a[971] = sym_if_statement;
	v->a[972] = sym_case_statement;
	v->a[973] = sym_function_definition;
	v->a[974] = sym_compound_statement;
	v->a[975] = sym_subshell;
	v->a[976] = sym_list;
	v->a[977] = sym_negated_command;
	v->a[978] = sym_command;
	v->a[979] = sym_variable_assignments;
	small_parse_table_49(v);
}

void	small_parse_table_49(t_small_parse_table_array *v)
{
	v->a[980] = 36;
	v->a[981] = actions(3);
	v->a[982] = 1;
	v->a[983] = sym_comment;
	v->a[984] = actions(95);
	v->a[985] = 1;
	v->a[986] = sym_word;
	v->a[987] = actions(97);
	v->a[988] = 1;
	v->a[989] = anon_sym_for;
	v->a[990] = actions(101);
	v->a[991] = 1;
	v->a[992] = anon_sym_if;
	v->a[993] = actions(103);
	v->a[994] = 1;
	v->a[995] = anon_sym_case;
	v->a[996] = actions(105);
	v->a[997] = 1;
	v->a[998] = anon_sym_LPAREN;
	v->a[999] = actions(109);
	small_parse_table_50(v);
}

/* EOF small_parse_table_9.c */
