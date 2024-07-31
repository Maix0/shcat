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
	v->a[19900] = anon_sym_BANG_EQ;
	v->a[19901] = anon_sym_LT_EQ;
	v->a[19902] = anon_sym_GT_EQ;
	v->a[19903] = anon_sym_QMARK;
	v->a[19904] = anon_sym_PLUS_PLUS2;
	v->a[19905] = anon_sym_DASH_DASH2;
	v->a[19906] = 12;
	v->a[19907] = actions(3);
	v->a[19908] = 1;
	v->a[19909] = sym_comment;
	v->a[19910] = actions(613);
	v->a[19911] = 1;
	v->a[19912] = sym_variable_name;
	v->a[19913] = actions(645);
	v->a[19914] = 1;
	v->a[19915] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19916] = actions(648);
	v->a[19917] = 1;
	v->a[19918] = anon_sym_DOLLAR;
	v->a[19919] = actions(651);
	small_parse_table_996(v);
}

void	small_parse_table_996(t_small_parse_table_array *v)
{
	v->a[19920] = 1;
	v->a[19921] = anon_sym_DQUOTE;
	v->a[19922] = actions(654);
	v->a[19923] = 1;
	v->a[19924] = anon_sym_DOLLAR_LBRACE;
	v->a[19925] = actions(657);
	v->a[19926] = 1;
	v->a[19927] = anon_sym_DOLLAR_LPAREN;
	v->a[19928] = actions(660);
	v->a[19929] = 1;
	v->a[19930] = anon_sym_BQUOTE;
	v->a[19931] = state(216);
	v->a[19932] = 2;
	v->a[19933] = sym_concatenation;
	v->a[19934] = aux_sym_for_statement_repeat1;
	v->a[19935] = actions(642);
	v->a[19936] = 3;
	v->a[19937] = sym_raw_string;
	v->a[19938] = sym_number;
	v->a[19939] = sym_word;
	small_parse_table_997(v);
}

void	small_parse_table_997(t_small_parse_table_array *v)
{
	v->a[19940] = state(360);
	v->a[19941] = 5;
	v->a[19942] = sym_arithmetic_expansion;
	v->a[19943] = sym_string;
	v->a[19944] = sym_simple_expansion;
	v->a[19945] = sym_expansion;
	v->a[19946] = sym_command_substitution;
	v->a[19947] = actions(618);
	v->a[19948] = 16;
	v->a[19949] = anon_sym_PIPE;
	v->a[19950] = anon_sym_RPAREN;
	v->a[19951] = anon_sym_SEMI_SEMI;
	v->a[19952] = anon_sym_AMP_AMP;
	v->a[19953] = anon_sym_PIPE_PIPE;
	v->a[19954] = anon_sym_LT;
	v->a[19955] = anon_sym_GT;
	v->a[19956] = anon_sym_GT_GT;
	v->a[19957] = anon_sym_LT_AMP;
	v->a[19958] = anon_sym_GT_AMP;
	v->a[19959] = anon_sym_GT_PIPE;
	small_parse_table_998(v);
}

void	small_parse_table_998(t_small_parse_table_array *v)
{
	v->a[19960] = anon_sym_LT_GT;
	v->a[19961] = anon_sym_LT_LT;
	v->a[19962] = anon_sym_LT_LT_DASH;
	v->a[19963] = aux_sym_heredoc_redirect_token1;
	v->a[19964] = anon_sym_SEMI;
	v->a[19965] = 10;
	v->a[19966] = actions(407);
	v->a[19967] = 1;
	v->a[19968] = sym_comment;
	v->a[19969] = actions(577);
	v->a[19970] = 2;
	v->a[19971] = anon_sym_LT;
	v->a[19972] = anon_sym_GT;
	v->a[19973] = actions(579);
	v->a[19974] = 2;
	v->a[19975] = anon_sym_GT_GT;
	v->a[19976] = anon_sym_LT_LT;
	v->a[19977] = actions(587);
	v->a[19978] = 2;
	v->a[19979] = anon_sym_EQ_EQ;
	small_parse_table_999(v);
}

void	small_parse_table_999(t_small_parse_table_array *v)
{
	v->a[19980] = anon_sym_BANG_EQ;
	v->a[19981] = actions(589);
	v->a[19982] = 2;
	v->a[19983] = anon_sym_LT_EQ;
	v->a[19984] = anon_sym_GT_EQ;
	v->a[19985] = actions(591);
	v->a[19986] = 2;
	v->a[19987] = anon_sym_PLUS;
	v->a[19988] = anon_sym_DASH;
	v->a[19989] = actions(597);
	v->a[19990] = 2;
	v->a[19991] = anon_sym_PLUS_PLUS2;
	v->a[19992] = anon_sym_DASH_DASH2;
	v->a[19993] = actions(593);
	v->a[19994] = 3;
	v->a[19995] = anon_sym_STAR;
	v->a[19996] = anon_sym_SLASH;
	v->a[19997] = anon_sym_PERCENT;
	v->a[19998] = actions(459);
	v->a[19999] = 4;
	small_parse_table_1000(v);
}

/* EOF small_parse_table_199.c */
