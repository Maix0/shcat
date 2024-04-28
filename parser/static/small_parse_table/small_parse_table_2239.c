/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2239.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11195(t_small_parse_table_array *v)
{
	v->a[223900] = sym_string;
	v->a[223901] = sym_translated_string;
	v->a[223902] = sym_number;
	v->a[223903] = sym_simple_expansion;
	v->a[223904] = sym_expansion;
	v->a[223905] = sym_command_substitution;
	v->a[223906] = sym_process_substitution;
	v->a[223907] = 18;
	v->a[223908] = actions(3);
	v->a[223909] = 1;
	v->a[223910] = sym_comment;
	v->a[223911] = actions(4086);
	v->a[223912] = 1;
	v->a[223913] = aux_sym_number_token1;
	v->a[223914] = actions(4088);
	v->a[223915] = 1;
	v->a[223916] = aux_sym_number_token2;
	v->a[223917] = actions(4092);
	v->a[223918] = 1;
	v->a[223919] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_11196(v);
}

void	small_parse_table_11196(t_small_parse_table_array *v)
{
	v->a[223920] = actions(4102);
	v->a[223921] = 1;
	v->a[223922] = sym__brace_start;
	v->a[223923] = actions(9306);
	v->a[223924] = 1;
	v->a[223925] = sym_word;
	v->a[223926] = actions(9310);
	v->a[223927] = 1;
	v->a[223928] = anon_sym_DOLLAR_LBRACK;
	v->a[223929] = actions(9316);
	v->a[223930] = 1;
	v->a[223931] = anon_sym_DQUOTE;
	v->a[223932] = actions(9320);
	v->a[223933] = 1;
	v->a[223934] = anon_sym_DOLLAR_LBRACE;
	v->a[223935] = actions(9322);
	v->a[223936] = 1;
	v->a[223937] = anon_sym_BQUOTE;
	v->a[223938] = actions(9324);
	v->a[223939] = 1;
	small_parse_table_11197(v);
}

void	small_parse_table_11197(t_small_parse_table_array *v)
{
	v->a[223940] = anon_sym_DOLLAR_BQUOTE;
	v->a[223941] = actions(9328);
	v->a[223942] = 1;
	v->a[223943] = sym__comment_word;
	v->a[223944] = actions(10670);
	v->a[223945] = 1;
	v->a[223946] = anon_sym_DOLLAR;
	v->a[223947] = actions(9308);
	v->a[223948] = 2;
	v->a[223949] = anon_sym_LPAREN_LPAREN;
	v->a[223950] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[223951] = actions(9314);
	v->a[223952] = 2;
	v->a[223953] = sym_test_operator;
	v->a[223954] = sym__special_character;
	v->a[223955] = actions(9326);
	v->a[223956] = 2;
	v->a[223957] = anon_sym_LT_LPAREN;
	v->a[223958] = anon_sym_GT_LPAREN;
	v->a[223959] = actions(9318);
	small_parse_table_11198(v);
}

void	small_parse_table_11198(t_small_parse_table_array *v)
{
	v->a[223960] = 3;
	v->a[223961] = sym__bare_dollar;
	v->a[223962] = sym_raw_string;
	v->a[223963] = sym_ansi_c_string;
	v->a[223964] = state(4566);
	v->a[223965] = 9;
	v->a[223966] = sym_arithmetic_expansion;
	v->a[223967] = sym_brace_expression;
	v->a[223968] = sym_string;
	v->a[223969] = sym_translated_string;
	v->a[223970] = sym_number;
	v->a[223971] = sym_simple_expansion;
	v->a[223972] = sym_expansion;
	v->a[223973] = sym_command_substitution;
	v->a[223974] = sym_process_substitution;
	v->a[223975] = 21;
	v->a[223976] = actions(71);
	v->a[223977] = 1;
	v->a[223978] = sym_comment;
	v->a[223979] = actions(3064);
	small_parse_table_11199(v);
}

void	small_parse_table_11199(t_small_parse_table_array *v)
{
	v->a[223980] = 1;
	v->a[223981] = sym_variable_name;
	v->a[223982] = actions(9278);
	v->a[223983] = 1;
	v->a[223984] = anon_sym_LPAREN;
	v->a[223985] = actions(9280);
	v->a[223986] = 1;
	v->a[223987] = anon_sym_BANG;
	v->a[223988] = actions(9286);
	v->a[223989] = 1;
	v->a[223990] = anon_sym_TILDE;
	v->a[223991] = actions(9288);
	v->a[223992] = 1;
	v->a[223993] = anon_sym_DOLLAR;
	v->a[223994] = actions(9290);
	v->a[223995] = 1;
	v->a[223996] = anon_sym_DQUOTE;
	v->a[223997] = actions(9292);
	v->a[223998] = 1;
	v->a[223999] = aux_sym_number_token1;
	small_parse_table_11200(v);
}

/* EOF small_parse_table_2239.c */
