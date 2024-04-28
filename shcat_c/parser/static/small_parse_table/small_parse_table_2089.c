/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2089.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10445(t_small_parse_table_array *v)
{
	v->a[208900] = sym__arithmetic_binary_expression;
	v->a[208901] = state(2803);
	v->a[208902] = 1;
	v->a[208903] = sym__arithmetic_ternary_expression;
	v->a[208904] = state(2809);
	v->a[208905] = 1;
	v->a[208906] = sym__arithmetic_unary_expression;
	v->a[208907] = state(2825);
	v->a[208908] = 1;
	v->a[208909] = sym__arithmetic_postfix_expression;
	v->a[208910] = actions(9282);
	v->a[208911] = 2;
	v->a[208912] = anon_sym_PLUS_PLUS2;
	v->a[208913] = anon_sym_DASH_DASH2;
	v->a[208914] = actions(9284);
	v->a[208915] = 2;
	v->a[208916] = anon_sym_DASH2;
	v->a[208917] = anon_sym_PLUS2;
	v->a[208918] = state(2752);
	v->a[208919] = 9;
	small_parse_table_10446(v);
}

void	small_parse_table_10446(t_small_parse_table_array *v)
{
	v->a[208920] = sym_subscript;
	v->a[208921] = sym__arithmetic_expression;
	v->a[208922] = sym__arithmetic_literal;
	v->a[208923] = sym__arithmetic_parenthesized_expression;
	v->a[208924] = sym_string;
	v->a[208925] = sym_number;
	v->a[208926] = sym_simple_expansion;
	v->a[208927] = sym_expansion;
	v->a[208928] = sym_command_substitution;
	v->a[208929] = 18;
	v->a[208930] = actions(3);
	v->a[208931] = 1;
	v->a[208932] = sym_comment;
	v->a[208933] = actions(1767);
	v->a[208934] = 1;
	v->a[208935] = aux_sym_number_token1;
	v->a[208936] = actions(1769);
	v->a[208937] = 1;
	v->a[208938] = aux_sym_number_token2;
	v->a[208939] = actions(1773);
	small_parse_table_10447(v);
}

void	small_parse_table_10447(t_small_parse_table_array *v)
{
	v->a[208940] = 1;
	v->a[208941] = anon_sym_DOLLAR_LPAREN;
	v->a[208942] = actions(1787);
	v->a[208943] = 1;
	v->a[208944] = sym__brace_start;
	v->a[208945] = actions(8426);
	v->a[208946] = 1;
	v->a[208947] = anon_sym_DOLLAR_LBRACK;
	v->a[208948] = actions(8430);
	v->a[208949] = 1;
	v->a[208950] = anon_sym_DQUOTE;
	v->a[208951] = actions(8434);
	v->a[208952] = 1;
	v->a[208953] = anon_sym_DOLLAR_LBRACE;
	v->a[208954] = actions(8436);
	v->a[208955] = 1;
	v->a[208956] = anon_sym_BQUOTE;
	v->a[208957] = actions(8438);
	v->a[208958] = 1;
	v->a[208959] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_10448(v);
}

void	small_parse_table_10448(t_small_parse_table_array *v)
{
	v->a[208960] = actions(9820);
	v->a[208961] = 1;
	v->a[208962] = sym_word;
	v->a[208963] = actions(9828);
	v->a[208964] = 1;
	v->a[208965] = sym__comment_word;
	v->a[208966] = actions(9840);
	v->a[208967] = 1;
	v->a[208968] = anon_sym_DOLLAR;
	v->a[208969] = actions(8422);
	v->a[208970] = 2;
	v->a[208971] = anon_sym_LPAREN_LPAREN;
	v->a[208972] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[208973] = actions(8440);
	v->a[208974] = 2;
	v->a[208975] = anon_sym_LT_LPAREN;
	v->a[208976] = anon_sym_GT_LPAREN;
	v->a[208977] = actions(9824);
	v->a[208978] = 2;
	v->a[208979] = sym_test_operator;
	small_parse_table_10449(v);
}

void	small_parse_table_10449(t_small_parse_table_array *v)
{
	v->a[208980] = sym__special_character;
	v->a[208981] = actions(9826);
	v->a[208982] = 3;
	v->a[208983] = sym__bare_dollar;
	v->a[208984] = sym_raw_string;
	v->a[208985] = sym_ansi_c_string;
	v->a[208986] = state(1207);
	v->a[208987] = 9;
	v->a[208988] = sym_arithmetic_expansion;
	v->a[208989] = sym_brace_expression;
	v->a[208990] = sym_string;
	v->a[208991] = sym_translated_string;
	v->a[208992] = sym_number;
	v->a[208993] = sym_simple_expansion;
	v->a[208994] = sym_expansion;
	v->a[208995] = sym_command_substitution;
	v->a[208996] = sym_process_substitution;
	v->a[208997] = 21;
	v->a[208998] = actions(71);
	v->a[208999] = 1;
	small_parse_table_10450(v);
}

/* EOF small_parse_table_2089.c */
