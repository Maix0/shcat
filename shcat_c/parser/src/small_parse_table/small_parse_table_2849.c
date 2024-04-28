/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2849.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_14245(t_small_parse_table_array *v)
{
	v->a[284900] = state(5385);
	v->a[284901] = 2;
	v->a[284902] = sym_variable_assignment;
	v->a[284903] = aux_sym_variable_assignments_repeat1;
	v->a[284904] = actions(11288);
	v->a[284905] = 7;
	v->a[284906] = anon_sym_PIPE;
	v->a[284907] = anon_sym_LT;
	v->a[284908] = anon_sym_GT;
	v->a[284909] = anon_sym_LT_LT;
	v->a[284910] = anon_sym_AMP_GT;
	v->a[284911] = anon_sym_LT_AMP;
	v->a[284912] = anon_sym_GT_AMP;
	v->a[284913] = actions(11290);
	v->a[284914] = 10;
	v->a[284915] = sym_file_descriptor;
	v->a[284916] = anon_sym_PIPE_PIPE;
	v->a[284917] = anon_sym_AMP_AMP;
	v->a[284918] = anon_sym_GT_GT;
	v->a[284919] = anon_sym_PIPE_AMP;
	small_parse_table_14246(v);
}

void	small_parse_table_14246(t_small_parse_table_array *v)
{
	v->a[284920] = anon_sym_AMP_GT_GT;
	v->a[284921] = anon_sym_GT_PIPE;
	v->a[284922] = anon_sym_LT_AMP_DASH;
	v->a[284923] = anon_sym_GT_AMP_DASH;
	v->a[284924] = anon_sym_LT_LT_DASH;
	v->a[284925] = 3;
	v->a[284926] = actions(71);
	v->a[284927] = 1;
	v->a[284928] = sym_comment;
	v->a[284929] = actions(12734);
	v->a[284930] = 6;
	v->a[284931] = anon_sym_LPAREN;
	v->a[284932] = anon_sym_DOLLAR;
	v->a[284933] = aux_sym_number_token1;
	v->a[284934] = aux_sym_number_token2;
	v->a[284935] = anon_sym_DOLLAR_LPAREN;
	v->a[284936] = sym_word;
	v->a[284937] = actions(12736);
	v->a[284938] = 15;
	v->a[284939] = sym_test_operator;
	small_parse_table_14247(v);
}

void	small_parse_table_14247(t_small_parse_table_array *v)
{
	v->a[284940] = sym_extglob_pattern;
	v->a[284941] = sym__brace_start;
	v->a[284942] = anon_sym_LPAREN_LPAREN;
	v->a[284943] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[284944] = anon_sym_DOLLAR_LBRACK;
	v->a[284945] = sym__special_character;
	v->a[284946] = anon_sym_DQUOTE;
	v->a[284947] = sym_raw_string;
	v->a[284948] = sym_ansi_c_string;
	v->a[284949] = anon_sym_DOLLAR_LBRACE;
	v->a[284950] = anon_sym_BQUOTE;
	v->a[284951] = anon_sym_DOLLAR_BQUOTE;
	v->a[284952] = anon_sym_LT_LPAREN;
	v->a[284953] = anon_sym_GT_LPAREN;
	v->a[284954] = 3;
	v->a[284955] = actions(71);
	v->a[284956] = 1;
	v->a[284957] = sym_comment;
	v->a[284958] = actions(1251);
	v->a[284959] = 7;
	small_parse_table_14248(v);
}

void	small_parse_table_14248(t_small_parse_table_array *v)
{
	v->a[284960] = anon_sym_PIPE;
	v->a[284961] = anon_sym_LT;
	v->a[284962] = anon_sym_GT;
	v->a[284963] = anon_sym_LT_LT;
	v->a[284964] = anon_sym_AMP_GT;
	v->a[284965] = anon_sym_LT_AMP;
	v->a[284966] = anon_sym_GT_AMP;
	v->a[284967] = actions(1253);
	v->a[284968] = 14;
	v->a[284969] = sym_file_descriptor;
	v->a[284970] = sym__concat;
	v->a[284971] = anon_sym_PIPE_PIPE;
	v->a[284972] = anon_sym_AMP_AMP;
	v->a[284973] = anon_sym_GT_GT;
	v->a[284974] = anon_sym_PIPE_AMP;
	v->a[284975] = anon_sym_RBRACK;
	v->a[284976] = anon_sym_AMP_GT_GT;
	v->a[284977] = anon_sym_GT_PIPE;
	v->a[284978] = anon_sym_LT_AMP_DASH;
	v->a[284979] = anon_sym_GT_AMP_DASH;
	small_parse_table_14249(v);
}

void	small_parse_table_14249(t_small_parse_table_array *v)
{
	v->a[284980] = anon_sym_LT_LT_DASH;
	v->a[284981] = anon_sym_LT_LT_LT;
	v->a[284982] = aux_sym_concatenation_token1;
	v->a[284983] = 5;
	v->a[284984] = actions(71);
	v->a[284985] = 1;
	v->a[284986] = sym_comment;
	v->a[284987] = actions(12815);
	v->a[284988] = 1;
	v->a[284989] = sym__special_character;
	v->a[284990] = state(5388);
	v->a[284991] = 1;
	v->a[284992] = aux_sym__literal_repeat1;
	v->a[284993] = actions(1362);
	v->a[284994] = 7;
	v->a[284995] = anon_sym_PIPE;
	v->a[284996] = anon_sym_LT;
	v->a[284997] = anon_sym_GT;
	v->a[284998] = anon_sym_LT_LT;
	v->a[284999] = anon_sym_AMP_GT;
	small_parse_table_14250(v);
}

/* EOF small_parse_table_2849.c */
