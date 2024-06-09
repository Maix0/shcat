/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_409.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2045(t_small_parse_table_array *v)
{
	v->a[40900] = anon_sym_AMP_AMP;
	v->a[40901] = anon_sym_PIPE_PIPE;
	v->a[40902] = anon_sym_LT;
	v->a[40903] = anon_sym_GT;
	v->a[40904] = anon_sym_GT_GT;
	v->a[40905] = anon_sym_AMP_GT;
	v->a[40906] = anon_sym_AMP_GT_GT;
	v->a[40907] = anon_sym_LT_AMP;
	v->a[40908] = anon_sym_GT_AMP;
	v->a[40909] = anon_sym_GT_PIPE;
	v->a[40910] = anon_sym_LT_AMP_DASH;
	v->a[40911] = anon_sym_GT_AMP_DASH;
	v->a[40912] = anon_sym_LT_LT;
	v->a[40913] = anon_sym_LT_LT_DASH;
	v->a[40914] = aux_sym_heredoc_redirect_token1;
	v->a[40915] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[40916] = anon_sym_AMP;
	v->a[40917] = aux_sym_concatenation_token1;
	v->a[40918] = anon_sym_DOLLAR;
	v->a[40919] = anon_sym_DQUOTE;
	small_parse_table_2046(v);
}

void	small_parse_table_2046(t_small_parse_table_array *v)
{
	v->a[40920] = sym_raw_string;
	v->a[40921] = aux_sym_number_token1;
	v->a[40922] = aux_sym_number_token2;
	v->a[40923] = anon_sym_DOLLAR_LBRACE;
	v->a[40924] = anon_sym_DOLLAR_LPAREN;
	v->a[40925] = anon_sym_BQUOTE;
	v->a[40926] = sym_word;
	v->a[40927] = anon_sym_SEMI;
	v->a[40928] = 15;
	v->a[40929] = actions(1404);
	v->a[40930] = 1;
	v->a[40931] = sym_comment;
	v->a[40932] = actions(1418);
	v->a[40933] = 1;
	v->a[40934] = anon_sym_AMP;
	v->a[40935] = actions(1420);
	v->a[40936] = 1;
	v->a[40937] = anon_sym_PIPE;
	v->a[40938] = actions(1422);
	v->a[40939] = 1;
	small_parse_table_2047(v);
}

void	small_parse_table_2047(t_small_parse_table_array *v)
{
	v->a[40940] = anon_sym_AMP_AMP;
	v->a[40941] = actions(1424);
	v->a[40942] = 1;
	v->a[40943] = anon_sym_PIPE_PIPE;
	v->a[40944] = actions(1428);
	v->a[40945] = 1;
	v->a[40946] = anon_sym_CARET;
	v->a[40947] = actions(1535);
	v->a[40948] = 1;
	v->a[40949] = anon_sym_EQ;
	v->a[40950] = actions(1402);
	v->a[40951] = 2;
	v->a[40952] = anon_sym_PLUS_PLUS2;
	v->a[40953] = anon_sym_DASH_DASH2;
	v->a[40954] = actions(1408);
	v->a[40955] = 2;
	v->a[40956] = anon_sym_LT;
	v->a[40957] = anon_sym_GT;
	v->a[40958] = actions(1410);
	v->a[40959] = 2;
	small_parse_table_2048(v);
}

void	small_parse_table_2048(t_small_parse_table_array *v)
{
	v->a[40960] = anon_sym_GT_GT;
	v->a[40961] = anon_sym_LT_LT;
	v->a[40962] = actions(1412);
	v->a[40963] = 2;
	v->a[40964] = anon_sym_LT_EQ;
	v->a[40965] = anon_sym_GT_EQ;
	v->a[40966] = actions(1414);
	v->a[40967] = 2;
	v->a[40968] = anon_sym_PLUS;
	v->a[40969] = anon_sym_DASH;
	v->a[40970] = actions(1416);
	v->a[40971] = 2;
	v->a[40972] = anon_sym_EQ_EQ;
	v->a[40973] = anon_sym_BANG_EQ;
	v->a[40974] = actions(1406);
	v->a[40975] = 3;
	v->a[40976] = anon_sym_STAR;
	v->a[40977] = anon_sym_SLASH;
	v->a[40978] = anon_sym_PERCENT;
	v->a[40979] = actions(1537);
	small_parse_table_2049(v);
}

void	small_parse_table_2049(t_small_parse_table_array *v)
{
	v->a[40980] = 13;
	v->a[40981] = anon_sym_RPAREN_RPAREN;
	v->a[40982] = anon_sym_PLUS_EQ;
	v->a[40983] = anon_sym_DASH_EQ;
	v->a[40984] = anon_sym_STAR_EQ;
	v->a[40985] = anon_sym_SLASH_EQ;
	v->a[40986] = anon_sym_PERCENT_EQ;
	v->a[40987] = anon_sym_LT_LT_EQ;
	v->a[40988] = anon_sym_GT_GT_EQ;
	v->a[40989] = anon_sym_AMP_EQ;
	v->a[40990] = anon_sym_CARET_EQ;
	v->a[40991] = anon_sym_PIPE_EQ;
	v->a[40992] = anon_sym_QMARK;
	v->a[40993] = anon_sym_COLON;
	v->a[40994] = 3;
	v->a[40995] = actions(3);
	v->a[40996] = 1;
	v->a[40997] = sym_comment;
	v->a[40998] = actions(1243);
	v->a[40999] = 3;
	small_parse_table_2050(v);
}

/* EOF small_parse_table_409.c */
