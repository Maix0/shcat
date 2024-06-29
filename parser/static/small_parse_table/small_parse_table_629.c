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
	v->a[62901] = anon_sym_AMP_GT;
	v->a[62902] = anon_sym_AMP_GT_GT;
	v->a[62903] = anon_sym_LT_AMP;
	v->a[62904] = anon_sym_GT_AMP;
	v->a[62905] = anon_sym_GT_PIPE;
	v->a[62906] = anon_sym_LT_AMP_DASH;
	v->a[62907] = anon_sym_GT_AMP_DASH;
	v->a[62908] = anon_sym_LT_LT;
	v->a[62909] = anon_sym_LT_LT_DASH;
	v->a[62910] = anon_sym_AMP;
	v->a[62911] = anon_sym_BQUOTE;
	v->a[62912] = anon_sym_SEMI;
	v->a[62913] = 3;
	v->a[62914] = actions(3);
	v->a[62915] = 1;
	v->a[62916] = sym_comment;
	v->a[62917] = actions(1056);
	v->a[62918] = 4;
	v->a[62919] = sym_file_descriptor;
	small_parse_table_3146(v);
}

void	small_parse_table_3146(t_small_parse_table_array *v)
{
	v->a[62920] = sym__concat;
	v->a[62921] = ts_builtin_sym_end;
	v->a[62922] = aux_sym_heredoc_redirect_token1;
	v->a[62923] = actions(1058);
	v->a[62924] = 21;
	v->a[62925] = anon_sym_PIPE;
	v->a[62926] = anon_sym_RPAREN;
	v->a[62927] = anon_sym_SEMI_SEMI;
	v->a[62928] = anon_sym_AMP_AMP;
	v->a[62929] = anon_sym_PIPE_PIPE;
	v->a[62930] = anon_sym_LT;
	v->a[62931] = anon_sym_GT;
	v->a[62932] = anon_sym_GT_GT;
	v->a[62933] = anon_sym_AMP_GT;
	v->a[62934] = anon_sym_AMP_GT_GT;
	v->a[62935] = anon_sym_LT_AMP;
	v->a[62936] = anon_sym_GT_AMP;
	v->a[62937] = anon_sym_GT_PIPE;
	v->a[62938] = anon_sym_LT_AMP_DASH;
	v->a[62939] = anon_sym_GT_AMP_DASH;
	small_parse_table_3147(v);
}

void	small_parse_table_3147(t_small_parse_table_array *v)
{
	v->a[62940] = anon_sym_LT_LT;
	v->a[62941] = anon_sym_LT_LT_DASH;
	v->a[62942] = anon_sym_AMP;
	v->a[62943] = aux_sym_concatenation_token1;
	v->a[62944] = anon_sym_BQUOTE;
	v->a[62945] = anon_sym_SEMI;
	v->a[62946] = 12;
	v->a[62947] = actions(3);
	v->a[62948] = 1;
	v->a[62949] = sym_comment;
	v->a[62950] = actions(764);
	v->a[62951] = 1;
	v->a[62952] = anon_sym_RPAREN;
	v->a[62953] = actions(766);
	v->a[62954] = 1;
	v->a[62955] = anon_sym_PIPE;
	v->a[62956] = actions(2031);
	v->a[62957] = 1;
	v->a[62958] = aux_sym_heredoc_redirect_token1;
	v->a[62959] = actions(2043);
	small_parse_table_3148(v);
}

void	small_parse_table_3148(t_small_parse_table_array *v)
{
	v->a[62960] = 1;
	v->a[62961] = sym_file_descriptor;
	v->a[62962] = state(750);
	v->a[62963] = 1;
	v->a[62964] = sym_terminator;
	v->a[62965] = actions(802);
	v->a[62966] = 2;
	v->a[62967] = anon_sym_AMP_AMP;
	v->a[62968] = anon_sym_PIPE_PIPE;
	v->a[62969] = actions(804);
	v->a[62970] = 2;
	v->a[62971] = anon_sym_LT_LT;
	v->a[62972] = anon_sym_LT_LT_DASH;
	v->a[62973] = actions(2041);
	v->a[62974] = 2;
	v->a[62975] = anon_sym_LT_AMP_DASH;
	v->a[62976] = anon_sym_GT_AMP_DASH;
	v->a[62977] = actions(800);
	v->a[62978] = 3;
	v->a[62979] = anon_sym_SEMI_SEMI;
	small_parse_table_3149(v);
}

void	small_parse_table_3149(t_small_parse_table_array *v)
{
	v->a[62980] = anon_sym_AMP;
	v->a[62981] = anon_sym_SEMI;
	v->a[62982] = state(1137);
	v->a[62983] = 3;
	v->a[62984] = sym_file_redirect;
	v->a[62985] = sym_heredoc_redirect;
	v->a[62986] = aux_sym_redirected_statement_repeat1;
	v->a[62987] = actions(2039);
	v->a[62988] = 8;
	v->a[62989] = anon_sym_LT;
	v->a[62990] = anon_sym_GT;
	v->a[62991] = anon_sym_GT_GT;
	v->a[62992] = anon_sym_AMP_GT;
	v->a[62993] = anon_sym_AMP_GT_GT;
	v->a[62994] = anon_sym_LT_AMP;
	v->a[62995] = anon_sym_GT_AMP;
	v->a[62996] = anon_sym_GT_PIPE;
	v->a[62997] = 12;
	v->a[62998] = actions(3);
	v->a[62999] = 1;
	small_parse_table_3150(v);
}

/* EOF small_parse_table_629.c */
