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
	v->a[62900] = 1;
	v->a[62901] = sym__concat;
	v->a[62902] = state(987);
	v->a[62903] = 1;
	v->a[62904] = aux_sym_concatenation_repeat1;
	v->a[62905] = actions(1202);
	v->a[62906] = 2;
	v->a[62907] = sym_file_descriptor;
	v->a[62908] = sym_variable_name;
	v->a[62909] = actions(1198);
	v->a[62910] = 20;
	v->a[62911] = anon_sym_LT;
	v->a[62912] = anon_sym_GT;
	v->a[62913] = anon_sym_GT_GT;
	v->a[62914] = anon_sym_AMP_GT;
	v->a[62915] = anon_sym_AMP_GT_GT;
	v->a[62916] = anon_sym_LT_AMP;
	v->a[62917] = anon_sym_GT_AMP;
	v->a[62918] = anon_sym_GT_PIPE;
	v->a[62919] = anon_sym_LT_AMP_DASH;
	small_parse_table_3146(v);
}

void	small_parse_table_3146(t_small_parse_table_array *v)
{
	v->a[62920] = anon_sym_GT_AMP_DASH;
	v->a[62921] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[62922] = anon_sym_DOLLAR;
	v->a[62923] = anon_sym_DQUOTE;
	v->a[62924] = sym_raw_string;
	v->a[62925] = aux_sym_number_token1;
	v->a[62926] = aux_sym_number_token2;
	v->a[62927] = anon_sym_DOLLAR_LBRACE;
	v->a[62928] = anon_sym_DOLLAR_LPAREN;
	v->a[62929] = anon_sym_BQUOTE;
	v->a[62930] = sym_word;
	v->a[62931] = 6;
	v->a[62932] = actions(3);
	v->a[62933] = 1;
	v->a[62934] = sym_comment;
	v->a[62935] = actions(2213);
	v->a[62936] = 1;
	v->a[62937] = aux_sym_concatenation_token1;
	v->a[62938] = actions(2215);
	v->a[62939] = 1;
	small_parse_table_3147(v);
}

void	small_parse_table_3147(t_small_parse_table_array *v)
{
	v->a[62940] = sym__concat;
	v->a[62941] = state(987);
	v->a[62942] = 1;
	v->a[62943] = aux_sym_concatenation_repeat1;
	v->a[62944] = actions(565);
	v->a[62945] = 2;
	v->a[62946] = sym_file_descriptor;
	v->a[62947] = sym_variable_name;
	v->a[62948] = actions(567);
	v->a[62949] = 20;
	v->a[62950] = anon_sym_LT;
	v->a[62951] = anon_sym_GT;
	v->a[62952] = anon_sym_GT_GT;
	v->a[62953] = anon_sym_AMP_GT;
	v->a[62954] = anon_sym_AMP_GT_GT;
	v->a[62955] = anon_sym_LT_AMP;
	v->a[62956] = anon_sym_GT_AMP;
	v->a[62957] = anon_sym_GT_PIPE;
	v->a[62958] = anon_sym_LT_AMP_DASH;
	v->a[62959] = anon_sym_GT_AMP_DASH;
	small_parse_table_3148(v);
}

void	small_parse_table_3148(t_small_parse_table_array *v)
{
	v->a[62960] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[62961] = anon_sym_DOLLAR;
	v->a[62962] = anon_sym_DQUOTE;
	v->a[62963] = sym_raw_string;
	v->a[62964] = aux_sym_number_token1;
	v->a[62965] = aux_sym_number_token2;
	v->a[62966] = anon_sym_DOLLAR_LBRACE;
	v->a[62967] = anon_sym_DOLLAR_LPAREN;
	v->a[62968] = anon_sym_BQUOTE;
	v->a[62969] = sym_word;
	v->a[62970] = 4;
	v->a[62971] = actions(3);
	v->a[62972] = 1;
	v->a[62973] = sym_comment;
	v->a[62974] = actions(1071);
	v->a[62975] = 3;
	v->a[62976] = sym_file_descriptor;
	v->a[62977] = ts_builtin_sym_end;
	v->a[62978] = aux_sym_heredoc_redirect_token1;
	v->a[62979] = state(1043);
	small_parse_table_3149(v);
}

void	small_parse_table_3149(t_small_parse_table_array *v)
{
	v->a[62980] = 3;
	v->a[62981] = sym_file_redirect;
	v->a[62982] = sym_heredoc_redirect;
	v->a[62983] = aux_sym_redirected_statement_repeat1;
	v->a[62984] = actions(1004);
	v->a[62985] = 18;
	v->a[62986] = anon_sym_PIPE;
	v->a[62987] = anon_sym_SEMI_SEMI;
	v->a[62988] = anon_sym_AMP_AMP;
	v->a[62989] = anon_sym_PIPE_PIPE;
	v->a[62990] = anon_sym_LT;
	v->a[62991] = anon_sym_GT;
	v->a[62992] = anon_sym_GT_GT;
	v->a[62993] = anon_sym_AMP_GT;
	v->a[62994] = anon_sym_AMP_GT_GT;
	v->a[62995] = anon_sym_LT_AMP;
	v->a[62996] = anon_sym_GT_AMP;
	v->a[62997] = anon_sym_GT_PIPE;
	v->a[62998] = anon_sym_LT_AMP_DASH;
	v->a[62999] = anon_sym_GT_AMP_DASH;
	small_parse_table_3150(v);
}

/* EOF small_parse_table_629.c */
