/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_actions_entries_59.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_actions_entries.h"

void	parse_actions_entries_295(t_parse_actions_entries_array *v)
{
	v->a[5900] = shift(671);
	v->a[5901] = entry(1, true);
	v->a[5902] = shift(2990);
	v->a[5903] = entry(1, true);
	v->a[5904] = shift(740);
	v->a[5905] = entry(1, true);
	v->a[5906] = shift(2996);
	v->a[5907] = entry(1, true);
	v->a[5908] = shift(166);
	v->a[5909] = entry(1, true);
	v->a[5910] = shift(163);
	v->a[5911] = entry(1, false);
	v->a[5912] = shift(1177);
	v->a[5913] = entry(1, true);
	v->a[5914] = shift(1177);
	v->a[5915] = entry(1, true);
	v->a[5916] = shift(3601);
	v->a[5917] = entry(1, false);
	v->a[5918] = shift(898);
	v->a[5919] = entry(1, true);
	parse_actions_entries_296(v);
}

void	parse_actions_entries_296(t_parse_actions_entries_array *v)
{
	v->a[5920] = shift(882);
	v->a[5921] = entry(1, true);
	v->a[5922] = shift(898);
	v->a[5923] = entry(1, true);
	v->a[5924] = shift(2488);
	v->a[5925] = entry(1, true);
	v->a[5926] = shift(3391);
	v->a[5927] = entry(1, true);
	v->a[5928] = shift(3410);
	v->a[5929] = entry(1, true);
	v->a[5930] = shift(2544);
	v->a[5931] = entry(1, true);
	v->a[5932] = shift(3972);
	v->a[5933] = entry(1, true);
	v->a[5934] = shift(2550);
	v->a[5935] = entry(2, false);
	v->a[5936] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[5937] = shift_repeat(2162);
	v->a[5938] = entry(2, false);
	v->a[5939] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	parse_actions_entries_297(v);
}

void	parse_actions_entries_297(t_parse_actions_entries_array *v)
{
	v->a[5940] = shift_repeat(440);
	v->a[5941] = entry(2, true);
	v->a[5942] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[5943] = shift_repeat(3149);
	v->a[5944] = entry(1, false);
	v->a[5945] = shift(3404);
	v->a[5946] = entry(1, true);
	v->a[5947] = shift(3404);
	v->a[5948] = entry(1, false);
	v->a[5949] = shift(776);
	v->a[5950] = entry(1, true);
	v->a[5951] = shift(776);
	v->a[5952] = entry(1, true);
	v->a[5953] = shift(3204);
	v->a[5954] = entry(1, true);
	v->a[5955] = shift(1738);
	v->a[5956] = entry(1, true);
	v->a[5957] = shift(973);
	v->a[5958] = entry(1, true);
	v->a[5959] = shift(3057);
	parse_actions_entries_298(v);
}

void	parse_actions_entries_298(t_parse_actions_entries_array *v)
{
	v->a[5960] = entry(1, true);
	v->a[5961] = shift(3043);
	v->a[5962] = entry(1, true);
	v->a[5963] = shift(183);
	v->a[5964] = entry(1, true);
	v->a[5965] = shift(185);
	v->a[5966] = entry(1, false);
	v->a[5967] = shift(2177);
	v->a[5968] = entry(1, false);
	v->a[5969] = shift(442);
	v->a[5970] = entry(1, true);
	v->a[5971] = shift(3173);
	v->a[5972] = entry(2, true);
	v->a[5973] = reduce(aux_sym_variable_assignments_repeat1, 2, 0, 0);
	v->a[5974] = shift_repeat(3895);
	v->a[5975] = entry(1, true);
	v->a[5976] = shift(3895);
	v->a[5977] = entry(1, true);
	v->a[5978] = reduce(sym_compound_statement, 2, 0, 0);
	v->a[5979] = entry(1, false);
	parse_actions_entries_299(v);
}

void	parse_actions_entries_299(t_parse_actions_entries_array *v)
{
	v->a[5980] = reduce(sym_compound_statement, 2, 0, 0);
	v->a[5981] = entry(1, true);
	v->a[5982] = shift(2482);
	v->a[5983] = entry(1, true);
	v->a[5984] = shift(2483);
	v->a[5985] = entry(1, false);
	v->a[5986] = shift(768);
	v->a[5987] = entry(1, true);
	v->a[5988] = shift(768);
	v->a[5989] = entry(1, true);
	v->a[5990] = shift(1729);
	v->a[5991] = entry(1, true);
	v->a[5992] = shift(1122);
	v->a[5993] = entry(1, true);
	v->a[5994] = shift(3018);
	v->a[5995] = entry(1, true);
	v->a[5996] = shift(3011);
	v->a[5997] = entry(1, true);
	v->a[5998] = shift(55);
	v->a[5999] = entry(1, true);
	parse_actions_entries_300(v);
}

/* EOF parse_actions_entries_59.c */
