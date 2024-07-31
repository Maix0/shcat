/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_269.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1345(t_small_parse_table_array *v)
{
	v->a[26900] = anon_sym_DOLLAR;
	v->a[26901] = anon_sym_DQUOTE;
	v->a[26902] = sym_raw_string;
	v->a[26903] = sym_number;
	v->a[26904] = anon_sym_DOLLAR_LBRACE;
	v->a[26905] = anon_sym_DOLLAR_LPAREN;
	v->a[26906] = anon_sym_BQUOTE;
	v->a[26907] = sym_word;
	v->a[26908] = anon_sym_SEMI;
	v->a[26909] = 13;
	v->a[26910] = actions(3);
	v->a[26911] = 1;
	v->a[26912] = sym_comment;
	v->a[26913] = actions(325);
	v->a[26914] = 1;
	v->a[26915] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26916] = actions(327);
	v->a[26917] = 1;
	v->a[26918] = anon_sym_DOLLAR;
	v->a[26919] = actions(329);
	small_parse_table_1346(v);
}

void	small_parse_table_1346(t_small_parse_table_array *v)
{
	v->a[26920] = 1;
	v->a[26921] = anon_sym_DQUOTE;
	v->a[26922] = actions(333);
	v->a[26923] = 1;
	v->a[26924] = anon_sym_DOLLAR_LBRACE;
	v->a[26925] = actions(335);
	v->a[26926] = 1;
	v->a[26927] = anon_sym_DOLLAR_LPAREN;
	v->a[26928] = actions(337);
	v->a[26929] = 1;
	v->a[26930] = anon_sym_BQUOTE;
	v->a[26931] = actions(1075);
	v->a[26932] = 1;
	v->a[26933] = sym__bare_dollar;
	v->a[26934] = state(355);
	v->a[26935] = 1;
	v->a[26936] = aux_sym_command_repeat2;
	v->a[26937] = state(750);
	v->a[26938] = 1;
	v->a[26939] = sym_concatenation;
	small_parse_table_1347(v);
}

void	small_parse_table_1347(t_small_parse_table_array *v)
{
	v->a[26940] = actions(1073);
	v->a[26941] = 3;
	v->a[26942] = sym_raw_string;
	v->a[26943] = sym_number;
	v->a[26944] = sym_word;
	v->a[26945] = state(630);
	v->a[26946] = 5;
	v->a[26947] = sym_arithmetic_expansion;
	v->a[26948] = sym_string;
	v->a[26949] = sym_simple_expansion;
	v->a[26950] = sym_expansion;
	v->a[26951] = sym_command_substitution;
	v->a[26952] = actions(497);
	v->a[26953] = 12;
	v->a[26954] = anon_sym_PIPE;
	v->a[26955] = anon_sym_AMP_AMP;
	v->a[26956] = anon_sym_PIPE_PIPE;
	v->a[26957] = anon_sym_LT;
	v->a[26958] = anon_sym_GT;
	v->a[26959] = anon_sym_GT_GT;
	small_parse_table_1348(v);
}

void	small_parse_table_1348(t_small_parse_table_array *v)
{
	v->a[26960] = anon_sym_LT_AMP;
	v->a[26961] = anon_sym_GT_AMP;
	v->a[26962] = anon_sym_GT_PIPE;
	v->a[26963] = anon_sym_LT_GT;
	v->a[26964] = anon_sym_LT_LT;
	v->a[26965] = anon_sym_LT_LT_DASH;
	v->a[26966] = 7;
	v->a[26967] = actions(3);
	v->a[26968] = 1;
	v->a[26969] = sym_comment;
	v->a[26970] = actions(975);
	v->a[26971] = 1;
	v->a[26972] = sym__bare_dollar;
	v->a[26973] = actions(987);
	v->a[26974] = 1;
	v->a[26975] = aux_sym_concatenation_token1;
	v->a[26976] = actions(989);
	v->a[26977] = 1;
	v->a[26978] = sym__concat;
	v->a[26979] = actions(1083);
	small_parse_table_1349(v);
}

void	small_parse_table_1349(t_small_parse_table_array *v)
{
	v->a[26980] = 1;
	v->a[26981] = anon_sym_LPAREN;
	v->a[26982] = state(446);
	v->a[26983] = 1;
	v->a[26984] = aux_sym_concatenation_repeat1;
	v->a[26985] = actions(967);
	v->a[26986] = 24;
	v->a[26987] = anon_sym_PIPE;
	v->a[26988] = anon_sym_SEMI_SEMI;
	v->a[26989] = anon_sym_AMP_AMP;
	v->a[26990] = anon_sym_PIPE_PIPE;
	v->a[26991] = anon_sym_LT;
	v->a[26992] = anon_sym_GT;
	v->a[26993] = anon_sym_GT_GT;
	v->a[26994] = anon_sym_LT_AMP;
	v->a[26995] = anon_sym_GT_AMP;
	v->a[26996] = anon_sym_GT_PIPE;
	v->a[26997] = anon_sym_LT_GT;
	v->a[26998] = anon_sym_LT_LT;
	v->a[26999] = anon_sym_LT_LT_DASH;
	small_parse_table_1350(v);
}

/* EOF small_parse_table_269.c */
