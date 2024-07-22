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
	v->a[19900] = anon_sym_DOLLAR_LPAREN;
	v->a[19901] = anon_sym_BQUOTE;
	v->a[19902] = sym_word;
	v->a[19903] = 3;
	v->a[19904] = actions(501);
	v->a[19905] = 1;
	v->a[19906] = sym_comment;
	v->a[19907] = actions(513);
	v->a[19908] = 13;
	v->a[19909] = anon_sym_PIPE;
	v->a[19910] = anon_sym_EQ;
	v->a[19911] = anon_sym_LT;
	v->a[19912] = anon_sym_GT;
	v->a[19913] = anon_sym_GT_GT;
	v->a[19914] = anon_sym_LT_LT;
	v->a[19915] = anon_sym_CARET;
	v->a[19916] = anon_sym_AMP;
	v->a[19917] = anon_sym_PLUS;
	v->a[19918] = anon_sym_DASH;
	v->a[19919] = anon_sym_STAR;
	small_parse_table_996(v);
}

void	small_parse_table_996(t_small_parse_table_array *v)
{
	v->a[19920] = anon_sym_SLASH;
	v->a[19921] = anon_sym_PERCENT;
	v->a[19922] = actions(515);
	v->a[19923] = 21;
	v->a[19924] = anon_sym_AMP_AMP;
	v->a[19925] = anon_sym_PIPE_PIPE;
	v->a[19926] = anon_sym_RPAREN_RPAREN;
	v->a[19927] = anon_sym_PLUS_EQ;
	v->a[19928] = anon_sym_DASH_EQ;
	v->a[19929] = anon_sym_STAR_EQ;
	v->a[19930] = anon_sym_SLASH_EQ;
	v->a[19931] = anon_sym_PERCENT_EQ;
	v->a[19932] = anon_sym_LT_LT_EQ;
	v->a[19933] = anon_sym_GT_GT_EQ;
	v->a[19934] = anon_sym_AMP_EQ;
	v->a[19935] = anon_sym_CARET_EQ;
	v->a[19936] = anon_sym_PIPE_EQ;
	v->a[19937] = anon_sym_EQ_EQ;
	v->a[19938] = anon_sym_BANG_EQ;
	v->a[19939] = anon_sym_LT_EQ;
	small_parse_table_997(v);
}

void	small_parse_table_997(t_small_parse_table_array *v)
{
	v->a[19940] = anon_sym_GT_EQ;
	v->a[19941] = anon_sym_QMARK;
	v->a[19942] = anon_sym_COLON;
	v->a[19943] = anon_sym_PLUS_PLUS2;
	v->a[19944] = anon_sym_DASH_DASH2;
	v->a[19945] = 14;
	v->a[19946] = actions(3);
	v->a[19947] = 1;
	v->a[19948] = sym_comment;
	v->a[19949] = actions(429);
	v->a[19950] = 1;
	v->a[19951] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19952] = actions(431);
	v->a[19953] = 1;
	v->a[19954] = anon_sym_DOLLAR;
	v->a[19955] = actions(433);
	v->a[19956] = 1;
	v->a[19957] = anon_sym_DQUOTE;
	v->a[19958] = actions(435);
	v->a[19959] = 1;
	small_parse_table_998(v);
}

void	small_parse_table_998(t_small_parse_table_array *v)
{
	v->a[19960] = anon_sym_DOLLAR_LBRACE;
	v->a[19961] = actions(437);
	v->a[19962] = 1;
	v->a[19963] = anon_sym_DOLLAR_LPAREN;
	v->a[19964] = actions(439);
	v->a[19965] = 1;
	v->a[19966] = anon_sym_BQUOTE;
	v->a[19967] = actions(441);
	v->a[19968] = 1;
	v->a[19969] = sym__bare_dollar;
	v->a[19970] = actions(519);
	v->a[19971] = 1;
	v->a[19972] = sym_file_descriptor;
	v->a[19973] = state(197);
	v->a[19974] = 1;
	v->a[19975] = aux_sym_command_repeat2;
	v->a[19976] = state(732);
	v->a[19977] = 1;
	v->a[19978] = sym_concatenation;
	v->a[19979] = actions(427);
	small_parse_table_999(v);
}

void	small_parse_table_999(t_small_parse_table_array *v)
{
	v->a[19980] = 3;
	v->a[19981] = sym_raw_string;
	v->a[19982] = sym_number;
	v->a[19983] = sym_word;
	v->a[19984] = state(401);
	v->a[19985] = 5;
	v->a[19986] = sym_arithmetic_expansion;
	v->a[19987] = sym_string;
	v->a[19988] = sym_simple_expansion;
	v->a[19989] = sym_expansion;
	v->a[19990] = sym_command_substitution;
	v->a[19991] = actions(517);
	v->a[19992] = 16;
	v->a[19993] = anon_sym_esac;
	v->a[19994] = anon_sym_PIPE;
	v->a[19995] = anon_sym_SEMI_SEMI;
	v->a[19996] = anon_sym_AMP_AMP;
	v->a[19997] = anon_sym_PIPE_PIPE;
	v->a[19998] = anon_sym_LT;
	v->a[19999] = anon_sym_GT;
	small_parse_table_1000(v);
}

/* EOF small_parse_table_199.c */
