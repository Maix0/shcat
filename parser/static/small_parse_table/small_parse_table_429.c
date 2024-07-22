/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_429.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2145(t_small_parse_table_array *v)
{
	v->a[42900] = anon_sym_case;
	v->a[42901] = anon_sym_LPAREN;
	v->a[42902] = anon_sym_LBRACE;
	v->a[42903] = anon_sym_BANG;
	v->a[42904] = anon_sym_LT;
	v->a[42905] = anon_sym_GT;
	v->a[42906] = anon_sym_GT_GT;
	v->a[42907] = anon_sym_LT_AMP;
	v->a[42908] = anon_sym_GT_AMP;
	v->a[42909] = anon_sym_GT_PIPE;
	v->a[42910] = anon_sym_LT_GT;
	v->a[42911] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[42912] = anon_sym_DOLLAR;
	v->a[42913] = anon_sym_DQUOTE;
	v->a[42914] = sym_raw_string;
	v->a[42915] = sym_number;
	v->a[42916] = anon_sym_DOLLAR_LBRACE;
	v->a[42917] = anon_sym_DOLLAR_LPAREN;
	v->a[42918] = anon_sym_BQUOTE;
	v->a[42919] = sym_word;
	small_parse_table_2146(v);
}

void	small_parse_table_2146(t_small_parse_table_array *v)
{
	v->a[42920] = 16;
	v->a[42921] = actions(501);
	v->a[42922] = 1;
	v->a[42923] = sym_comment;
	v->a[42924] = actions(1469);
	v->a[42925] = 1;
	v->a[42926] = anon_sym_LPAREN;
	v->a[42927] = actions(1471);
	v->a[42928] = 1;
	v->a[42929] = anon_sym_BANG;
	v->a[42930] = actions(1479);
	v->a[42931] = 1;
	v->a[42932] = anon_sym_TILDE;
	v->a[42933] = actions(1481);
	v->a[42934] = 1;
	v->a[42935] = anon_sym_DOLLAR;
	v->a[42936] = actions(1483);
	v->a[42937] = 1;
	v->a[42938] = anon_sym_DQUOTE;
	v->a[42939] = actions(1487);
	small_parse_table_2147(v);
}

void	small_parse_table_2147(t_small_parse_table_array *v)
{
	v->a[42940] = 1;
	v->a[42941] = anon_sym_DOLLAR_LBRACE;
	v->a[42942] = actions(1489);
	v->a[42943] = 1;
	v->a[42944] = anon_sym_DOLLAR_LPAREN;
	v->a[42945] = actions(1491);
	v->a[42946] = 1;
	v->a[42947] = anon_sym_BQUOTE;
	v->a[42948] = actions(1493);
	v->a[42949] = 1;
	v->a[42950] = sym_variable_name;
	v->a[42951] = actions(1540);
	v->a[42952] = 1;
	v->a[42953] = anon_sym_RPAREN_RPAREN;
	v->a[42954] = actions(1475);
	v->a[42955] = 2;
	v->a[42956] = anon_sym_PLUS_PLUS;
	v->a[42957] = anon_sym_DASH_DASH;
	v->a[42958] = actions(1477);
	v->a[42959] = 2;
	small_parse_table_2148(v);
}

void	small_parse_table_2148(t_small_parse_table_array *v)
{
	v->a[42960] = anon_sym_DASH2;
	v->a[42961] = anon_sym_PLUS2;
	v->a[42962] = actions(1485);
	v->a[42963] = 2;
	v->a[42964] = sym_number;
	v->a[42965] = aux_sym__simple_variable_name_token1;
	v->a[42966] = state(194);
	v->a[42967] = 3;
	v->a[42968] = sym_string;
	v->a[42969] = sym_simple_expansion;
	v->a[42970] = sym_expansion;
	v->a[42971] = state(302);
	v->a[42972] = 8;
	v->a[42973] = sym__arithmetic_expression;
	v->a[42974] = sym_arithmetic_literal;
	v->a[42975] = sym_arithmetic_binary_expression;
	v->a[42976] = sym_arithmetic_ternary_expression;
	v->a[42977] = sym_arithmetic_unary_expression;
	v->a[42978] = sym_arithmetic_postfix_expression;
	v->a[42979] = sym_arithmetic_parenthesized_expression;
	small_parse_table_2149(v);
}

void	small_parse_table_2149(t_small_parse_table_array *v)
{
	v->a[42980] = sym_command_substitution;
	v->a[42981] = 6;
	v->a[42982] = actions(3);
	v->a[42983] = 1;
	v->a[42984] = sym_comment;
	v->a[42985] = actions(1219);
	v->a[42986] = 1;
	v->a[42987] = aux_sym_concatenation_token1;
	v->a[42988] = actions(1223);
	v->a[42989] = 1;
	v->a[42990] = sym__concat;
	v->a[42991] = state(748);
	v->a[42992] = 1;
	v->a[42993] = aux_sym_concatenation_repeat1;
	v->a[42994] = actions(1208);
	v->a[42995] = 2;
	v->a[42996] = sym_file_descriptor;
	v->a[42997] = sym_variable_name;
	v->a[42998] = actions(1210);
	v->a[42999] = 22;
	small_parse_table_2150(v);
}

/* EOF small_parse_table_429.c */
