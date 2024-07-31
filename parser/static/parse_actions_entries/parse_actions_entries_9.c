/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_actions_entries_9.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_actions_entries.h"

void	parse_actions_entries_45(t_parse_actions_entries_array *v)
{
	v->a[900] = entry(2, true);
	v->a[901] = reduce(aux_sym_command_repeat1, 1, 0, 0);
	v->a[902] = shift(1754);
	v->a[903] = entry(1, false);
	v->a[904] = shift(696);
	v->a[905] = entry(1, false);
	v->a[906] = shift(698);
	v->a[907] = entry(1, true);
	v->a[908] = shift(698);
	v->a[909] = entry(1, false);
	v->a[910] = shift(123);
	v->a[911] = entry(2, true);
	v->a[912] = reduce(aux_sym_command_repeat1, 1, 0, 0);
	v->a[913] = shift(1789);
	v->a[914] = entry(1, false);
	v->a[915] = shift(612);
	v->a[916] = entry(1, false);
	v->a[917] = reduce(sym_list, 3, 0, 29);
	v->a[918] = entry(1, true);
	v->a[919] = reduce(sym__statement_not_pipeline, 1, 0, 0);
	parse_actions_entries_46(v);
}

void	parse_actions_entries_46(t_parse_actions_entries_array *v)
{
	v->a[920] = entry(1, false);
	v->a[921] = shift(1287);
	v->a[922] = entry(1, false);
	v->a[923] = shift(120);
	v->a[924] = entry(1, false);
	v->a[925] = shift(134);
	v->a[926] = entry(1, false);
	v->a[927] = shift(1136);
	v->a[928] = entry(1, false);
	v->a[929] = shift(1558);
	v->a[930] = entry(1, false);
	v->a[931] = shift(779);
	v->a[932] = entry(1, false);
	v->a[933] = shift(1457);
	v->a[934] = entry(1, false);
	v->a[935] = shift(1400);
	v->a[936] = entry(1, false);
	v->a[937] = shift(1414);
	v->a[938] = entry(1, false);
	v->a[939] = shift(85);
	parse_actions_entries_47(v);
}

void	parse_actions_entries_47(t_parse_actions_entries_array *v)
{
	v->a[940] = entry(1, false);
	v->a[941] = shift(84);
	v->a[942] = entry(1, true);
	v->a[943] = reduce(sym_list, 3, 0, 29);
	v->a[944] = entry(1, false);
	v->a[945] = shift(512);
	v->a[946] = entry(1, false);
	v->a[947] = shift(387);
	v->a[948] = entry(1, false);
	v->a[949] = shift(683);
	v->a[950] = entry(1, false);
	v->a[951] = shift(680);
	v->a[952] = entry(1, true);
	v->a[953] = shift(680);
	v->a[954] = entry(1, false);
	v->a[955] = shift(1535);
	v->a[956] = entry(1, false);
	v->a[957] = shift(576);
	v->a[958] = entry(1, false);
	v->a[959] = shift(1524);
	parse_actions_entries_48(v);
}

void	parse_actions_entries_48(t_parse_actions_entries_array *v)
{
	v->a[960] = entry(2, false);
	v->a[961] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[962] = shift_repeat(512);
	v->a[963] = entry(1, false);
	v->a[964] = shift(556);
	v->a[965] = entry(1, false);
	v->a[966] = shift(1146);
	v->a[967] = entry(1, false);
	v->a[968] = reduce(sym_command_name, 1, 0, 0);
	v->a[969] = entry(1, false);
	v->a[970] = shift(1706);
	v->a[971] = entry(1, false);
	v->a[972] = shift(1100);
	v->a[973] = entry(1, true);
	v->a[974] = shift(1100);
	v->a[975] = entry(1, true);
	v->a[976] = reduce(sym_command_name, 1, 0, 0);
	v->a[977] = entry(1, false);
	v->a[978] = shift(1773);
	v->a[979] = entry(1, false);
	parse_actions_entries_49(v);
}

void	parse_actions_entries_49(t_parse_actions_entries_array *v)
{
	v->a[980] = shift(1064);
	v->a[981] = entry(1, true);
	v->a[982] = shift(1064);
	v->a[983] = entry(1, false);
	v->a[984] = shift(570);
	v->a[985] = entry(1, false);
	v->a[986] = shift(1751);
	v->a[987] = entry(1, false);
	v->a[988] = shift(1109);
	v->a[989] = entry(1, true);
	v->a[990] = shift(1109);
	v->a[991] = entry(2, false);
	v->a[992] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[993] = shift_repeat(570);
	v->a[994] = entry(2, false);
	v->a[995] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[996] = shift_repeat(604);
	v->a[997] = entry(1, false);
	v->a[998] = reduce(sym_concatenation, 2, 0, 0);
	v->a[999] = entry(1, true);
	parse_actions_entries_50(v);
}

/* EOF parse_actions_entries_9.c */
