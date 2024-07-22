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
	v->a[62900] = actions(3);
	v->a[62901] = 1;
	v->a[62902] = sym_comment;
	v->a[62903] = actions(1945);
	v->a[62904] = 1;
	v->a[62905] = sym_file_descriptor;
	v->a[62906] = actions(2021);
	v->a[62907] = 1;
	v->a[62908] = aux_sym_heredoc_redirect_token1;
	v->a[62909] = state(549);
	v->a[62910] = 1;
	v->a[62911] = sym_terminator;
	v->a[62912] = actions(790);
	v->a[62913] = 2;
	v->a[62914] = anon_sym_LT_LT;
	v->a[62915] = anon_sym_LT_LT_DASH;
	v->a[62916] = actions(1028);
	v->a[62917] = 2;
	v->a[62918] = anon_sym_AMP_AMP;
	v->a[62919] = anon_sym_PIPE_PIPE;
	small_parse_table_3146(v);
}

void	small_parse_table_3146(t_small_parse_table_array *v)
{
	v->a[62920] = actions(1085);
	v->a[62921] = 2;
	v->a[62922] = anon_sym_SEMI_SEMI;
	v->a[62923] = anon_sym_SEMI;
	v->a[62924] = state(1194);
	v->a[62925] = 3;
	v->a[62926] = sym_file_redirect;
	v->a[62927] = sym_heredoc_redirect;
	v->a[62928] = aux_sym_redirected_statement_repeat1;
	v->a[62929] = actions(1941);
	v->a[62930] = 7;
	v->a[62931] = anon_sym_LT;
	v->a[62932] = anon_sym_GT;
	v->a[62933] = anon_sym_GT_GT;
	v->a[62934] = anon_sym_LT_AMP;
	v->a[62935] = anon_sym_GT_AMP;
	v->a[62936] = anon_sym_GT_PIPE;
	v->a[62937] = anon_sym_LT_GT;
	v->a[62938] = 3;
	v->a[62939] = actions(3);
	small_parse_table_3147(v);
}

void	small_parse_table_3147(t_small_parse_table_array *v)
{
	v->a[62940] = 1;
	v->a[62941] = sym_comment;
	v->a[62942] = actions(2287);
	v->a[62943] = 3;
	v->a[62944] = sym_file_descriptor;
	v->a[62945] = ts_builtin_sym_end;
	v->a[62946] = aux_sym_heredoc_redirect_token1;
	v->a[62947] = actions(2289);
	v->a[62948] = 16;
	v->a[62949] = anon_sym_PIPE;
	v->a[62950] = anon_sym_RPAREN;
	v->a[62951] = anon_sym_SEMI_SEMI;
	v->a[62952] = anon_sym_AMP_AMP;
	v->a[62953] = anon_sym_PIPE_PIPE;
	v->a[62954] = anon_sym_LT;
	v->a[62955] = anon_sym_GT;
	v->a[62956] = anon_sym_GT_GT;
	v->a[62957] = anon_sym_LT_AMP;
	v->a[62958] = anon_sym_GT_AMP;
	v->a[62959] = anon_sym_GT_PIPE;
	small_parse_table_3148(v);
}

void	small_parse_table_3148(t_small_parse_table_array *v)
{
	v->a[62960] = anon_sym_LT_GT;
	v->a[62961] = anon_sym_LT_LT;
	v->a[62962] = anon_sym_LT_LT_DASH;
	v->a[62963] = anon_sym_BQUOTE;
	v->a[62964] = anon_sym_SEMI;
	v->a[62965] = 7;
	v->a[62966] = actions(3);
	v->a[62967] = 1;
	v->a[62968] = sym_comment;
	v->a[62969] = actions(1945);
	v->a[62970] = 1;
	v->a[62971] = sym_file_descriptor;
	v->a[62972] = actions(1951);
	v->a[62973] = 1;
	v->a[62974] = aux_sym_heredoc_redirect_token1;
	v->a[62975] = actions(790);
	v->a[62976] = 2;
	v->a[62977] = anon_sym_LT_LT;
	v->a[62978] = anon_sym_LT_LT_DASH;
	v->a[62979] = state(1187);
	small_parse_table_3149(v);
}

void	small_parse_table_3149(t_small_parse_table_array *v)
{
	v->a[62980] = 3;
	v->a[62981] = sym_file_redirect;
	v->a[62982] = sym_heredoc_redirect;
	v->a[62983] = aux_sym_redirected_statement_repeat1;
	v->a[62984] = actions(1949);
	v->a[62985] = 5;
	v->a[62986] = anon_sym_PIPE;
	v->a[62987] = anon_sym_SEMI_SEMI;
	v->a[62988] = anon_sym_AMP_AMP;
	v->a[62989] = anon_sym_PIPE_PIPE;
	v->a[62990] = anon_sym_SEMI;
	v->a[62991] = actions(1941);
	v->a[62992] = 7;
	v->a[62993] = anon_sym_LT;
	v->a[62994] = anon_sym_GT;
	v->a[62995] = anon_sym_GT_GT;
	v->a[62996] = anon_sym_LT_AMP;
	v->a[62997] = anon_sym_GT_AMP;
	v->a[62998] = anon_sym_GT_PIPE;
	v->a[62999] = anon_sym_LT_GT;
	small_parse_table_3150(v);
}

/* EOF small_parse_table_629.c */
