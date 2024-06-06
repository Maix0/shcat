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
	v->a[44901] = anon_sym_DOLLAR_BQUOTE;
	v->a[44902] = actions(57);
	v->a[44903] = 1;
	v->a[44904] = sym_comment;
	v->a[44905] = actions(63);
	v->a[44906] = 1;
	v->a[44907] = sym__brace_start;
	v->a[44908] = actions(2900);
	v->a[44909] = 1;
	v->a[44910] = sym_file_descriptor;
	v->a[44911] = actions(2902);
	v->a[44912] = 1;
	v->a[44913] = sym_word;
	v->a[44914] = actions(2904);
	v->a[44915] = 1;
	v->a[44916] = sym__special_character;
	v->a[44917] = actions(3621);
	v->a[44918] = 1;
	v->a[44919] = sym_variable_name;
	small_parse_table_2246(v);
}

void	small_parse_table_2246(t_small_parse_table_array *v)
{
	v->a[44920] = state(294);
	v->a[44921] = 1;
	v->a[44922] = sym_command_name;
	v->a[44923] = state(1006);
	v->a[44924] = 1;
	v->a[44925] = aux_sym__literal_repeat1;
	v->a[44926] = state(1171);
	v->a[44927] = 1;
	v->a[44928] = sym_concatenation;
	v->a[44929] = state(1995);
	v->a[44930] = 1;
	v->a[44931] = sym_file_redirect;
	v->a[44932] = actions(43);
	v->a[44933] = 2;
	v->a[44934] = sym_test_operator;
	v->a[44935] = sym_raw_string;
	v->a[44936] = actions(2896);
	v->a[44937] = 2;
	v->a[44938] = anon_sym_LT_AMP_DASH;
	v->a[44939] = anon_sym_GT_AMP_DASH;
	small_parse_table_2247(v);
}

void	small_parse_table_2247(t_small_parse_table_array *v)
{
	v->a[44940] = state(1776);
	v->a[44941] = 2;
	v->a[44942] = sym_variable_assignment;
	v->a[44943] = aux_sym_command_repeat1;
	v->a[44944] = actions(2894);
	v->a[44945] = 3;
	v->a[44946] = anon_sym_GT_GT;
	v->a[44947] = anon_sym_AMP_GT_GT;
	v->a[44948] = anon_sym_GT_PIPE;
	v->a[44949] = actions(2892);
	v->a[44950] = 5;
	v->a[44951] = anon_sym_LT;
	v->a[44952] = anon_sym_GT;
	v->a[44953] = anon_sym_AMP_GT;
	v->a[44954] = anon_sym_LT_AMP;
	v->a[44955] = anon_sym_GT_AMP;
	v->a[44956] = state(643);
	v->a[44957] = 7;
	v->a[44958] = sym_arithmetic_expansion;
	v->a[44959] = sym_brace_expression;
	small_parse_table_2248(v);
}

void	small_parse_table_2248(t_small_parse_table_array *v)
{
	v->a[44960] = sym_string;
	v->a[44961] = sym_number;
	v->a[44962] = sym_simple_expansion;
	v->a[44963] = sym_expansion;
	v->a[44964] = sym_command_substitution;
	v->a[44965] = 3;
	v->a[44966] = actions(3);
	v->a[44967] = 1;
	v->a[44968] = sym_comment;
	v->a[44969] = actions(3117);
	v->a[44970] = 6;
	v->a[44971] = sym_file_descriptor;
	v->a[44972] = sym__concat;
	v->a[44973] = sym_test_operator;
	v->a[44974] = sym__bare_dollar;
	v->a[44975] = sym__brace_start;
	v->a[44976] = aux_sym_heredoc_redirect_token1;
	v->a[44977] = actions(3115);
	v->a[44978] = 33;
	v->a[44979] = anon_sym_PIPE;
	small_parse_table_2249(v);
}

void	small_parse_table_2249(t_small_parse_table_array *v)
{
	v->a[44980] = anon_sym_RPAREN;
	v->a[44981] = anon_sym_SEMI_SEMI;
	v->a[44982] = anon_sym_PIPE_AMP;
	v->a[44983] = anon_sym_AMP_AMP;
	v->a[44984] = anon_sym_PIPE_PIPE;
	v->a[44985] = anon_sym_LT;
	v->a[44986] = anon_sym_GT;
	v->a[44987] = anon_sym_GT_GT;
	v->a[44988] = anon_sym_AMP_GT;
	v->a[44989] = anon_sym_AMP_GT_GT;
	v->a[44990] = anon_sym_LT_AMP;
	v->a[44991] = anon_sym_GT_AMP;
	v->a[44992] = anon_sym_GT_PIPE;
	v->a[44993] = anon_sym_LT_AMP_DASH;
	v->a[44994] = anon_sym_GT_AMP_DASH;
	v->a[44995] = anon_sym_LT_LT;
	v->a[44996] = anon_sym_LT_LT_DASH;
	v->a[44997] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[44998] = anon_sym_AMP;
	v->a[44999] = aux_sym_concatenation_token1;
	small_parse_table_2250(v);
}

/* EOF small_parse_table_449.c */
