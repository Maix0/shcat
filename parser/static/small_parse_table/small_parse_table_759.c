/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_759.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3795(t_small_parse_table_array *v)
{
	v->a[75900] = 1;
	v->a[75901] = sym_comment;
	v->a[75902] = actions(2554);
	v->a[75903] = 1;
	v->a[75904] = sym_variable_name;
	v->a[75905] = actions(2131);
	v->a[75906] = 2;
	v->a[75907] = sym_file_descriptor;
	v->a[75908] = aux_sym_heredoc_redirect_token1;
	v->a[75909] = state(1403);
	v->a[75910] = 2;
	v->a[75911] = sym_variable_assignment;
	v->a[75912] = aux_sym__variable_assignments_repeat1;
	v->a[75913] = actions(2133);
	v->a[75914] = 15;
	v->a[75915] = anon_sym_PIPE;
	v->a[75916] = anon_sym_AMP_AMP;
	v->a[75917] = anon_sym_PIPE_PIPE;
	v->a[75918] = anon_sym_LT;
	v->a[75919] = anon_sym_GT;
	small_parse_table_3796(v);
}

void	small_parse_table_3796(t_small_parse_table_array *v)
{
	v->a[75920] = anon_sym_GT_GT;
	v->a[75921] = anon_sym_AMP_GT;
	v->a[75922] = anon_sym_AMP_GT_GT;
	v->a[75923] = anon_sym_LT_AMP;
	v->a[75924] = anon_sym_GT_AMP;
	v->a[75925] = anon_sym_GT_PIPE;
	v->a[75926] = anon_sym_LT_AMP_DASH;
	v->a[75927] = anon_sym_GT_AMP_DASH;
	v->a[75928] = anon_sym_LT_LT;
	v->a[75929] = anon_sym_LT_LT_DASH;
	v->a[75930] = 5;
	v->a[75931] = actions(1074);
	v->a[75932] = 1;
	v->a[75933] = sym_comment;
	v->a[75934] = state(1410);
	v->a[75935] = 1;
	v->a[75936] = aux_sym_concatenation_repeat1;
	v->a[75937] = actions(2556);
	v->a[75938] = 2;
	v->a[75939] = sym__concat;
	small_parse_table_3797(v);
}

void	small_parse_table_3797(t_small_parse_table_array *v)
{
	v->a[75940] = aux_sym_concatenation_token1;
	v->a[75941] = actions(1090);
	v->a[75942] = 7;
	v->a[75943] = anon_sym_PIPE;
	v->a[75944] = anon_sym_LT;
	v->a[75945] = anon_sym_GT;
	v->a[75946] = anon_sym_AMP_GT;
	v->a[75947] = anon_sym_LT_AMP;
	v->a[75948] = anon_sym_GT_AMP;
	v->a[75949] = anon_sym_LT_LT;
	v->a[75950] = actions(1094);
	v->a[75951] = 10;
	v->a[75952] = sym_file_descriptor;
	v->a[75953] = sym_variable_name;
	v->a[75954] = anon_sym_AMP_AMP;
	v->a[75955] = anon_sym_PIPE_PIPE;
	v->a[75956] = anon_sym_GT_GT;
	v->a[75957] = anon_sym_AMP_GT_GT;
	v->a[75958] = anon_sym_GT_PIPE;
	v->a[75959] = anon_sym_LT_AMP_DASH;
	small_parse_table_3798(v);
}

void	small_parse_table_3798(t_small_parse_table_array *v)
{
	v->a[75960] = anon_sym_GT_AMP_DASH;
	v->a[75961] = anon_sym_LT_LT_DASH;
	v->a[75962] = 9;
	v->a[75963] = actions(3);
	v->a[75964] = 1;
	v->a[75965] = sym_comment;
	v->a[75966] = actions(766);
	v->a[75967] = 1;
	v->a[75968] = anon_sym_PIPE;
	v->a[75969] = actions(2496);
	v->a[75970] = 1;
	v->a[75971] = sym_file_descriptor;
	v->a[75972] = actions(2558);
	v->a[75973] = 1;
	v->a[75974] = aux_sym_heredoc_redirect_token1;
	v->a[75975] = actions(804);
	v->a[75976] = 2;
	v->a[75977] = anon_sym_LT_LT;
	v->a[75978] = anon_sym_LT_LT_DASH;
	v->a[75979] = actions(1470);
	small_parse_table_3799(v);
}

void	small_parse_table_3799(t_small_parse_table_array *v)
{
	v->a[75980] = 2;
	v->a[75981] = anon_sym_AMP_AMP;
	v->a[75982] = anon_sym_PIPE_PIPE;
	v->a[75983] = actions(2492);
	v->a[75984] = 2;
	v->a[75985] = anon_sym_LT_AMP_DASH;
	v->a[75986] = anon_sym_GT_AMP_DASH;
	v->a[75987] = state(1397);
	v->a[75988] = 3;
	v->a[75989] = sym_file_redirect;
	v->a[75990] = sym_heredoc_redirect;
	v->a[75991] = aux_sym_redirected_statement_repeat1;
	v->a[75992] = actions(2490);
	v->a[75993] = 8;
	v->a[75994] = anon_sym_LT;
	v->a[75995] = anon_sym_GT;
	v->a[75996] = anon_sym_GT_GT;
	v->a[75997] = anon_sym_AMP_GT;
	v->a[75998] = anon_sym_AMP_GT_GT;
	v->a[75999] = anon_sym_LT_AMP;
	small_parse_table_3800(v);
}

/* EOF small_parse_table_759.c */
