/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_329.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1645(t_small_parse_table_array *v)
{
	v->a[32900] = actions(4665);
	v->a[32901] = 2;
	v->a[32902] = aux_sym__simple_variable_name_token1;
	v->a[32903] = aux_sym__multiline_variable_name_token1;
	v->a[32904] = actions(4661);
	v->a[32905] = 9;
	v->a[32906] = anon_sym_DASH;
	v->a[32907] = anon_sym_STAR;
	v->a[32908] = anon_sym_BANG;
	v->a[32909] = anon_sym_QMARK;
	v->a[32910] = anon_sym_DOLLAR;
	v->a[32911] = anon_sym_POUND;
	v->a[32912] = anon_sym_AT2;
	v->a[32913] = anon_sym_0;
	v->a[32914] = anon_sym__;
	v->a[32915] = actions(1227);
	v->a[32916] = 33;
	v->a[32917] = anon_sym_EQ;
	v->a[32918] = anon_sym_PLUS_PLUS;
	v->a[32919] = anon_sym_DASH_DASH;
	small_parse_table_1646(v);
}

void	small_parse_table_1646(t_small_parse_table_array *v)
{
	v->a[32920] = anon_sym_PLUS_EQ;
	v->a[32921] = anon_sym_DASH_EQ;
	v->a[32922] = anon_sym_STAR_EQ;
	v->a[32923] = anon_sym_SLASH_EQ;
	v->a[32924] = anon_sym_PERCENT_EQ;
	v->a[32925] = anon_sym_STAR_STAR_EQ;
	v->a[32926] = anon_sym_LT_LT_EQ;
	v->a[32927] = anon_sym_GT_GT_EQ;
	v->a[32928] = anon_sym_AMP_EQ;
	v->a[32929] = anon_sym_CARET_EQ;
	v->a[32930] = anon_sym_PIPE_EQ;
	v->a[32931] = anon_sym_PIPE_PIPE;
	v->a[32932] = anon_sym_AMP_AMP;
	v->a[32933] = anon_sym_PIPE;
	v->a[32934] = anon_sym_CARET;
	v->a[32935] = anon_sym_AMP;
	v->a[32936] = anon_sym_EQ_EQ;
	v->a[32937] = anon_sym_BANG_EQ;
	v->a[32938] = anon_sym_LT;
	v->a[32939] = anon_sym_GT;
	small_parse_table_1647(v);
}

void	small_parse_table_1647(t_small_parse_table_array *v)
{
	v->a[32940] = anon_sym_LT_EQ;
	v->a[32941] = anon_sym_GT_EQ;
	v->a[32942] = anon_sym_LT_LT;
	v->a[32943] = anon_sym_GT_GT;
	v->a[32944] = anon_sym_PLUS;
	v->a[32945] = anon_sym_SLASH;
	v->a[32946] = anon_sym_PERCENT;
	v->a[32947] = anon_sym_STAR_STAR;
	v->a[32948] = anon_sym_RBRACK;
	v->a[32949] = anon_sym_EQ_TILDE;
	v->a[32950] = 6;
	v->a[32951] = actions(71);
	v->a[32952] = 1;
	v->a[32953] = sym_comment;
	v->a[32954] = state(2718);
	v->a[32955] = 1;
	v->a[32956] = aux_sym__literal_repeat1;
	v->a[32957] = state(2864);
	v->a[32958] = 1;
	v->a[32959] = sym_concatenation;
	small_parse_table_1648(v);
}

void	small_parse_table_1648(t_small_parse_table_array *v)
{
	v->a[32960] = state(2357);
	v->a[32961] = 9;
	v->a[32962] = sym_arithmetic_expansion;
	v->a[32963] = sym_brace_expression;
	v->a[32964] = sym_string;
	v->a[32965] = sym_translated_string;
	v->a[32966] = sym_number;
	v->a[32967] = sym_simple_expansion;
	v->a[32968] = sym_expansion;
	v->a[32969] = sym_command_substitution;
	v->a[32970] = sym_process_substitution;
	v->a[32971] = actions(2494);
	v->a[32972] = 12;
	v->a[32973] = anon_sym_PIPE;
	v->a[32974] = anon_sym_LT;
	v->a[32975] = anon_sym_GT;
	v->a[32976] = anon_sym_LT_LT;
	v->a[32977] = anon_sym_AMP_GT;
	v->a[32978] = anon_sym_LT_AMP;
	v->a[32979] = anon_sym_GT_AMP;
	small_parse_table_1649(v);
}

void	small_parse_table_1649(t_small_parse_table_array *v)
{
	v->a[32980] = anon_sym_DOLLAR;
	v->a[32981] = aux_sym_number_token1;
	v->a[32982] = aux_sym_number_token2;
	v->a[32983] = anon_sym_DOLLAR_LPAREN;
	v->a[32984] = sym_word;
	v->a[32985] = actions(2496);
	v->a[32986] = 26;
	v->a[32987] = sym_file_descriptor;
	v->a[32988] = sym_variable_name;
	v->a[32989] = sym_test_operator;
	v->a[32990] = sym__brace_start;
	v->a[32991] = anon_sym_LPAREN_LPAREN;
	v->a[32992] = anon_sym_PIPE_PIPE;
	v->a[32993] = anon_sym_AMP_AMP;
	v->a[32994] = anon_sym_GT_GT;
	v->a[32995] = anon_sym_PIPE_AMP;
	v->a[32996] = anon_sym_AMP_GT_GT;
	v->a[32997] = anon_sym_GT_PIPE;
	v->a[32998] = anon_sym_LT_AMP_DASH;
	v->a[32999] = anon_sym_GT_AMP_DASH;
	small_parse_table_1650(v);
}

/* EOF small_parse_table_329.c */
