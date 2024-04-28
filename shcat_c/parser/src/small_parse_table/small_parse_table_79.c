/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_79.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_395(t_small_parse_table_array *v)
{
	v->a[7900] = anon_sym_AMP_GT;
	v->a[7901] = anon_sym_AMP_GT_GT;
	v->a[7902] = anon_sym_LT_AMP;
	v->a[7903] = anon_sym_GT_AMP;
	v->a[7904] = anon_sym_GT_PIPE;
	v->a[7905] = anon_sym_LT_AMP_DASH;
	v->a[7906] = anon_sym_GT_AMP_DASH;
	v->a[7907] = anon_sym_LT_LT_DASH;
	v->a[7908] = aux_sym_heredoc_redirect_token1;
	v->a[7909] = anon_sym_LT_LT_LT;
	v->a[7910] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[7911] = anon_sym_DOLLAR_LBRACK;
	v->a[7912] = sym__special_character;
	v->a[7913] = sym_raw_string;
	v->a[7914] = sym_ansi_c_string;
	v->a[7915] = aux_sym_number_token1;
	v->a[7916] = aux_sym_number_token2;
	v->a[7917] = anon_sym_DOLLAR_LBRACE;
	v->a[7918] = anon_sym_DOLLAR_LPAREN;
	v->a[7919] = anon_sym_BQUOTE;
	small_parse_table_396(v);
}

void	small_parse_table_396(t_small_parse_table_array *v)
{
	v->a[7920] = anon_sym_DOLLAR_BQUOTE;
	v->a[7921] = anon_sym_LT_LPAREN;
	v->a[7922] = anon_sym_GT_LPAREN;
	v->a[7923] = sym_word;
	v->a[7924] = 21;
	v->a[7925] = actions(3);
	v->a[7926] = 1;
	v->a[7927] = sym_comment;
	v->a[7928] = actions(2508);
	v->a[7929] = 1;
	v->a[7930] = anon_sym_DOLLAR_LBRACK;
	v->a[7931] = actions(2511);
	v->a[7932] = 1;
	v->a[7933] = anon_sym_DOLLAR;
	v->a[7934] = actions(2514);
	v->a[7935] = 1;
	v->a[7936] = sym__special_character;
	v->a[7937] = actions(2517);
	v->a[7938] = 1;
	v->a[7939] = anon_sym_DQUOTE;
	small_parse_table_397(v);
}

void	small_parse_table_397(t_small_parse_table_array *v)
{
	v->a[7940] = actions(2520);
	v->a[7941] = 1;
	v->a[7942] = aux_sym_number_token1;
	v->a[7943] = actions(2523);
	v->a[7944] = 1;
	v->a[7945] = aux_sym_number_token2;
	v->a[7946] = actions(2526);
	v->a[7947] = 1;
	v->a[7948] = anon_sym_DOLLAR_LBRACE;
	v->a[7949] = actions(2529);
	v->a[7950] = 1;
	v->a[7951] = anon_sym_DOLLAR_LPAREN;
	v->a[7952] = actions(2532);
	v->a[7953] = 1;
	v->a[7954] = anon_sym_BQUOTE;
	v->a[7955] = actions(2535);
	v->a[7956] = 1;
	v->a[7957] = anon_sym_DOLLAR_BQUOTE;
	v->a[7958] = actions(2541);
	v->a[7959] = 1;
	small_parse_table_398(v);
}

void	small_parse_table_398(t_small_parse_table_array *v)
{
	v->a[7960] = sym_test_operator;
	v->a[7961] = actions(2544);
	v->a[7962] = 1;
	v->a[7963] = sym__brace_start;
	v->a[7964] = state(1567);
	v->a[7965] = 1;
	v->a[7966] = aux_sym__literal_repeat1;
	v->a[7967] = actions(2505);
	v->a[7968] = 2;
	v->a[7969] = anon_sym_LPAREN_LPAREN;
	v->a[7970] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[7971] = actions(2538);
	v->a[7972] = 2;
	v->a[7973] = anon_sym_LT_LPAREN;
	v->a[7974] = anon_sym_GT_LPAREN;
	v->a[7975] = state(609);
	v->a[7976] = 2;
	v->a[7977] = sym_concatenation;
	v->a[7978] = aux_sym_for_statement_repeat1;
	v->a[7979] = actions(2216);
	small_parse_table_399(v);
}

void	small_parse_table_399(t_small_parse_table_array *v)
{
	v->a[7980] = 3;
	v->a[7981] = sym_file_descriptor;
	v->a[7982] = sym_variable_name;
	v->a[7983] = aux_sym_heredoc_redirect_token1;
	v->a[7984] = actions(2502);
	v->a[7985] = 3;
	v->a[7986] = sym_raw_string;
	v->a[7987] = sym_ansi_c_string;
	v->a[7988] = sym_word;
	v->a[7989] = state(1269);
	v->a[7990] = 9;
	v->a[7991] = sym_arithmetic_expansion;
	v->a[7992] = sym_brace_expression;
	v->a[7993] = sym_string;
	v->a[7994] = sym_translated_string;
	v->a[7995] = sym_number;
	v->a[7996] = sym_simple_expansion;
	v->a[7997] = sym_expansion;
	v->a[7998] = sym_command_substitution;
	v->a[7999] = sym_process_substitution;
	small_parse_table_400(v);
}

/* EOF small_parse_table_79.c */
