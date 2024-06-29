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
	v->a[44900] = 1;
	v->a[44901] = anon_sym_BQUOTE;
	v->a[44902] = state(653);
	v->a[44903] = 2;
	v->a[44904] = sym_concatenation;
	v->a[44905] = aux_sym_for_statement_repeat1;
	v->a[44906] = actions(1495);
	v->a[44907] = 3;
	v->a[44908] = sym_raw_string;
	v->a[44909] = sym_number;
	v->a[44910] = sym_word;
	v->a[44911] = state(856);
	v->a[44912] = 5;
	v->a[44913] = sym_arithmetic_expansion;
	v->a[44914] = sym_string;
	v->a[44915] = sym_simple_expansion;
	v->a[44916] = sym_expansion;
	v->a[44917] = sym_command_substitution;
	v->a[44918] = actions(516);
	v->a[44919] = 15;
	small_parse_table_2246(v);
}

void	small_parse_table_2246(t_small_parse_table_array *v)
{
	v->a[44920] = anon_sym_PIPE;
	v->a[44921] = anon_sym_AMP_AMP;
	v->a[44922] = anon_sym_PIPE_PIPE;
	v->a[44923] = anon_sym_LT;
	v->a[44924] = anon_sym_GT;
	v->a[44925] = anon_sym_GT_GT;
	v->a[44926] = anon_sym_AMP_GT;
	v->a[44927] = anon_sym_AMP_GT_GT;
	v->a[44928] = anon_sym_LT_AMP;
	v->a[44929] = anon_sym_GT_AMP;
	v->a[44930] = anon_sym_GT_PIPE;
	v->a[44931] = anon_sym_LT_AMP_DASH;
	v->a[44932] = anon_sym_GT_AMP_DASH;
	v->a[44933] = anon_sym_LT_LT;
	v->a[44934] = anon_sym_LT_LT_DASH;
	v->a[44935] = 3;
	v->a[44936] = actions(3);
	v->a[44937] = 1;
	v->a[44938] = sym_comment;
	v->a[44939] = actions(1195);
	small_parse_table_2247(v);
}

void	small_parse_table_2247(t_small_parse_table_array *v)
{
	v->a[44940] = 3;
	v->a[44941] = sym_file_descriptor;
	v->a[44942] = sym__concat;
	v->a[44943] = ts_builtin_sym_end;
	v->a[44944] = actions(1193);
	v->a[44945] = 29;
	v->a[44946] = anon_sym_PIPE;
	v->a[44947] = anon_sym_SEMI_SEMI;
	v->a[44948] = anon_sym_AMP_AMP;
	v->a[44949] = anon_sym_PIPE_PIPE;
	v->a[44950] = anon_sym_LT;
	v->a[44951] = anon_sym_GT;
	v->a[44952] = anon_sym_GT_GT;
	v->a[44953] = anon_sym_AMP_GT;
	v->a[44954] = anon_sym_AMP_GT_GT;
	v->a[44955] = anon_sym_LT_AMP;
	v->a[44956] = anon_sym_GT_AMP;
	v->a[44957] = anon_sym_GT_PIPE;
	v->a[44958] = anon_sym_LT_AMP_DASH;
	v->a[44959] = anon_sym_GT_AMP_DASH;
	small_parse_table_2248(v);
}

void	small_parse_table_2248(t_small_parse_table_array *v)
{
	v->a[44960] = anon_sym_LT_LT;
	v->a[44961] = anon_sym_LT_LT_DASH;
	v->a[44962] = aux_sym_heredoc_redirect_token1;
	v->a[44963] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[44964] = anon_sym_AMP;
	v->a[44965] = aux_sym_concatenation_token1;
	v->a[44966] = anon_sym_DOLLAR;
	v->a[44967] = anon_sym_DQUOTE;
	v->a[44968] = sym_raw_string;
	v->a[44969] = sym_number;
	v->a[44970] = anon_sym_DOLLAR_LBRACE;
	v->a[44971] = anon_sym_DOLLAR_LPAREN;
	v->a[44972] = anon_sym_BQUOTE;
	v->a[44973] = sym_word;
	v->a[44974] = anon_sym_SEMI;
	v->a[44975] = 3;
	v->a[44976] = actions(3);
	v->a[44977] = 1;
	v->a[44978] = sym_comment;
	v->a[44979] = actions(1048);
	small_parse_table_2249(v);
}

void	small_parse_table_2249(t_small_parse_table_array *v)
{
	v->a[44980] = 2;
	v->a[44981] = sym_file_descriptor;
	v->a[44982] = sym__concat;
	v->a[44983] = actions(1046);
	v->a[44984] = 30;
	v->a[44985] = anon_sym_PIPE;
	v->a[44986] = anon_sym_RPAREN;
	v->a[44987] = anon_sym_SEMI_SEMI;
	v->a[44988] = anon_sym_AMP_AMP;
	v->a[44989] = anon_sym_PIPE_PIPE;
	v->a[44990] = anon_sym_LT;
	v->a[44991] = anon_sym_GT;
	v->a[44992] = anon_sym_GT_GT;
	v->a[44993] = anon_sym_AMP_GT;
	v->a[44994] = anon_sym_AMP_GT_GT;
	v->a[44995] = anon_sym_LT_AMP;
	v->a[44996] = anon_sym_GT_AMP;
	v->a[44997] = anon_sym_GT_PIPE;
	v->a[44998] = anon_sym_LT_AMP_DASH;
	v->a[44999] = anon_sym_GT_AMP_DASH;
	small_parse_table_2250(v);
}

/* EOF small_parse_table_449.c */
