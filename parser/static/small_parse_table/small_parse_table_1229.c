/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1229.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6145(t_small_parse_table_array *v)
{
	v->a[122900] = anon_sym_SEMI;
	v->a[122901] = state(2295);
	v->a[122902] = 3;
	v->a[122903] = sym_file_redirect;
	v->a[122904] = sym_heredoc_redirect;
	v->a[122905] = aux_sym_redirected_statement_repeat1;
	v->a[122906] = actions(5966);
	v->a[122907] = 8;
	v->a[122908] = anon_sym_LT;
	v->a[122909] = anon_sym_GT;
	v->a[122910] = anon_sym_GT_GT;
	v->a[122911] = anon_sym_AMP_GT;
	v->a[122912] = anon_sym_AMP_GT_GT;
	v->a[122913] = anon_sym_LT_AMP;
	v->a[122914] = anon_sym_GT_AMP;
	v->a[122915] = anon_sym_GT_PIPE;
	v->a[122916] = 6;
	v->a[122917] = actions(3);
	v->a[122918] = 1;
	v->a[122919] = sym_comment;
	small_parse_table_6146(v);
}

void	small_parse_table_6146(t_small_parse_table_array *v)
{
	v->a[122920] = actions(5161);
	v->a[122921] = 1;
	v->a[122922] = aux_sym_concatenation_token1;
	v->a[122923] = actions(7080);
	v->a[122924] = 1;
	v->a[122925] = sym__concat;
	v->a[122926] = state(1853);
	v->a[122927] = 1;
	v->a[122928] = aux_sym_concatenation_repeat1;
	v->a[122929] = actions(2690);
	v->a[122930] = 3;
	v->a[122931] = sym_file_descriptor;
	v->a[122932] = sym_variable_name;
	v->a[122933] = aux_sym_heredoc_redirect_token1;
	v->a[122934] = actions(2688);
	v->a[122935] = 16;
	v->a[122936] = anon_sym_PIPE;
	v->a[122937] = anon_sym_PIPE_AMP;
	v->a[122938] = anon_sym_AMP_AMP;
	v->a[122939] = anon_sym_PIPE_PIPE;
	small_parse_table_6147(v);
}

void	small_parse_table_6147(t_small_parse_table_array *v)
{
	v->a[122940] = anon_sym_LT;
	v->a[122941] = anon_sym_GT;
	v->a[122942] = anon_sym_GT_GT;
	v->a[122943] = anon_sym_AMP_GT;
	v->a[122944] = anon_sym_AMP_GT_GT;
	v->a[122945] = anon_sym_LT_AMP;
	v->a[122946] = anon_sym_GT_AMP;
	v->a[122947] = anon_sym_GT_PIPE;
	v->a[122948] = anon_sym_LT_AMP_DASH;
	v->a[122949] = anon_sym_GT_AMP_DASH;
	v->a[122950] = anon_sym_LT_LT;
	v->a[122951] = anon_sym_LT_LT_DASH;
	v->a[122952] = 5;
	v->a[122953] = actions(3);
	v->a[122954] = 1;
	v->a[122955] = sym_comment;
	v->a[122956] = state(2593);
	v->a[122957] = 1;
	v->a[122958] = aux_sym_pipeline_repeat1;
	v->a[122959] = actions(5439);
	small_parse_table_6148(v);
}

void	small_parse_table_6148(t_small_parse_table_array *v)
{
	v->a[122960] = 2;
	v->a[122961] = sym_file_descriptor;
	v->a[122962] = aux_sym_heredoc_redirect_token1;
	v->a[122963] = actions(7082);
	v->a[122964] = 2;
	v->a[122965] = anon_sym_PIPE;
	v->a[122966] = anon_sym_PIPE_AMP;
	v->a[122967] = actions(5435);
	v->a[122968] = 17;
	v->a[122969] = anon_sym_SEMI_SEMI;
	v->a[122970] = anon_sym_AMP_AMP;
	v->a[122971] = anon_sym_PIPE_PIPE;
	v->a[122972] = anon_sym_LT;
	v->a[122973] = anon_sym_GT;
	v->a[122974] = anon_sym_GT_GT;
	v->a[122975] = anon_sym_AMP_GT;
	v->a[122976] = anon_sym_AMP_GT_GT;
	v->a[122977] = anon_sym_LT_AMP;
	v->a[122978] = anon_sym_GT_AMP;
	v->a[122979] = anon_sym_GT_PIPE;
	small_parse_table_6149(v);
}

void	small_parse_table_6149(t_small_parse_table_array *v)
{
	v->a[122980] = anon_sym_LT_AMP_DASH;
	v->a[122981] = anon_sym_GT_AMP_DASH;
	v->a[122982] = anon_sym_LT_LT;
	v->a[122983] = anon_sym_LT_LT_DASH;
	v->a[122984] = anon_sym_AMP;
	v->a[122985] = anon_sym_SEMI;
	v->a[122986] = 6;
	v->a[122987] = actions(3);
	v->a[122988] = 1;
	v->a[122989] = sym_comment;
	v->a[122990] = actions(5267);
	v->a[122991] = 1;
	v->a[122992] = aux_sym_concatenation_token1;
	v->a[122993] = actions(5269);
	v->a[122994] = 1;
	v->a[122995] = sym__concat;
	v->a[122996] = state(2612);
	v->a[122997] = 1;
	v->a[122998] = aux_sym_concatenation_repeat1;
	v->a[122999] = actions(2664);
	small_parse_table_6150(v);
}

/* EOF small_parse_table_1229.c */
