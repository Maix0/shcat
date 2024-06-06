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
	v->a[62900] = sym_test_operator;
	v->a[62901] = sym__brace_start;
	v->a[62902] = actions(4030);
	v->a[62903] = 9;
	v->a[62904] = anon_sym_BANG;
	v->a[62905] = anon_sym_DASH;
	v->a[62906] = anon_sym_STAR;
	v->a[62907] = anon_sym_QMARK;
	v->a[62908] = anon_sym_DOLLAR;
	v->a[62909] = anon_sym_POUND;
	v->a[62910] = anon_sym_AT;
	v->a[62911] = anon_sym_0;
	v->a[62912] = anon_sym__;
	v->a[62913] = actions(826);
	v->a[62914] = 21;
	v->a[62915] = anon_sym_LT;
	v->a[62916] = anon_sym_GT;
	v->a[62917] = anon_sym_GT_GT;
	v->a[62918] = anon_sym_AMP_GT;
	v->a[62919] = anon_sym_AMP_GT_GT;
	small_parse_table_3146(v);
}

void	small_parse_table_3146(t_small_parse_table_array *v)
{
	v->a[62920] = anon_sym_LT_AMP;
	v->a[62921] = anon_sym_GT_AMP;
	v->a[62922] = anon_sym_GT_PIPE;
	v->a[62923] = anon_sym_LT_AMP_DASH;
	v->a[62924] = anon_sym_GT_AMP_DASH;
	v->a[62925] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[62926] = sym__special_character;
	v->a[62927] = anon_sym_DQUOTE;
	v->a[62928] = sym_raw_string;
	v->a[62929] = aux_sym_number_token1;
	v->a[62930] = aux_sym_number_token2;
	v->a[62931] = anon_sym_DOLLAR_LBRACE;
	v->a[62932] = anon_sym_DOLLAR_LPAREN;
	v->a[62933] = anon_sym_BQUOTE;
	v->a[62934] = anon_sym_DOLLAR_BQUOTE;
	v->a[62935] = sym_word;
	v->a[62936] = 6;
	v->a[62937] = actions(3);
	v->a[62938] = 1;
	v->a[62939] = sym_comment;
	small_parse_table_3147(v);
}

void	small_parse_table_3147(t_small_parse_table_array *v)
{
	v->a[62940] = actions(3427);
	v->a[62941] = 1;
	v->a[62942] = aux_sym_concatenation_token1;
	v->a[62943] = actions(3429);
	v->a[62944] = 1;
	v->a[62945] = sym__concat;
	v->a[62946] = state(1333);
	v->a[62947] = 1;
	v->a[62948] = aux_sym_concatenation_repeat1;
	v->a[62949] = actions(2664);
	v->a[62950] = 5;
	v->a[62951] = sym_file_descriptor;
	v->a[62952] = sym_test_operator;
	v->a[62953] = sym__bare_dollar;
	v->a[62954] = sym__brace_start;
	v->a[62955] = aux_sym_heredoc_redirect_token1;
	v->a[62956] = actions(2662);
	v->a[62957] = 28;
	v->a[62958] = anon_sym_PIPE;
	v->a[62959] = anon_sym_PIPE_AMP;
	small_parse_table_3148(v);
}

void	small_parse_table_3148(t_small_parse_table_array *v)
{
	v->a[62960] = anon_sym_AMP_AMP;
	v->a[62961] = anon_sym_PIPE_PIPE;
	v->a[62962] = anon_sym_LT;
	v->a[62963] = anon_sym_GT;
	v->a[62964] = anon_sym_GT_GT;
	v->a[62965] = anon_sym_AMP_GT;
	v->a[62966] = anon_sym_AMP_GT_GT;
	v->a[62967] = anon_sym_LT_AMP;
	v->a[62968] = anon_sym_GT_AMP;
	v->a[62969] = anon_sym_GT_PIPE;
	v->a[62970] = anon_sym_LT_AMP_DASH;
	v->a[62971] = anon_sym_GT_AMP_DASH;
	v->a[62972] = anon_sym_LT_LT;
	v->a[62973] = anon_sym_LT_LT_DASH;
	v->a[62974] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[62975] = anon_sym_DOLLAR;
	v->a[62976] = sym__special_character;
	v->a[62977] = anon_sym_DQUOTE;
	v->a[62978] = sym_raw_string;
	v->a[62979] = aux_sym_number_token1;
	small_parse_table_3149(v);
}

void	small_parse_table_3149(t_small_parse_table_array *v)
{
	v->a[62980] = aux_sym_number_token2;
	v->a[62981] = anon_sym_DOLLAR_LBRACE;
	v->a[62982] = anon_sym_DOLLAR_LPAREN;
	v->a[62983] = anon_sym_BQUOTE;
	v->a[62984] = anon_sym_DOLLAR_BQUOTE;
	v->a[62985] = sym_word;
	v->a[62986] = 6;
	v->a[62987] = actions(3);
	v->a[62988] = 1;
	v->a[62989] = sym_comment;
	v->a[62990] = actions(3423);
	v->a[62991] = 1;
	v->a[62992] = aux_sym_concatenation_token1;
	v->a[62993] = actions(3425);
	v->a[62994] = 1;
	v->a[62995] = sym__concat;
	v->a[62996] = state(1344);
	v->a[62997] = 1;
	v->a[62998] = aux_sym_concatenation_repeat1;
	v->a[62999] = actions(2719);
	small_parse_table_3150(v);
}

/* EOF small_parse_table_629.c */
