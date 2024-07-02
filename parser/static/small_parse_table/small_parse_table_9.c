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
	v->a[900] = sym_negated_command;
	v->a[901] = sym_command;
	v->a[902] = sym__variable_assignments;
	v->a[903] = 33;
	v->a[904] = actions(3);
	v->a[905] = 1;
	v->a[906] = sym_comment;
	v->a[907] = actions(9);
	v->a[908] = 1;
	v->a[909] = anon_sym_for;
	v->a[910] = actions(13);
	v->a[911] = 1;
	v->a[912] = anon_sym_if;
	v->a[913] = actions(15);
	v->a[914] = 1;
	v->a[915] = anon_sym_case;
	v->a[916] = actions(17);
	v->a[917] = 1;
	v->a[918] = anon_sym_LPAREN;
	v->a[919] = actions(19);
	small_parse_table_46(v);
}

void	small_parse_table_46(t_small_parse_table_array *v)
{
	v->a[920] = 1;
	v->a[921] = anon_sym_LBRACE;
	v->a[922] = actions(43);
	v->a[923] = 1;
	v->a[924] = sym_word;
	v->a[925] = actions(51);
	v->a[926] = 1;
	v->a[927] = anon_sym_BANG;
	v->a[928] = actions(55);
	v->a[929] = 1;
	v->a[930] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[931] = actions(57);
	v->a[932] = 1;
	v->a[933] = anon_sym_DOLLAR;
	v->a[934] = actions(59);
	v->a[935] = 1;
	v->a[936] = anon_sym_DQUOTE;
	v->a[937] = actions(63);
	v->a[938] = 1;
	v->a[939] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_47(v);
}

void	small_parse_table_47(t_small_parse_table_array *v)
{
	v->a[940] = actions(65);
	v->a[941] = 1;
	v->a[942] = anon_sym_DOLLAR_LPAREN;
	v->a[943] = actions(67);
	v->a[944] = 1;
	v->a[945] = anon_sym_BQUOTE;
	v->a[946] = actions(69);
	v->a[947] = 1;
	v->a[948] = sym_file_descriptor;
	v->a[949] = actions(71);
	v->a[950] = 1;
	v->a[951] = sym_variable_name;
	v->a[952] = actions(121);
	v->a[953] = 1;
	v->a[954] = anon_sym_LF;
	v->a[955] = state(14);
	v->a[956] = 1;
	v->a[957] = aux_sym__case_item_last_repeat2;
	v->a[958] = state(129);
	v->a[959] = 1;
	small_parse_table_48(v);
}

void	small_parse_table_48(t_small_parse_table_array *v)
{
	v->a[960] = aux_sym__statements_repeat1;
	v->a[961] = state(182);
	v->a[962] = 1;
	v->a[963] = sym_command_name;
	v->a[964] = state(261);
	v->a[965] = 1;
	v->a[966] = sym_variable_assignment;
	v->a[967] = state(584);
	v->a[968] = 1;
	v->a[969] = sym_concatenation;
	v->a[970] = state(620);
	v->a[971] = 1;
	v->a[972] = sym_file_redirect;
	v->a[973] = state(623);
	v->a[974] = 1;
	v->a[975] = aux_sym_command_repeat1;
	v->a[976] = state(1114);
	v->a[977] = 1;
	v->a[978] = sym_pipeline;
	v->a[979] = state(1201);
	small_parse_table_49(v);
}

void	small_parse_table_49(t_small_parse_table_array *v)
{
	v->a[980] = 1;
	v->a[981] = aux_sym_redirected_statement_repeat2;
	v->a[982] = state(1911);
	v->a[983] = 1;
	v->a[984] = sym__statement_not_pipeline;
	v->a[985] = state(1938);
	v->a[986] = 1;
	v->a[987] = sym__statements;
	v->a[988] = actions(11);
	v->a[989] = 2;
	v->a[990] = anon_sym_while;
	v->a[991] = anon_sym_until;
	v->a[992] = actions(61);
	v->a[993] = 2;
	v->a[994] = sym_raw_string;
	v->a[995] = sym_number;
	v->a[996] = state(433);
	v->a[997] = 5;
	v->a[998] = sym_arithmetic_expansion;
	v->a[999] = sym_string;
	small_parse_table_50(v);
}

/* EOF small_parse_table_9.c */
