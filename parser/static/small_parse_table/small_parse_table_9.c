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
	v->a[900] = actions(115);
	v->a[901] = 1;
	v->a[902] = anon_sym_LF;
	v->a[903] = state(118);
	v->a[904] = 1;
	v->a[905] = aux_sym__statements_repeat1;
	v->a[906] = state(185);
	v->a[907] = 1;
	v->a[908] = sym_command_name;
	v->a[909] = state(216);
	v->a[910] = 1;
	v->a[911] = sym_variable_assignment;
	v->a[912] = state(326);
	v->a[913] = 1;
	v->a[914] = aux_sym__case_item_last_repeat2;
	v->a[915] = state(411);
	v->a[916] = 1;
	v->a[917] = aux_sym_command_repeat1;
	v->a[918] = state(551);
	v->a[919] = 1;
	small_parse_table_46(v);
}

void	small_parse_table_46(t_small_parse_table_array *v)
{
	v->a[920] = sym_file_redirect;
	v->a[921] = state(555);
	v->a[922] = 1;
	v->a[923] = sym_concatenation;
	v->a[924] = state(991);
	v->a[925] = 1;
	v->a[926] = sym_pipeline;
	v->a[927] = state(1126);
	v->a[928] = 1;
	v->a[929] = aux_sym_redirected_statement_repeat2;
	v->a[930] = state(1561);
	v->a[931] = 1;
	v->a[932] = sym__statement_not_pipeline;
	v->a[933] = state(1611);
	v->a[934] = 1;
	v->a[935] = sym__statements;
	v->a[936] = actions(11);
	v->a[937] = 2;
	v->a[938] = anon_sym_while;
	v->a[939] = anon_sym_until;
	small_parse_table_47(v);
}

void	small_parse_table_47(t_small_parse_table_array *v)
{
	v->a[940] = actions(59);
	v->a[941] = 2;
	v->a[942] = sym_raw_string;
	v->a[943] = sym_number;
	v->a[944] = actions(51);
	v->a[945] = 3;
	v->a[946] = anon_sym_LT;
	v->a[947] = anon_sym_GT;
	v->a[948] = anon_sym_GT_GT;
	v->a[949] = state(401);
	v->a[950] = 5;
	v->a[951] = sym_arithmetic_expansion;
	v->a[952] = sym_string;
	v->a[953] = sym_simple_expansion;
	v->a[954] = sym_expansion;
	v->a[955] = sym_command_substitution;
	v->a[956] = state(972);
	v->a[957] = 12;
	v->a[958] = sym_redirected_statement;
	v->a[959] = sym_for_statement;
	small_parse_table_48(v);
}

void	small_parse_table_48(t_small_parse_table_array *v)
{
	v->a[960] = sym_while_statement;
	v->a[961] = sym_if_statement;
	v->a[962] = sym_case_statement;
	v->a[963] = sym_function_definition;
	v->a[964] = sym_compound_statement;
	v->a[965] = sym_subshell;
	v->a[966] = sym_list;
	v->a[967] = sym_negated_command;
	v->a[968] = sym_command;
	v->a[969] = sym__variable_assignments;
	v->a[970] = 32;
	v->a[971] = actions(3);
	v->a[972] = 1;
	v->a[973] = sym_comment;
	v->a[974] = actions(79);
	v->a[975] = 1;
	v->a[976] = sym_word;
	v->a[977] = actions(81);
	v->a[978] = 1;
	v->a[979] = anon_sym_for;
	small_parse_table_49(v);
}

void	small_parse_table_49(t_small_parse_table_array *v)
{
	v->a[980] = actions(85);
	v->a[981] = 1;
	v->a[982] = anon_sym_if;
	v->a[983] = actions(87);
	v->a[984] = 1;
	v->a[985] = anon_sym_case;
	v->a[986] = actions(89);
	v->a[987] = 1;
	v->a[988] = anon_sym_LPAREN;
	v->a[989] = actions(93);
	v->a[990] = 1;
	v->a[991] = anon_sym_LBRACE;
	v->a[992] = actions(95);
	v->a[993] = 1;
	v->a[994] = anon_sym_BANG;
	v->a[995] = actions(99);
	v->a[996] = 1;
	v->a[997] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[998] = actions(101);
	v->a[999] = 1;
	small_parse_table_50(v);
}

/* EOF small_parse_table_9.c */
