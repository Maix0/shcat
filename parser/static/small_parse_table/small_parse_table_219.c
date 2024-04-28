/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_219.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1095(t_small_parse_table_array *v)
{
	v->a[21900] = sym__heredoc_pipeline;
	v->a[21901] = actions(3715);
	v->a[21902] = 2;
	v->a[21903] = anon_sym_LPAREN_LPAREN;
	v->a[21904] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[21905] = actions(3717);
	v->a[21906] = 2;
	v->a[21907] = anon_sym_PIPE_PIPE;
	v->a[21908] = anon_sym_AMP_AMP;
	v->a[21909] = actions(3719);
	v->a[21910] = 2;
	v->a[21911] = anon_sym_PIPE;
	v->a[21912] = anon_sym_PIPE_AMP;
	v->a[21913] = actions(3723);
	v->a[21914] = 2;
	v->a[21915] = anon_sym_LT_AMP_DASH;
	v->a[21916] = anon_sym_GT_AMP_DASH;
	v->a[21917] = actions(3749);
	v->a[21918] = 2;
	v->a[21919] = anon_sym_LT_LPAREN;
	small_parse_table_1096(v);
}

void	small_parse_table_1096(t_small_parse_table_array *v)
{
	v->a[21920] = anon_sym_GT_LPAREN;
	v->a[21921] = actions(3713);
	v->a[21922] = 3;
	v->a[21923] = sym_raw_string;
	v->a[21924] = sym_ansi_c_string;
	v->a[21925] = sym_word;
	v->a[21926] = state(5546);
	v->a[21927] = 3;
	v->a[21928] = sym_file_redirect;
	v->a[21929] = sym_herestring_redirect;
	v->a[21930] = aux_sym_redirected_statement_repeat2;
	v->a[21931] = actions(3721);
	v->a[21932] = 8;
	v->a[21933] = anon_sym_LT;
	v->a[21934] = anon_sym_GT;
	v->a[21935] = anon_sym_GT_GT;
	v->a[21936] = anon_sym_AMP_GT;
	v->a[21937] = anon_sym_AMP_GT_GT;
	v->a[21938] = anon_sym_LT_AMP;
	v->a[21939] = anon_sym_GT_AMP;
	small_parse_table_1097(v);
}

void	small_parse_table_1097(t_small_parse_table_array *v)
{
	v->a[21940] = anon_sym_GT_PIPE;
	v->a[21941] = state(5062);
	v->a[21942] = 9;
	v->a[21943] = sym_arithmetic_expansion;
	v->a[21944] = sym_brace_expression;
	v->a[21945] = sym_string;
	v->a[21946] = sym_translated_string;
	v->a[21947] = sym_number;
	v->a[21948] = sym_simple_expansion;
	v->a[21949] = sym_expansion;
	v->a[21950] = sym_command_substitution;
	v->a[21951] = sym_process_substitution;
	v->a[21952] = 6;
	v->a[21953] = actions(3);
	v->a[21954] = 1;
	v->a[21955] = sym_comment;
	v->a[21956] = state(1739);
	v->a[21957] = 1;
	v->a[21958] = aux_sym__literal_repeat1;
	v->a[21959] = state(1953);
	small_parse_table_1098(v);
}

void	small_parse_table_1098(t_small_parse_table_array *v)
{
	v->a[21960] = 1;
	v->a[21961] = sym_concatenation;
	v->a[21962] = actions(2496);
	v->a[21963] = 5;
	v->a[21964] = sym_file_descriptor;
	v->a[21965] = sym_variable_name;
	v->a[21966] = sym_test_operator;
	v->a[21967] = sym__brace_start;
	v->a[21968] = aux_sym_heredoc_redirect_token1;
	v->a[21969] = state(1601);
	v->a[21970] = 9;
	v->a[21971] = sym_arithmetic_expansion;
	v->a[21972] = sym_brace_expression;
	v->a[21973] = sym_string;
	v->a[21974] = sym_translated_string;
	v->a[21975] = sym_number;
	v->a[21976] = sym_simple_expansion;
	v->a[21977] = sym_expansion;
	v->a[21978] = sym_command_substitution;
	v->a[21979] = sym_process_substitution;
	small_parse_table_1099(v);
}

void	small_parse_table_1099(t_small_parse_table_array *v)
{
	v->a[21980] = actions(2494);
	v->a[21981] = 37;
	v->a[21982] = anon_sym_LPAREN_LPAREN;
	v->a[21983] = anon_sym_SEMI;
	v->a[21984] = anon_sym_PIPE_PIPE;
	v->a[21985] = anon_sym_AMP_AMP;
	v->a[21986] = anon_sym_PIPE;
	v->a[21987] = anon_sym_AMP;
	v->a[21988] = anon_sym_LT;
	v->a[21989] = anon_sym_GT;
	v->a[21990] = anon_sym_LT_LT;
	v->a[21991] = anon_sym_GT_GT;
	v->a[21992] = anon_sym_SEMI_SEMI;
	v->a[21993] = anon_sym_PIPE_AMP;
	v->a[21994] = anon_sym_AMP_GT;
	v->a[21995] = anon_sym_AMP_GT_GT;
	v->a[21996] = anon_sym_LT_AMP;
	v->a[21997] = anon_sym_GT_AMP;
	v->a[21998] = anon_sym_GT_PIPE;
	v->a[21999] = anon_sym_LT_AMP_DASH;
	small_parse_table_1100(v);
}

/* EOF small_parse_table_219.c */
