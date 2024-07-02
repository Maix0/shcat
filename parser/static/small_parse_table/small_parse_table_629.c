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
	v->a[62900] = sym_comment;
	v->a[62901] = actions(2220);
	v->a[62902] = 3;
	v->a[62903] = sym_file_descriptor;
	v->a[62904] = ts_builtin_sym_end;
	v->a[62905] = aux_sym_heredoc_redirect_token1;
	v->a[62906] = actions(2222);
	v->a[62907] = 17;
	v->a[62908] = anon_sym_PIPE;
	v->a[62909] = anon_sym_RPAREN;
	v->a[62910] = anon_sym_SEMI_SEMI;
	v->a[62911] = anon_sym_AMP_AMP;
	v->a[62912] = anon_sym_PIPE_PIPE;
	v->a[62913] = anon_sym_LT;
	v->a[62914] = anon_sym_GT;
	v->a[62915] = anon_sym_GT_GT;
	v->a[62916] = anon_sym_LT_AMP;
	v->a[62917] = anon_sym_GT_AMP;
	v->a[62918] = anon_sym_GT_PIPE;
	v->a[62919] = anon_sym_LT_GT;
	small_parse_table_3146(v);
}

void	small_parse_table_3146(t_small_parse_table_array *v)
{
	v->a[62920] = anon_sym_LT_LT;
	v->a[62921] = anon_sym_LT_LT_DASH;
	v->a[62922] = anon_sym_AMP;
	v->a[62923] = anon_sym_BQUOTE;
	v->a[62924] = anon_sym_SEMI;
	v->a[62925] = 5;
	v->a[62926] = actions(3);
	v->a[62927] = 1;
	v->a[62928] = sym_comment;
	v->a[62929] = actions(702);
	v->a[62930] = 1;
	v->a[62931] = sym_file_descriptor;
	v->a[62932] = actions(765);
	v->a[62933] = 1;
	v->a[62934] = sym_variable_name;
	v->a[62935] = state(1048);
	v->a[62936] = 2;
	v->a[62937] = sym_variable_assignment;
	v->a[62938] = aux_sym__variable_assignments_repeat1;
	v->a[62939] = actions(690);
	small_parse_table_3147(v);
}

void	small_parse_table_3147(t_small_parse_table_array *v)
{
	v->a[62940] = 16;
	v->a[62941] = anon_sym_LT;
	v->a[62942] = anon_sym_GT;
	v->a[62943] = anon_sym_GT_GT;
	v->a[62944] = anon_sym_LT_AMP;
	v->a[62945] = anon_sym_GT_AMP;
	v->a[62946] = anon_sym_GT_PIPE;
	v->a[62947] = anon_sym_LT_GT;
	v->a[62948] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[62949] = anon_sym_DOLLAR;
	v->a[62950] = anon_sym_DQUOTE;
	v->a[62951] = sym_raw_string;
	v->a[62952] = sym_number;
	v->a[62953] = anon_sym_DOLLAR_LBRACE;
	v->a[62954] = anon_sym_DOLLAR_LPAREN;
	v->a[62955] = anon_sym_BQUOTE;
	v->a[62956] = sym_word;
	v->a[62957] = 3;
	v->a[62958] = actions(3);
	v->a[62959] = 1;
	small_parse_table_3148(v);
}

void	small_parse_table_3148(t_small_parse_table_array *v)
{
	v->a[62960] = sym_comment;
	v->a[62961] = actions(792);
	v->a[62962] = 3;
	v->a[62963] = sym_file_descriptor;
	v->a[62964] = sym__concat;
	v->a[62965] = sym_variable_name;
	v->a[62966] = actions(790);
	v->a[62967] = 17;
	v->a[62968] = anon_sym_LT;
	v->a[62969] = anon_sym_GT;
	v->a[62970] = anon_sym_GT_GT;
	v->a[62971] = anon_sym_LT_AMP;
	v->a[62972] = anon_sym_GT_AMP;
	v->a[62973] = anon_sym_GT_PIPE;
	v->a[62974] = anon_sym_LT_GT;
	v->a[62975] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[62976] = aux_sym_concatenation_token1;
	v->a[62977] = anon_sym_DOLLAR;
	v->a[62978] = anon_sym_DQUOTE;
	v->a[62979] = sym_raw_string;
	small_parse_table_3149(v);
}

void	small_parse_table_3149(t_small_parse_table_array *v)
{
	v->a[62980] = sym_number;
	v->a[62981] = anon_sym_DOLLAR_LBRACE;
	v->a[62982] = anon_sym_DOLLAR_LPAREN;
	v->a[62983] = anon_sym_BQUOTE;
	v->a[62984] = sym_word;
	v->a[62985] = 3;
	v->a[62986] = actions(3);
	v->a[62987] = 1;
	v->a[62988] = sym_comment;
	v->a[62989] = actions(2224);
	v->a[62990] = 3;
	v->a[62991] = sym_file_descriptor;
	v->a[62992] = ts_builtin_sym_end;
	v->a[62993] = aux_sym_heredoc_redirect_token1;
	v->a[62994] = actions(2226);
	v->a[62995] = 17;
	v->a[62996] = anon_sym_PIPE;
	v->a[62997] = anon_sym_RPAREN;
	v->a[62998] = anon_sym_SEMI_SEMI;
	v->a[62999] = anon_sym_AMP_AMP;
	small_parse_table_3150(v);
}

/* EOF small_parse_table_629.c */
