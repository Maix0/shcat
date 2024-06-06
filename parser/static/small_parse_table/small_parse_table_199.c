/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_199.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_995(t_small_parse_table_array *v)
{
	v->a[19900] = 1;
	v->a[19901] = anon_sym_DOLLAR_LBRACE;
	v->a[19902] = actions(385);
	v->a[19903] = 1;
	v->a[19904] = anon_sym_DOLLAR_LPAREN;
	v->a[19905] = actions(387);
	v->a[19906] = 1;
	v->a[19907] = anon_sym_BQUOTE;
	v->a[19908] = actions(389);
	v->a[19909] = 1;
	v->a[19910] = anon_sym_DOLLAR_BQUOTE;
	v->a[19911] = actions(393);
	v->a[19912] = 1;
	v->a[19913] = sym_variable_name;
	v->a[19914] = actions(395);
	v->a[19915] = 1;
	v->a[19916] = sym__brace_start;
	v->a[19917] = actions(2900);
	v->a[19918] = 1;
	v->a[19919] = sym_file_descriptor;
	small_parse_table_996(v);
}

void	small_parse_table_996(t_small_parse_table_array *v)
{
	v->a[19920] = actions(2910);
	v->a[19921] = 1;
	v->a[19922] = sym_word;
	v->a[19923] = actions(2912);
	v->a[19924] = 1;
	v->a[19925] = sym__special_character;
	v->a[19926] = state(268);
	v->a[19927] = 1;
	v->a[19928] = sym_command_name;
	v->a[19929] = state(963);
	v->a[19930] = 1;
	v->a[19931] = aux_sym__literal_repeat1;
	v->a[19932] = state(1016);
	v->a[19933] = 1;
	v->a[19934] = sym_concatenation;
	v->a[19935] = state(1017);
	v->a[19936] = 1;
	v->a[19937] = aux_sym_command_repeat1;
	v->a[19938] = state(1218);
	v->a[19939] = 1;
	small_parse_table_997(v);
}

void	small_parse_table_997(t_small_parse_table_array *v)
{
	v->a[19940] = sym_variable_assignment;
	v->a[19941] = state(1995);
	v->a[19942] = 1;
	v->a[19943] = sym_file_redirect;
	v->a[19944] = state(2389);
	v->a[19945] = 1;
	v->a[19946] = sym_command;
	v->a[19947] = state(2417);
	v->a[19948] = 1;
	v->a[19949] = sym_subshell;
	v->a[19950] = actions(377);
	v->a[19951] = 2;
	v->a[19952] = sym_test_operator;
	v->a[19953] = sym_raw_string;
	v->a[19954] = actions(2896);
	v->a[19955] = 2;
	v->a[19956] = anon_sym_LT_AMP_DASH;
	v->a[19957] = anon_sym_GT_AMP_DASH;
	v->a[19958] = actions(2894);
	v->a[19959] = 3;
	small_parse_table_998(v);
}

void	small_parse_table_998(t_small_parse_table_array *v)
{
	v->a[19960] = anon_sym_GT_GT;
	v->a[19961] = anon_sym_AMP_GT_GT;
	v->a[19962] = anon_sym_GT_PIPE;
	v->a[19963] = actions(2892);
	v->a[19964] = 5;
	v->a[19965] = anon_sym_LT;
	v->a[19966] = anon_sym_GT;
	v->a[19967] = anon_sym_AMP_GT;
	v->a[19968] = anon_sym_LT_AMP;
	v->a[19969] = anon_sym_GT_AMP;
	v->a[19970] = state(586);
	v->a[19971] = 7;
	v->a[19972] = sym_arithmetic_expansion;
	v->a[19973] = sym_brace_expression;
	v->a[19974] = sym_string;
	v->a[19975] = sym_number;
	v->a[19976] = sym_simple_expansion;
	v->a[19977] = sym_expansion;
	v->a[19978] = sym_command_substitution;
	v->a[19979] = 6;
	small_parse_table_999(v);
}

void	small_parse_table_999(t_small_parse_table_array *v)
{
	v->a[19980] = actions(3);
	v->a[19981] = 1;
	v->a[19982] = sym_comment;
	v->a[19983] = actions(2914);
	v->a[19984] = 1;
	v->a[19985] = aux_sym_concatenation_token1;
	v->a[19986] = actions(2917);
	v->a[19987] = 1;
	v->a[19988] = sym__concat;
	v->a[19989] = state(526);
	v->a[19990] = 1;
	v->a[19991] = aux_sym_concatenation_repeat1;
	v->a[19992] = actions(2654);
	v->a[19993] = 4;
	v->a[19994] = sym_file_descriptor;
	v->a[19995] = sym_test_operator;
	v->a[19996] = sym__brace_start;
	v->a[19997] = aux_sym_heredoc_redirect_token1;
	v->a[19998] = actions(2652);
	v->a[19999] = 35;
	small_parse_table_1000(v);
}

/* EOF small_parse_table_199.c */
