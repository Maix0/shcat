/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_449.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2245(t_small_parse_table_array *v)
{
	v->a[44900] = actions(1612);
	v->a[44901] = 1;
	v->a[44902] = ts_builtin_sym_end;
	v->a[44903] = actions(1441);
	v->a[44904] = 2;
	v->a[44905] = sym_file_descriptor;
	v->a[44906] = sym_variable_name;
	v->a[44907] = actions(1437);
	v->a[44908] = 24;
	v->a[44909] = anon_sym_for;
	v->a[44910] = anon_sym_while;
	v->a[44911] = anon_sym_until;
	v->a[44912] = anon_sym_if;
	v->a[44913] = anon_sym_case;
	v->a[44914] = anon_sym_LPAREN;
	v->a[44915] = anon_sym_LBRACE;
	v->a[44916] = anon_sym_BANG;
	v->a[44917] = anon_sym_LT;
	v->a[44918] = anon_sym_GT;
	v->a[44919] = anon_sym_GT_GT;
	small_parse_table_2246(v);
}

void	small_parse_table_2246(t_small_parse_table_array *v)
{
	v->a[44920] = anon_sym_LT_AMP;
	v->a[44921] = anon_sym_GT_AMP;
	v->a[44922] = anon_sym_GT_PIPE;
	v->a[44923] = anon_sym_LT_GT;
	v->a[44924] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[44925] = anon_sym_DOLLAR;
	v->a[44926] = anon_sym_DQUOTE;
	v->a[44927] = sym_raw_string;
	v->a[44928] = sym_number;
	v->a[44929] = anon_sym_DOLLAR_LBRACE;
	v->a[44930] = anon_sym_DOLLAR_LPAREN;
	v->a[44931] = anon_sym_BQUOTE;
	v->a[44932] = sym_word;
	v->a[44933] = 6;
	v->a[44934] = actions(3);
	v->a[44935] = 1;
	v->a[44936] = sym_comment;
	v->a[44937] = actions(1170);
	v->a[44938] = 1;
	v->a[44939] = aux_sym_concatenation_token1;
	small_parse_table_2247(v);
}

void	small_parse_table_2247(t_small_parse_table_array *v)
{
	v->a[44940] = actions(1618);
	v->a[44941] = 1;
	v->a[44942] = sym__concat;
	v->a[44943] = state(440);
	v->a[44944] = 1;
	v->a[44945] = aux_sym_concatenation_repeat1;
	v->a[44946] = actions(1047);
	v->a[44947] = 2;
	v->a[44948] = sym_file_descriptor;
	v->a[44949] = sym_variable_name;
	v->a[44950] = actions(1043);
	v->a[44951] = 22;
	v->a[44952] = anon_sym_PIPE;
	v->a[44953] = anon_sym_AMP_AMP;
	v->a[44954] = anon_sym_PIPE_PIPE;
	v->a[44955] = anon_sym_LT;
	v->a[44956] = anon_sym_GT;
	v->a[44957] = anon_sym_GT_GT;
	v->a[44958] = anon_sym_LT_AMP;
	v->a[44959] = anon_sym_GT_AMP;
	small_parse_table_2248(v);
}

void	small_parse_table_2248(t_small_parse_table_array *v)
{
	v->a[44960] = anon_sym_GT_PIPE;
	v->a[44961] = anon_sym_LT_GT;
	v->a[44962] = anon_sym_LT_LT;
	v->a[44963] = anon_sym_LT_LT_DASH;
	v->a[44964] = aux_sym_heredoc_redirect_token1;
	v->a[44965] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[44966] = anon_sym_DOLLAR;
	v->a[44967] = anon_sym_DQUOTE;
	v->a[44968] = sym_raw_string;
	v->a[44969] = sym_number;
	v->a[44970] = anon_sym_DOLLAR_LBRACE;
	v->a[44971] = anon_sym_DOLLAR_LPAREN;
	v->a[44972] = anon_sym_BQUOTE;
	v->a[44973] = sym_word;
	v->a[44974] = 6;
	v->a[44975] = actions(3);
	v->a[44976] = 1;
	v->a[44977] = sym_comment;
	v->a[44978] = actions(1156);
	v->a[44979] = 1;
	small_parse_table_2249(v);
}

void	small_parse_table_2249(t_small_parse_table_array *v)
{
	v->a[44980] = aux_sym_concatenation_token1;
	v->a[44981] = actions(1620);
	v->a[44982] = 1;
	v->a[44983] = sym__concat;
	v->a[44984] = state(390);
	v->a[44985] = 1;
	v->a[44986] = aux_sym_concatenation_repeat1;
	v->a[44987] = actions(1047);
	v->a[44988] = 2;
	v->a[44989] = sym_file_descriptor;
	v->a[44990] = sym__bare_dollar;
	v->a[44991] = actions(1043);
	v->a[44992] = 22;
	v->a[44993] = anon_sym_PIPE;
	v->a[44994] = anon_sym_AMP_AMP;
	v->a[44995] = anon_sym_PIPE_PIPE;
	v->a[44996] = anon_sym_LT;
	v->a[44997] = anon_sym_GT;
	v->a[44998] = anon_sym_GT_GT;
	v->a[44999] = anon_sym_LT_AMP;
	small_parse_table_2250(v);
}

/* EOF small_parse_table_449.c */
