/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_769.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3845(t_small_parse_table_array *v)
{
	v->a[76900] = sym_raw_string;
	v->a[76901] = sym_number;
	v->a[76902] = sym__comment_word;
	v->a[76903] = sym_word;
	v->a[76904] = state(401);
	v->a[76905] = 5;
	v->a[76906] = sym_arithmetic_expansion;
	v->a[76907] = sym_string;
	v->a[76908] = sym_simple_expansion;
	v->a[76909] = sym_expansion;
	v->a[76910] = sym_command_substitution;
	v->a[76911] = 10;
	v->a[76912] = actions(3);
	v->a[76913] = 1;
	v->a[76914] = sym_comment;
	v->a[76915] = actions(699);
	v->a[76916] = 1;
	v->a[76917] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76918] = actions(701);
	v->a[76919] = 1;
	small_parse_table_3846(v);
}

void	small_parse_table_3846(t_small_parse_table_array *v)
{
	v->a[76920] = anon_sym_DOLLAR;
	v->a[76921] = actions(703);
	v->a[76922] = 1;
	v->a[76923] = anon_sym_DQUOTE;
	v->a[76924] = actions(705);
	v->a[76925] = 1;
	v->a[76926] = anon_sym_DOLLAR_LBRACE;
	v->a[76927] = actions(707);
	v->a[76928] = 1;
	v->a[76929] = anon_sym_DOLLAR_LPAREN;
	v->a[76930] = actions(709);
	v->a[76931] = 1;
	v->a[76932] = anon_sym_BQUOTE;
	v->a[76933] = actions(2605);
	v->a[76934] = 1;
	v->a[76935] = sym__bare_dollar;
	v->a[76936] = actions(2601);
	v->a[76937] = 5;
	v->a[76938] = aux_sym_concatenation_token1;
	v->a[76939] = sym_raw_string;
	small_parse_table_3847(v);
}

void	small_parse_table_3847(t_small_parse_table_array *v)
{
	v->a[76940] = sym_number;
	v->a[76941] = sym__comment_word;
	v->a[76942] = sym_word;
	v->a[76943] = state(619);
	v->a[76944] = 5;
	v->a[76945] = sym_arithmetic_expansion;
	v->a[76946] = sym_string;
	v->a[76947] = sym_simple_expansion;
	v->a[76948] = sym_expansion;
	v->a[76949] = sym_command_substitution;
	v->a[76950] = 5;
	v->a[76951] = actions(870);
	v->a[76952] = 1;
	v->a[76953] = sym_comment;
	v->a[76954] = state(1499);
	v->a[76955] = 1;
	v->a[76956] = aux_sym_concatenation_repeat1;
	v->a[76957] = actions(2941);
	v->a[76958] = 2;
	v->a[76959] = sym__concat;
	small_parse_table_3848(v);
}

void	small_parse_table_3848(t_small_parse_table_array *v)
{
	v->a[76960] = aux_sym_concatenation_token1;
	v->a[76961] = actions(1189);
	v->a[76962] = 6;
	v->a[76963] = anon_sym_PIPE;
	v->a[76964] = anon_sym_LT;
	v->a[76965] = anon_sym_GT;
	v->a[76966] = anon_sym_LT_AMP;
	v->a[76967] = anon_sym_GT_AMP;
	v->a[76968] = anon_sym_LT_LT;
	v->a[76969] = actions(1194);
	v->a[76970] = 8;
	v->a[76971] = sym_file_descriptor;
	v->a[76972] = anon_sym_AMP_AMP;
	v->a[76973] = anon_sym_PIPE_PIPE;
	v->a[76974] = anon_sym_GT_GT;
	v->a[76975] = anon_sym_GT_PIPE;
	v->a[76976] = anon_sym_LT_AMP_DASH;
	v->a[76977] = anon_sym_GT_AMP_DASH;
	v->a[76978] = anon_sym_LT_LT_DASH;
	v->a[76979] = 12;
	small_parse_table_3849(v);
}

void	small_parse_table_3849(t_small_parse_table_array *v)
{
	v->a[76980] = actions(3);
	v->a[76981] = 1;
	v->a[76982] = sym_comment;
	v->a[76983] = actions(2663);
	v->a[76984] = 1;
	v->a[76985] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76986] = actions(2667);
	v->a[76987] = 1;
	v->a[76988] = anon_sym_DQUOTE;
	v->a[76989] = actions(2669);
	v->a[76990] = 1;
	v->a[76991] = anon_sym_DOLLAR_LBRACE;
	v->a[76992] = actions(2671);
	v->a[76993] = 1;
	v->a[76994] = anon_sym_DOLLAR_LPAREN;
	v->a[76995] = actions(2673);
	v->a[76996] = 1;
	v->a[76997] = anon_sym_BQUOTE;
	v->a[76998] = actions(2830);
	v->a[76999] = 1;
	small_parse_table_3850(v);
}

/* EOF small_parse_table_769.c */
