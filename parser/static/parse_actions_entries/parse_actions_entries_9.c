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
	v->a[900] = shift_repeat(1631);
	v->a[901] = entry(2, false);
	v->a[902] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[903] = shift_repeat(1529);
	v->a[904] = entry(2, false);
	v->a[905] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[906] = shift_repeat(80);
	v->a[907] = entry(2, false);
	v->a[908] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[909] = shift_repeat(83);
	v->a[910] = entry(1, true);
	v->a[911] = shift(530);
	v->a[912] = entry(1, true);
	v->a[913] = shift(777);
	v->a[914] = entry(1, false);
	v->a[915] = shift(147);
	v->a[916] = entry(2, true);
	v->a[917] = reduce(aux_sym_command_repeat1, 1, 0, 0);
	v->a[918] = shift(2075);
	v->a[919] = entry(1, false);
	parse_actions_entries_46(v);
}

void	parse_actions_entries_46(t_parse_actions_entries_array *v)
{
	v->a[920] = shift(593);
	v->a[921] = entry(1, true);
	v->a[922] = reduce(sym__statement_not_pipeline, 1, 0, 0);
	v->a[923] = entry(1, true);
	v->a[924] = shift(848);
	v->a[925] = entry(1, false);
	v->a[926] = shift(857);
	v->a[927] = entry(1, false);
	v->a[928] = shift(875);
	v->a[929] = entry(1, true);
	v->a[930] = shift(875);
	v->a[931] = entry(1, true);
	v->a[932] = shift(1040);
	v->a[933] = entry(2, false);
	v->a[934] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[935] = shift_repeat(593);
	v->a[936] = entry(1, false);
	v->a[937] = shift(140);
	v->a[938] = entry(2, true);
	v->a[939] = reduce(aux_sym_command_repeat1, 1, 0, 0);
	parse_actions_entries_47(v);
}

void	parse_actions_entries_47(t_parse_actions_entries_array *v)
{
	v->a[940] = shift(2119);
	v->a[941] = entry(1, true);
	v->a[942] = shift(1418);
	v->a[943] = entry(1, true);
	v->a[944] = shift(596);
	v->a[945] = entry(1, true);
	v->a[946] = shift(901);
	v->a[947] = entry(1, false);
	v->a[948] = shift(788);
	v->a[949] = entry(1, false);
	v->a[950] = shift(782);
	v->a[951] = entry(1, false);
	v->a[952] = shift(781);
	v->a[953] = entry(1, true);
	v->a[954] = shift(293);
	v->a[955] = entry(1, true);
	v->a[956] = shift(503);
	v->a[957] = entry(1, true);
	v->a[958] = shift(518);
	v->a[959] = entry(1, true);
	parse_actions_entries_48(v);
}

void	parse_actions_entries_48(t_parse_actions_entries_array *v)
{
	v->a[960] = shift(860);
	v->a[961] = entry(1, true);
	v->a[962] = shift(855);
	v->a[963] = entry(1, false);
	v->a[964] = shift(713);
	v->a[965] = entry(1, true);
	v->a[966] = shift(397);
	v->a[967] = entry(1, false);
	v->a[968] = shift(741);
	v->a[969] = entry(1, true);
	v->a[970] = shift(948);
	v->a[971] = entry(1, false);
	v->a[972] = shift(793);
	v->a[973] = entry(1, true);
	v->a[974] = shift(792);
	v->a[975] = entry(1, true);
	v->a[976] = shift(791);
	v->a[977] = entry(1, false);
	v->a[978] = shift(789);
	v->a[979] = entry(1, false);
	parse_actions_entries_49(v);
}

void	parse_actions_entries_49(t_parse_actions_entries_array *v)
{
	v->a[980] = shift(785);
	v->a[981] = entry(1, false);
	v->a[982] = shift(784);
	v->a[983] = entry(1, true);
	v->a[984] = shift(783);
	v->a[985] = entry(1, true);
	v->a[986] = shift(789);
	v->a[987] = entry(1, true);
	v->a[988] = shift(776);
	v->a[989] = entry(1, false);
	v->a[990] = shift(899);
	v->a[991] = entry(1, false);
	v->a[992] = shift(900);
	v->a[993] = entry(1, true);
	v->a[994] = shift(900);
	v->a[995] = entry(1, true);
	v->a[996] = reduce(sym_list, 3, 0, 31);
	v->a[997] = entry(1, false);
	v->a[998] = reduce(sym_list, 3, 0, 31);
	v->a[999] = entry(1, true);
	parse_actions_entries_50(v);
}

/* EOF parse_actions_entries_9.c */
