/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2029.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10145(t_small_parse_table_array *v)
{
	v->a[202900] = 1;
	v->a[202901] = aux_sym_number_token1;
	v->a[202902] = actions(4088);
	v->a[202903] = 1;
	v->a[202904] = aux_sym_number_token2;
	v->a[202905] = actions(4092);
	v->a[202906] = 1;
	v->a[202907] = anon_sym_DOLLAR_LPAREN;
	v->a[202908] = actions(4102);
	v->a[202909] = 1;
	v->a[202910] = sym__brace_start;
	v->a[202911] = actions(9306);
	v->a[202912] = 1;
	v->a[202913] = sym_word;
	v->a[202914] = actions(9310);
	v->a[202915] = 1;
	v->a[202916] = anon_sym_DOLLAR_LBRACK;
	v->a[202917] = actions(9312);
	v->a[202918] = 1;
	v->a[202919] = anon_sym_DOLLAR;
	small_parse_table_10146(v);
}

void	small_parse_table_10146(t_small_parse_table_array *v)
{
	v->a[202920] = actions(9316);
	v->a[202921] = 1;
	v->a[202922] = anon_sym_DQUOTE;
	v->a[202923] = actions(9320);
	v->a[202924] = 1;
	v->a[202925] = anon_sym_DOLLAR_LBRACE;
	v->a[202926] = actions(9322);
	v->a[202927] = 1;
	v->a[202928] = anon_sym_BQUOTE;
	v->a[202929] = actions(9324);
	v->a[202930] = 1;
	v->a[202931] = anon_sym_DOLLAR_BQUOTE;
	v->a[202932] = actions(9328);
	v->a[202933] = 1;
	v->a[202934] = sym__comment_word;
	v->a[202935] = actions(9308);
	v->a[202936] = 2;
	v->a[202937] = anon_sym_LPAREN_LPAREN;
	v->a[202938] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[202939] = actions(9314);
	small_parse_table_10147(v);
}

void	small_parse_table_10147(t_small_parse_table_array *v)
{
	v->a[202940] = 2;
	v->a[202941] = sym_test_operator;
	v->a[202942] = sym__special_character;
	v->a[202943] = actions(9326);
	v->a[202944] = 2;
	v->a[202945] = anon_sym_LT_LPAREN;
	v->a[202946] = anon_sym_GT_LPAREN;
	v->a[202947] = actions(9318);
	v->a[202948] = 3;
	v->a[202949] = sym__bare_dollar;
	v->a[202950] = sym_raw_string;
	v->a[202951] = sym_ansi_c_string;
	v->a[202952] = state(4566);
	v->a[202953] = 9;
	v->a[202954] = sym_arithmetic_expansion;
	v->a[202955] = sym_brace_expression;
	v->a[202956] = sym_string;
	v->a[202957] = sym_translated_string;
	v->a[202958] = sym_number;
	v->a[202959] = sym_simple_expansion;
	small_parse_table_10148(v);
}

void	small_parse_table_10148(t_small_parse_table_array *v)
{
	v->a[202960] = sym_expansion;
	v->a[202961] = sym_command_substitution;
	v->a[202962] = sym_process_substitution;
	v->a[202963] = 18;
	v->a[202964] = actions(3);
	v->a[202965] = 1;
	v->a[202966] = sym_comment;
	v->a[202967] = actions(4633);
	v->a[202968] = 1;
	v->a[202969] = anon_sym_DOLLAR_LBRACK;
	v->a[202970] = actions(4639);
	v->a[202971] = 1;
	v->a[202972] = anon_sym_DQUOTE;
	v->a[202973] = actions(4643);
	v->a[202974] = 1;
	v->a[202975] = aux_sym_number_token1;
	v->a[202976] = actions(4645);
	v->a[202977] = 1;
	v->a[202978] = aux_sym_number_token2;
	v->a[202979] = actions(4647);
	small_parse_table_10149(v);
}

void	small_parse_table_10149(t_small_parse_table_array *v)
{
	v->a[202980] = 1;
	v->a[202981] = anon_sym_DOLLAR_LBRACE;
	v->a[202982] = actions(4649);
	v->a[202983] = 1;
	v->a[202984] = anon_sym_DOLLAR_LPAREN;
	v->a[202985] = actions(4651);
	v->a[202986] = 1;
	v->a[202987] = anon_sym_BQUOTE;
	v->a[202988] = actions(4653);
	v->a[202989] = 1;
	v->a[202990] = anon_sym_DOLLAR_BQUOTE;
	v->a[202991] = actions(4659);
	v->a[202992] = 1;
	v->a[202993] = sym__brace_start;
	v->a[202994] = actions(9330);
	v->a[202995] = 1;
	v->a[202996] = sym_word;
	v->a[202997] = actions(9332);
	v->a[202998] = 1;
	v->a[202999] = anon_sym_DOLLAR;
	small_parse_table_10150(v);
}

/* EOF small_parse_table_2029.c */
