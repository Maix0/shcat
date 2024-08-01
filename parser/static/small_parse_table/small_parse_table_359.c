/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_359.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1795(t_small_parse_table_array *v)
{
	v->a[35900] = anon_sym_BQUOTE;
	v->a[35901] = sym_word;
	v->a[35902] = anon_sym_SEMI;
	v->a[35903] = 3;
	v->a[35904] = actions(3);
	v->a[35905] = 1;
	v->a[35906] = sym_comment;
	v->a[35907] = actions(1054);
	v->a[35908] = 1;
	v->a[35909] = sym__concat;
	v->a[35910] = actions(1056);
	v->a[35911] = 18;
	v->a[35912] = anon_sym_SEMI_SEMI;
	v->a[35913] = anon_sym_AMP_AMP;
	v->a[35914] = anon_sym_PIPE_PIPE;
	v->a[35915] = anon_sym_LT;
	v->a[35916] = anon_sym_GT;
	v->a[35917] = anon_sym_GT_GT;
	v->a[35918] = aux_sym_heredoc_redirect_token1;
	v->a[35919] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1796(v);
}

void	small_parse_table_1796(t_small_parse_table_array *v)
{
	v->a[35920] = aux_sym_concatenation_token1;
	v->a[35921] = anon_sym_DOLLAR;
	v->a[35922] = anon_sym_DQUOTE;
	v->a[35923] = sym_raw_string;
	v->a[35924] = sym_number;
	v->a[35925] = anon_sym_DOLLAR_LBRACE;
	v->a[35926] = anon_sym_DOLLAR_LPAREN;
	v->a[35927] = anon_sym_BQUOTE;
	v->a[35928] = sym_word;
	v->a[35929] = anon_sym_SEMI;
	v->a[35930] = 3;
	v->a[35931] = actions(3);
	v->a[35932] = 1;
	v->a[35933] = sym_comment;
	v->a[35934] = actions(1050);
	v->a[35935] = 1;
	v->a[35936] = sym__concat;
	v->a[35937] = actions(1052);
	v->a[35938] = 18;
	v->a[35939] = anon_sym_SEMI_SEMI;
	small_parse_table_1797(v);
}

void	small_parse_table_1797(t_small_parse_table_array *v)
{
	v->a[35940] = anon_sym_AMP_AMP;
	v->a[35941] = anon_sym_PIPE_PIPE;
	v->a[35942] = anon_sym_LT;
	v->a[35943] = anon_sym_GT;
	v->a[35944] = anon_sym_GT_GT;
	v->a[35945] = aux_sym_heredoc_redirect_token1;
	v->a[35946] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[35947] = aux_sym_concatenation_token1;
	v->a[35948] = anon_sym_DOLLAR;
	v->a[35949] = anon_sym_DQUOTE;
	v->a[35950] = sym_raw_string;
	v->a[35951] = sym_number;
	v->a[35952] = anon_sym_DOLLAR_LBRACE;
	v->a[35953] = anon_sym_DOLLAR_LPAREN;
	v->a[35954] = anon_sym_BQUOTE;
	v->a[35955] = sym_word;
	v->a[35956] = anon_sym_SEMI;
	v->a[35957] = 10;
	v->a[35958] = actions(1436);
	v->a[35959] = 1;
	small_parse_table_1798(v);
}

void	small_parse_table_1798(t_small_parse_table_array *v)
{
	v->a[35960] = sym_comment;
	v->a[35961] = actions(1440);
	v->a[35962] = 1;
	v->a[35963] = anon_sym_LPAREN;
	v->a[35964] = actions(1444);
	v->a[35965] = 1;
	v->a[35966] = anon_sym_DOLLAR;
	v->a[35967] = actions(1446);
	v->a[35968] = 1;
	v->a[35969] = anon_sym_DQUOTE;
	v->a[35970] = actions(1450);
	v->a[35971] = 1;
	v->a[35972] = anon_sym_DOLLAR_LBRACE;
	v->a[35973] = actions(1452);
	v->a[35974] = 1;
	v->a[35975] = sym_variable_name;
	v->a[35976] = actions(1442);
	v->a[35977] = 2;
	v->a[35978] = anon_sym_DASH2;
	v->a[35979] = anon_sym_PLUS2;
	small_parse_table_1799(v);
}

void	small_parse_table_1799(t_small_parse_table_array *v)
{
	v->a[35980] = actions(1448);
	v->a[35981] = 2;
	v->a[35982] = sym_number;
	v->a[35983] = aux_sym__simple_variable_name_token1;
	v->a[35984] = state(1340);
	v->a[35985] = 3;
	v->a[35986] = sym_string;
	v->a[35987] = sym_simple_expansion;
	v->a[35988] = sym_expansion;
	v->a[35989] = state(1332);
	v->a[35990] = 7;
	v->a[35991] = sym__arithmetic_expression;
	v->a[35992] = sym_arithmetic_literal;
	v->a[35993] = sym_arithmetic_binary_expression;
	v->a[35994] = sym_arithmetic_ternary_expression;
	v->a[35995] = sym_arithmetic_unary_expression;
	v->a[35996] = sym_arithmetic_postfix_expression;
	v->a[35997] = sym_arithmetic_parenthesized_expression;
	v->a[35998] = 10;
	v->a[35999] = actions(1436);
	small_parse_table_1800(v);
}

/* EOF small_parse_table_359.c */
