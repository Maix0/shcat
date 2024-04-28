/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2249.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11245(t_small_parse_table_array *v)
{
	v->a[224900] = 1;
	v->a[224901] = anon_sym_DOLLAR_LBRACK;
	v->a[224902] = actions(8378);
	v->a[224903] = 1;
	v->a[224904] = anon_sym_DQUOTE;
	v->a[224905] = actions(8382);
	v->a[224906] = 1;
	v->a[224907] = aux_sym_number_token1;
	v->a[224908] = actions(8384);
	v->a[224909] = 1;
	v->a[224910] = aux_sym_number_token2;
	v->a[224911] = actions(8386);
	v->a[224912] = 1;
	v->a[224913] = anon_sym_DOLLAR_LBRACE;
	v->a[224914] = actions(8388);
	v->a[224915] = 1;
	v->a[224916] = anon_sym_DOLLAR_LPAREN;
	v->a[224917] = actions(8390);
	v->a[224918] = 1;
	v->a[224919] = anon_sym_BQUOTE;
	small_parse_table_11246(v);
}

void	small_parse_table_11246(t_small_parse_table_array *v)
{
	v->a[224920] = actions(8392);
	v->a[224921] = 1;
	v->a[224922] = anon_sym_DOLLAR_BQUOTE;
	v->a[224923] = actions(8402);
	v->a[224924] = 1;
	v->a[224925] = sym__brace_start;
	v->a[224926] = actions(10472);
	v->a[224927] = 1;
	v->a[224928] = sym_word;
	v->a[224929] = actions(10478);
	v->a[224930] = 1;
	v->a[224931] = sym__comment_word;
	v->a[224932] = actions(10698);
	v->a[224933] = 1;
	v->a[224934] = anon_sym_DOLLAR;
	v->a[224935] = actions(8368);
	v->a[224936] = 2;
	v->a[224937] = anon_sym_LPAREN_LPAREN;
	v->a[224938] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[224939] = actions(8394);
	small_parse_table_11247(v);
}

void	small_parse_table_11247(t_small_parse_table_array *v)
{
	v->a[224940] = 2;
	v->a[224941] = anon_sym_LT_LPAREN;
	v->a[224942] = anon_sym_GT_LPAREN;
	v->a[224943] = actions(10474);
	v->a[224944] = 2;
	v->a[224945] = sym_test_operator;
	v->a[224946] = sym__special_character;
	v->a[224947] = actions(10476);
	v->a[224948] = 3;
	v->a[224949] = sym__bare_dollar;
	v->a[224950] = sym_raw_string;
	v->a[224951] = sym_ansi_c_string;
	v->a[224952] = state(4285);
	v->a[224953] = 9;
	v->a[224954] = sym_arithmetic_expansion;
	v->a[224955] = sym_brace_expression;
	v->a[224956] = sym_string;
	v->a[224957] = sym_translated_string;
	v->a[224958] = sym_number;
	v->a[224959] = sym_simple_expansion;
	small_parse_table_11248(v);
}

void	small_parse_table_11248(t_small_parse_table_array *v)
{
	v->a[224960] = sym_expansion;
	v->a[224961] = sym_command_substitution;
	v->a[224962] = sym_process_substitution;
	v->a[224963] = 18;
	v->a[224964] = actions(3);
	v->a[224965] = 1;
	v->a[224966] = sym_comment;
	v->a[224967] = actions(363);
	v->a[224968] = 1;
	v->a[224969] = anon_sym_DOLLAR_LBRACK;
	v->a[224970] = actions(371);
	v->a[224971] = 1;
	v->a[224972] = anon_sym_DQUOTE;
	v->a[224973] = actions(375);
	v->a[224974] = 1;
	v->a[224975] = aux_sym_number_token1;
	v->a[224976] = actions(377);
	v->a[224977] = 1;
	v->a[224978] = aux_sym_number_token2;
	v->a[224979] = actions(379);
	small_parse_table_11249(v);
}

void	small_parse_table_11249(t_small_parse_table_array *v)
{
	v->a[224980] = 1;
	v->a[224981] = anon_sym_DOLLAR_LBRACE;
	v->a[224982] = actions(381);
	v->a[224983] = 1;
	v->a[224984] = anon_sym_DOLLAR_LPAREN;
	v->a[224985] = actions(385);
	v->a[224986] = 1;
	v->a[224987] = anon_sym_DOLLAR_BQUOTE;
	v->a[224988] = actions(391);
	v->a[224989] = 1;
	v->a[224990] = sym__brace_start;
	v->a[224991] = actions(5809);
	v->a[224992] = 1;
	v->a[224993] = anon_sym_BQUOTE;
	v->a[224994] = actions(8836);
	v->a[224995] = 1;
	v->a[224996] = sym_word;
	v->a[224997] = actions(8840);
	v->a[224998] = 1;
	v->a[224999] = sym__comment_word;
	small_parse_table_11250(v);
}

/* EOF small_parse_table_2249.c */
