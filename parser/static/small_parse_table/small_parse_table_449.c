/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_449.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2245(t_small_parse_table_array *v)
{
	v->a[44900] = anon_sym_DASH2;
	v->a[44901] = anon_sym_PLUS2;
	v->a[44902] = actions(1485);
	v->a[44903] = 2;
	v->a[44904] = sym_number;
	v->a[44905] = aux_sym__simple_variable_name_token1;
	v->a[44906] = state(194);
	v->a[44907] = 3;
	v->a[44908] = sym_string;
	v->a[44909] = sym_simple_expansion;
	v->a[44910] = sym_expansion;
	v->a[44911] = state(281);
	v->a[44912] = 8;
	v->a[44913] = sym__arithmetic_expression;
	v->a[44914] = sym_arithmetic_literal;
	v->a[44915] = sym_arithmetic_binary_expression;
	v->a[44916] = sym_arithmetic_ternary_expression;
	v->a[44917] = sym_arithmetic_unary_expression;
	v->a[44918] = sym_arithmetic_postfix_expression;
	v->a[44919] = sym_arithmetic_parenthesized_expression;
	small_parse_table_2246(v);
}

void	small_parse_table_2246(t_small_parse_table_array *v)
{
	v->a[44920] = sym_command_substitution;
	v->a[44921] = 7;
	v->a[44922] = actions(3);
	v->a[44923] = 1;
	v->a[44924] = sym_comment;
	v->a[44925] = actions(1457);
	v->a[44926] = 1;
	v->a[44927] = sym_file_descriptor;
	v->a[44928] = actions(1460);
	v->a[44929] = 1;
	v->a[44930] = sym_variable_name;
	v->a[44931] = actions(1624);
	v->a[44932] = 1;
	v->a[44933] = anon_sym_RPAREN;
	v->a[44934] = actions(1454);
	v->a[44935] = 7;
	v->a[44936] = anon_sym_LT;
	v->a[44937] = anon_sym_GT;
	v->a[44938] = anon_sym_GT_GT;
	v->a[44939] = anon_sym_LT_AMP;
	small_parse_table_2247(v);
}

void	small_parse_table_2247(t_small_parse_table_array *v)
{
	v->a[44940] = anon_sym_GT_AMP;
	v->a[44941] = anon_sym_GT_PIPE;
	v->a[44942] = anon_sym_LT_GT;
	v->a[44943] = actions(1449);
	v->a[44944] = 8;
	v->a[44945] = anon_sym_PIPE;
	v->a[44946] = anon_sym_SEMI_SEMI;
	v->a[44947] = anon_sym_AMP_AMP;
	v->a[44948] = anon_sym_PIPE_PIPE;
	v->a[44949] = anon_sym_LT_LT;
	v->a[44950] = anon_sym_LT_LT_DASH;
	v->a[44951] = aux_sym_heredoc_redirect_token1;
	v->a[44952] = anon_sym_SEMI;
	v->a[44953] = actions(1447);
	v->a[44954] = 9;
	v->a[44955] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[44956] = anon_sym_DOLLAR;
	v->a[44957] = anon_sym_DQUOTE;
	v->a[44958] = sym_raw_string;
	v->a[44959] = sym_number;
	small_parse_table_2248(v);
}

void	small_parse_table_2248(t_small_parse_table_array *v)
{
	v->a[44960] = anon_sym_DOLLAR_LBRACE;
	v->a[44961] = anon_sym_DOLLAR_LPAREN;
	v->a[44962] = anon_sym_BQUOTE;
	v->a[44963] = sym_word;
	v->a[44964] = 16;
	v->a[44965] = actions(501);
	v->a[44966] = 1;
	v->a[44967] = sym_comment;
	v->a[44968] = actions(1469);
	v->a[44969] = 1;
	v->a[44970] = anon_sym_LPAREN;
	v->a[44971] = actions(1471);
	v->a[44972] = 1;
	v->a[44973] = anon_sym_BANG;
	v->a[44974] = actions(1479);
	v->a[44975] = 1;
	v->a[44976] = anon_sym_TILDE;
	v->a[44977] = actions(1481);
	v->a[44978] = 1;
	v->a[44979] = anon_sym_DOLLAR;
	small_parse_table_2249(v);
}

void	small_parse_table_2249(t_small_parse_table_array *v)
{
	v->a[44980] = actions(1483);
	v->a[44981] = 1;
	v->a[44982] = anon_sym_DQUOTE;
	v->a[44983] = actions(1487);
	v->a[44984] = 1;
	v->a[44985] = anon_sym_DOLLAR_LBRACE;
	v->a[44986] = actions(1489);
	v->a[44987] = 1;
	v->a[44988] = anon_sym_DOLLAR_LPAREN;
	v->a[44989] = actions(1491);
	v->a[44990] = 1;
	v->a[44991] = anon_sym_BQUOTE;
	v->a[44992] = actions(1493);
	v->a[44993] = 1;
	v->a[44994] = sym_variable_name;
	v->a[44995] = actions(1627);
	v->a[44996] = 1;
	v->a[44997] = anon_sym_RPAREN_RPAREN;
	v->a[44998] = actions(1475);
	v->a[44999] = 2;
	small_parse_table_2250(v);
}

/* EOF small_parse_table_449.c */
