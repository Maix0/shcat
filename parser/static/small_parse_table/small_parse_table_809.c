/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_809.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4045(t_small_parse_table_array *v)
{
	v->a[80900] = actions(2123);
	v->a[80901] = 1;
	v->a[80902] = anon_sym_DQUOTE;
	v->a[80903] = actions(2125);
	v->a[80904] = 1;
	v->a[80905] = aux_sym_number_token1;
	v->a[80906] = actions(2127);
	v->a[80907] = 1;
	v->a[80908] = aux_sym_number_token2;
	v->a[80909] = actions(2129);
	v->a[80910] = 1;
	v->a[80911] = anon_sym_DOLLAR_LBRACE;
	v->a[80912] = actions(2131);
	v->a[80913] = 1;
	v->a[80914] = anon_sym_DOLLAR_LPAREN;
	v->a[80915] = actions(2133);
	v->a[80916] = 1;
	v->a[80917] = anon_sym_BQUOTE;
	v->a[80918] = actions(3344);
	v->a[80919] = 1;
	small_parse_table_4046(v);
}

void	small_parse_table_4046(t_small_parse_table_array *v)
{
	v->a[80920] = sym__bare_dollar;
	v->a[80921] = actions(3342);
	v->a[80922] = 3;
	v->a[80923] = sym_raw_string;
	v->a[80924] = sym__comment_word;
	v->a[80925] = sym_word;
	v->a[80926] = state(1997);
	v->a[80927] = 6;
	v->a[80928] = sym_arithmetic_expansion;
	v->a[80929] = sym_string;
	v->a[80930] = sym_number;
	v->a[80931] = sym_simple_expansion;
	v->a[80932] = sym_expansion;
	v->a[80933] = sym_command_substitution;
	v->a[80934] = 12;
	v->a[80935] = actions(3);
	v->a[80936] = 1;
	v->a[80937] = sym_comment;
	v->a[80938] = actions(2825);
	v->a[80939] = 1;
	small_parse_table_4047(v);
}

void	small_parse_table_4047(t_small_parse_table_array *v)
{
	v->a[80940] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[80941] = actions(2827);
	v->a[80942] = 1;
	v->a[80943] = anon_sym_DOLLAR;
	v->a[80944] = actions(2829);
	v->a[80945] = 1;
	v->a[80946] = anon_sym_DQUOTE;
	v->a[80947] = actions(2831);
	v->a[80948] = 1;
	v->a[80949] = aux_sym_number_token1;
	v->a[80950] = actions(2833);
	v->a[80951] = 1;
	v->a[80952] = aux_sym_number_token2;
	v->a[80953] = actions(2835);
	v->a[80954] = 1;
	v->a[80955] = anon_sym_DOLLAR_LBRACE;
	v->a[80956] = actions(2837);
	v->a[80957] = 1;
	v->a[80958] = anon_sym_DOLLAR_LPAREN;
	v->a[80959] = actions(2839);
	small_parse_table_4048(v);
}

void	small_parse_table_4048(t_small_parse_table_array *v)
{
	v->a[80960] = 1;
	v->a[80961] = anon_sym_BQUOTE;
	v->a[80962] = actions(3346);
	v->a[80963] = 2;
	v->a[80964] = sym_raw_string;
	v->a[80965] = sym_word;
	v->a[80966] = state(191);
	v->a[80967] = 2;
	v->a[80968] = sym_concatenation;
	v->a[80969] = aux_sym_for_statement_repeat1;
	v->a[80970] = state(378);
	v->a[80971] = 6;
	v->a[80972] = sym_arithmetic_expansion;
	v->a[80973] = sym_string;
	v->a[80974] = sym_number;
	v->a[80975] = sym_simple_expansion;
	v->a[80976] = sym_expansion;
	v->a[80977] = sym_command_substitution;
	v->a[80978] = 12;
	v->a[80979] = actions(3);
	small_parse_table_4049(v);
}

void	small_parse_table_4049(t_small_parse_table_array *v)
{
	v->a[80980] = 1;
	v->a[80981] = sym_comment;
	v->a[80982] = actions(2825);
	v->a[80983] = 1;
	v->a[80984] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[80985] = actions(2827);
	v->a[80986] = 1;
	v->a[80987] = anon_sym_DOLLAR;
	v->a[80988] = actions(2829);
	v->a[80989] = 1;
	v->a[80990] = anon_sym_DQUOTE;
	v->a[80991] = actions(2831);
	v->a[80992] = 1;
	v->a[80993] = aux_sym_number_token1;
	v->a[80994] = actions(2833);
	v->a[80995] = 1;
	v->a[80996] = aux_sym_number_token2;
	v->a[80997] = actions(2835);
	v->a[80998] = 1;
	v->a[80999] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_4050(v);
}

/* EOF small_parse_table_809.c */
