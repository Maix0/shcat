/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_actions_entries_39.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_actions_entries.h"

void	parse_actions_entries_195(t_parse_actions_entries_array *v)
{
	v->a[3900] = entry(1, false);
	v->a[3901] = shift(1863);
	v->a[3902] = entry(1, false);
	v->a[3903] = shift(1584);
	v->a[3904] = entry(1, false);
	v->a[3905] = reduce(sym_case_item, 6, 0, 73);
	v->a[3906] = entry(1, false);
	v->a[3907] = reduce(sym__case_item_last, 6, 0, 73);
	v->a[3908] = entry(1, true);
	v->a[3909] = reduce(sym_case_item, 6, 0, 73);
	v->a[3910] = entry(1, false);
	v->a[3911] = shift(1861);
	v->a[3912] = entry(1, false);
	v->a[3913] = shift(1577);
	v->a[3914] = entry(1, false);
	v->a[3915] = shift(1851);
	v->a[3916] = entry(1, false);
	v->a[3917] = shift(618);
	v->a[3918] = entry(1, false);
	v->a[3919] = shift(1867);
	parse_actions_entries_196(v);
}

void	parse_actions_entries_196(t_parse_actions_entries_array *v)
{
	v->a[3920] = entry(1, false);
	v->a[3921] = shift(461);
	v->a[3922] = entry(1, false);
	v->a[3923] = shift(1862);
	v->a[3924] = entry(1, false);
	v->a[3925] = shift(616);
	v->a[3926] = entry(1, false);
	v->a[3927] = shift(1908);
	v->a[3928] = entry(1, false);
	v->a[3929] = shift(1020);
	v->a[3930] = entry(1, false);
	v->a[3931] = shift(1850);
	v->a[3932] = entry(1, false);
	v->a[3933] = shift(1391);
	v->a[3934] = entry(1, false);
	v->a[3935] = shift(1859);
	v->a[3936] = entry(1, false);
	v->a[3937] = shift(473);
	v->a[3938] = entry(1, false);
	v->a[3939] = shift(1855);
	parse_actions_entries_197(v);
}

void	parse_actions_entries_197(t_parse_actions_entries_array *v)
{
	v->a[3940] = entry(1, false);
	v->a[3941] = shift(2209);
	v->a[3942] = entry(1, false);
	v->a[3943] = shift(1868);
	v->a[3944] = entry(1, false);
	v->a[3945] = shift(1013);
	v->a[3946] = entry(1, false);
	v->a[3947] = shift(1738);
	v->a[3948] = entry(1, true);
	v->a[3949] = shift(1738);
	v->a[3950] = entry(1, true);
	v->a[3951] = shift(251);
	v->a[3952] = entry(1, false);
	v->a[3953] = shift(2402);
	v->a[3954] = entry(1, true);
	v->a[3955] = shift(2402);
	v->a[3956] = entry(1, false);
	v->a[3957] = shift(1869);
	v->a[3958] = entry(1, false);
	v->a[3959] = shift(2212);
	parse_actions_entries_198(v);
}

void	parse_actions_entries_198(t_parse_actions_entries_array *v)
{
	v->a[3960] = entry(1, false);
	v->a[3961] = shift(1866);
	v->a[3962] = entry(1, false);
	v->a[3963] = shift(1399);
	v->a[3964] = entry(1, false);
	v->a[3965] = reduce(sym_case_item, 5, 0, 63);
	v->a[3966] = entry(1, false);
	v->a[3967] = reduce(sym__case_item_last, 5, 0, 63);
	v->a[3968] = entry(1, true);
	v->a[3969] = reduce(sym_case_item, 5, 0, 63);
	v->a[3970] = entry(1, false);
	v->a[3971] = shift(2139);
	v->a[3972] = entry(1, false);
	v->a[3973] = shift(2154);
	v->a[3974] = entry(1, true);
	v->a[3975] = shift(2154);
	v->a[3976] = entry(1, false);
	v->a[3977] = shift(1856);
	v->a[3978] = entry(1, false);
	v->a[3979] = shift(660);
	parse_actions_entries_199(v);
}

void	parse_actions_entries_199(t_parse_actions_entries_array *v)
{
	v->a[3980] = entry(1, false);
	v->a[3981] = shift(1865);
	v->a[3982] = entry(1, false);
	v->a[3983] = shift(379);
	v->a[3984] = entry(2, false);
	v->a[3985] = reduce(aux_sym_string_repeat1, 2, 0, 0);
	v->a[3986] = shift_repeat(1043);
	v->a[3987] = entry(2, false);
	v->a[3988] = reduce(aux_sym_string_repeat1, 2, 0, 0);
	v->a[3989] = shift_repeat(1943);
	v->a[3990] = entry(1, false);
	v->a[3991] = reduce(aux_sym_string_repeat1, 2, 0, 0);
	v->a[3992] = entry(2, false);
	v->a[3993] = reduce(aux_sym_string_repeat1, 2, 0, 0);
	v->a[3994] = shift_repeat(2107);
	v->a[3995] = entry(2, false);
	v->a[3996] = reduce(aux_sym_string_repeat1, 2, 0, 0);
	v->a[3997] = shift_repeat(1947);
	v->a[3998] = entry(2, false);
	v->a[3999] = reduce(aux_sym_string_repeat1, 2, 0, 0);
	parse_actions_entries_200(v);
}

/* EOF parse_actions_entries_39.c */
