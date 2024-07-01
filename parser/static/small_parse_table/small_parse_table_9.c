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
	v->a[900] = sym_expansion;
	v->a[901] = sym_command_substitution;
	v->a[902] = actions(55);
	v->a[903] = 6;
	v->a[904] = anon_sym_LT;
	v->a[905] = anon_sym_GT;
	v->a[906] = anon_sym_GT_GT;
	v->a[907] = anon_sym_LT_AMP;
	v->a[908] = anon_sym_GT_AMP;
	v->a[909] = anon_sym_GT_PIPE;
	v->a[910] = state(1179);
	v->a[911] = 12;
	v->a[912] = sym_redirected_statement;
	v->a[913] = sym_for_statement;
	v->a[914] = sym_while_statement;
	v->a[915] = sym_if_statement;
	v->a[916] = sym_case_statement;
	v->a[917] = sym_function_definition;
	v->a[918] = sym_compound_statement;
	v->a[919] = sym_subshell;
	small_parse_table_46(v);
}

void	small_parse_table_46(t_small_parse_table_array *v)
{
	v->a[920] = sym_list;
	v->a[921] = sym_negated_command;
	v->a[922] = sym_command;
	v->a[923] = sym__variable_assignments;
	v->a[924] = 32;
	v->a[925] = actions(3);
	v->a[926] = 1;
	v->a[927] = sym_comment;
	v->a[928] = actions(89);
	v->a[929] = 1;
	v->a[930] = sym_word;
	v->a[931] = actions(92);
	v->a[932] = 1;
	v->a[933] = anon_sym_for;
	v->a[934] = actions(98);
	v->a[935] = 1;
	v->a[936] = anon_sym_if;
	v->a[937] = actions(103);
	v->a[938] = 1;
	v->a[939] = anon_sym_case;
	small_parse_table_47(v);
}

void	small_parse_table_47(t_small_parse_table_array *v)
{
	v->a[940] = actions(106);
	v->a[941] = 1;
	v->a[942] = anon_sym_LPAREN;
	v->a[943] = actions(109);
	v->a[944] = 1;
	v->a[945] = anon_sym_LBRACE;
	v->a[946] = actions(112);
	v->a[947] = 1;
	v->a[948] = anon_sym_BANG;
	v->a[949] = actions(121);
	v->a[950] = 1;
	v->a[951] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[952] = actions(124);
	v->a[953] = 1;
	v->a[954] = anon_sym_DOLLAR;
	v->a[955] = actions(127);
	v->a[956] = 1;
	v->a[957] = anon_sym_DQUOTE;
	v->a[958] = actions(133);
	v->a[959] = 1;
	small_parse_table_48(v);
}

void	small_parse_table_48(t_small_parse_table_array *v)
{
	v->a[960] = anon_sym_DOLLAR_LBRACE;
	v->a[961] = actions(136);
	v->a[962] = 1;
	v->a[963] = anon_sym_DOLLAR_LPAREN;
	v->a[964] = actions(139);
	v->a[965] = 1;
	v->a[966] = anon_sym_BQUOTE;
	v->a[967] = actions(142);
	v->a[968] = 1;
	v->a[969] = sym_file_descriptor;
	v->a[970] = actions(145);
	v->a[971] = 1;
	v->a[972] = sym_variable_name;
	v->a[973] = state(9);
	v->a[974] = 1;
	v->a[975] = aux_sym__terminated_statement;
	v->a[976] = state(189);
	v->a[977] = 1;
	v->a[978] = sym_command_name;
	v->a[979] = state(273);
	small_parse_table_49(v);
}

void	small_parse_table_49(t_small_parse_table_array *v)
{
	v->a[980] = 1;
	v->a[981] = sym_variable_assignment;
	v->a[982] = state(650);
	v->a[983] = 1;
	v->a[984] = sym_concatenation;
	v->a[985] = state(712);
	v->a[986] = 1;
	v->a[987] = sym_file_redirect;
	v->a[988] = state(713);
	v->a[989] = 1;
	v->a[990] = aux_sym_command_repeat1;
	v->a[991] = state(1196);
	v->a[992] = 1;
	v->a[993] = sym_pipeline;
	v->a[994] = state(1333);
	v->a[995] = 1;
	v->a[996] = aux_sym_redirected_statement_repeat2;
	v->a[997] = state(2103);
	v->a[998] = 1;
	v->a[999] = sym__statement_not_pipeline;
	small_parse_table_50(v);
}

/* EOF small_parse_table_9.c */
