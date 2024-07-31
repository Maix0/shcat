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
	v->a[44900] = sym_extglob_pattern;
	v->a[44901] = state(839);
	v->a[44902] = 1;
	v->a[44903] = aux_sym_case_statement_repeat1;
	v->a[44904] = state(1432);
	v->a[44905] = 1;
	v->a[44906] = sym_case_item;
	v->a[44907] = state(1765);
	v->a[44908] = 1;
	v->a[44909] = sym__case_item_last;
	v->a[44910] = state(1594);
	v->a[44911] = 2;
	v->a[44912] = sym_concatenation;
	v->a[44913] = sym__extglob_blob;
	v->a[44914] = actions(1333);
	v->a[44915] = 3;
	v->a[44916] = sym_raw_string;
	v->a[44917] = sym_number;
	v->a[44918] = sym_word;
	v->a[44919] = state(1520);
	small_parse_table_2246(v);
}

void	small_parse_table_2246(t_small_parse_table_array *v)
{
	v->a[44920] = 5;
	v->a[44921] = sym_arithmetic_expansion;
	v->a[44922] = sym_string;
	v->a[44923] = sym_simple_expansion;
	v->a[44924] = sym_expansion;
	v->a[44925] = sym_command_substitution;
	v->a[44926] = 15;
	v->a[44927] = actions(3);
	v->a[44928] = 1;
	v->a[44929] = sym_comment;
	v->a[44930] = actions(1337);
	v->a[44931] = 1;
	v->a[44932] = anon_sym_LPAREN;
	v->a[44933] = actions(1341);
	v->a[44934] = 1;
	v->a[44935] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[44936] = actions(1343);
	v->a[44937] = 1;
	v->a[44938] = anon_sym_DOLLAR;
	v->a[44939] = actions(1345);
	small_parse_table_2247(v);
}

void	small_parse_table_2247(t_small_parse_table_array *v)
{
	v->a[44940] = 1;
	v->a[44941] = anon_sym_DQUOTE;
	v->a[44942] = actions(1347);
	v->a[44943] = 1;
	v->a[44944] = anon_sym_DOLLAR_LBRACE;
	v->a[44945] = actions(1349);
	v->a[44946] = 1;
	v->a[44947] = anon_sym_DOLLAR_LPAREN;
	v->a[44948] = actions(1351);
	v->a[44949] = 1;
	v->a[44950] = anon_sym_BQUOTE;
	v->a[44951] = actions(1353);
	v->a[44952] = 1;
	v->a[44953] = sym_extglob_pattern;
	v->a[44954] = state(839);
	v->a[44955] = 1;
	v->a[44956] = aux_sym_case_statement_repeat1;
	v->a[44957] = state(1432);
	v->a[44958] = 1;
	v->a[44959] = sym_case_item;
	small_parse_table_2248(v);
}

void	small_parse_table_2248(t_small_parse_table_array *v)
{
	v->a[44960] = state(1645);
	v->a[44961] = 1;
	v->a[44962] = sym__case_item_last;
	v->a[44963] = state(1594);
	v->a[44964] = 2;
	v->a[44965] = sym_concatenation;
	v->a[44966] = sym__extglob_blob;
	v->a[44967] = actions(1333);
	v->a[44968] = 3;
	v->a[44969] = sym_raw_string;
	v->a[44970] = sym_number;
	v->a[44971] = sym_word;
	v->a[44972] = state(1520);
	v->a[44973] = 5;
	v->a[44974] = sym_arithmetic_expansion;
	v->a[44975] = sym_string;
	v->a[44976] = sym_simple_expansion;
	v->a[44977] = sym_expansion;
	v->a[44978] = sym_command_substitution;
	v->a[44979] = 3;
	small_parse_table_2249(v);
}

void	small_parse_table_2249(t_small_parse_table_array *v)
{
	v->a[44980] = actions(3);
	v->a[44981] = 1;
	v->a[44982] = sym_comment;
	v->a[44983] = actions(469);
	v->a[44984] = 4;
	v->a[44985] = sym__concat;
	v->a[44986] = sym_variable_name;
	v->a[44987] = ts_builtin_sym_end;
	v->a[44988] = aux_sym_heredoc_redirect_token1;
	v->a[44989] = actions(467);
	v->a[44990] = 17;
	v->a[44991] = anon_sym_PIPE;
	v->a[44992] = anon_sym_RPAREN;
	v->a[44993] = anon_sym_SEMI_SEMI;
	v->a[44994] = anon_sym_AMP_AMP;
	v->a[44995] = anon_sym_PIPE_PIPE;
	v->a[44996] = anon_sym_LT;
	v->a[44997] = anon_sym_GT;
	v->a[44998] = anon_sym_GT_GT;
	v->a[44999] = anon_sym_LT_AMP;
	small_parse_table_2250(v);
}

/* EOF small_parse_table_449.c */
