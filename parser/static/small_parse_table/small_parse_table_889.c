/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_889.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4445(t_small_parse_table_array *v)
{
	v->a[88900] = actions(4600);
	v->a[88901] = 1;
	v->a[88902] = aux_sym_number_token2;
	v->a[88903] = actions(4602);
	v->a[88904] = 1;
	v->a[88905] = anon_sym_DOLLAR_LBRACE;
	v->a[88906] = actions(4604);
	v->a[88907] = 1;
	v->a[88908] = anon_sym_DOLLAR_LPAREN;
	v->a[88909] = actions(4606);
	v->a[88910] = 1;
	v->a[88911] = anon_sym_BQUOTE;
	v->a[88912] = actions(4608);
	v->a[88913] = 1;
	v->a[88914] = anon_sym_DOLLAR_BQUOTE;
	v->a[88915] = actions(4911);
	v->a[88916] = 1;
	v->a[88917] = aux_sym__simple_variable_name_token1;
	v->a[88918] = actions(4913);
	v->a[88919] = 1;
	small_parse_table_4446(v);
}

void	small_parse_table_4446(t_small_parse_table_array *v)
{
	v->a[88920] = sym_variable_name;
	v->a[88921] = state(1476);
	v->a[88922] = 1;
	v->a[88923] = sym__arithmetic_postfix_expression;
	v->a[88924] = state(1478);
	v->a[88925] = 1;
	v->a[88926] = sym__arithmetic_unary_expression;
	v->a[88927] = state(1490);
	v->a[88928] = 1;
	v->a[88929] = sym__arithmetic_ternary_expression;
	v->a[88930] = state(1511);
	v->a[88931] = 1;
	v->a[88932] = sym__arithmetic_binary_expression;
	v->a[88933] = actions(4588);
	v->a[88934] = 2;
	v->a[88935] = anon_sym_PLUS_PLUS;
	v->a[88936] = anon_sym_DASH_DASH;
	v->a[88937] = actions(4590);
	v->a[88938] = 2;
	v->a[88939] = anon_sym_DASH2;
	small_parse_table_4447(v);
}

void	small_parse_table_4447(t_small_parse_table_array *v)
{
	v->a[88940] = anon_sym_PLUS2;
	v->a[88941] = state(1459);
	v->a[88942] = 8;
	v->a[88943] = sym__arithmetic_expression;
	v->a[88944] = sym__arithmetic_literal;
	v->a[88945] = sym__arithmetic_parenthesized_expression;
	v->a[88946] = sym_string;
	v->a[88947] = sym_number;
	v->a[88948] = sym_simple_expansion;
	v->a[88949] = sym_expansion;
	v->a[88950] = sym_command_substitution;
	v->a[88951] = 5;
	v->a[88952] = actions(3);
	v->a[88953] = 1;
	v->a[88954] = sym_comment;
	v->a[88955] = actions(4915);
	v->a[88956] = 1;
	v->a[88957] = sym__special_character;
	v->a[88958] = state(1739);
	v->a[88959] = 1;
	small_parse_table_4448(v);
}

void	small_parse_table_4448(t_small_parse_table_array *v)
{
	v->a[88960] = aux_sym__literal_repeat1;
	v->a[88961] = actions(3519);
	v->a[88962] = 4;
	v->a[88963] = sym_file_descriptor;
	v->a[88964] = sym_test_operator;
	v->a[88965] = sym__brace_start;
	v->a[88966] = aux_sym_heredoc_redirect_token1;
	v->a[88967] = actions(3517);
	v->a[88968] = 23;
	v->a[88969] = anon_sym_AMP_AMP;
	v->a[88970] = anon_sym_PIPE_PIPE;
	v->a[88971] = anon_sym_LT;
	v->a[88972] = anon_sym_GT;
	v->a[88973] = anon_sym_GT_GT;
	v->a[88974] = anon_sym_AMP_GT;
	v->a[88975] = anon_sym_AMP_GT_GT;
	v->a[88976] = anon_sym_LT_AMP;
	v->a[88977] = anon_sym_GT_AMP;
	v->a[88978] = anon_sym_GT_PIPE;
	v->a[88979] = anon_sym_LT_AMP_DASH;
	small_parse_table_4449(v);
}

void	small_parse_table_4449(t_small_parse_table_array *v)
{
	v->a[88980] = anon_sym_GT_AMP_DASH;
	v->a[88981] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[88982] = anon_sym_DOLLAR;
	v->a[88983] = anon_sym_DQUOTE;
	v->a[88984] = sym_raw_string;
	v->a[88985] = aux_sym_number_token1;
	v->a[88986] = aux_sym_number_token2;
	v->a[88987] = anon_sym_DOLLAR_LBRACE;
	v->a[88988] = anon_sym_DOLLAR_LPAREN;
	v->a[88989] = anon_sym_BQUOTE;
	v->a[88990] = anon_sym_DOLLAR_BQUOTE;
	v->a[88991] = sym_word;
	v->a[88992] = 21;
	v->a[88993] = actions(57);
	v->a[88994] = 1;
	v->a[88995] = sym_comment;
	v->a[88996] = actions(4614);
	v->a[88997] = 1;
	v->a[88998] = anon_sym_LPAREN;
	v->a[88999] = actions(4616);
	small_parse_table_4450(v);
}

/* EOF small_parse_table_889.c */
