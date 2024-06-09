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
	v->a[76900] = 12;
	v->a[76901] = actions(3);
	v->a[76902] = 1;
	v->a[76903] = sym_comment;
	v->a[76904] = actions(761);
	v->a[76905] = 1;
	v->a[76906] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76907] = actions(765);
	v->a[76908] = 1;
	v->a[76909] = anon_sym_DQUOTE;
	v->a[76910] = actions(767);
	v->a[76911] = 1;
	v->a[76912] = aux_sym_number_token1;
	v->a[76913] = actions(769);
	v->a[76914] = 1;
	v->a[76915] = aux_sym_number_token2;
	v->a[76916] = actions(771);
	v->a[76917] = 1;
	v->a[76918] = anon_sym_DOLLAR_LBRACE;
	v->a[76919] = actions(773);
	small_parse_table_3846(v);
}

void	small_parse_table_3846(t_small_parse_table_array *v)
{
	v->a[76920] = 1;
	v->a[76921] = anon_sym_DOLLAR_LPAREN;
	v->a[76922] = actions(775);
	v->a[76923] = 1;
	v->a[76924] = anon_sym_BQUOTE;
	v->a[76925] = actions(3124);
	v->a[76926] = 1;
	v->a[76927] = anon_sym_DOLLAR;
	v->a[76928] = actions(3126);
	v->a[76929] = 1;
	v->a[76930] = sym__bare_dollar;
	v->a[76931] = actions(3122);
	v->a[76932] = 3;
	v->a[76933] = sym_raw_string;
	v->a[76934] = sym__comment_word;
	v->a[76935] = sym_word;
	v->a[76936] = state(657);
	v->a[76937] = 6;
	v->a[76938] = sym_arithmetic_expansion;
	v->a[76939] = sym_string;
	small_parse_table_3847(v);
}

void	small_parse_table_3847(t_small_parse_table_array *v)
{
	v->a[76940] = sym_number;
	v->a[76941] = sym_simple_expansion;
	v->a[76942] = sym_expansion;
	v->a[76943] = sym_command_substitution;
	v->a[76944] = 3;
	v->a[76945] = actions(1404);
	v->a[76946] = 1;
	v->a[76947] = sym_comment;
	v->a[76948] = actions(1239);
	v->a[76949] = 7;
	v->a[76950] = anon_sym_PIPE;
	v->a[76951] = anon_sym_LT;
	v->a[76952] = anon_sym_GT;
	v->a[76953] = anon_sym_AMP_GT;
	v->a[76954] = anon_sym_LT_AMP;
	v->a[76955] = anon_sym_GT_AMP;
	v->a[76956] = anon_sym_LT_LT;
	v->a[76957] = actions(1241);
	v->a[76958] = 11;
	v->a[76959] = sym_file_descriptor;
	small_parse_table_3848(v);
}

void	small_parse_table_3848(t_small_parse_table_array *v)
{
	v->a[76960] = sym__concat;
	v->a[76961] = anon_sym_AMP_AMP;
	v->a[76962] = anon_sym_PIPE_PIPE;
	v->a[76963] = anon_sym_GT_GT;
	v->a[76964] = anon_sym_AMP_GT_GT;
	v->a[76965] = anon_sym_GT_PIPE;
	v->a[76966] = anon_sym_LT_AMP_DASH;
	v->a[76967] = anon_sym_GT_AMP_DASH;
	v->a[76968] = anon_sym_LT_LT_DASH;
	v->a[76969] = aux_sym_concatenation_token1;
	v->a[76970] = 12;
	v->a[76971] = actions(3);
	v->a[76972] = 1;
	v->a[76973] = sym_comment;
	v->a[76974] = actions(933);
	v->a[76975] = 1;
	v->a[76976] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76977] = actions(935);
	v->a[76978] = 1;
	v->a[76979] = anon_sym_DOLLAR;
	small_parse_table_3849(v);
}

void	small_parse_table_3849(t_small_parse_table_array *v)
{
	v->a[76980] = actions(937);
	v->a[76981] = 1;
	v->a[76982] = anon_sym_DQUOTE;
	v->a[76983] = actions(939);
	v->a[76984] = 1;
	v->a[76985] = aux_sym_number_token1;
	v->a[76986] = actions(941);
	v->a[76987] = 1;
	v->a[76988] = aux_sym_number_token2;
	v->a[76989] = actions(943);
	v->a[76990] = 1;
	v->a[76991] = anon_sym_DOLLAR_LBRACE;
	v->a[76992] = actions(945);
	v->a[76993] = 1;
	v->a[76994] = anon_sym_DOLLAR_LPAREN;
	v->a[76995] = actions(947);
	v->a[76996] = 1;
	v->a[76997] = anon_sym_BQUOTE;
	v->a[76998] = actions(2641);
	v->a[76999] = 2;
	small_parse_table_3850(v);
}

/* EOF small_parse_table_769.c */
