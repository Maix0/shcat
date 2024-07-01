/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_579.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2895(t_small_parse_table_array *v)
{
	v->a[57900] = 5;
	v->a[57901] = actions(3);
	v->a[57902] = 1;
	v->a[57903] = sym_comment;
	v->a[57904] = actions(1910);
	v->a[57905] = 1;
	v->a[57906] = sym_variable_name;
	v->a[57907] = actions(1908);
	v->a[57908] = 2;
	v->a[57909] = sym_file_descriptor;
	v->a[57910] = aux_sym_heredoc_redirect_token1;
	v->a[57911] = state(1061);
	v->a[57912] = 2;
	v->a[57913] = sym_variable_assignment;
	v->a[57914] = aux_sym__variable_assignments_repeat1;
	v->a[57915] = actions(1906);
	v->a[57916] = 16;
	v->a[57917] = anon_sym_PIPE;
	v->a[57918] = anon_sym_SEMI_SEMI;
	v->a[57919] = anon_sym_AMP_AMP;
	small_parse_table_2896(v);
}

void	small_parse_table_2896(t_small_parse_table_array *v)
{
	v->a[57920] = anon_sym_PIPE_PIPE;
	v->a[57921] = anon_sym_LT;
	v->a[57922] = anon_sym_GT;
	v->a[57923] = anon_sym_GT_GT;
	v->a[57924] = anon_sym_LT_AMP;
	v->a[57925] = anon_sym_GT_AMP;
	v->a[57926] = anon_sym_GT_PIPE;
	v->a[57927] = anon_sym_LT_GT;
	v->a[57928] = anon_sym_LT_LT;
	v->a[57929] = anon_sym_LT_LT_DASH;
	v->a[57930] = anon_sym_AMP;
	v->a[57931] = anon_sym_BQUOTE;
	v->a[57932] = anon_sym_SEMI;
	v->a[57933] = 11;
	v->a[57934] = actions(3);
	v->a[57935] = 1;
	v->a[57936] = sym_comment;
	v->a[57937] = actions(736);
	v->a[57938] = 1;
	v->a[57939] = anon_sym_PIPE;
	small_parse_table_2897(v);
}

void	small_parse_table_2897(t_small_parse_table_array *v)
{
	v->a[57940] = actions(842);
	v->a[57941] = 1;
	v->a[57942] = anon_sym_SEMI_SEMI;
	v->a[57943] = actions(1865);
	v->a[57944] = 1;
	v->a[57945] = aux_sym_heredoc_redirect_token1;
	v->a[57946] = actions(1889);
	v->a[57947] = 1;
	v->a[57948] = sym_file_descriptor;
	v->a[57949] = state(667);
	v->a[57950] = 1;
	v->a[57951] = sym_terminator;
	v->a[57952] = actions(740);
	v->a[57953] = 2;
	v->a[57954] = anon_sym_AMP;
	v->a[57955] = anon_sym_SEMI;
	v->a[57956] = actions(744);
	v->a[57957] = 2;
	v->a[57958] = anon_sym_LT_LT;
	v->a[57959] = anon_sym_LT_LT_DASH;
	small_parse_table_2898(v);
}

void	small_parse_table_2898(t_small_parse_table_array *v)
{
	v->a[57960] = actions(955);
	v->a[57961] = 2;
	v->a[57962] = anon_sym_AMP_AMP;
	v->a[57963] = anon_sym_PIPE_PIPE;
	v->a[57964] = state(1194);
	v->a[57965] = 3;
	v->a[57966] = sym_file_redirect;
	v->a[57967] = sym_heredoc_redirect;
	v->a[57968] = aux_sym_redirected_statement_repeat1;
	v->a[57969] = actions(1887);
	v->a[57970] = 7;
	v->a[57971] = anon_sym_LT;
	v->a[57972] = anon_sym_GT;
	v->a[57973] = anon_sym_GT_GT;
	v->a[57974] = anon_sym_LT_AMP;
	v->a[57975] = anon_sym_GT_AMP;
	v->a[57976] = anon_sym_GT_PIPE;
	v->a[57977] = anon_sym_LT_GT;
	v->a[57978] = 10;
	v->a[57979] = actions(3);
	small_parse_table_2899(v);
}

void	small_parse_table_2899(t_small_parse_table_array *v)
{
	v->a[57980] = 1;
	v->a[57981] = sym_comment;
	v->a[57982] = actions(736);
	v->a[57983] = 1;
	v->a[57984] = anon_sym_PIPE;
	v->a[57985] = actions(1889);
	v->a[57986] = 1;
	v->a[57987] = sym_file_descriptor;
	v->a[57988] = actions(1912);
	v->a[57989] = 1;
	v->a[57990] = aux_sym_heredoc_redirect_token1;
	v->a[57991] = state(745);
	v->a[57992] = 1;
	v->a[57993] = sym_terminator;
	v->a[57994] = actions(744);
	v->a[57995] = 2;
	v->a[57996] = anon_sym_LT_LT;
	v->a[57997] = anon_sym_LT_LT_DASH;
	v->a[57998] = actions(955);
	v->a[57999] = 2;
	small_parse_table_2900(v);
}

/* EOF small_parse_table_579.c */
