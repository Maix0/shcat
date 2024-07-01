/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_629.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3145(t_small_parse_table_array *v)
{
	v->a[62900] = anon_sym_GT_GT;
	v->a[62901] = anon_sym_LT_AMP;
	v->a[62902] = anon_sym_GT_AMP;
	v->a[62903] = anon_sym_GT_PIPE;
	v->a[62904] = 11;
	v->a[62905] = actions(3);
	v->a[62906] = 1;
	v->a[62907] = sym_comment;
	v->a[62908] = actions(680);
	v->a[62909] = 1;
	v->a[62910] = anon_sym_RPAREN;
	v->a[62911] = actions(2009);
	v->a[62912] = 1;
	v->a[62913] = aux_sym_heredoc_redirect_token1;
	v->a[62914] = actions(2011);
	v->a[62915] = 1;
	v->a[62916] = sym_file_descriptor;
	v->a[62917] = state(716);
	v->a[62918] = 1;
	v->a[62919] = sym_terminator;
	small_parse_table_3146(v);
}

void	small_parse_table_3146(t_small_parse_table_array *v)
{
	v->a[62920] = actions(752);
	v->a[62921] = 2;
	v->a[62922] = anon_sym_AMP_AMP;
	v->a[62923] = anon_sym_PIPE_PIPE;
	v->a[62924] = actions(754);
	v->a[62925] = 2;
	v->a[62926] = anon_sym_LT_LT;
	v->a[62927] = anon_sym_LT_LT_DASH;
	v->a[62928] = actions(2007);
	v->a[62929] = 2;
	v->a[62930] = anon_sym_LT_AMP_DASH;
	v->a[62931] = anon_sym_GT_AMP_DASH;
	v->a[62932] = actions(750);
	v->a[62933] = 3;
	v->a[62934] = anon_sym_SEMI_SEMI;
	v->a[62935] = anon_sym_AMP;
	v->a[62936] = anon_sym_SEMI;
	v->a[62937] = state(1128);
	v->a[62938] = 3;
	v->a[62939] = sym_file_redirect;
	small_parse_table_3147(v);
}

void	small_parse_table_3147(t_small_parse_table_array *v)
{
	v->a[62940] = sym_heredoc_redirect;
	v->a[62941] = aux_sym_redirected_statement_repeat1;
	v->a[62942] = actions(2005);
	v->a[62943] = 6;
	v->a[62944] = anon_sym_LT;
	v->a[62945] = anon_sym_GT;
	v->a[62946] = anon_sym_GT_GT;
	v->a[62947] = anon_sym_LT_AMP;
	v->a[62948] = anon_sym_GT_AMP;
	v->a[62949] = anon_sym_GT_PIPE;
	v->a[62950] = 11;
	v->a[62951] = actions(3);
	v->a[62952] = 1;
	v->a[62953] = sym_comment;
	v->a[62954] = actions(682);
	v->a[62955] = 1;
	v->a[62956] = anon_sym_PIPE;
	v->a[62957] = actions(2009);
	v->a[62958] = 1;
	v->a[62959] = aux_sym_heredoc_redirect_token1;
	small_parse_table_3148(v);
}

void	small_parse_table_3148(t_small_parse_table_array *v)
{
	v->a[62960] = actions(2065);
	v->a[62961] = 1;
	v->a[62962] = sym_file_descriptor;
	v->a[62963] = state(886);
	v->a[62964] = 1;
	v->a[62965] = sym_terminator;
	v->a[62966] = actions(754);
	v->a[62967] = 2;
	v->a[62968] = anon_sym_LT_LT;
	v->a[62969] = anon_sym_LT_LT_DASH;
	v->a[62970] = actions(924);
	v->a[62971] = 2;
	v->a[62972] = anon_sym_AMP_AMP;
	v->a[62973] = anon_sym_PIPE_PIPE;
	v->a[62974] = actions(2063);
	v->a[62975] = 2;
	v->a[62976] = anon_sym_LT_AMP_DASH;
	v->a[62977] = anon_sym_GT_AMP_DASH;
	v->a[62978] = actions(750);
	v->a[62979] = 3;
	small_parse_table_3149(v);
}

void	small_parse_table_3149(t_small_parse_table_array *v)
{
	v->a[62980] = anon_sym_SEMI_SEMI;
	v->a[62981] = anon_sym_AMP;
	v->a[62982] = anon_sym_SEMI;
	v->a[62983] = state(1268);
	v->a[62984] = 3;
	v->a[62985] = sym_file_redirect;
	v->a[62986] = sym_heredoc_redirect;
	v->a[62987] = aux_sym_redirected_statement_repeat1;
	v->a[62988] = actions(2061);
	v->a[62989] = 6;
	v->a[62990] = anon_sym_LT;
	v->a[62991] = anon_sym_GT;
	v->a[62992] = anon_sym_GT_GT;
	v->a[62993] = anon_sym_LT_AMP;
	v->a[62994] = anon_sym_GT_AMP;
	v->a[62995] = anon_sym_GT_PIPE;
	v->a[62996] = 5;
	v->a[62997] = actions(3);
	v->a[62998] = 1;
	v->a[62999] = sym_comment;
	small_parse_table_3150(v);
}

/* EOF small_parse_table_629.c */
