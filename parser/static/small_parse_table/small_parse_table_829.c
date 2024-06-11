/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_829.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4145(t_small_parse_table_array *v)
{
	v->a[82900] = actions(3019);
	v->a[82901] = 2;
	v->a[82902] = anon_sym_LT_AMP_DASH;
	v->a[82903] = anon_sym_GT_AMP_DASH;
	v->a[82904] = state(1610);
	v->a[82905] = 2;
	v->a[82906] = sym_file_redirect;
	v->a[82907] = aux_sym_redirected_statement_repeat2;
	v->a[82908] = actions(2685);
	v->a[82909] = 3;
	v->a[82910] = anon_sym_AMP_AMP;
	v->a[82911] = anon_sym_PIPE_PIPE;
	v->a[82912] = anon_sym_LT_LT_DASH;
	v->a[82913] = actions(3017);
	v->a[82914] = 3;
	v->a[82915] = anon_sym_GT_GT;
	v->a[82916] = anon_sym_AMP_GT_GT;
	v->a[82917] = anon_sym_GT_PIPE;
	v->a[82918] = actions(3015);
	v->a[82919] = 5;
	small_parse_table_4146(v);
}

void	small_parse_table_4146(t_small_parse_table_array *v)
{
	v->a[82920] = anon_sym_LT;
	v->a[82921] = anon_sym_GT;
	v->a[82922] = anon_sym_AMP_GT;
	v->a[82923] = anon_sym_LT_AMP;
	v->a[82924] = anon_sym_GT_AMP;
	v->a[82925] = 9;
	v->a[82926] = actions(1094);
	v->a[82927] = 1;
	v->a[82928] = sym_comment;
	v->a[82929] = actions(3021);
	v->a[82930] = 1;
	v->a[82931] = anon_sym_LT_LT;
	v->a[82932] = actions(3023);
	v->a[82933] = 1;
	v->a[82934] = anon_sym_LT_LT_DASH;
	v->a[82935] = actions(3025);
	v->a[82936] = 1;
	v->a[82937] = sym_file_descriptor;
	v->a[82938] = actions(3019);
	v->a[82939] = 2;
	small_parse_table_4147(v);
}

void	small_parse_table_4147(t_small_parse_table_array *v)
{
	v->a[82940] = anon_sym_LT_AMP_DASH;
	v->a[82941] = anon_sym_GT_AMP_DASH;
	v->a[82942] = actions(3068);
	v->a[82943] = 2;
	v->a[82944] = anon_sym_AMP_AMP;
	v->a[82945] = anon_sym_PIPE_PIPE;
	v->a[82946] = actions(3017);
	v->a[82947] = 3;
	v->a[82948] = anon_sym_GT_GT;
	v->a[82949] = anon_sym_AMP_GT_GT;
	v->a[82950] = anon_sym_GT_PIPE;
	v->a[82951] = state(1559);
	v->a[82952] = 3;
	v->a[82953] = sym_file_redirect;
	v->a[82954] = sym_heredoc_redirect;
	v->a[82955] = aux_sym_redirected_statement_repeat1;
	v->a[82956] = actions(3015);
	v->a[82957] = 5;
	v->a[82958] = anon_sym_LT;
	v->a[82959] = anon_sym_GT;
	small_parse_table_4148(v);
}

void	small_parse_table_4148(t_small_parse_table_array *v)
{
	v->a[82960] = anon_sym_AMP_GT;
	v->a[82961] = anon_sym_LT_AMP;
	v->a[82962] = anon_sym_GT_AMP;
	v->a[82963] = 3;
	v->a[82964] = actions(1094);
	v->a[82965] = 1;
	v->a[82966] = sym_comment;
	v->a[82967] = actions(999);
	v->a[82968] = 7;
	v->a[82969] = anon_sym_PIPE;
	v->a[82970] = anon_sym_LT;
	v->a[82971] = anon_sym_GT;
	v->a[82972] = anon_sym_AMP_GT;
	v->a[82973] = anon_sym_LT_AMP;
	v->a[82974] = anon_sym_GT_AMP;
	v->a[82975] = anon_sym_LT_LT;
	v->a[82976] = actions(1004);
	v->a[82977] = 11;
	v->a[82978] = sym_file_descriptor;
	v->a[82979] = sym__concat;
	small_parse_table_4149(v);
}

void	small_parse_table_4149(t_small_parse_table_array *v)
{
	v->a[82980] = anon_sym_AMP_AMP;
	v->a[82981] = anon_sym_PIPE_PIPE;
	v->a[82982] = anon_sym_GT_GT;
	v->a[82983] = anon_sym_AMP_GT_GT;
	v->a[82984] = anon_sym_GT_PIPE;
	v->a[82985] = anon_sym_LT_AMP_DASH;
	v->a[82986] = anon_sym_GT_AMP_DASH;
	v->a[82987] = anon_sym_LT_LT_DASH;
	v->a[82988] = aux_sym_concatenation_token1;
	v->a[82989] = 3;
	v->a[82990] = actions(1094);
	v->a[82991] = 1;
	v->a[82992] = sym_comment;
	v->a[82993] = actions(1179);
	v->a[82994] = 7;
	v->a[82995] = anon_sym_PIPE;
	v->a[82996] = anon_sym_LT;
	v->a[82997] = anon_sym_GT;
	v->a[82998] = anon_sym_AMP_GT;
	v->a[82999] = anon_sym_LT_AMP;
	small_parse_table_4150(v);
}

/* EOF small_parse_table_829.c */
