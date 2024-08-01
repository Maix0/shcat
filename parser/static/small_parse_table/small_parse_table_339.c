/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_339.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1695(t_small_parse_table_array *v)
{
	v->a[33900] = sym_variable_name;
	v->a[33901] = actions(1426);
	v->a[33902] = 2;
	v->a[33903] = anon_sym_DASH2;
	v->a[33904] = anon_sym_PLUS2;
	v->a[33905] = actions(1432);
	v->a[33906] = 2;
	v->a[33907] = sym_number;
	v->a[33908] = aux_sym__simple_variable_name_token1;
	v->a[33909] = state(1312);
	v->a[33910] = 3;
	v->a[33911] = sym_string;
	v->a[33912] = sym_simple_expansion;
	v->a[33913] = sym_expansion;
	v->a[33914] = state(1316);
	v->a[33915] = 7;
	v->a[33916] = sym__arithmetic_expression;
	v->a[33917] = sym_arithmetic_literal;
	v->a[33918] = sym_arithmetic_binary_expression;
	v->a[33919] = sym_arithmetic_ternary_expression;
	small_parse_table_1696(v);
}

void	small_parse_table_1696(t_small_parse_table_array *v)
{
	v->a[33920] = sym_arithmetic_unary_expression;
	v->a[33921] = sym_arithmetic_postfix_expression;
	v->a[33922] = sym_arithmetic_parenthesized_expression;
	v->a[33923] = 3;
	v->a[33924] = actions(3);
	v->a[33925] = 1;
	v->a[33926] = sym_comment;
	v->a[33927] = actions(1083);
	v->a[33928] = 2;
	v->a[33929] = sym__concat;
	v->a[33930] = sym__bare_dollar;
	v->a[33931] = actions(1085);
	v->a[33932] = 17;
	v->a[33933] = anon_sym_PIPE;
	v->a[33934] = anon_sym_AMP_AMP;
	v->a[33935] = anon_sym_PIPE_PIPE;
	v->a[33936] = anon_sym_LT;
	v->a[33937] = anon_sym_GT;
	v->a[33938] = anon_sym_GT_GT;
	v->a[33939] = anon_sym_LT_LT;
	small_parse_table_1697(v);
}

void	small_parse_table_1697(t_small_parse_table_array *v)
{
	v->a[33940] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[33941] = aux_sym_concatenation_token1;
	v->a[33942] = anon_sym_DOLLAR;
	v->a[33943] = anon_sym_DQUOTE;
	v->a[33944] = sym_raw_string;
	v->a[33945] = sym_number;
	v->a[33946] = anon_sym_DOLLAR_LBRACE;
	v->a[33947] = anon_sym_DOLLAR_LPAREN;
	v->a[33948] = anon_sym_BQUOTE;
	v->a[33949] = sym_word;
	v->a[33950] = 5;
	v->a[33951] = actions(3);
	v->a[33952] = 1;
	v->a[33953] = sym_comment;
	v->a[33954] = actions(1420);
	v->a[33955] = 1;
	v->a[33956] = aux_sym_concatenation_token1;
	v->a[33957] = actions(1454);
	v->a[33958] = 1;
	v->a[33959] = sym__concat;
	small_parse_table_1698(v);
}

void	small_parse_table_1698(t_small_parse_table_array *v)
{
	v->a[33960] = state(630);
	v->a[33961] = 1;
	v->a[33962] = aux_sym_concatenation_repeat1;
	v->a[33963] = actions(923);
	v->a[33964] = 16;
	v->a[33965] = anon_sym_PIPE;
	v->a[33966] = anon_sym_AMP_AMP;
	v->a[33967] = anon_sym_PIPE_PIPE;
	v->a[33968] = anon_sym_LT;
	v->a[33969] = anon_sym_GT;
	v->a[33970] = anon_sym_GT_GT;
	v->a[33971] = anon_sym_LT_LT;
	v->a[33972] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[33973] = anon_sym_DOLLAR;
	v->a[33974] = anon_sym_DQUOTE;
	v->a[33975] = sym_raw_string;
	v->a[33976] = sym_number;
	v->a[33977] = anon_sym_DOLLAR_LBRACE;
	v->a[33978] = anon_sym_DOLLAR_LPAREN;
	v->a[33979] = anon_sym_BQUOTE;
	small_parse_table_1699(v);
}

void	small_parse_table_1699(t_small_parse_table_array *v)
{
	v->a[33980] = sym_word;
	v->a[33981] = 10;
	v->a[33982] = actions(1424);
	v->a[33983] = 1;
	v->a[33984] = anon_sym_LPAREN;
	v->a[33985] = actions(1428);
	v->a[33986] = 1;
	v->a[33987] = anon_sym_DOLLAR;
	v->a[33988] = actions(1430);
	v->a[33989] = 1;
	v->a[33990] = anon_sym_DQUOTE;
	v->a[33991] = actions(1434);
	v->a[33992] = 1;
	v->a[33993] = anon_sym_DOLLAR_LBRACE;
	v->a[33994] = actions(1436);
	v->a[33995] = 1;
	v->a[33996] = sym_comment;
	v->a[33997] = actions(1438);
	v->a[33998] = 1;
	v->a[33999] = sym_variable_name;
	small_parse_table_1700(v);
}

/* EOF small_parse_table_339.c */
