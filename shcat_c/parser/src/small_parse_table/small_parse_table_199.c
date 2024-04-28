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
	v->a[19900] = sym_raw_string;
	v->a[19901] = sym_ansi_c_string;
	v->a[19902] = aux_sym_number_token1;
	v->a[19903] = aux_sym_number_token2;
	v->a[19904] = anon_sym_DOLLAR_LBRACE;
	v->a[19905] = anon_sym_DOLLAR_LPAREN;
	v->a[19906] = anon_sym_BQUOTE;
	v->a[19907] = anon_sym_DOLLAR_BQUOTE;
	v->a[19908] = anon_sym_LT_LPAREN;
	v->a[19909] = anon_sym_GT_LPAREN;
	v->a[19910] = sym_word;
	v->a[19911] = 21;
	v->a[19912] = actions(3);
	v->a[19913] = 1;
	v->a[19914] = sym_comment;
	v->a[19915] = actions(3785);
	v->a[19916] = 1;
	v->a[19917] = anon_sym_DOLLAR_LBRACK;
	v->a[19918] = actions(3787);
	v->a[19919] = 1;
	small_parse_table_996(v);
}

void	small_parse_table_996(t_small_parse_table_array *v)
{
	v->a[19920] = anon_sym_DOLLAR;
	v->a[19921] = actions(3791);
	v->a[19922] = 1;
	v->a[19923] = anon_sym_DQUOTE;
	v->a[19924] = actions(3793);
	v->a[19925] = 1;
	v->a[19926] = aux_sym_number_token1;
	v->a[19927] = actions(3795);
	v->a[19928] = 1;
	v->a[19929] = aux_sym_number_token2;
	v->a[19930] = actions(3797);
	v->a[19931] = 1;
	v->a[19932] = anon_sym_DOLLAR_LBRACE;
	v->a[19933] = actions(3799);
	v->a[19934] = 1;
	v->a[19935] = anon_sym_DOLLAR_LPAREN;
	v->a[19936] = actions(3801);
	v->a[19937] = 1;
	v->a[19938] = anon_sym_BQUOTE;
	v->a[19939] = actions(3803);
	small_parse_table_997(v);
}

void	small_parse_table_997(t_small_parse_table_array *v)
{
	v->a[19940] = 1;
	v->a[19941] = anon_sym_DOLLAR_BQUOTE;
	v->a[19942] = actions(3809);
	v->a[19943] = 1;
	v->a[19944] = sym__brace_start;
	v->a[19945] = actions(3817);
	v->a[19946] = 1;
	v->a[19947] = sym__special_character;
	v->a[19948] = actions(3819);
	v->a[19949] = 1;
	v->a[19950] = sym_test_operator;
	v->a[19951] = state(4305);
	v->a[19952] = 1;
	v->a[19953] = aux_sym__literal_repeat1;
	v->a[19954] = state(4736);
	v->a[19955] = 1;
	v->a[19956] = sym_concatenation;
	v->a[19957] = actions(3783);
	v->a[19958] = 2;
	v->a[19959] = anon_sym_LPAREN_LPAREN;
	small_parse_table_998(v);
}

void	small_parse_table_998(t_small_parse_table_array *v)
{
	v->a[19960] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19961] = actions(3805);
	v->a[19962] = 2;
	v->a[19963] = anon_sym_LT_LPAREN;
	v->a[19964] = anon_sym_GT_LPAREN;
	v->a[19965] = actions(2500);
	v->a[19966] = 3;
	v->a[19967] = sym_file_descriptor;
	v->a[19968] = ts_builtin_sym_end;
	v->a[19969] = aux_sym_heredoc_redirect_token1;
	v->a[19970] = actions(3815);
	v->a[19971] = 3;
	v->a[19972] = sym_raw_string;
	v->a[19973] = sym_ansi_c_string;
	v->a[19974] = sym_word;
	v->a[19975] = state(4518);
	v->a[19976] = 9;
	v->a[19977] = sym_arithmetic_expansion;
	v->a[19978] = sym_brace_expression;
	v->a[19979] = sym_string;
	small_parse_table_999(v);
}

void	small_parse_table_999(t_small_parse_table_array *v)
{
	v->a[19980] = sym_translated_string;
	v->a[19981] = sym_number;
	v->a[19982] = sym_simple_expansion;
	v->a[19983] = sym_expansion;
	v->a[19984] = sym_command_substitution;
	v->a[19985] = sym_process_substitution;
	v->a[19986] = actions(2498);
	v->a[19987] = 20;
	v->a[19988] = anon_sym_SEMI;
	v->a[19989] = anon_sym_PIPE_PIPE;
	v->a[19990] = anon_sym_AMP_AMP;
	v->a[19991] = anon_sym_PIPE;
	v->a[19992] = anon_sym_AMP;
	v->a[19993] = anon_sym_LT;
	v->a[19994] = anon_sym_GT;
	v->a[19995] = anon_sym_LT_LT;
	v->a[19996] = anon_sym_GT_GT;
	v->a[19997] = anon_sym_SEMI_SEMI;
	v->a[19998] = anon_sym_PIPE_AMP;
	v->a[19999] = anon_sym_AMP_GT;
	small_parse_table_1000(v);
}

/* EOF small_parse_table_199.c */
