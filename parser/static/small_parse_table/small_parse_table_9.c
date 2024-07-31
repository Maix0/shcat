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
	v->a[900] = anon_sym_LPAREN;
	v->a[901] = actions(93);
	v->a[902] = 1;
	v->a[903] = anon_sym_LBRACE;
	v->a[904] = actions(95);
	v->a[905] = 1;
	v->a[906] = anon_sym_BANG;
	v->a[907] = actions(99);
	v->a[908] = 1;
	v->a[909] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[910] = actions(101);
	v->a[911] = 1;
	v->a[912] = anon_sym_DOLLAR;
	v->a[913] = actions(103);
	v->a[914] = 1;
	v->a[915] = anon_sym_DQUOTE;
	v->a[916] = actions(107);
	v->a[917] = 1;
	v->a[918] = anon_sym_DOLLAR_LBRACE;
	v->a[919] = actions(109);
	small_parse_table_46(v);
}

void	small_parse_table_46(t_small_parse_table_array *v)
{
	v->a[920] = 1;
	v->a[921] = anon_sym_DOLLAR_LPAREN;
	v->a[922] = actions(111);
	v->a[923] = 1;
	v->a[924] = anon_sym_BQUOTE;
	v->a[925] = actions(113);
	v->a[926] = 1;
	v->a[927] = sym_variable_name;
	v->a[928] = actions(115);
	v->a[929] = 1;
	v->a[930] = anon_sym_LF;
	v->a[931] = state(112);
	v->a[932] = 1;
	v->a[933] = aux_sym__statements_repeat1;
	v->a[934] = state(185);
	v->a[935] = 1;
	v->a[936] = sym_command_name;
	v->a[937] = state(255);
	v->a[938] = 1;
	v->a[939] = sym_variable_assignment;
	small_parse_table_47(v);
}

void	small_parse_table_47(t_small_parse_table_array *v)
{
	v->a[940] = state(491);
	v->a[941] = 1;
	v->a[942] = aux_sym_command_repeat1;
	v->a[943] = state(511);
	v->a[944] = 1;
	v->a[945] = aux_sym__case_item_last_repeat2;
	v->a[946] = state(599);
	v->a[947] = 1;
	v->a[948] = sym_concatenation;
	v->a[949] = state(615);
	v->a[950] = 1;
	v->a[951] = sym_file_redirect;
	v->a[952] = state(941);
	v->a[953] = 1;
	v->a[954] = sym_pipeline;
	v->a[955] = state(1015);
	v->a[956] = 1;
	v->a[957] = aux_sym_redirected_statement_repeat2;
	v->a[958] = state(1610);
	v->a[959] = 1;
	small_parse_table_48(v);
}

void	small_parse_table_48(t_small_parse_table_array *v)
{
	v->a[960] = sym__statement_not_pipeline;
	v->a[961] = state(1613);
	v->a[962] = 1;
	v->a[963] = sym__statements;
	v->a[964] = actions(83);
	v->a[965] = 2;
	v->a[966] = anon_sym_while;
	v->a[967] = anon_sym_until;
	v->a[968] = actions(105);
	v->a[969] = 2;
	v->a[970] = sym_raw_string;
	v->a[971] = sym_number;
	v->a[972] = state(341);
	v->a[973] = 5;
	v->a[974] = sym_arithmetic_expansion;
	v->a[975] = sym_string;
	v->a[976] = sym_simple_expansion;
	v->a[977] = sym_expansion;
	v->a[978] = sym_command_substitution;
	v->a[979] = actions(97);
	small_parse_table_49(v);
}

void	small_parse_table_49(t_small_parse_table_array *v)
{
	v->a[980] = 7;
	v->a[981] = anon_sym_LT;
	v->a[982] = anon_sym_GT;
	v->a[983] = anon_sym_GT_GT;
	v->a[984] = anon_sym_LT_AMP;
	v->a[985] = anon_sym_GT_AMP;
	v->a[986] = anon_sym_GT_PIPE;
	v->a[987] = anon_sym_LT_GT;
	v->a[988] = state(819);
	v->a[989] = 12;
	v->a[990] = sym_redirected_statement;
	v->a[991] = sym_for_statement;
	v->a[992] = sym_while_statement;
	v->a[993] = sym_if_statement;
	v->a[994] = sym_case_statement;
	v->a[995] = sym_function_definition;
	v->a[996] = sym_compound_statement;
	v->a[997] = sym_subshell;
	v->a[998] = sym_list;
	v->a[999] = sym_negated_command;
	small_parse_table_50(v);
}

/* EOF small_parse_table_9.c */
