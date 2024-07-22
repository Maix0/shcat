/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_489.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2445(t_small_parse_table_array *v)
{
	v->a[48900] = sym_word;
	v->a[48901] = 15;
	v->a[48902] = actions(501);
	v->a[48903] = 1;
	v->a[48904] = sym_comment;
	v->a[48905] = actions(1469);
	v->a[48906] = 1;
	v->a[48907] = anon_sym_LPAREN;
	v->a[48908] = actions(1471);
	v->a[48909] = 1;
	v->a[48910] = anon_sym_BANG;
	v->a[48911] = actions(1479);
	v->a[48912] = 1;
	v->a[48913] = anon_sym_TILDE;
	v->a[48914] = actions(1481);
	v->a[48915] = 1;
	v->a[48916] = anon_sym_DOLLAR;
	v->a[48917] = actions(1483);
	v->a[48918] = 1;
	v->a[48919] = anon_sym_DQUOTE;
	small_parse_table_2446(v);
}

void	small_parse_table_2446(t_small_parse_table_array *v)
{
	v->a[48920] = actions(1487);
	v->a[48921] = 1;
	v->a[48922] = anon_sym_DOLLAR_LBRACE;
	v->a[48923] = actions(1489);
	v->a[48924] = 1;
	v->a[48925] = anon_sym_DOLLAR_LPAREN;
	v->a[48926] = actions(1491);
	v->a[48927] = 1;
	v->a[48928] = anon_sym_BQUOTE;
	v->a[48929] = actions(1493);
	v->a[48930] = 1;
	v->a[48931] = sym_variable_name;
	v->a[48932] = actions(1475);
	v->a[48933] = 2;
	v->a[48934] = anon_sym_PLUS_PLUS;
	v->a[48935] = anon_sym_DASH_DASH;
	v->a[48936] = actions(1477);
	v->a[48937] = 2;
	v->a[48938] = anon_sym_DASH2;
	v->a[48939] = anon_sym_PLUS2;
	small_parse_table_2447(v);
}

void	small_parse_table_2447(t_small_parse_table_array *v)
{
	v->a[48940] = actions(1485);
	v->a[48941] = 2;
	v->a[48942] = sym_number;
	v->a[48943] = aux_sym__simple_variable_name_token1;
	v->a[48944] = state(194);
	v->a[48945] = 3;
	v->a[48946] = sym_string;
	v->a[48947] = sym_simple_expansion;
	v->a[48948] = sym_expansion;
	v->a[48949] = state(245);
	v->a[48950] = 8;
	v->a[48951] = sym__arithmetic_expression;
	v->a[48952] = sym_arithmetic_literal;
	v->a[48953] = sym_arithmetic_binary_expression;
	v->a[48954] = sym_arithmetic_ternary_expression;
	v->a[48955] = sym_arithmetic_unary_expression;
	v->a[48956] = sym_arithmetic_postfix_expression;
	v->a[48957] = sym_arithmetic_parenthesized_expression;
	v->a[48958] = sym_command_substitution;
	v->a[48959] = 3;
	small_parse_table_2448(v);
}

void	small_parse_table_2448(t_small_parse_table_array *v)
{
	v->a[48960] = actions(3);
	v->a[48961] = 1;
	v->a[48962] = sym_comment;
	v->a[48963] = actions(1110);
	v->a[48964] = 3;
	v->a[48965] = sym_file_descriptor;
	v->a[48966] = sym__concat;
	v->a[48967] = sym__bare_dollar;
	v->a[48968] = actions(1105);
	v->a[48969] = 23;
	v->a[48970] = anon_sym_LPAREN;
	v->a[48971] = anon_sym_PIPE;
	v->a[48972] = anon_sym_AMP_AMP;
	v->a[48973] = anon_sym_PIPE_PIPE;
	v->a[48974] = anon_sym_LT;
	v->a[48975] = anon_sym_GT;
	v->a[48976] = anon_sym_GT_GT;
	v->a[48977] = anon_sym_LT_AMP;
	v->a[48978] = anon_sym_GT_AMP;
	v->a[48979] = anon_sym_GT_PIPE;
	small_parse_table_2449(v);
}

void	small_parse_table_2449(t_small_parse_table_array *v)
{
	v->a[48980] = anon_sym_LT_GT;
	v->a[48981] = anon_sym_LT_LT;
	v->a[48982] = anon_sym_LT_LT_DASH;
	v->a[48983] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[48984] = aux_sym_concatenation_token1;
	v->a[48985] = anon_sym_DOLLAR;
	v->a[48986] = anon_sym_DQUOTE;
	v->a[48987] = sym_raw_string;
	v->a[48988] = sym_number;
	v->a[48989] = anon_sym_DOLLAR_LBRACE;
	v->a[48990] = anon_sym_DOLLAR_LPAREN;
	v->a[48991] = anon_sym_BQUOTE;
	v->a[48992] = sym_word;
	v->a[48993] = 15;
	v->a[48994] = actions(501);
	v->a[48995] = 1;
	v->a[48996] = sym_comment;
	v->a[48997] = actions(1469);
	v->a[48998] = 1;
	v->a[48999] = anon_sym_LPAREN;
	small_parse_table_2450(v);
}

/* EOF small_parse_table_489.c */
