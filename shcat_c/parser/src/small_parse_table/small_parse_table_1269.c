/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1269.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6345(t_small_parse_table_array *v)
{
	v->a[126900] = state(7413);
	v->a[126901] = 1;
	v->a[126902] = sym_last_case_item;
	v->a[126903] = actions(6476);
	v->a[126904] = 2;
	v->a[126905] = anon_sym_LPAREN_LPAREN;
	v->a[126906] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[126907] = actions(6506);
	v->a[126908] = 2;
	v->a[126909] = anon_sym_LT_LPAREN;
	v->a[126910] = anon_sym_GT_LPAREN;
	v->a[126911] = state(3416);
	v->a[126912] = 2;
	v->a[126913] = sym_case_item;
	v->a[126914] = aux_sym_case_statement_repeat1;
	v->a[126915] = state(6695);
	v->a[126916] = 2;
	v->a[126917] = sym_concatenation;
	v->a[126918] = sym__extglob_blob;
	v->a[126919] = actions(6474);
	small_parse_table_6346(v);
}

void	small_parse_table_6346(t_small_parse_table_array *v)
{
	v->a[126920] = 3;
	v->a[126921] = sym_raw_string;
	v->a[126922] = sym_ansi_c_string;
	v->a[126923] = sym_word;
	v->a[126924] = actions(6620);
	v->a[126925] = 3;
	v->a[126926] = anon_sym_SEMI;
	v->a[126927] = anon_sym_AMP;
	v->a[126928] = anon_sym_SEMI_SEMI;
	v->a[126929] = state(6303);
	v->a[126930] = 9;
	v->a[126931] = sym_arithmetic_expansion;
	v->a[126932] = sym_brace_expression;
	v->a[126933] = sym_string;
	v->a[126934] = sym_translated_string;
	v->a[126935] = sym_number;
	v->a[126936] = sym_simple_expansion;
	v->a[126937] = sym_expansion;
	v->a[126938] = sym_command_substitution;
	v->a[126939] = sym_process_substitution;
	small_parse_table_6347(v);
}

void	small_parse_table_6347(t_small_parse_table_array *v)
{
	v->a[126940] = 5;
	v->a[126941] = actions(71);
	v->a[126942] = 1;
	v->a[126943] = sym_comment;
	v->a[126944] = state(2429);
	v->a[126945] = 1;
	v->a[126946] = aux_sym_concatenation_repeat1;
	v->a[126947] = actions(6514);
	v->a[126948] = 2;
	v->a[126949] = sym__concat;
	v->a[126950] = aux_sym_concatenation_token1;
	v->a[126951] = actions(4564);
	v->a[126952] = 13;
	v->a[126953] = anon_sym_PIPE;
	v->a[126954] = anon_sym_LT;
	v->a[126955] = anon_sym_GT;
	v->a[126956] = anon_sym_LT_LT;
	v->a[126957] = anon_sym_AMP_GT;
	v->a[126958] = anon_sym_LT_AMP;
	v->a[126959] = anon_sym_GT_AMP;
	small_parse_table_6348(v);
}

void	small_parse_table_6348(t_small_parse_table_array *v)
{
	v->a[126960] = anon_sym_DOLLAR;
	v->a[126961] = aux_sym_number_token1;
	v->a[126962] = aux_sym_number_token2;
	v->a[126963] = anon_sym_DOLLAR_LPAREN;
	v->a[126964] = anon_sym_BQUOTE;
	v->a[126965] = sym_word;
	v->a[126966] = actions(4566);
	v->a[126967] = 25;
	v->a[126968] = sym_file_descriptor;
	v->a[126969] = sym_variable_name;
	v->a[126970] = sym_test_operator;
	v->a[126971] = sym__brace_start;
	v->a[126972] = anon_sym_LPAREN_LPAREN;
	v->a[126973] = anon_sym_PIPE_PIPE;
	v->a[126974] = anon_sym_AMP_AMP;
	v->a[126975] = anon_sym_GT_GT;
	v->a[126976] = anon_sym_PIPE_AMP;
	v->a[126977] = anon_sym_AMP_GT_GT;
	v->a[126978] = anon_sym_GT_PIPE;
	v->a[126979] = anon_sym_LT_AMP_DASH;
	small_parse_table_6349(v);
}

void	small_parse_table_6349(t_small_parse_table_array *v)
{
	v->a[126980] = anon_sym_GT_AMP_DASH;
	v->a[126981] = anon_sym_LT_LT_DASH;
	v->a[126982] = anon_sym_LT_LT_LT;
	v->a[126983] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[126984] = anon_sym_DOLLAR_LBRACK;
	v->a[126985] = sym__special_character;
	v->a[126986] = anon_sym_DQUOTE;
	v->a[126987] = sym_raw_string;
	v->a[126988] = sym_ansi_c_string;
	v->a[126989] = anon_sym_DOLLAR_LBRACE;
	v->a[126990] = anon_sym_DOLLAR_BQUOTE;
	v->a[126991] = anon_sym_LT_LPAREN;
	v->a[126992] = anon_sym_GT_LPAREN;
	v->a[126993] = 26;
	v->a[126994] = actions(3);
	v->a[126995] = 1;
	v->a[126996] = sym_comment;
	v->a[126997] = actions(6480);
	v->a[126998] = 1;
	v->a[126999] = anon_sym_LPAREN;
	small_parse_table_6350(v);
}

/* EOF small_parse_table_1269.c */
