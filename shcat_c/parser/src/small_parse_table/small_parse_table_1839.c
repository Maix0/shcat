/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1839.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9195(t_small_parse_table_array *v)
{
	v->a[183900] = anon_sym_PIPE_PIPE;
	v->a[183901] = anon_sym_AMP_AMP;
	v->a[183902] = anon_sym_EQ_EQ;
	v->a[183903] = anon_sym_BANG_EQ;
	v->a[183904] = anon_sym_LT_EQ;
	v->a[183905] = anon_sym_GT_EQ;
	v->a[183906] = anon_sym_RBRACK;
	v->a[183907] = anon_sym_EQ_TILDE;
	v->a[183908] = anon_sym_QMARK;
	v->a[183909] = 5;
	v->a[183910] = actions(71);
	v->a[183911] = 1;
	v->a[183912] = sym_comment;
	v->a[183913] = actions(7595);
	v->a[183914] = 1;
	v->a[183915] = anon_sym_STAR_STAR;
	v->a[183916] = actions(7569);
	v->a[183917] = 2;
	v->a[183918] = anon_sym_PLUS_PLUS;
	v->a[183919] = anon_sym_DASH_DASH;
	small_parse_table_9196(v);
}

void	small_parse_table_9196(t_small_parse_table_array *v)
{
	v->a[183920] = actions(7139);
	v->a[183921] = 13;
	v->a[183922] = anon_sym_EQ;
	v->a[183923] = anon_sym_PIPE;
	v->a[183924] = anon_sym_CARET;
	v->a[183925] = anon_sym_AMP;
	v->a[183926] = anon_sym_LT;
	v->a[183927] = anon_sym_GT;
	v->a[183928] = anon_sym_LT_LT;
	v->a[183929] = anon_sym_GT_GT;
	v->a[183930] = anon_sym_PLUS;
	v->a[183931] = anon_sym_DASH;
	v->a[183932] = anon_sym_STAR;
	v->a[183933] = anon_sym_SLASH;
	v->a[183934] = anon_sym_PERCENT;
	v->a[183935] = actions(7137);
	v->a[183936] = 20;
	v->a[183937] = anon_sym_PLUS_EQ;
	v->a[183938] = anon_sym_DASH_EQ;
	v->a[183939] = anon_sym_STAR_EQ;
	small_parse_table_9197(v);
}

void	small_parse_table_9197(t_small_parse_table_array *v)
{
	v->a[183940] = anon_sym_SLASH_EQ;
	v->a[183941] = anon_sym_PERCENT_EQ;
	v->a[183942] = anon_sym_STAR_STAR_EQ;
	v->a[183943] = anon_sym_LT_LT_EQ;
	v->a[183944] = anon_sym_GT_GT_EQ;
	v->a[183945] = anon_sym_AMP_EQ;
	v->a[183946] = anon_sym_CARET_EQ;
	v->a[183947] = anon_sym_PIPE_EQ;
	v->a[183948] = anon_sym_PIPE_PIPE;
	v->a[183949] = anon_sym_AMP_AMP;
	v->a[183950] = anon_sym_EQ_EQ;
	v->a[183951] = anon_sym_BANG_EQ;
	v->a[183952] = anon_sym_LT_EQ;
	v->a[183953] = anon_sym_GT_EQ;
	v->a[183954] = anon_sym_RBRACK;
	v->a[183955] = anon_sym_EQ_TILDE;
	v->a[183956] = anon_sym_QMARK;
	v->a[183957] = 24;
	v->a[183958] = actions(71);
	v->a[183959] = 1;
	small_parse_table_9198(v);
}

void	small_parse_table_9198(t_small_parse_table_array *v)
{
	v->a[183960] = sym_comment;
	v->a[183961] = actions(6474);
	v->a[183962] = 1;
	v->a[183963] = sym_word;
	v->a[183964] = actions(6480);
	v->a[183965] = 1;
	v->a[183966] = anon_sym_LPAREN;
	v->a[183967] = actions(6488);
	v->a[183968] = 1;
	v->a[183969] = anon_sym_DOLLAR;
	v->a[183970] = actions(6494);
	v->a[183971] = 1;
	v->a[183972] = aux_sym_number_token1;
	v->a[183973] = actions(6496);
	v->a[183974] = 1;
	v->a[183975] = aux_sym_number_token2;
	v->a[183976] = actions(6500);
	v->a[183977] = 1;
	v->a[183978] = anon_sym_DOLLAR_LPAREN;
	v->a[183979] = actions(6508);
	small_parse_table_9199(v);
}

void	small_parse_table_9199(t_small_parse_table_array *v)
{
	v->a[183980] = 1;
	v->a[183981] = sym_test_operator;
	v->a[183982] = actions(6510);
	v->a[183983] = 1;
	v->a[183984] = sym_extglob_pattern;
	v->a[183985] = actions(6512);
	v->a[183986] = 1;
	v->a[183987] = sym__brace_start;
	v->a[183988] = actions(7226);
	v->a[183989] = 1;
	v->a[183990] = anon_sym_DOLLAR_LBRACK;
	v->a[183991] = actions(7228);
	v->a[183992] = 1;
	v->a[183993] = sym__special_character;
	v->a[183994] = actions(7230);
	v->a[183995] = 1;
	v->a[183996] = anon_sym_DQUOTE;
	v->a[183997] = actions(7234);
	v->a[183998] = 1;
	v->a[183999] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_9200(v);
}

/* EOF small_parse_table_1839.c */
