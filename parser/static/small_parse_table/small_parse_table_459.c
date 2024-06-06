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
	v->a[45900] = sym__brace_start;
	v->a[45901] = actions(2900);
	v->a[45902] = 1;
	v->a[45903] = sym_file_descriptor;
	v->a[45904] = actions(2910);
	v->a[45905] = 1;
	v->a[45906] = sym_word;
	v->a[45907] = actions(2912);
	v->a[45908] = 1;
	v->a[45909] = sym__special_character;
	v->a[45910] = actions(3621);
	v->a[45911] = 1;
	v->a[45912] = sym_variable_name;
	v->a[45913] = state(269);
	v->a[45914] = 1;
	v->a[45915] = sym_command_name;
	v->a[45916] = state(963);
	v->a[45917] = 1;
	v->a[45918] = aux_sym__literal_repeat1;
	v->a[45919] = state(1016);
	small_parse_table_2296(v);
}

void	small_parse_table_2296(t_small_parse_table_array *v)
{
	v->a[45920] = 1;
	v->a[45921] = sym_concatenation;
	v->a[45922] = state(1995);
	v->a[45923] = 1;
	v->a[45924] = sym_file_redirect;
	v->a[45925] = actions(377);
	v->a[45926] = 2;
	v->a[45927] = sym_test_operator;
	v->a[45928] = sym_raw_string;
	v->a[45929] = actions(2896);
	v->a[45930] = 2;
	v->a[45931] = anon_sym_LT_AMP_DASH;
	v->a[45932] = anon_sym_GT_AMP_DASH;
	v->a[45933] = state(1776);
	v->a[45934] = 2;
	v->a[45935] = sym_variable_assignment;
	v->a[45936] = aux_sym_command_repeat1;
	v->a[45937] = actions(2894);
	v->a[45938] = 3;
	v->a[45939] = anon_sym_GT_GT;
	small_parse_table_2297(v);
}

void	small_parse_table_2297(t_small_parse_table_array *v)
{
	v->a[45940] = anon_sym_AMP_GT_GT;
	v->a[45941] = anon_sym_GT_PIPE;
	v->a[45942] = actions(2892);
	v->a[45943] = 5;
	v->a[45944] = anon_sym_LT;
	v->a[45945] = anon_sym_GT;
	v->a[45946] = anon_sym_AMP_GT;
	v->a[45947] = anon_sym_LT_AMP;
	v->a[45948] = anon_sym_GT_AMP;
	v->a[45949] = state(586);
	v->a[45950] = 7;
	v->a[45951] = sym_arithmetic_expansion;
	v->a[45952] = sym_brace_expression;
	v->a[45953] = sym_string;
	v->a[45954] = sym_number;
	v->a[45955] = sym_simple_expansion;
	v->a[45956] = sym_expansion;
	v->a[45957] = sym_command_substitution;
	v->a[45958] = 3;
	v->a[45959] = actions(3);
	small_parse_table_2298(v);
}

void	small_parse_table_2298(t_small_parse_table_array *v)
{
	v->a[45960] = 1;
	v->a[45961] = sym_comment;
	v->a[45962] = actions(3159);
	v->a[45963] = 5;
	v->a[45964] = sym_file_descriptor;
	v->a[45965] = sym__concat;
	v->a[45966] = sym_test_operator;
	v->a[45967] = sym__brace_start;
	v->a[45968] = aux_sym_heredoc_redirect_token1;
	v->a[45969] = actions(3157);
	v->a[45970] = 34;
	v->a[45971] = anon_sym_PIPE;
	v->a[45972] = anon_sym_RPAREN;
	v->a[45973] = anon_sym_SEMI_SEMI;
	v->a[45974] = anon_sym_PIPE_AMP;
	v->a[45975] = anon_sym_AMP_AMP;
	v->a[45976] = anon_sym_PIPE_PIPE;
	v->a[45977] = anon_sym_LT;
	v->a[45978] = anon_sym_GT;
	v->a[45979] = anon_sym_GT_GT;
	small_parse_table_2299(v);
}

void	small_parse_table_2299(t_small_parse_table_array *v)
{
	v->a[45980] = anon_sym_AMP_GT;
	v->a[45981] = anon_sym_AMP_GT_GT;
	v->a[45982] = anon_sym_LT_AMP;
	v->a[45983] = anon_sym_GT_AMP;
	v->a[45984] = anon_sym_GT_PIPE;
	v->a[45985] = anon_sym_LT_AMP_DASH;
	v->a[45986] = anon_sym_GT_AMP_DASH;
	v->a[45987] = anon_sym_LT_LT;
	v->a[45988] = anon_sym_LT_LT_DASH;
	v->a[45989] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[45990] = anon_sym_AMP;
	v->a[45991] = aux_sym_concatenation_token1;
	v->a[45992] = anon_sym_DOLLAR;
	v->a[45993] = sym__special_character;
	v->a[45994] = anon_sym_DQUOTE;
	v->a[45995] = sym_raw_string;
	v->a[45996] = aux_sym_number_token1;
	v->a[45997] = aux_sym_number_token2;
	v->a[45998] = anon_sym_DOLLAR_LBRACE;
	v->a[45999] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2300(v);
}

/* EOF small_parse_table_459.c */
