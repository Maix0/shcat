/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_459.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2295(t_small_parse_table_array *v)
{
	v->a[45900] = actions(1493);
	v->a[45901] = 1;
	v->a[45902] = sym_variable_name;
	v->a[45903] = actions(1663);
	v->a[45904] = 1;
	v->a[45905] = anon_sym_RPAREN_RPAREN;
	v->a[45906] = actions(1475);
	v->a[45907] = 2;
	v->a[45908] = anon_sym_PLUS_PLUS;
	v->a[45909] = anon_sym_DASH_DASH;
	v->a[45910] = actions(1477);
	v->a[45911] = 2;
	v->a[45912] = anon_sym_DASH2;
	v->a[45913] = anon_sym_PLUS2;
	v->a[45914] = actions(1485);
	v->a[45915] = 2;
	v->a[45916] = sym_number;
	v->a[45917] = aux_sym__simple_variable_name_token1;
	v->a[45918] = state(194);
	v->a[45919] = 3;
	small_parse_table_2296(v);
}

void	small_parse_table_2296(t_small_parse_table_array *v)
{
	v->a[45920] = sym_string;
	v->a[45921] = sym_simple_expansion;
	v->a[45922] = sym_expansion;
	v->a[45923] = state(312);
	v->a[45924] = 8;
	v->a[45925] = sym__arithmetic_expression;
	v->a[45926] = sym_arithmetic_literal;
	v->a[45927] = sym_arithmetic_binary_expression;
	v->a[45928] = sym_arithmetic_ternary_expression;
	v->a[45929] = sym_arithmetic_unary_expression;
	v->a[45930] = sym_arithmetic_postfix_expression;
	v->a[45931] = sym_arithmetic_parenthesized_expression;
	v->a[45932] = sym_command_substitution;
	v->a[45933] = 4;
	v->a[45934] = actions(3);
	v->a[45935] = 1;
	v->a[45936] = sym_comment;
	v->a[45937] = actions(1445);
	v->a[45938] = 1;
	v->a[45939] = ts_builtin_sym_end;
	small_parse_table_2297(v);
}

void	small_parse_table_2297(t_small_parse_table_array *v)
{
	v->a[45940] = actions(1412);
	v->a[45941] = 2;
	v->a[45942] = sym_file_descriptor;
	v->a[45943] = sym_variable_name;
	v->a[45944] = actions(1408);
	v->a[45945] = 24;
	v->a[45946] = anon_sym_for;
	v->a[45947] = anon_sym_while;
	v->a[45948] = anon_sym_until;
	v->a[45949] = anon_sym_if;
	v->a[45950] = anon_sym_case;
	v->a[45951] = anon_sym_LPAREN;
	v->a[45952] = anon_sym_LBRACE;
	v->a[45953] = anon_sym_BANG;
	v->a[45954] = anon_sym_LT;
	v->a[45955] = anon_sym_GT;
	v->a[45956] = anon_sym_GT_GT;
	v->a[45957] = anon_sym_LT_AMP;
	v->a[45958] = anon_sym_GT_AMP;
	v->a[45959] = anon_sym_GT_PIPE;
	small_parse_table_2298(v);
}

void	small_parse_table_2298(t_small_parse_table_array *v)
{
	v->a[45960] = anon_sym_LT_GT;
	v->a[45961] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[45962] = anon_sym_DOLLAR;
	v->a[45963] = anon_sym_DQUOTE;
	v->a[45964] = sym_raw_string;
	v->a[45965] = sym_number;
	v->a[45966] = anon_sym_DOLLAR_LBRACE;
	v->a[45967] = anon_sym_DOLLAR_LPAREN;
	v->a[45968] = anon_sym_BQUOTE;
	v->a[45969] = sym_word;
	v->a[45970] = 4;
	v->a[45971] = actions(3);
	v->a[45972] = 1;
	v->a[45973] = sym_comment;
	v->a[45974] = actions(1445);
	v->a[45975] = 1;
	v->a[45976] = ts_builtin_sym_end;
	v->a[45977] = actions(1412);
	v->a[45978] = 2;
	v->a[45979] = sym_file_descriptor;
	small_parse_table_2299(v);
}

void	small_parse_table_2299(t_small_parse_table_array *v)
{
	v->a[45980] = sym_variable_name;
	v->a[45981] = actions(1408);
	v->a[45982] = 24;
	v->a[45983] = anon_sym_for;
	v->a[45984] = anon_sym_while;
	v->a[45985] = anon_sym_until;
	v->a[45986] = anon_sym_if;
	v->a[45987] = anon_sym_case;
	v->a[45988] = anon_sym_LPAREN;
	v->a[45989] = anon_sym_LBRACE;
	v->a[45990] = anon_sym_BANG;
	v->a[45991] = anon_sym_LT;
	v->a[45992] = anon_sym_GT;
	v->a[45993] = anon_sym_GT_GT;
	v->a[45994] = anon_sym_LT_AMP;
	v->a[45995] = anon_sym_GT_AMP;
	v->a[45996] = anon_sym_GT_PIPE;
	v->a[45997] = anon_sym_LT_GT;
	v->a[45998] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[45999] = anon_sym_DOLLAR;
	small_parse_table_2300(v);
}

/* EOF small_parse_table_459.c */
