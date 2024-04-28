/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_59.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_295(t_small_parse_table_array *v)
{
	v->a[5900] = 1;
	v->a[5901] = anon_sym_DOLLAR_BQUOTE;
	v->a[5902] = actions(2285);
	v->a[5903] = 1;
	v->a[5904] = sym_variable_name;
	v->a[5905] = actions(2287);
	v->a[5906] = 1;
	v->a[5907] = sym_test_operator;
	v->a[5908] = actions(2289);
	v->a[5909] = 1;
	v->a[5910] = sym__brace_start;
	v->a[5911] = actions(2291);
	v->a[5912] = 1;
	v->a[5913] = aux_sym__simple_variable_name_token1;
	v->a[5914] = state(1743);
	v->a[5915] = 1;
	v->a[5916] = aux_sym__literal_repeat1;
	v->a[5917] = state(6781);
	v->a[5918] = 1;
	v->a[5919] = sym_subscript;
	small_parse_table_296(v);
}

void	small_parse_table_296(t_small_parse_table_array *v)
{
	v->a[5920] = actions(1757);
	v->a[5921] = 2;
	v->a[5922] = sym_file_descriptor;
	v->a[5923] = aux_sym_heredoc_redirect_token1;
	v->a[5924] = actions(2259);
	v->a[5925] = 2;
	v->a[5926] = anon_sym_LPAREN_LPAREN;
	v->a[5927] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[5928] = actions(2281);
	v->a[5929] = 2;
	v->a[5930] = anon_sym_LT_LPAREN;
	v->a[5931] = anon_sym_GT_LPAREN;
	v->a[5932] = actions(2257);
	v->a[5933] = 3;
	v->a[5934] = sym_raw_string;
	v->a[5935] = sym_ansi_c_string;
	v->a[5936] = sym_word;
	v->a[5937] = state(585);
	v->a[5938] = 3;
	v->a[5939] = sym_variable_assignment;
	small_parse_table_297(v);
}

void	small_parse_table_297(t_small_parse_table_array *v)
{
	v->a[5940] = sym_concatenation;
	v->a[5941] = aux_sym_declaration_command_repeat1;
	v->a[5942] = state(1360);
	v->a[5943] = 9;
	v->a[5944] = sym_arithmetic_expansion;
	v->a[5945] = sym_brace_expression;
	v->a[5946] = sym_string;
	v->a[5947] = sym_translated_string;
	v->a[5948] = sym_number;
	v->a[5949] = sym_simple_expansion;
	v->a[5950] = sym_expansion;
	v->a[5951] = sym_command_substitution;
	v->a[5952] = sym_process_substitution;
	v->a[5953] = actions(1755);
	v->a[5954] = 20;
	v->a[5955] = anon_sym_SEMI;
	v->a[5956] = anon_sym_PIPE_PIPE;
	v->a[5957] = anon_sym_AMP_AMP;
	v->a[5958] = anon_sym_PIPE;
	v->a[5959] = anon_sym_AMP;
	small_parse_table_298(v);
}

void	small_parse_table_298(t_small_parse_table_array *v)
{
	v->a[5960] = anon_sym_LT;
	v->a[5961] = anon_sym_GT;
	v->a[5962] = anon_sym_LT_LT;
	v->a[5963] = anon_sym_GT_GT;
	v->a[5964] = anon_sym_RPAREN;
	v->a[5965] = anon_sym_SEMI_SEMI;
	v->a[5966] = anon_sym_PIPE_AMP;
	v->a[5967] = anon_sym_AMP_GT;
	v->a[5968] = anon_sym_AMP_GT_GT;
	v->a[5969] = anon_sym_LT_AMP;
	v->a[5970] = anon_sym_GT_AMP;
	v->a[5971] = anon_sym_GT_PIPE;
	v->a[5972] = anon_sym_LT_AMP_DASH;
	v->a[5973] = anon_sym_GT_AMP_DASH;
	v->a[5974] = anon_sym_LT_LT_DASH;
	v->a[5975] = 25;
	v->a[5976] = actions(3);
	v->a[5977] = 1;
	v->a[5978] = sym_comment;
	v->a[5979] = actions(1549);
	small_parse_table_299(v);
}

void	small_parse_table_299(t_small_parse_table_array *v)
{
	v->a[5980] = 1;
	v->a[5981] = anon_sym_DOLLAR_LBRACK;
	v->a[5982] = actions(1551);
	v->a[5983] = 1;
	v->a[5984] = anon_sym_DOLLAR;
	v->a[5985] = actions(1555);
	v->a[5986] = 1;
	v->a[5987] = anon_sym_DQUOTE;
	v->a[5988] = actions(1557);
	v->a[5989] = 1;
	v->a[5990] = aux_sym_number_token1;
	v->a[5991] = actions(1559);
	v->a[5992] = 1;
	v->a[5993] = aux_sym_number_token2;
	v->a[5994] = actions(1561);
	v->a[5995] = 1;
	v->a[5996] = anon_sym_DOLLAR_LBRACE;
	v->a[5997] = actions(1563);
	v->a[5998] = 1;
	v->a[5999] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_300(v);
}

/* EOF small_parse_table_59.c */
