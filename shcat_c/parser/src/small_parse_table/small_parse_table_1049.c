/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1049.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5245(t_small_parse_table_array *v)
{
	v->a[104900] = actions(3060);
	v->a[104901] = 1;
	v->a[104902] = anon_sym_BQUOTE;
	v->a[104903] = state(2484);
	v->a[104904] = 1;
	v->a[104905] = aux_sym__literal_repeat1;
	v->a[104906] = state(3358);
	v->a[104907] = 1;
	v->a[104908] = sym__expression;
	v->a[104909] = actions(1129);
	v->a[104910] = 2;
	v->a[104911] = anon_sym_LPAREN_LPAREN;
	v->a[104912] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[104913] = actions(1165);
	v->a[104914] = 2;
	v->a[104915] = anon_sym_LT_LPAREN;
	v->a[104916] = anon_sym_GT_LPAREN;
	v->a[104917] = actions(1215);
	v->a[104918] = 2;
	v->a[104919] = anon_sym_PLUS_PLUS2;
	small_parse_table_5246(v);
}

void	small_parse_table_5246(t_small_parse_table_array *v)
{
	v->a[104920] = anon_sym_DASH_DASH2;
	v->a[104921] = actions(1217);
	v->a[104922] = 2;
	v->a[104923] = anon_sym_DASH2;
	v->a[104924] = anon_sym_PLUS2;
	v->a[104925] = actions(1223);
	v->a[104926] = 2;
	v->a[104927] = sym_raw_string;
	v->a[104928] = sym_ansi_c_string;
	v->a[104929] = state(2594);
	v->a[104930] = 6;
	v->a[104931] = sym_binary_expression;
	v->a[104932] = sym_ternary_expression;
	v->a[104933] = sym_unary_expression;
	v->a[104934] = sym_postfix_expression;
	v->a[104935] = sym_parenthesized_expression;
	v->a[104936] = sym_concatenation;
	v->a[104937] = state(2588);
	v->a[104938] = 9;
	v->a[104939] = sym_arithmetic_expansion;
	small_parse_table_5247(v);
}

void	small_parse_table_5247(t_small_parse_table_array *v)
{
	v->a[104940] = sym_brace_expression;
	v->a[104941] = sym_string;
	v->a[104942] = sym_translated_string;
	v->a[104943] = sym_number;
	v->a[104944] = sym_simple_expansion;
	v->a[104945] = sym_expansion;
	v->a[104946] = sym_command_substitution;
	v->a[104947] = sym_process_substitution;
	v->a[104948] = 6;
	v->a[104949] = actions(3);
	v->a[104950] = 1;
	v->a[104951] = sym_comment;
	v->a[104952] = actions(6013);
	v->a[104953] = 1;
	v->a[104954] = aux_sym_concatenation_token1;
	v->a[104955] = actions(6144);
	v->a[104956] = 1;
	v->a[104957] = sym__concat;
	v->a[104958] = state(1879);
	v->a[104959] = 1;
	small_parse_table_5248(v);
}

void	small_parse_table_5248(t_small_parse_table_array *v)
{
	v->a[104960] = aux_sym_concatenation_repeat1;
	v->a[104961] = actions(1267);
	v->a[104962] = 4;
	v->a[104963] = sym_file_descriptor;
	v->a[104964] = sym_test_operator;
	v->a[104965] = sym__brace_start;
	v->a[104966] = aux_sym_heredoc_redirect_token1;
	v->a[104967] = actions(1265);
	v->a[104968] = 36;
	v->a[104969] = anon_sym_LPAREN_LPAREN;
	v->a[104970] = anon_sym_SEMI;
	v->a[104971] = anon_sym_PIPE_PIPE;
	v->a[104972] = anon_sym_AMP_AMP;
	v->a[104973] = anon_sym_PIPE;
	v->a[104974] = anon_sym_AMP;
	v->a[104975] = anon_sym_LT;
	v->a[104976] = anon_sym_GT;
	v->a[104977] = anon_sym_LT_LT;
	v->a[104978] = anon_sym_GT_GT;
	v->a[104979] = anon_sym_SEMI_SEMI;
	small_parse_table_5249(v);
}

void	small_parse_table_5249(t_small_parse_table_array *v)
{
	v->a[104980] = anon_sym_PIPE_AMP;
	v->a[104981] = anon_sym_AMP_GT;
	v->a[104982] = anon_sym_AMP_GT_GT;
	v->a[104983] = anon_sym_LT_AMP;
	v->a[104984] = anon_sym_GT_AMP;
	v->a[104985] = anon_sym_GT_PIPE;
	v->a[104986] = anon_sym_LT_AMP_DASH;
	v->a[104987] = anon_sym_GT_AMP_DASH;
	v->a[104988] = anon_sym_LT_LT_DASH;
	v->a[104989] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[104990] = anon_sym_DOLLAR_LBRACK;
	v->a[104991] = anon_sym_DOLLAR;
	v->a[104992] = sym__special_character;
	v->a[104993] = anon_sym_DQUOTE;
	v->a[104994] = sym_raw_string;
	v->a[104995] = sym_ansi_c_string;
	v->a[104996] = aux_sym_number_token1;
	v->a[104997] = aux_sym_number_token2;
	v->a[104998] = anon_sym_DOLLAR_LBRACE;
	v->a[104999] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_5250(v);
}

/* EOF small_parse_table_1049.c */
