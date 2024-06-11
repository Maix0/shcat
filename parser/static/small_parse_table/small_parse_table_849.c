/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_849.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4245(t_small_parse_table_array *v)
{
	v->a[84900] = sym_number;
	v->a[84901] = sym__comment_word;
	v->a[84902] = sym_word;
	v->a[84903] = state(630);
	v->a[84904] = 5;
	v->a[84905] = sym_arithmetic_expansion;
	v->a[84906] = sym_string;
	v->a[84907] = sym_simple_expansion;
	v->a[84908] = sym_expansion;
	v->a[84909] = sym_command_substitution;
	v->a[84910] = 10;
	v->a[84911] = actions(3);
	v->a[84912] = 1;
	v->a[84913] = sym_comment;
	v->a[84914] = actions(884);
	v->a[84915] = 1;
	v->a[84916] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[84917] = actions(886);
	v->a[84918] = 1;
	v->a[84919] = anon_sym_DOLLAR;
	small_parse_table_4246(v);
}

void	small_parse_table_4246(t_small_parse_table_array *v)
{
	v->a[84920] = actions(888);
	v->a[84921] = 1;
	v->a[84922] = anon_sym_DQUOTE;
	v->a[84923] = actions(890);
	v->a[84924] = 1;
	v->a[84925] = anon_sym_DOLLAR_LBRACE;
	v->a[84926] = actions(892);
	v->a[84927] = 1;
	v->a[84928] = anon_sym_DOLLAR_LPAREN;
	v->a[84929] = actions(894);
	v->a[84930] = 1;
	v->a[84931] = anon_sym_BQUOTE;
	v->a[84932] = actions(3344);
	v->a[84933] = 1;
	v->a[84934] = sym__bare_dollar;
	v->a[84935] = actions(3342);
	v->a[84936] = 5;
	v->a[84937] = aux_sym_concatenation_token1;
	v->a[84938] = sym_raw_string;
	v->a[84939] = sym_number;
	small_parse_table_4247(v);
}

void	small_parse_table_4247(t_small_parse_table_array *v)
{
	v->a[84940] = sym__comment_word;
	v->a[84941] = sym_word;
	v->a[84942] = state(1847);
	v->a[84943] = 5;
	v->a[84944] = sym_arithmetic_expansion;
	v->a[84945] = sym_string;
	v->a[84946] = sym_simple_expansion;
	v->a[84947] = sym_expansion;
	v->a[84948] = sym_command_substitution;
	v->a[84949] = 10;
	v->a[84950] = actions(3);
	v->a[84951] = 1;
	v->a[84952] = sym_comment;
	v->a[84953] = actions(824);
	v->a[84954] = 1;
	v->a[84955] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[84956] = actions(826);
	v->a[84957] = 1;
	v->a[84958] = anon_sym_DOLLAR;
	v->a[84959] = actions(828);
	small_parse_table_4248(v);
}

void	small_parse_table_4248(t_small_parse_table_array *v)
{
	v->a[84960] = 1;
	v->a[84961] = anon_sym_DQUOTE;
	v->a[84962] = actions(830);
	v->a[84963] = 1;
	v->a[84964] = anon_sym_DOLLAR_LBRACE;
	v->a[84965] = actions(832);
	v->a[84966] = 1;
	v->a[84967] = anon_sym_DOLLAR_LPAREN;
	v->a[84968] = actions(834);
	v->a[84969] = 1;
	v->a[84970] = anon_sym_BQUOTE;
	v->a[84971] = actions(3348);
	v->a[84972] = 1;
	v->a[84973] = sym__bare_dollar;
	v->a[84974] = actions(3346);
	v->a[84975] = 5;
	v->a[84976] = aux_sym_concatenation_token1;
	v->a[84977] = sym_raw_string;
	v->a[84978] = sym_number;
	v->a[84979] = sym__comment_word;
	small_parse_table_4249(v);
}

void	small_parse_table_4249(t_small_parse_table_array *v)
{
	v->a[84980] = sym_word;
	v->a[84981] = state(1185);
	v->a[84982] = 5;
	v->a[84983] = sym_arithmetic_expansion;
	v->a[84984] = sym_string;
	v->a[84985] = sym_simple_expansion;
	v->a[84986] = sym_expansion;
	v->a[84987] = sym_command_substitution;
	v->a[84988] = 5;
	v->a[84989] = actions(1094);
	v->a[84990] = 1;
	v->a[84991] = sym_comment;
	v->a[84992] = actions(3350);
	v->a[84993] = 1;
	v->a[84994] = anon_sym_PIPE;
	v->a[84995] = state(1648);
	v->a[84996] = 1;
	v->a[84997] = aux_sym_pipeline_repeat1;
	v->a[84998] = actions(2321);
	v->a[84999] = 6;
	small_parse_table_4250(v);
}

/* EOF small_parse_table_849.c */
