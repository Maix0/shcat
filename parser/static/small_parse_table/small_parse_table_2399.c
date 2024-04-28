/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2399.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11995(t_small_parse_table_array *v)
{
	v->a[239900] = state(4866);
	v->a[239901] = 1;
	v->a[239902] = sym_herestring_redirect;
	v->a[239903] = actions(4253);
	v->a[239904] = 2;
	v->a[239905] = anon_sym_PIPE;
	v->a[239906] = anon_sym_PIPE_AMP;
	v->a[239907] = actions(4272);
	v->a[239908] = 2;
	v->a[239909] = sym_file_descriptor;
	v->a[239910] = aux_sym_heredoc_redirect_token1;
	v->a[239911] = state(4283);
	v->a[239912] = 3;
	v->a[239913] = sym_file_redirect;
	v->a[239914] = sym_heredoc_redirect;
	v->a[239915] = aux_sym_redirected_statement_repeat1;
	v->a[239916] = actions(4270);
	v->a[239917] = 20;
	v->a[239918] = anon_sym_SEMI;
	v->a[239919] = anon_sym_PIPE_PIPE;
	small_parse_table_11996(v);
}

void	small_parse_table_11996(t_small_parse_table_array *v)
{
	v->a[239920] = anon_sym_AMP_AMP;
	v->a[239921] = anon_sym_AMP;
	v->a[239922] = anon_sym_LT;
	v->a[239923] = anon_sym_GT;
	v->a[239924] = anon_sym_LT_LT;
	v->a[239925] = anon_sym_GT_GT;
	v->a[239926] = anon_sym_esac;
	v->a[239927] = anon_sym_SEMI_SEMI;
	v->a[239928] = anon_sym_SEMI_AMP;
	v->a[239929] = anon_sym_SEMI_SEMI_AMP;
	v->a[239930] = anon_sym_AMP_GT;
	v->a[239931] = anon_sym_AMP_GT_GT;
	v->a[239932] = anon_sym_LT_AMP;
	v->a[239933] = anon_sym_GT_AMP;
	v->a[239934] = anon_sym_GT_PIPE;
	v->a[239935] = anon_sym_LT_AMP_DASH;
	v->a[239936] = anon_sym_GT_AMP_DASH;
	v->a[239937] = anon_sym_LT_LT_DASH;
	v->a[239938] = 13;
	v->a[239939] = actions(3);
	small_parse_table_11997(v);
}

void	small_parse_table_11997(t_small_parse_table_array *v)
{
	v->a[239940] = 1;
	v->a[239941] = sym_comment;
	v->a[239942] = actions(4259);
	v->a[239943] = 1;
	v->a[239944] = aux_sym_heredoc_redirect_token1;
	v->a[239945] = actions(11284);
	v->a[239946] = 1;
	v->a[239947] = anon_sym_LT_LT_LT;
	v->a[239948] = actions(11286);
	v->a[239949] = 1;
	v->a[239950] = sym_file_descriptor;
	v->a[239951] = state(4866);
	v->a[239952] = 1;
	v->a[239953] = sym_herestring_redirect;
	v->a[239954] = actions(4249);
	v->a[239955] = 2;
	v->a[239956] = anon_sym_SEMI;
	v->a[239957] = anon_sym_AMP;
	v->a[239958] = actions(4251);
	v->a[239959] = 2;
	small_parse_table_11998(v);
}

void	small_parse_table_11998(t_small_parse_table_array *v)
{
	v->a[239960] = anon_sym_PIPE_PIPE;
	v->a[239961] = anon_sym_AMP_AMP;
	v->a[239962] = actions(4253);
	v->a[239963] = 2;
	v->a[239964] = anon_sym_PIPE;
	v->a[239965] = anon_sym_PIPE_AMP;
	v->a[239966] = actions(4255);
	v->a[239967] = 2;
	v->a[239968] = anon_sym_LT_LT;
	v->a[239969] = anon_sym_LT_LT_DASH;
	v->a[239970] = actions(11282);
	v->a[239971] = 2;
	v->a[239972] = anon_sym_LT_AMP_DASH;
	v->a[239973] = anon_sym_GT_AMP_DASH;
	v->a[239974] = state(4283);
	v->a[239975] = 3;
	v->a[239976] = sym_file_redirect;
	v->a[239977] = sym_heredoc_redirect;
	v->a[239978] = aux_sym_redirected_statement_repeat1;
	v->a[239979] = actions(4257);
	small_parse_table_11999(v);
}

void	small_parse_table_11999(t_small_parse_table_array *v)
{
	v->a[239980] = 4;
	v->a[239981] = anon_sym_esac;
	v->a[239982] = anon_sym_SEMI_SEMI;
	v->a[239983] = anon_sym_SEMI_AMP;
	v->a[239984] = anon_sym_SEMI_SEMI_AMP;
	v->a[239985] = actions(11280);
	v->a[239986] = 8;
	v->a[239987] = anon_sym_LT;
	v->a[239988] = anon_sym_GT;
	v->a[239989] = anon_sym_GT_GT;
	v->a[239990] = anon_sym_AMP_GT;
	v->a[239991] = anon_sym_AMP_GT_GT;
	v->a[239992] = anon_sym_LT_AMP;
	v->a[239993] = anon_sym_GT_AMP;
	v->a[239994] = anon_sym_GT_PIPE;
	v->a[239995] = 22;
	v->a[239996] = actions(3);
	v->a[239997] = 1;
	v->a[239998] = sym_comment;
	v->a[239999] = actions(11250);
	small_parse_table_12000(v);
}

/* EOF small_parse_table_2399.c */
