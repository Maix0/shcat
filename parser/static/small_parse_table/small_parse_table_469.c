/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_469.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2345(t_small_parse_table_array *v)
{
	v->a[46900] = 1;
	v->a[46901] = anon_sym_DOLLAR_LPAREN;
	v->a[46902] = actions(1712);
	v->a[46903] = 1;
	v->a[46904] = anon_sym_BQUOTE;
	v->a[46905] = actions(1714);
	v->a[46906] = 1;
	v->a[46907] = sym_variable_name;
	v->a[46908] = actions(1696);
	v->a[46909] = 2;
	v->a[46910] = anon_sym_PLUS_PLUS;
	v->a[46911] = anon_sym_DASH_DASH;
	v->a[46912] = actions(1698);
	v->a[46913] = 2;
	v->a[46914] = anon_sym_DASH2;
	v->a[46915] = anon_sym_PLUS2;
	v->a[46916] = actions(1706);
	v->a[46917] = 2;
	v->a[46918] = sym_number;
	v->a[46919] = aux_sym__simple_variable_name_token1;
	small_parse_table_2346(v);
}

void	small_parse_table_2346(t_small_parse_table_array *v)
{
	v->a[46920] = state(238);
	v->a[46921] = 3;
	v->a[46922] = sym_string;
	v->a[46923] = sym_simple_expansion;
	v->a[46924] = sym_expansion;
	v->a[46925] = state(283);
	v->a[46926] = 8;
	v->a[46927] = sym__arithmetic_expression;
	v->a[46928] = sym_arithmetic_literal;
	v->a[46929] = sym_arithmetic_binary_expression;
	v->a[46930] = sym_arithmetic_ternary_expression;
	v->a[46931] = sym_arithmetic_unary_expression;
	v->a[46932] = sym_arithmetic_postfix_expression;
	v->a[46933] = sym_arithmetic_parenthesized_expression;
	v->a[46934] = sym_command_substitution;
	v->a[46935] = 3;
	v->a[46936] = actions(3);
	v->a[46937] = 1;
	v->a[46938] = sym_comment;
	v->a[46939] = actions(515);
	small_parse_table_2347(v);
}

void	small_parse_table_2347(t_small_parse_table_array *v)
{
	v->a[46940] = 3;
	v->a[46941] = sym_file_descriptor;
	v->a[46942] = sym__concat;
	v->a[46943] = sym__bare_dollar;
	v->a[46944] = actions(513);
	v->a[46945] = 23;
	v->a[46946] = anon_sym_LPAREN;
	v->a[46947] = anon_sym_PIPE;
	v->a[46948] = anon_sym_AMP_AMP;
	v->a[46949] = anon_sym_PIPE_PIPE;
	v->a[46950] = anon_sym_LT;
	v->a[46951] = anon_sym_GT;
	v->a[46952] = anon_sym_GT_GT;
	v->a[46953] = anon_sym_LT_AMP;
	v->a[46954] = anon_sym_GT_AMP;
	v->a[46955] = anon_sym_GT_PIPE;
	v->a[46956] = anon_sym_LT_GT;
	v->a[46957] = anon_sym_LT_LT;
	v->a[46958] = anon_sym_LT_LT_DASH;
	v->a[46959] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_2348(v);
}

void	small_parse_table_2348(t_small_parse_table_array *v)
{
	v->a[46960] = aux_sym_concatenation_token1;
	v->a[46961] = anon_sym_DOLLAR;
	v->a[46962] = anon_sym_DQUOTE;
	v->a[46963] = sym_raw_string;
	v->a[46964] = sym_number;
	v->a[46965] = anon_sym_DOLLAR_LBRACE;
	v->a[46966] = anon_sym_DOLLAR_LPAREN;
	v->a[46967] = anon_sym_BQUOTE;
	v->a[46968] = sym_word;
	v->a[46969] = 6;
	v->a[46970] = actions(3);
	v->a[46971] = 1;
	v->a[46972] = sym_comment;
	v->a[46973] = actions(1457);
	v->a[46974] = 1;
	v->a[46975] = sym_file_descriptor;
	v->a[46976] = actions(1460);
	v->a[46977] = 1;
	v->a[46978] = sym_variable_name;
	v->a[46979] = actions(1447);
	small_parse_table_2349(v);
}

void	small_parse_table_2349(t_small_parse_table_array *v)
{
	v->a[46980] = 8;
	v->a[46981] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[46982] = anon_sym_DOLLAR;
	v->a[46983] = anon_sym_DQUOTE;
	v->a[46984] = sym_raw_string;
	v->a[46985] = sym_number;
	v->a[46986] = anon_sym_DOLLAR_LBRACE;
	v->a[46987] = anon_sym_DOLLAR_LPAREN;
	v->a[46988] = sym_word;
	v->a[46989] = actions(1449);
	v->a[46990] = 8;
	v->a[46991] = anon_sym_PIPE;
	v->a[46992] = anon_sym_SEMI_SEMI;
	v->a[46993] = anon_sym_AMP_AMP;
	v->a[46994] = anon_sym_PIPE_PIPE;
	v->a[46995] = anon_sym_LT_LT;
	v->a[46996] = anon_sym_LT_LT_DASH;
	v->a[46997] = aux_sym_heredoc_redirect_token1;
	v->a[46998] = anon_sym_SEMI;
	v->a[46999] = actions(1454);
	small_parse_table_2350(v);
}

/* EOF small_parse_table_469.c */
