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
	v->a[40900] = actions(580);
	v->a[40901] = 1;
	v->a[40902] = anon_sym_PIPE;
	v->a[40903] = actions(584);
	v->a[40904] = 1;
	v->a[40905] = anon_sym_LT_LT;
	v->a[40906] = actions(586);
	v->a[40907] = 1;
	v->a[40908] = anon_sym_SEMI;
	v->a[40909] = actions(1878);
	v->a[40910] = 1;
	v->a[40911] = aux_sym_heredoc_redirect_token1;
	v->a[40912] = state(306);
	v->a[40913] = 1;
	v->a[40914] = sym_terminator;
	v->a[40915] = actions(582);
	v->a[40916] = 2;
	v->a[40917] = anon_sym_AMP_AMP;
	v->a[40918] = anon_sym_PIPE_PIPE;
	v->a[40919] = actions(591);
	small_parse_table_2046(v);
}

void	small_parse_table_2046(t_small_parse_table_array *v)
{
	v->a[40920] = 2;
	v->a[40921] = anon_sym_esac;
	v->a[40922] = anon_sym_SEMI_SEMI;
	v->a[40923] = actions(1876);
	v->a[40924] = 3;
	v->a[40925] = anon_sym_LT;
	v->a[40926] = anon_sym_GT;
	v->a[40927] = anon_sym_GT_GT;
	v->a[40928] = state(971);
	v->a[40929] = 3;
	v->a[40930] = sym_file_redirect;
	v->a[40931] = sym_heredoc_redirect;
	v->a[40932] = aux_sym_redirected_statement_repeat1;
	v->a[40933] = 10;
	v->a[40934] = actions(3);
	v->a[40935] = 1;
	v->a[40936] = sym_comment;
	v->a[40937] = actions(578);
	v->a[40938] = 1;
	v->a[40939] = anon_sym_BQUOTE;
	small_parse_table_2047(v);
}

void	small_parse_table_2047(t_small_parse_table_array *v)
{
	v->a[40940] = actions(580);
	v->a[40941] = 1;
	v->a[40942] = anon_sym_PIPE;
	v->a[40943] = actions(597);
	v->a[40944] = 1;
	v->a[40945] = anon_sym_LT_LT;
	v->a[40946] = actions(1870);
	v->a[40947] = 1;
	v->a[40948] = aux_sym_heredoc_redirect_token1;
	v->a[40949] = state(559);
	v->a[40950] = 1;
	v->a[40951] = sym_terminator;
	v->a[40952] = actions(593);
	v->a[40953] = 2;
	v->a[40954] = anon_sym_SEMI_SEMI;
	v->a[40955] = anon_sym_SEMI;
	v->a[40956] = actions(762);
	v->a[40957] = 2;
	v->a[40958] = anon_sym_AMP_AMP;
	v->a[40959] = anon_sym_PIPE_PIPE;
	small_parse_table_2048(v);
}

void	small_parse_table_2048(t_small_parse_table_array *v)
{
	v->a[40960] = actions(1880);
	v->a[40961] = 3;
	v->a[40962] = anon_sym_LT;
	v->a[40963] = anon_sym_GT;
	v->a[40964] = anon_sym_GT_GT;
	v->a[40965] = state(925);
	v->a[40966] = 3;
	v->a[40967] = sym_file_redirect;
	v->a[40968] = sym_heredoc_redirect;
	v->a[40969] = aux_sym_redirected_statement_repeat1;
	v->a[40970] = 4;
	v->a[40971] = actions(3);
	v->a[40972] = 1;
	v->a[40973] = sym_comment;
	v->a[40974] = actions(764);
	v->a[40975] = 1;
	v->a[40976] = sym_variable_name;
	v->a[40977] = state(967);
	v->a[40978] = 2;
	v->a[40979] = sym_variable_assignment;
	small_parse_table_2049(v);
}

void	small_parse_table_2049(t_small_parse_table_array *v)
{
	v->a[40980] = aux_sym__variable_assignments_repeat1;
	v->a[40981] = actions(576);
	v->a[40982] = 12;
	v->a[40983] = anon_sym_LT;
	v->a[40984] = anon_sym_GT;
	v->a[40985] = anon_sym_GT_GT;
	v->a[40986] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[40987] = anon_sym_DOLLAR;
	v->a[40988] = anon_sym_DQUOTE;
	v->a[40989] = sym_raw_string;
	v->a[40990] = sym_number;
	v->a[40991] = anon_sym_DOLLAR_LBRACE;
	v->a[40992] = anon_sym_DOLLAR_LPAREN;
	v->a[40993] = anon_sym_BQUOTE;
	v->a[40994] = sym_word;
	v->a[40995] = 3;
	v->a[40996] = actions(3);
	v->a[40997] = 1;
	v->a[40998] = sym_comment;
	v->a[40999] = actions(1050);
	small_parse_table_2050(v);
}

/* EOF small_parse_table_409.c */
