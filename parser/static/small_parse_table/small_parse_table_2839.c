/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2839.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_14195(t_small_parse_table_array *v)
{
	v->a[283900] = anon_sym_PIPE_PIPE;
	v->a[283901] = anon_sym_AMP_AMP;
	v->a[283902] = anon_sym_GT_GT;
	v->a[283903] = anon_sym_PIPE_AMP;
	v->a[283904] = anon_sym_RBRACK;
	v->a[283905] = anon_sym_AMP_GT_GT;
	v->a[283906] = anon_sym_GT_PIPE;
	v->a[283907] = anon_sym_LT_AMP_DASH;
	v->a[283908] = anon_sym_GT_AMP_DASH;
	v->a[283909] = anon_sym_LT_LT_DASH;
	v->a[283910] = anon_sym_LT_LT_LT;
	v->a[283911] = 12;
	v->a[283912] = actions(71);
	v->a[283913] = 1;
	v->a[283914] = sym_comment;
	v->a[283915] = actions(4253);
	v->a[283916] = 1;
	v->a[283917] = anon_sym_PIPE;
	v->a[283918] = actions(4348);
	v->a[283919] = 1;
	small_parse_table_14196(v);
}

void	small_parse_table_14196(t_small_parse_table_array *v)
{
	v->a[283920] = anon_sym_PIPE_AMP;
	v->a[283921] = actions(5994);
	v->a[283922] = 1;
	v->a[283923] = anon_sym_LT_LT;
	v->a[283924] = actions(5996);
	v->a[283925] = 1;
	v->a[283926] = anon_sym_LT_LT_DASH;
	v->a[283927] = actions(7374);
	v->a[283928] = 1;
	v->a[283929] = anon_sym_RBRACK;
	v->a[283930] = actions(12686);
	v->a[283931] = 1;
	v->a[283932] = sym_file_descriptor;
	v->a[283933] = actions(5992);
	v->a[283934] = 2;
	v->a[283935] = anon_sym_PIPE_PIPE;
	v->a[283936] = anon_sym_AMP_AMP;
	v->a[283937] = actions(12502);
	v->a[283938] = 2;
	v->a[283939] = anon_sym_LT_AMP_DASH;
	small_parse_table_14197(v);
}

void	small_parse_table_14197(t_small_parse_table_array *v)
{
	v->a[283940] = anon_sym_GT_AMP_DASH;
	v->a[283941] = actions(12500);
	v->a[283942] = 3;
	v->a[283943] = anon_sym_GT_GT;
	v->a[283944] = anon_sym_AMP_GT_GT;
	v->a[283945] = anon_sym_GT_PIPE;
	v->a[283946] = state(5350);
	v->a[283947] = 3;
	v->a[283948] = sym_file_redirect;
	v->a[283949] = sym_heredoc_redirect;
	v->a[283950] = aux_sym_redirected_statement_repeat1;
	v->a[283951] = actions(12498);
	v->a[283952] = 5;
	v->a[283953] = anon_sym_LT;
	v->a[283954] = anon_sym_GT;
	v->a[283955] = anon_sym_AMP_GT;
	v->a[283956] = anon_sym_LT_AMP;
	v->a[283957] = anon_sym_GT_AMP;
	v->a[283958] = 5;
	v->a[283959] = actions(71);
	small_parse_table_14198(v);
}

void	small_parse_table_14198(t_small_parse_table_array *v)
{
	v->a[283960] = 1;
	v->a[283961] = sym_comment;
	v->a[283962] = state(5270);
	v->a[283963] = 1;
	v->a[283964] = aux_sym_concatenation_repeat1;
	v->a[283965] = actions(12622);
	v->a[283966] = 2;
	v->a[283967] = sym__concat;
	v->a[283968] = aux_sym_concatenation_token1;
	v->a[283969] = actions(5695);
	v->a[283970] = 7;
	v->a[283971] = anon_sym_PIPE;
	v->a[283972] = anon_sym_LT;
	v->a[283973] = anon_sym_GT;
	v->a[283974] = anon_sym_LT_LT;
	v->a[283975] = anon_sym_AMP_GT;
	v->a[283976] = anon_sym_LT_AMP;
	v->a[283977] = anon_sym_GT_AMP;
	v->a[283978] = actions(5697);
	v->a[283979] = 11;
	small_parse_table_14199(v);
}

void	small_parse_table_14199(t_small_parse_table_array *v)
{
	v->a[283980] = sym_file_descriptor;
	v->a[283981] = anon_sym_PIPE_PIPE;
	v->a[283982] = anon_sym_AMP_AMP;
	v->a[283983] = anon_sym_GT_GT;
	v->a[283984] = anon_sym_PIPE_AMP;
	v->a[283985] = anon_sym_AMP_GT_GT;
	v->a[283986] = anon_sym_GT_PIPE;
	v->a[283987] = anon_sym_LT_AMP_DASH;
	v->a[283988] = anon_sym_GT_AMP_DASH;
	v->a[283989] = anon_sym_LT_LT_DASH;
	v->a[283990] = anon_sym_LT_LT_LT;
	v->a[283991] = 6;
	v->a[283992] = actions(71);
	v->a[283993] = 1;
	v->a[283994] = sym_comment;
	v->a[283995] = actions(12749);
	v->a[283996] = 1;
	v->a[283997] = sym_variable_name;
	v->a[283998] = state(6737);
	v->a[283999] = 1;
	small_parse_table_14200(v);
}

/* EOF small_parse_table_2839.c */
