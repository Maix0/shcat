/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2269.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11345(t_small_parse_table_array *v)
{
	v->a[226900] = 1;
	v->a[226901] = anon_sym_BQUOTE;
	v->a[226902] = actions(9922);
	v->a[226903] = 1;
	v->a[226904] = anon_sym_DOLLAR_BQUOTE;
	v->a[226905] = actions(10780);
	v->a[226906] = 1;
	v->a[226907] = aux_sym__simple_variable_name_token1;
	v->a[226908] = state(3359);
	v->a[226909] = 1;
	v->a[226910] = sym__arithmetic_postfix_expression;
	v->a[226911] = state(3361);
	v->a[226912] = 1;
	v->a[226913] = sym__arithmetic_unary_expression;
	v->a[226914] = state(3367);
	v->a[226915] = 1;
	v->a[226916] = sym__arithmetic_ternary_expression;
	v->a[226917] = state(3375);
	v->a[226918] = 1;
	v->a[226919] = sym__arithmetic_binary_expression;
	small_parse_table_11346(v);
}

void	small_parse_table_11346(t_small_parse_table_array *v)
{
	v->a[226920] = actions(9902);
	v->a[226921] = 2;
	v->a[226922] = anon_sym_PLUS_PLUS2;
	v->a[226923] = anon_sym_DASH_DASH2;
	v->a[226924] = actions(9904);
	v->a[226925] = 2;
	v->a[226926] = anon_sym_DASH2;
	v->a[226927] = anon_sym_PLUS2;
	v->a[226928] = state(3249);
	v->a[226929] = 9;
	v->a[226930] = sym_subscript;
	v->a[226931] = sym__arithmetic_expression;
	v->a[226932] = sym__arithmetic_literal;
	v->a[226933] = sym__arithmetic_parenthesized_expression;
	v->a[226934] = sym_string;
	v->a[226935] = sym_number;
	v->a[226936] = sym_simple_expansion;
	v->a[226937] = sym_expansion;
	v->a[226938] = sym_command_substitution;
	v->a[226939] = 18;
	small_parse_table_11347(v);
}

void	small_parse_table_11347(t_small_parse_table_array *v)
{
	v->a[226940] = actions(3);
	v->a[226941] = 1;
	v->a[226942] = sym_comment;
	v->a[226943] = actions(8268);
	v->a[226944] = 1;
	v->a[226945] = anon_sym_DOLLAR_LBRACK;
	v->a[226946] = actions(8274);
	v->a[226947] = 1;
	v->a[226948] = anon_sym_DQUOTE;
	v->a[226949] = actions(8278);
	v->a[226950] = 1;
	v->a[226951] = aux_sym_number_token1;
	v->a[226952] = actions(8280);
	v->a[226953] = 1;
	v->a[226954] = aux_sym_number_token2;
	v->a[226955] = actions(8282);
	v->a[226956] = 1;
	v->a[226957] = anon_sym_DOLLAR_LBRACE;
	v->a[226958] = actions(8284);
	v->a[226959] = 1;
	small_parse_table_11348(v);
}

void	small_parse_table_11348(t_small_parse_table_array *v)
{
	v->a[226960] = anon_sym_DOLLAR_LPAREN;
	v->a[226961] = actions(8286);
	v->a[226962] = 1;
	v->a[226963] = anon_sym_BQUOTE;
	v->a[226964] = actions(8288);
	v->a[226965] = 1;
	v->a[226966] = anon_sym_DOLLAR_BQUOTE;
	v->a[226967] = actions(8298);
	v->a[226968] = 1;
	v->a[226969] = sym__brace_start;
	v->a[226970] = actions(10480);
	v->a[226971] = 1;
	v->a[226972] = sym_word;
	v->a[226973] = actions(10486);
	v->a[226974] = 1;
	v->a[226975] = sym__comment_word;
	v->a[226976] = actions(10782);
	v->a[226977] = 1;
	v->a[226978] = anon_sym_DOLLAR;
	v->a[226979] = actions(8264);
	small_parse_table_11349(v);
}

void	small_parse_table_11349(t_small_parse_table_array *v)
{
	v->a[226980] = 2;
	v->a[226981] = anon_sym_LPAREN_LPAREN;
	v->a[226982] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[226983] = actions(8290);
	v->a[226984] = 2;
	v->a[226985] = anon_sym_LT_LPAREN;
	v->a[226986] = anon_sym_GT_LPAREN;
	v->a[226987] = actions(10482);
	v->a[226988] = 2;
	v->a[226989] = sym_test_operator;
	v->a[226990] = sym__special_character;
	v->a[226991] = actions(10484);
	v->a[226992] = 3;
	v->a[226993] = sym__bare_dollar;
	v->a[226994] = sym_raw_string;
	v->a[226995] = sym_ansi_c_string;
	v->a[226996] = state(1465);
	v->a[226997] = 9;
	v->a[226998] = sym_arithmetic_expansion;
	v->a[226999] = sym_brace_expression;
	small_parse_table_11350(v);
}

/* EOF small_parse_table_2269.c */
