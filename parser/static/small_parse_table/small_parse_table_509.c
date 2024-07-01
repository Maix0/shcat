/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_509.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2545(t_small_parse_table_array *v)
{
	v->a[50900] = 3;
	v->a[50901] = sym_file_descriptor;
	v->a[50902] = sym__concat;
	v->a[50903] = sym__bare_dollar;
	v->a[50904] = actions(1199);
	v->a[50905] = 23;
	v->a[50906] = anon_sym_LPAREN;
	v->a[50907] = anon_sym_PIPE;
	v->a[50908] = anon_sym_AMP_AMP;
	v->a[50909] = anon_sym_PIPE_PIPE;
	v->a[50910] = anon_sym_LT;
	v->a[50911] = anon_sym_GT;
	v->a[50912] = anon_sym_GT_GT;
	v->a[50913] = anon_sym_LT_AMP;
	v->a[50914] = anon_sym_GT_AMP;
	v->a[50915] = anon_sym_GT_PIPE;
	v->a[50916] = anon_sym_LT_GT;
	v->a[50917] = anon_sym_LT_LT;
	v->a[50918] = anon_sym_LT_LT_DASH;
	v->a[50919] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_2546(v);
}

void	small_parse_table_2546(t_small_parse_table_array *v)
{
	v->a[50920] = aux_sym_concatenation_token1;
	v->a[50921] = anon_sym_DOLLAR;
	v->a[50922] = anon_sym_DQUOTE;
	v->a[50923] = sym_raw_string;
	v->a[50924] = sym_number;
	v->a[50925] = anon_sym_DOLLAR_LBRACE;
	v->a[50926] = anon_sym_DOLLAR_LPAREN;
	v->a[50927] = anon_sym_BQUOTE;
	v->a[50928] = sym_word;
	v->a[50929] = 15;
	v->a[50930] = actions(664);
	v->a[50931] = 1;
	v->a[50932] = sym_comment;
	v->a[50933] = actions(1560);
	v->a[50934] = 1;
	v->a[50935] = anon_sym_LPAREN;
	v->a[50936] = actions(1562);
	v->a[50937] = 1;
	v->a[50938] = anon_sym_BANG;
	v->a[50939] = actions(1570);
	small_parse_table_2547(v);
}

void	small_parse_table_2547(t_small_parse_table_array *v)
{
	v->a[50940] = 1;
	v->a[50941] = anon_sym_TILDE;
	v->a[50942] = actions(1572);
	v->a[50943] = 1;
	v->a[50944] = anon_sym_DOLLAR;
	v->a[50945] = actions(1574);
	v->a[50946] = 1;
	v->a[50947] = anon_sym_DQUOTE;
	v->a[50948] = actions(1578);
	v->a[50949] = 1;
	v->a[50950] = anon_sym_DOLLAR_LBRACE;
	v->a[50951] = actions(1580);
	v->a[50952] = 1;
	v->a[50953] = anon_sym_DOLLAR_LPAREN;
	v->a[50954] = actions(1582);
	v->a[50955] = 1;
	v->a[50956] = anon_sym_BQUOTE;
	v->a[50957] = actions(1584);
	v->a[50958] = 1;
	v->a[50959] = sym_variable_name;
	small_parse_table_2548(v);
}

void	small_parse_table_2548(t_small_parse_table_array *v)
{
	v->a[50960] = actions(1566);
	v->a[50961] = 2;
	v->a[50962] = anon_sym_PLUS_PLUS;
	v->a[50963] = anon_sym_DASH_DASH;
	v->a[50964] = actions(1568);
	v->a[50965] = 2;
	v->a[50966] = anon_sym_DASH2;
	v->a[50967] = anon_sym_PLUS2;
	v->a[50968] = actions(1576);
	v->a[50969] = 2;
	v->a[50970] = sym_number;
	v->a[50971] = aux_sym__simple_variable_name_token1;
	v->a[50972] = state(255);
	v->a[50973] = 3;
	v->a[50974] = sym_string;
	v->a[50975] = sym_simple_expansion;
	v->a[50976] = sym_expansion;
	v->a[50977] = state(220);
	v->a[50978] = 8;
	v->a[50979] = sym__arithmetic_expression;
	small_parse_table_2549(v);
}

void	small_parse_table_2549(t_small_parse_table_array *v)
{
	v->a[50980] = sym_arithmetic_literal;
	v->a[50981] = sym_arithmetic_binary_expression;
	v->a[50982] = sym_arithmetic_ternary_expression;
	v->a[50983] = sym_arithmetic_unary_expression;
	v->a[50984] = sym_arithmetic_postfix_expression;
	v->a[50985] = sym_arithmetic_parenthesized_expression;
	v->a[50986] = sym_command_substitution;
	v->a[50987] = 6;
	v->a[50988] = actions(3);
	v->a[50989] = 1;
	v->a[50990] = sym_comment;
	v->a[50991] = actions(1728);
	v->a[50992] = 1;
	v->a[50993] = aux_sym_concatenation_token1;
	v->a[50994] = actions(1730);
	v->a[50995] = 1;
	v->a[50996] = sym__concat;
	v->a[50997] = state(826);
	v->a[50998] = 1;
	v->a[50999] = aux_sym_concatenation_repeat1;
	small_parse_table_2550(v);
}

/* EOF small_parse_table_509.c */
