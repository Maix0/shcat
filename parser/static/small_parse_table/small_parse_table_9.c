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
	v->a[900] = 2;
	v->a[901] = anon_sym_LT_AMP_DASH;
	v->a[902] = anon_sym_GT_AMP_DASH;
	v->a[903] = actions(115);
	v->a[904] = 2;
	v->a[905] = sym_raw_string;
	v->a[906] = sym_number;
	v->a[907] = state(289);
	v->a[908] = 5;
	v->a[909] = sym_arithmetic_expansion;
	v->a[910] = sym_string;
	v->a[911] = sym_simple_expansion;
	v->a[912] = sym_expansion;
	v->a[913] = sym_command_substitution;
	v->a[914] = actions(105);
	v->a[915] = 8;
	v->a[916] = anon_sym_LT;
	v->a[917] = anon_sym_GT;
	v->a[918] = anon_sym_GT_GT;
	v->a[919] = anon_sym_AMP_GT;
	small_parse_table_46(v);
}

void	small_parse_table_46(t_small_parse_table_array *v)
{
	v->a[920] = anon_sym_AMP_GT_GT;
	v->a[921] = anon_sym_LT_AMP;
	v->a[922] = anon_sym_GT_AMP;
	v->a[923] = anon_sym_GT_PIPE;
	v->a[924] = state(1086);
	v->a[925] = 12;
	v->a[926] = sym_redirected_statement;
	v->a[927] = sym_for_statement;
	v->a[928] = sym_while_statement;
	v->a[929] = sym_if_statement;
	v->a[930] = sym_case_statement;
	v->a[931] = sym_function_definition;
	v->a[932] = sym_compound_statement;
	v->a[933] = sym_subshell;
	v->a[934] = sym_list;
	v->a[935] = sym_negated_command;
	v->a[936] = sym_command;
	v->a[937] = sym__variable_assignments;
	v->a[938] = 34;
	v->a[939] = actions(3);
	small_parse_table_47(v);
}

void	small_parse_table_47(t_small_parse_table_array *v)
{
	v->a[940] = 1;
	v->a[941] = sym_comment;
	v->a[942] = actions(87);
	v->a[943] = 1;
	v->a[944] = sym_word;
	v->a[945] = actions(89);
	v->a[946] = 1;
	v->a[947] = anon_sym_for;
	v->a[948] = actions(93);
	v->a[949] = 1;
	v->a[950] = anon_sym_if;
	v->a[951] = actions(95);
	v->a[952] = 1;
	v->a[953] = anon_sym_case;
	v->a[954] = actions(97);
	v->a[955] = 1;
	v->a[956] = anon_sym_LPAREN;
	v->a[957] = actions(101);
	v->a[958] = 1;
	v->a[959] = anon_sym_LBRACE;
	small_parse_table_48(v);
}

void	small_parse_table_48(t_small_parse_table_array *v)
{
	v->a[960] = actions(103);
	v->a[961] = 1;
	v->a[962] = anon_sym_BANG;
	v->a[963] = actions(109);
	v->a[964] = 1;
	v->a[965] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[966] = actions(111);
	v->a[967] = 1;
	v->a[968] = anon_sym_DOLLAR;
	v->a[969] = actions(113);
	v->a[970] = 1;
	v->a[971] = anon_sym_DQUOTE;
	v->a[972] = actions(117);
	v->a[973] = 1;
	v->a[974] = anon_sym_DOLLAR_LBRACE;
	v->a[975] = actions(119);
	v->a[976] = 1;
	v->a[977] = anon_sym_DOLLAR_LPAREN;
	v->a[978] = actions(121);
	v->a[979] = 1;
	small_parse_table_49(v);
}

void	small_parse_table_49(t_small_parse_table_array *v)
{
	v->a[980] = anon_sym_BQUOTE;
	v->a[981] = actions(123);
	v->a[982] = 1;
	v->a[983] = sym_file_descriptor;
	v->a[984] = actions(125);
	v->a[985] = 1;
	v->a[986] = sym_variable_name;
	v->a[987] = actions(127);
	v->a[988] = 1;
	v->a[989] = anon_sym_LF;
	v->a[990] = state(8);
	v->a[991] = 1;
	v->a[992] = aux_sym__case_item_last_repeat2;
	v->a[993] = state(134);
	v->a[994] = 1;
	v->a[995] = aux_sym__statements_repeat1;
	v->a[996] = state(184);
	v->a[997] = 1;
	v->a[998] = sym_command_name;
	v->a[999] = state(229);
	small_parse_table_50(v);
}

/* EOF small_parse_table_9.c */
