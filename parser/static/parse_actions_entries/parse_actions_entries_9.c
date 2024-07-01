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
	v->a[900] = reduce(sym_arithmetic_literal, 1, 0, 0);
	v->a[901] = entry(2, false);
	v->a[902] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[903] = shift_repeat(459);
	v->a[904] = entry(1, true);
	v->a[905] = reduce(sym__statements, 1, 0, 2);
	v->a[906] = entry(1, false);
	v->a[907] = reduce(sym_simple_expansion, 2, 0, 0);
	v->a[908] = entry(1, true);
	v->a[909] = reduce(sym_simple_expansion, 2, 0, 0);
	v->a[910] = entry(1, false);
	v->a[911] = shift(759);
	v->a[912] = entry(1, false);
	v->a[913] = shift(841);
	v->a[914] = entry(1, true);
	v->a[915] = shift(209);
	v->a[916] = entry(1, true);
	v->a[917] = shift(840);
	v->a[918] = entry(1, true);
	v->a[919] = shift(839);
	parse_actions_entries_46(v);
}

void	parse_actions_entries_46(t_parse_actions_entries_array *v)
{
	v->a[920] = entry(1, false);
	v->a[921] = shift(838);
	v->a[922] = entry(1, false);
	v->a[923] = shift(837);
	v->a[924] = entry(1, false);
	v->a[925] = shift(836);
	v->a[926] = entry(1, true);
	v->a[927] = shift(835);
	v->a[928] = entry(1, false);
	v->a[929] = shift(833);
	v->a[930] = entry(1, false);
	v->a[931] = shift(832);
	v->a[932] = entry(1, true);
	v->a[933] = shift(831);
	v->a[934] = entry(1, true);
	v->a[935] = shift(837);
	v->a[936] = entry(1, false);
	v->a[937] = shift(830);
	v->a[938] = entry(1, false);
	v->a[939] = shift(829);
	parse_actions_entries_47(v);
}

void	parse_actions_entries_47(t_parse_actions_entries_array *v)
{
	v->a[940] = entry(1, true);
	v->a[941] = shift(824);
	v->a[942] = entry(1, true);
	v->a[943] = shift(330);
	v->a[944] = entry(2, false);
	v->a[945] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[946] = shift_repeat(616);
	v->a[947] = entry(1, false);
	v->a[948] = shift(616);
	v->a[949] = entry(1, true);
	v->a[950] = reduce(sym__statement_not_pipeline, 1, 0, 0);
	v->a[951] = entry(1, true);
	v->a[952] = shift(1034);
	v->a[953] = entry(1, true);
	v->a[954] = shift(811);
	v->a[955] = entry(1, false);
	v->a[956] = shift(148);
	v->a[957] = entry(2, true);
	v->a[958] = reduce(aux_sym_command_repeat1, 1, 0, 0);
	v->a[959] = shift(2056);
	parse_actions_entries_48(v);
}

void	parse_actions_entries_48(t_parse_actions_entries_array *v)
{
	v->a[960] = entry(1, false);
	v->a[961] = reduce(sym_list, 3, 0, 29);
	v->a[962] = entry(1, true);
	v->a[963] = shift(1368);
	v->a[964] = entry(1, false);
	v->a[965] = shift(595);
	v->a[966] = entry(1, true);
	v->a[967] = shift(462);
	v->a[968] = entry(1, true);
	v->a[969] = shift(575);
	v->a[970] = entry(1, true);
	v->a[971] = shift(900);
	v->a[972] = entry(1, true);
	v->a[973] = shift(532);
	v->a[974] = entry(1, true);
	v->a[975] = shift(518);
	v->a[976] = entry(1, false);
	v->a[977] = shift(774);
	v->a[978] = entry(1, true);
	v->a[979] = shift(513);
	parse_actions_entries_49(v);
}

void	parse_actions_entries_49(t_parse_actions_entries_array *v)
{
	v->a[980] = entry(1, true);
	v->a[981] = shift(453);
	v->a[982] = entry(1, true);
	v->a[983] = shift(468);
	v->a[984] = entry(1, true);
	v->a[985] = shift(1738);
	v->a[986] = entry(1, true);
	v->a[987] = shift(834);
	v->a[988] = entry(1, true);
	v->a[989] = shift(1757);
	v->a[990] = entry(1, false);
	v->a[991] = shift(141);
	v->a[992] = entry(2, true);
	v->a[993] = reduce(aux_sym_command_repeat1, 1, 0, 0);
	v->a[994] = shift(2100);
	v->a[995] = entry(1, true);
	v->a[996] = shift(867);
	v->a[997] = entry(1, true);
	v->a[998] = reduce(sym_list, 3, 0, 29);
	v->a[999] = entry(1, true);
	parse_actions_entries_50(v);
}

/* EOF parse_actions_entries_9.c */
