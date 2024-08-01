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
	v->a[32900] = anon_sym_DOLLAR_LPAREN;
	v->a[32901] = anon_sym_BQUOTE;
	v->a[32902] = sym_word;
	v->a[32903] = 6;
	v->a[32904] = actions(3);
	v->a[32905] = 1;
	v->a[32906] = sym_comment;
	v->a[32907] = actions(878);
	v->a[32908] = 1;
	v->a[32909] = sym_variable_name;
	v->a[32910] = actions(1342);
	v->a[32911] = 1;
	v->a[32912] = aux_sym_concatenation_token1;
	v->a[32913] = actions(1344);
	v->a[32914] = 1;
	v->a[32915] = sym__concat;
	v->a[32916] = state(604);
	v->a[32917] = 1;
	v->a[32918] = aux_sym_concatenation_repeat1;
	v->a[32919] = actions(880);
	small_parse_table_1646(v);
}

void	small_parse_table_1646(t_small_parse_table_array *v)
{
	v->a[32920] = 16;
	v->a[32921] = anon_sym_PIPE;
	v->a[32922] = anon_sym_AMP_AMP;
	v->a[32923] = anon_sym_PIPE_PIPE;
	v->a[32924] = anon_sym_LT;
	v->a[32925] = anon_sym_GT;
	v->a[32926] = anon_sym_GT_GT;
	v->a[32927] = anon_sym_LT_LT;
	v->a[32928] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32929] = anon_sym_DOLLAR;
	v->a[32930] = anon_sym_DQUOTE;
	v->a[32931] = sym_raw_string;
	v->a[32932] = sym_number;
	v->a[32933] = anon_sym_DOLLAR_LBRACE;
	v->a[32934] = anon_sym_DOLLAR_LPAREN;
	v->a[32935] = anon_sym_BQUOTE;
	v->a[32936] = sym_word;
	v->a[32937] = 5;
	v->a[32938] = actions(3);
	v->a[32939] = 1;
	small_parse_table_1647(v);
}

void	small_parse_table_1647(t_small_parse_table_array *v)
{
	v->a[32940] = sym_comment;
	v->a[32941] = actions(423);
	v->a[32942] = 1;
	v->a[32943] = sym_variable_name;
	v->a[32944] = state(595);
	v->a[32945] = 2;
	v->a[32946] = sym_concatenation;
	v->a[32947] = aux_sym_for_statement_repeat1;
	v->a[32948] = state(782);
	v->a[32949] = 5;
	v->a[32950] = sym_arithmetic_expansion;
	v->a[32951] = sym_string;
	v->a[32952] = sym_simple_expansion;
	v->a[32953] = sym_expansion;
	v->a[32954] = sym_command_substitution;
	v->a[32955] = actions(421);
	v->a[32956] = 12;
	v->a[32957] = anon_sym_LT;
	v->a[32958] = anon_sym_GT;
	v->a[32959] = anon_sym_GT_GT;
	small_parse_table_1648(v);
}

void	small_parse_table_1648(t_small_parse_table_array *v)
{
	v->a[32960] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32961] = anon_sym_DOLLAR;
	v->a[32962] = anon_sym_DQUOTE;
	v->a[32963] = sym_raw_string;
	v->a[32964] = sym_number;
	v->a[32965] = anon_sym_DOLLAR_LBRACE;
	v->a[32966] = anon_sym_DOLLAR_LPAREN;
	v->a[32967] = anon_sym_BQUOTE;
	v->a[32968] = sym_word;
	v->a[32969] = 12;
	v->a[32970] = actions(3);
	v->a[32971] = 1;
	v->a[32972] = sym_comment;
	v->a[32973] = actions(655);
	v->a[32974] = 1;
	v->a[32975] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32976] = actions(657);
	v->a[32977] = 1;
	v->a[32978] = anon_sym_DOLLAR;
	v->a[32979] = actions(659);
	small_parse_table_1649(v);
}

void	small_parse_table_1649(t_small_parse_table_array *v)
{
	v->a[32980] = 1;
	v->a[32981] = anon_sym_DQUOTE;
	v->a[32982] = actions(661);
	v->a[32983] = 1;
	v->a[32984] = anon_sym_DOLLAR_LBRACE;
	v->a[32985] = actions(663);
	v->a[32986] = 1;
	v->a[32987] = anon_sym_DOLLAR_LPAREN;
	v->a[32988] = actions(665);
	v->a[32989] = 1;
	v->a[32990] = anon_sym_BQUOTE;
	v->a[32991] = state(1562);
	v->a[32992] = 1;
	v->a[32993] = sym_terminator;
	v->a[32994] = state(650);
	v->a[32995] = 2;
	v->a[32996] = sym_concatenation;
	v->a[32997] = aux_sym_for_statement_repeat1;
	v->a[32998] = actions(1346);
	v->a[32999] = 3;
	small_parse_table_1650(v);
}

/* EOF small_parse_table_329.c */
