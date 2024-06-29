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
	v->a[900] = entry(1, false);
	v->a[901] = reduce(sym_list, 3, 0, 30);
	v->a[902] = entry(1, false);
	v->a[903] = shift(1118);
	v->a[904] = entry(1, false);
	v->a[905] = shift(914);
	v->a[906] = entry(1, false);
	v->a[907] = shift(1842);
	v->a[908] = entry(1, false);
	v->a[909] = shift(1839);
	v->a[910] = entry(1, false);
	v->a[911] = shift(1803);
	v->a[912] = entry(1, false);
	v->a[913] = shift(43);
	v->a[914] = entry(1, false);
	v->a[915] = shift(42);
	v->a[916] = entry(1, false);
	v->a[917] = shift(1111);
	v->a[918] = entry(2, false);
	v->a[919] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	parse_actions_entries_46(v);
}

void	parse_actions_entries_46(t_parse_actions_entries_array *v)
{
	v->a[920] = shift_repeat(647);
	v->a[921] = entry(1, false);
	v->a[922] = shift(899);
	v->a[923] = entry(1, false);
	v->a[924] = shift(898);
	v->a[925] = entry(1, true);
	v->a[926] = shift(898);
	v->a[927] = entry(1, true);
	v->a[928] = reduce(sym_list, 3, 0, 30);
	v->a[929] = entry(1, false);
	v->a[930] = shift(1134);
	v->a[931] = entry(1, false);
	v->a[932] = shift(2042);
	v->a[933] = entry(1, false);
	v->a[934] = shift(870);
	v->a[935] = entry(1, false);
	v->a[936] = shift(886);
	v->a[937] = entry(1, true);
	v->a[938] = shift(886);
	v->a[939] = entry(1, false);
	parse_actions_entries_47(v);
}

void	parse_actions_entries_47(t_parse_actions_entries_array *v)
{
	v->a[940] = shift(1138);
	v->a[941] = entry(1, false);
	v->a[942] = shift(2068);
	v->a[943] = entry(1, false);
	v->a[944] = shift(2063);
	v->a[945] = entry(1, false);
	v->a[946] = shift(2057);
	v->a[947] = entry(1, false);
	v->a[948] = shift(2028);
	v->a[949] = entry(1, false);
	v->a[950] = shift(664);
	v->a[951] = entry(1, false);
	v->a[952] = shift(805);
	v->a[953] = entry(1, false);
	v->a[954] = shift(776);
	v->a[955] = entry(1, false);
	v->a[956] = shift(1158);
	v->a[957] = entry(1, false);
	v->a[958] = reduce(sym_concatenation, 2, 0, 0);
	v->a[959] = entry(1, false);
	parse_actions_entries_48(v);
}

void	parse_actions_entries_48(t_parse_actions_entries_array *v)
{
	v->a[960] = shift(1477);
	v->a[961] = entry(1, true);
	v->a[962] = reduce(sym_concatenation, 2, 0, 0);
	v->a[963] = entry(1, true);
	v->a[964] = shift(1542);
	v->a[965] = entry(1, false);
	v->a[966] = shift(1156);
	v->a[967] = entry(1, false);
	v->a[968] = shift(830);
	v->a[969] = entry(1, false);
	v->a[970] = shift(909);
	v->a[971] = entry(1, false);
	v->a[972] = shift(1918);
	v->a[973] = entry(1, false);
	v->a[974] = shift(1900);
	v->a[975] = entry(1, false);
	v->a[976] = shift(1797);
	v->a[977] = entry(1, false);
	v->a[978] = shift(122);
	v->a[979] = entry(1, false);
	parse_actions_entries_49(v);
}

void	parse_actions_entries_49(t_parse_actions_entries_array *v)
{
	v->a[980] = shift(120);
	v->a[981] = entry(1, true);
	v->a[982] = shift(954);
	v->a[983] = entry(1, false);
	v->a[984] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[985] = entry(2, false);
	v->a[986] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[987] = shift_repeat(1560);
	v->a[988] = entry(1, true);
	v->a[989] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[990] = entry(2, true);
	v->a[991] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[992] = shift_repeat(1560);
	v->a[993] = entry(1, false);
	v->a[994] = reduce(sym_command_name, 1, 0, 0);
	v->a[995] = entry(2, false);
	v->a[996] = reduce(sym_command_name, 1, 0, 0);
	v->a[997] = shift(2210);
	v->a[998] = entry(1, false);
	v->a[999] = shift(1560);
	parse_actions_entries_50(v);
}

/* EOF parse_actions_entries_9.c */
