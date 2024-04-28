/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2179.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10895(t_small_parse_table_array *v)
{
	v->a[217900] = 1;
	v->a[217901] = aux_sym_number_token1;
	v->a[217902] = actions(1559);
	v->a[217903] = 1;
	v->a[217904] = aux_sym_number_token2;
	v->a[217905] = actions(1563);
	v->a[217906] = 1;
	v->a[217907] = anon_sym_DOLLAR_LPAREN;
	v->a[217908] = actions(1575);
	v->a[217909] = 1;
	v->a[217910] = sym__brace_start;
	v->a[217911] = actions(9198);
	v->a[217912] = 1;
	v->a[217913] = anon_sym_DOLLAR_LBRACK;
	v->a[217914] = actions(9202);
	v->a[217915] = 1;
	v->a[217916] = anon_sym_DQUOTE;
	v->a[217917] = actions(9206);
	v->a[217918] = 1;
	v->a[217919] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_10896(v);
}

void	small_parse_table_10896(t_small_parse_table_array *v)
{
	v->a[217920] = actions(9208);
	v->a[217921] = 1;
	v->a[217922] = anon_sym_BQUOTE;
	v->a[217923] = actions(9210);
	v->a[217924] = 1;
	v->a[217925] = anon_sym_DOLLAR_BQUOTE;
	v->a[217926] = actions(9268);
	v->a[217927] = 1;
	v->a[217928] = sym_word;
	v->a[217929] = actions(9276);
	v->a[217930] = 1;
	v->a[217931] = sym__comment_word;
	v->a[217932] = actions(10390);
	v->a[217933] = 1;
	v->a[217934] = anon_sym_DOLLAR;
	v->a[217935] = actions(9196);
	v->a[217936] = 2;
	v->a[217937] = anon_sym_LPAREN_LPAREN;
	v->a[217938] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[217939] = actions(9212);
	small_parse_table_10897(v);
}

void	small_parse_table_10897(t_small_parse_table_array *v)
{
	v->a[217940] = 2;
	v->a[217941] = anon_sym_LT_LPAREN;
	v->a[217942] = anon_sym_GT_LPAREN;
	v->a[217943] = actions(9272);
	v->a[217944] = 2;
	v->a[217945] = sym_test_operator;
	v->a[217946] = sym__special_character;
	v->a[217947] = actions(9274);
	v->a[217948] = 3;
	v->a[217949] = sym__bare_dollar;
	v->a[217950] = sym_raw_string;
	v->a[217951] = sym_ansi_c_string;
	v->a[217952] = state(1189);
	v->a[217953] = 9;
	v->a[217954] = sym_arithmetic_expansion;
	v->a[217955] = sym_brace_expression;
	v->a[217956] = sym_string;
	v->a[217957] = sym_translated_string;
	v->a[217958] = sym_number;
	v->a[217959] = sym_simple_expansion;
	small_parse_table_10898(v);
}

void	small_parse_table_10898(t_small_parse_table_array *v)
{
	v->a[217960] = sym_expansion;
	v->a[217961] = sym_command_substitution;
	v->a[217962] = sym_process_substitution;
	v->a[217963] = 18;
	v->a[217964] = actions(3);
	v->a[217965] = 1;
	v->a[217966] = sym_comment;
	v->a[217967] = actions(3481);
	v->a[217968] = 1;
	v->a[217969] = aux_sym_number_token1;
	v->a[217970] = actions(3483);
	v->a[217971] = 1;
	v->a[217972] = aux_sym_number_token2;
	v->a[217973] = actions(3487);
	v->a[217974] = 1;
	v->a[217975] = anon_sym_DOLLAR_LPAREN;
	v->a[217976] = actions(3497);
	v->a[217977] = 1;
	v->a[217978] = sym__brace_start;
	v->a[217979] = actions(8906);
	small_parse_table_10899(v);
}

void	small_parse_table_10899(t_small_parse_table_array *v)
{
	v->a[217980] = 1;
	v->a[217981] = anon_sym_DOLLAR_LBRACK;
	v->a[217982] = actions(8910);
	v->a[217983] = 1;
	v->a[217984] = anon_sym_DQUOTE;
	v->a[217985] = actions(8914);
	v->a[217986] = 1;
	v->a[217987] = anon_sym_DOLLAR_LBRACE;
	v->a[217988] = actions(8916);
	v->a[217989] = 1;
	v->a[217990] = anon_sym_BQUOTE;
	v->a[217991] = actions(8918);
	v->a[217992] = 1;
	v->a[217993] = anon_sym_DOLLAR_BQUOTE;
	v->a[217994] = actions(9850);
	v->a[217995] = 1;
	v->a[217996] = sym_word;
	v->a[217997] = actions(9856);
	v->a[217998] = 1;
	v->a[217999] = sym__comment_word;
	small_parse_table_10900(v);
}

/* EOF small_parse_table_2179.c */
