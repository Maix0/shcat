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
	v->a[19900] = anon_sym_SEMI_SEMI;
	v->a[19901] = anon_sym_AMP_AMP;
	v->a[19902] = anon_sym_PIPE_PIPE;
	v->a[19903] = anon_sym_LT;
	v->a[19904] = anon_sym_GT;
	v->a[19905] = anon_sym_GT_GT;
	v->a[19906] = anon_sym_LT_AMP;
	v->a[19907] = anon_sym_GT_AMP;
	v->a[19908] = anon_sym_GT_PIPE;
	v->a[19909] = anon_sym_LT_GT;
	v->a[19910] = anon_sym_LT_LT;
	v->a[19911] = anon_sym_LT_LT_DASH;
	v->a[19912] = aux_sym_heredoc_redirect_token1;
	v->a[19913] = anon_sym_AMP;
	v->a[19914] = anon_sym_SEMI;
	v->a[19915] = 5;
	v->a[19916] = actions(3);
	v->a[19917] = 1;
	v->a[19918] = sym_comment;
	v->a[19919] = state(185);
	small_parse_table_996(v);
}

void	small_parse_table_996(t_small_parse_table_array *v)
{
	v->a[19920] = 2;
	v->a[19921] = sym_concatenation;
	v->a[19922] = aux_sym_for_statement_repeat1;
	v->a[19923] = actions(552);
	v->a[19924] = 3;
	v->a[19925] = sym_file_descriptor;
	v->a[19926] = sym_variable_name;
	v->a[19927] = ts_builtin_sym_end;
	v->a[19928] = state(397);
	v->a[19929] = 5;
	v->a[19930] = sym_arithmetic_expansion;
	v->a[19931] = sym_string;
	v->a[19932] = sym_simple_expansion;
	v->a[19933] = sym_expansion;
	v->a[19934] = sym_command_substitution;
	v->a[19935] = actions(554);
	v->a[19936] = 25;
	v->a[19937] = anon_sym_PIPE;
	v->a[19938] = anon_sym_SEMI_SEMI;
	v->a[19939] = anon_sym_AMP_AMP;
	small_parse_table_997(v);
}

void	small_parse_table_997(t_small_parse_table_array *v)
{
	v->a[19940] = anon_sym_PIPE_PIPE;
	v->a[19941] = anon_sym_LT;
	v->a[19942] = anon_sym_GT;
	v->a[19943] = anon_sym_GT_GT;
	v->a[19944] = anon_sym_LT_AMP;
	v->a[19945] = anon_sym_GT_AMP;
	v->a[19946] = anon_sym_GT_PIPE;
	v->a[19947] = anon_sym_LT_GT;
	v->a[19948] = anon_sym_LT_LT;
	v->a[19949] = anon_sym_LT_LT_DASH;
	v->a[19950] = aux_sym_heredoc_redirect_token1;
	v->a[19951] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19952] = anon_sym_AMP;
	v->a[19953] = anon_sym_DOLLAR;
	v->a[19954] = anon_sym_DQUOTE;
	v->a[19955] = sym_raw_string;
	v->a[19956] = sym_number;
	v->a[19957] = anon_sym_DOLLAR_LBRACE;
	v->a[19958] = anon_sym_DOLLAR_LPAREN;
	v->a[19959] = anon_sym_BQUOTE;
	small_parse_table_998(v);
}

void	small_parse_table_998(t_small_parse_table_array *v)
{
	v->a[19960] = sym_word;
	v->a[19961] = anon_sym_SEMI;
	v->a[19962] = 14;
	v->a[19963] = actions(3);
	v->a[19964] = 1;
	v->a[19965] = sym_comment;
	v->a[19966] = actions(479);
	v->a[19967] = 1;
	v->a[19968] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19969] = actions(481);
	v->a[19970] = 1;
	v->a[19971] = anon_sym_DOLLAR;
	v->a[19972] = actions(483);
	v->a[19973] = 1;
	v->a[19974] = anon_sym_DQUOTE;
	v->a[19975] = actions(485);
	v->a[19976] = 1;
	v->a[19977] = anon_sym_DOLLAR_LBRACE;
	v->a[19978] = actions(487);
	v->a[19979] = 1;
	small_parse_table_999(v);
}

void	small_parse_table_999(t_small_parse_table_array *v)
{
	v->a[19980] = anon_sym_DOLLAR_LPAREN;
	v->a[19981] = actions(489);
	v->a[19982] = 1;
	v->a[19983] = anon_sym_BQUOTE;
	v->a[19984] = actions(491);
	v->a[19985] = 1;
	v->a[19986] = sym__bare_dollar;
	v->a[19987] = actions(558);
	v->a[19988] = 1;
	v->a[19989] = sym_file_descriptor;
	v->a[19990] = state(191);
	v->a[19991] = 1;
	v->a[19992] = aux_sym_command_repeat2;
	v->a[19993] = state(640);
	v->a[19994] = 1;
	v->a[19995] = sym_concatenation;
	v->a[19996] = actions(477);
	v->a[19997] = 3;
	v->a[19998] = sym_raw_string;
	v->a[19999] = sym_number;
	small_parse_table_1000(v);
}

/* EOF small_parse_table_199.c */
