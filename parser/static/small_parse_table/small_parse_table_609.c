/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_609.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3045(t_small_parse_table_array *v)
{
	v->a[60900] = actions(1875);
	v->a[60901] = 2;
	v->a[60902] = anon_sym_PLUS_PLUS;
	v->a[60903] = anon_sym_DASH_DASH;
	v->a[60904] = actions(1877);
	v->a[60905] = 2;
	v->a[60906] = anon_sym_DASH2;
	v->a[60907] = anon_sym_PLUS2;
	v->a[60908] = actions(1885);
	v->a[60909] = 2;
	v->a[60910] = sym_number;
	v->a[60911] = aux_sym__simple_variable_name_token1;
	v->a[60912] = state(365);
	v->a[60913] = 3;
	v->a[60914] = sym_string;
	v->a[60915] = sym_simple_expansion;
	v->a[60916] = sym_expansion;
	v->a[60917] = state(469);
	v->a[60918] = 8;
	v->a[60919] = sym__arithmetic_expression;
	small_parse_table_3046(v);
}

void	small_parse_table_3046(t_small_parse_table_array *v)
{
	v->a[60920] = sym_arithmetic_literal;
	v->a[60921] = sym_arithmetic_binary_expression;
	v->a[60922] = sym_arithmetic_ternary_expression;
	v->a[60923] = sym_arithmetic_unary_expression;
	v->a[60924] = sym_arithmetic_postfix_expression;
	v->a[60925] = sym_arithmetic_parenthesized_expression;
	v->a[60926] = sym_command_substitution;
	v->a[60927] = 3;
	v->a[60928] = actions(3);
	v->a[60929] = 1;
	v->a[60930] = sym_comment;
	v->a[60931] = actions(1187);
	v->a[60932] = 2;
	v->a[60933] = sym_file_descriptor;
	v->a[60934] = sym__concat;
	v->a[60935] = actions(1185);
	v->a[60936] = 25;
	v->a[60937] = anon_sym_PIPE;
	v->a[60938] = anon_sym_AMP_AMP;
	v->a[60939] = anon_sym_PIPE_PIPE;
	small_parse_table_3047(v);
}

void	small_parse_table_3047(t_small_parse_table_array *v)
{
	v->a[60940] = anon_sym_LT;
	v->a[60941] = anon_sym_GT;
	v->a[60942] = anon_sym_GT_GT;
	v->a[60943] = anon_sym_AMP_GT;
	v->a[60944] = anon_sym_AMP_GT_GT;
	v->a[60945] = anon_sym_LT_AMP;
	v->a[60946] = anon_sym_GT_AMP;
	v->a[60947] = anon_sym_GT_PIPE;
	v->a[60948] = anon_sym_LT_AMP_DASH;
	v->a[60949] = anon_sym_GT_AMP_DASH;
	v->a[60950] = anon_sym_LT_LT;
	v->a[60951] = anon_sym_LT_LT_DASH;
	v->a[60952] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[60953] = aux_sym_concatenation_token1;
	v->a[60954] = anon_sym_DOLLAR;
	v->a[60955] = anon_sym_DQUOTE;
	v->a[60956] = sym_raw_string;
	v->a[60957] = sym_number;
	v->a[60958] = anon_sym_DOLLAR_LBRACE;
	v->a[60959] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_3048(v);
}

void	small_parse_table_3048(t_small_parse_table_array *v)
{
	v->a[60960] = anon_sym_BQUOTE;
	v->a[60961] = sym_word;
	v->a[60962] = 3;
	v->a[60963] = actions(3);
	v->a[60964] = 1;
	v->a[60965] = sym_comment;
	v->a[60966] = actions(1124);
	v->a[60967] = 2;
	v->a[60968] = sym_file_descriptor;
	v->a[60969] = sym__concat;
	v->a[60970] = actions(1122);
	v->a[60971] = 25;
	v->a[60972] = anon_sym_PIPE;
	v->a[60973] = anon_sym_AMP_AMP;
	v->a[60974] = anon_sym_PIPE_PIPE;
	v->a[60975] = anon_sym_LT;
	v->a[60976] = anon_sym_GT;
	v->a[60977] = anon_sym_GT_GT;
	v->a[60978] = anon_sym_AMP_GT;
	v->a[60979] = anon_sym_AMP_GT_GT;
	small_parse_table_3049(v);
}

void	small_parse_table_3049(t_small_parse_table_array *v)
{
	v->a[60980] = anon_sym_LT_AMP;
	v->a[60981] = anon_sym_GT_AMP;
	v->a[60982] = anon_sym_GT_PIPE;
	v->a[60983] = anon_sym_LT_AMP_DASH;
	v->a[60984] = anon_sym_GT_AMP_DASH;
	v->a[60985] = anon_sym_LT_LT;
	v->a[60986] = anon_sym_LT_LT_DASH;
	v->a[60987] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[60988] = aux_sym_concatenation_token1;
	v->a[60989] = anon_sym_DOLLAR;
	v->a[60990] = anon_sym_DQUOTE;
	v->a[60991] = sym_raw_string;
	v->a[60992] = sym_number;
	v->a[60993] = anon_sym_DOLLAR_LBRACE;
	v->a[60994] = anon_sym_DOLLAR_LPAREN;
	v->a[60995] = anon_sym_BQUOTE;
	v->a[60996] = sym_word;
	v->a[60997] = 3;
	v->a[60998] = actions(3);
	v->a[60999] = 1;
	small_parse_table_3050(v);
}

/* EOF small_parse_table_609.c */
