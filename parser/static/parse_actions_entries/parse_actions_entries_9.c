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
	v->a[900] = shift(1067);
	v->a[901] = entry(1, false);
	v->a[902] = shift(492);
	v->a[903] = entry(1, false);
	v->a[904] = shift(730);
	v->a[905] = entry(1, false);
	v->a[906] = shift(1684);
	v->a[907] = entry(1, false);
	v->a[908] = shift(1628);
	v->a[909] = entry(1, false);
	v->a[910] = shift(1639);
	v->a[911] = entry(1, false);
	v->a[912] = shift(99);
	v->a[913] = entry(1, false);
	v->a[914] = shift(98);
	v->a[915] = entry(1, true);
	v->a[916] = shift(1417);
	v->a[917] = entry(1, true);
	v->a[918] = shift(653);
	v->a[919] = entry(1, true);
	parse_actions_entries_46(v);
}

void	parse_actions_entries_46(t_parse_actions_entries_array *v)
{
	v->a[920] = shift(887);
	v->a[921] = entry(2, false);
	v->a[922] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[923] = shift_repeat(492);
	v->a[924] = entry(2, false);
	v->a[925] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[926] = shift_repeat(730);
	v->a[927] = entry(2, false);
	v->a[928] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[929] = shift_repeat(1684);
	v->a[930] = entry(2, false);
	v->a[931] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[932] = shift_repeat(1628);
	v->a[933] = entry(2, false);
	v->a[934] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[935] = shift_repeat(1639);
	v->a[936] = entry(2, false);
	v->a[937] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[938] = shift_repeat(99);
	v->a[939] = entry(2, false);
	parse_actions_entries_47(v);
}

void	parse_actions_entries_47(t_parse_actions_entries_array *v)
{
	v->a[940] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[941] = shift_repeat(98);
	v->a[942] = entry(1, true);
	v->a[943] = shift(235);
	v->a[944] = entry(1, true);
	v->a[945] = shift(554);
	v->a[946] = entry(1, true);
	v->a[947] = shift(529);
	v->a[948] = entry(1, true);
	v->a[949] = shift(857);
	v->a[950] = entry(1, true);
	v->a[951] = reduce(sym__statements, 2, 0, 13);
	v->a[952] = entry(1, true);
	v->a[953] = shift(783);
	v->a[954] = entry(1, true);
	v->a[955] = shift(881);
	v->a[956] = entry(1, true);
	v->a[957] = shift(381);
	v->a[958] = entry(1, true);
	v->a[959] = shift(404);
	parse_actions_entries_48(v);
}

void	parse_actions_entries_48(t_parse_actions_entries_array *v)
{
	v->a[960] = entry(1, false);
	v->a[961] = shift(519);
	v->a[962] = entry(1, false);
	v->a[963] = shift(670);
	v->a[964] = entry(1, false);
	v->a[965] = shift(1689);
	v->a[966] = entry(1, false);
	v->a[967] = shift(1637);
	v->a[968] = entry(1, false);
	v->a[969] = shift(1644);
	v->a[970] = entry(1, false);
	v->a[971] = shift(77);
	v->a[972] = entry(1, false);
	v->a[973] = shift(110);
	v->a[974] = entry(1, true);
	v->a[975] = shift(921);
	v->a[976] = entry(1, true);
	v->a[977] = shift(796);
	v->a[978] = entry(1, true);
	v->a[979] = shift(932);
	parse_actions_entries_49(v);
}

void	parse_actions_entries_49(t_parse_actions_entries_array *v)
{
	v->a[980] = entry(1, true);
	v->a[981] = shift(1800);
	v->a[982] = entry(1, true);
	v->a[983] = shift(1868);
	v->a[984] = entry(1, true);
	v->a[985] = shift(548);
	v->a[986] = entry(1, true);
	v->a[987] = shift(644);
	v->a[988] = entry(1, true);
	v->a[989] = shift(1747);
	v->a[990] = entry(1, true);
	v->a[991] = shift(1454);
	v->a[992] = entry(1, true);
	v->a[993] = shift(497);
	v->a[994] = entry(1, true);
	v->a[995] = shift(543);
	v->a[996] = entry(1, true);
	v->a[997] = shift(629);
	v->a[998] = entry(1, true);
	v->a[999] = shift(530);
	parse_actions_entries_50(v);
}

/* EOF parse_actions_entries_9.c */
