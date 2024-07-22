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
	v->a[40900] = 6;
	v->a[40901] = actions(3);
	v->a[40902] = 1;
	v->a[40903] = sym_comment;
	v->a[40904] = actions(1433);
	v->a[40905] = 1;
	v->a[40906] = sym_variable_name;
	v->a[40907] = actions(367);
	v->a[40908] = 2;
	v->a[40909] = sym_file_descriptor;
	v->a[40910] = ts_builtin_sym_end;
	v->a[40911] = actions(1431);
	v->a[40912] = 2;
	v->a[40913] = aux_sym__simple_variable_name_token1;
	v->a[40914] = aux_sym__multiline_variable_name_token1;
	v->a[40915] = actions(1429);
	v->a[40916] = 8;
	v->a[40917] = anon_sym_BANG;
	v->a[40918] = anon_sym_DASH;
	v->a[40919] = anon_sym_STAR;
	small_parse_table_2046(v);
}

void	small_parse_table_2046(t_small_parse_table_array *v)
{
	v->a[40920] = anon_sym_QMARK;
	v->a[40921] = anon_sym_DOLLAR;
	v->a[40922] = anon_sym_POUND;
	v->a[40923] = anon_sym_AT;
	v->a[40924] = anon_sym_0;
	v->a[40925] = actions(361);
	v->a[40926] = 15;
	v->a[40927] = anon_sym_PIPE;
	v->a[40928] = anon_sym_SEMI_SEMI;
	v->a[40929] = anon_sym_AMP_AMP;
	v->a[40930] = anon_sym_PIPE_PIPE;
	v->a[40931] = anon_sym_LT;
	v->a[40932] = anon_sym_GT;
	v->a[40933] = anon_sym_GT_GT;
	v->a[40934] = anon_sym_LT_AMP;
	v->a[40935] = anon_sym_GT_AMP;
	v->a[40936] = anon_sym_GT_PIPE;
	v->a[40937] = anon_sym_LT_GT;
	v->a[40938] = anon_sym_LT_LT;
	v->a[40939] = anon_sym_LT_LT_DASH;
	small_parse_table_2047(v);
}

void	small_parse_table_2047(t_small_parse_table_array *v)
{
	v->a[40940] = aux_sym_heredoc_redirect_token1;
	v->a[40941] = anon_sym_SEMI;
	v->a[40942] = 8;
	v->a[40943] = actions(3);
	v->a[40944] = 1;
	v->a[40945] = sym_comment;
	v->a[40946] = actions(782);
	v->a[40947] = 1;
	v->a[40948] = anon_sym_PIPE;
	v->a[40949] = actions(792);
	v->a[40950] = 1;
	v->a[40951] = sym_file_descriptor;
	v->a[40952] = actions(1435);
	v->a[40953] = 1;
	v->a[40954] = sym_variable_name;
	v->a[40955] = state(1370);
	v->a[40956] = 2;
	v->a[40957] = sym_variable_assignment;
	v->a[40958] = aux_sym__variable_assignments_repeat1;
	v->a[40959] = state(1371);
	small_parse_table_2048(v);
}

void	small_parse_table_2048(t_small_parse_table_array *v)
{
	v->a[40960] = 3;
	v->a[40961] = sym_file_redirect;
	v->a[40962] = sym_heredoc_redirect;
	v->a[40963] = aux_sym_redirected_statement_repeat1;
	v->a[40964] = actions(1057);
	v->a[40965] = 4;
	v->a[40966] = anon_sym_AMP_AMP;
	v->a[40967] = anon_sym_PIPE_PIPE;
	v->a[40968] = anon_sym_LT_LT;
	v->a[40969] = anon_sym_LT_LT_DASH;
	v->a[40970] = actions(780);
	v->a[40971] = 16;
	v->a[40972] = anon_sym_LT;
	v->a[40973] = anon_sym_GT;
	v->a[40974] = anon_sym_GT_GT;
	v->a[40975] = anon_sym_LT_AMP;
	v->a[40976] = anon_sym_GT_AMP;
	v->a[40977] = anon_sym_GT_PIPE;
	v->a[40978] = anon_sym_LT_GT;
	v->a[40979] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_2049(v);
}

void	small_parse_table_2049(t_small_parse_table_array *v)
{
	v->a[40980] = anon_sym_DOLLAR;
	v->a[40981] = anon_sym_DQUOTE;
	v->a[40982] = sym_raw_string;
	v->a[40983] = sym_number;
	v->a[40984] = anon_sym_DOLLAR_LBRACE;
	v->a[40985] = anon_sym_DOLLAR_LPAREN;
	v->a[40986] = anon_sym_BQUOTE;
	v->a[40987] = sym_word;
	v->a[40988] = 3;
	v->a[40989] = actions(3);
	v->a[40990] = 1;
	v->a[40991] = sym_comment;
	v->a[40992] = actions(523);
	v->a[40993] = 3;
	v->a[40994] = sym_file_descriptor;
	v->a[40995] = sym__concat;
	v->a[40996] = ts_builtin_sym_end;
	v->a[40997] = actions(521);
	v->a[40998] = 25;
	v->a[40999] = anon_sym_PIPE;
	small_parse_table_2050(v);
}

/* EOF small_parse_table_409.c */
