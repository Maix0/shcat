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
	v->a[32900] = sym_variable_name;
	v->a[32901] = state(433);
	v->a[32902] = 2;
	v->a[32903] = sym_concatenation;
	v->a[32904] = aux_sym_for_statement_repeat1;
	v->a[32905] = actions(1271);
	v->a[32906] = 3;
	v->a[32907] = sym_raw_string;
	v->a[32908] = sym_number;
	v->a[32909] = sym_word;
	v->a[32910] = state(806);
	v->a[32911] = 5;
	v->a[32912] = sym_arithmetic_expansion;
	v->a[32913] = sym_string;
	v->a[32914] = sym_simple_expansion;
	v->a[32915] = sym_expansion;
	v->a[32916] = sym_command_substitution;
	v->a[32917] = actions(628);
	v->a[32918] = 12;
	v->a[32919] = anon_sym_PIPE;
	small_parse_table_1646(v);
}

void	small_parse_table_1646(t_small_parse_table_array *v)
{
	v->a[32920] = anon_sym_AMP_AMP;
	v->a[32921] = anon_sym_PIPE_PIPE;
	v->a[32922] = anon_sym_LT;
	v->a[32923] = anon_sym_GT;
	v->a[32924] = anon_sym_GT_GT;
	v->a[32925] = anon_sym_LT_AMP;
	v->a[32926] = anon_sym_GT_AMP;
	v->a[32927] = anon_sym_GT_PIPE;
	v->a[32928] = anon_sym_LT_GT;
	v->a[32929] = anon_sym_LT_LT;
	v->a[32930] = anon_sym_LT_LT_DASH;
	v->a[32931] = 5;
	v->a[32932] = actions(3);
	v->a[32933] = 1;
	v->a[32934] = sym_comment;
	v->a[32935] = actions(678);
	v->a[32936] = 2;
	v->a[32937] = sym_file_descriptor;
	v->a[32938] = sym_variable_name;
	v->a[32939] = state(433);
	small_parse_table_1647(v);
}

void	small_parse_table_1647(t_small_parse_table_array *v)
{
	v->a[32940] = 2;
	v->a[32941] = sym_concatenation;
	v->a[32942] = aux_sym_for_statement_repeat1;
	v->a[32943] = state(806);
	v->a[32944] = 5;
	v->a[32945] = sym_arithmetic_expansion;
	v->a[32946] = sym_string;
	v->a[32947] = sym_simple_expansion;
	v->a[32948] = sym_expansion;
	v->a[32949] = sym_command_substitution;
	v->a[32950] = actions(676);
	v->a[32951] = 21;
	v->a[32952] = anon_sym_PIPE;
	v->a[32953] = anon_sym_AMP_AMP;
	v->a[32954] = anon_sym_PIPE_PIPE;
	v->a[32955] = anon_sym_LT;
	v->a[32956] = anon_sym_GT;
	v->a[32957] = anon_sym_GT_GT;
	v->a[32958] = anon_sym_LT_AMP;
	v->a[32959] = anon_sym_GT_AMP;
	small_parse_table_1648(v);
}

void	small_parse_table_1648(t_small_parse_table_array *v)
{
	v->a[32960] = anon_sym_GT_PIPE;
	v->a[32961] = anon_sym_LT_GT;
	v->a[32962] = anon_sym_LT_LT;
	v->a[32963] = anon_sym_LT_LT_DASH;
	v->a[32964] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32965] = anon_sym_DOLLAR;
	v->a[32966] = anon_sym_DQUOTE;
	v->a[32967] = sym_raw_string;
	v->a[32968] = sym_number;
	v->a[32969] = anon_sym_DOLLAR_LBRACE;
	v->a[32970] = anon_sym_DOLLAR_LPAREN;
	v->a[32971] = anon_sym_BQUOTE;
	v->a[32972] = sym_word;
	v->a[32973] = 6;
	v->a[32974] = actions(3);
	v->a[32975] = 1;
	v->a[32976] = sym_comment;
	v->a[32977] = actions(1125);
	v->a[32978] = 1;
	v->a[32979] = aux_sym_concatenation_token1;
	small_parse_table_1649(v);
}

void	small_parse_table_1649(t_small_parse_table_array *v)
{
	v->a[32980] = actions(1292);
	v->a[32981] = 1;
	v->a[32982] = sym__concat;
	v->a[32983] = state(363);
	v->a[32984] = 1;
	v->a[32985] = aux_sym_concatenation_repeat1;
	v->a[32986] = actions(1097);
	v->a[32987] = 2;
	v->a[32988] = sym_file_descriptor;
	v->a[32989] = sym__bare_dollar;
	v->a[32990] = actions(1099);
	v->a[32991] = 25;
	v->a[32992] = anon_sym_LPAREN;
	v->a[32993] = anon_sym_PIPE;
	v->a[32994] = anon_sym_SEMI_SEMI;
	v->a[32995] = anon_sym_AMP_AMP;
	v->a[32996] = anon_sym_PIPE_PIPE;
	v->a[32997] = anon_sym_LT;
	v->a[32998] = anon_sym_GT;
	v->a[32999] = anon_sym_GT_GT;
	small_parse_table_1650(v);
}

/* EOF small_parse_table_329.c */
