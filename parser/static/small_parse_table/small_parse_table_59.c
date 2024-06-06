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
	v->a[5900] = anon_sym_SEMI_SEMI_AMP;
	v->a[5901] = anon_sym_PIPE_AMP;
	v->a[5902] = anon_sym_AMP_AMP;
	v->a[5903] = anon_sym_PIPE_PIPE;
	v->a[5904] = anon_sym_LT;
	v->a[5905] = anon_sym_GT;
	v->a[5906] = anon_sym_GT_GT;
	v->a[5907] = anon_sym_AMP_GT;
	v->a[5908] = anon_sym_AMP_GT_GT;
	v->a[5909] = anon_sym_LT_AMP;
	v->a[5910] = anon_sym_GT_AMP;
	v->a[5911] = anon_sym_GT_PIPE;
	v->a[5912] = anon_sym_LT_AMP_DASH;
	v->a[5913] = anon_sym_GT_AMP_DASH;
	v->a[5914] = anon_sym_LT_LT;
	v->a[5915] = anon_sym_LT_LT_DASH;
	v->a[5916] = aux_sym_heredoc_redirect_token1;
	v->a[5917] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[5918] = anon_sym_AMP;
	v->a[5919] = sym__special_character;
	small_parse_table_296(v);
}

void	small_parse_table_296(t_small_parse_table_array *v)
{
	v->a[5920] = anon_sym_DQUOTE;
	v->a[5921] = sym_raw_string;
	v->a[5922] = aux_sym_number_token1;
	v->a[5923] = aux_sym_number_token2;
	v->a[5924] = anon_sym_DOLLAR_LBRACE;
	v->a[5925] = anon_sym_DOLLAR_LPAREN;
	v->a[5926] = anon_sym_BQUOTE;
	v->a[5927] = anon_sym_DOLLAR_BQUOTE;
	v->a[5928] = sym_word;
	v->a[5929] = anon_sym_SEMI;
	v->a[5930] = 6;
	v->a[5931] = actions(3);
	v->a[5932] = 1;
	v->a[5933] = sym_comment;
	v->a[5934] = actions(1601);
	v->a[5935] = 1;
	v->a[5936] = sym_variable_name;
	v->a[5937] = actions(1599);
	v->a[5938] = 2;
	v->a[5939] = aux_sym__simple_variable_name_token1;
	small_parse_table_297(v);
}

void	small_parse_table_297(t_small_parse_table_array *v)
{
	v->a[5940] = aux_sym__multiline_variable_name_token1;
	v->a[5941] = actions(828);
	v->a[5942] = 3;
	v->a[5943] = sym_file_descriptor;
	v->a[5944] = sym_test_operator;
	v->a[5945] = sym__brace_start;
	v->a[5946] = actions(1597);
	v->a[5947] = 9;
	v->a[5948] = anon_sym_BANG;
	v->a[5949] = anon_sym_DASH;
	v->a[5950] = anon_sym_STAR;
	v->a[5951] = anon_sym_QMARK;
	v->a[5952] = anon_sym_DOLLAR;
	v->a[5953] = anon_sym_POUND;
	v->a[5954] = anon_sym_AT;
	v->a[5955] = anon_sym_0;
	v->a[5956] = anon_sym__;
	v->a[5957] = actions(826);
	v->a[5958] = 33;
	v->a[5959] = anon_sym_PIPE;
	small_parse_table_298(v);
}

void	small_parse_table_298(t_small_parse_table_array *v)
{
	v->a[5960] = anon_sym_SEMI_SEMI;
	v->a[5961] = anon_sym_SEMI_AMP;
	v->a[5962] = anon_sym_SEMI_SEMI_AMP;
	v->a[5963] = anon_sym_PIPE_AMP;
	v->a[5964] = anon_sym_AMP_AMP;
	v->a[5965] = anon_sym_PIPE_PIPE;
	v->a[5966] = anon_sym_LT;
	v->a[5967] = anon_sym_GT;
	v->a[5968] = anon_sym_GT_GT;
	v->a[5969] = anon_sym_AMP_GT;
	v->a[5970] = anon_sym_AMP_GT_GT;
	v->a[5971] = anon_sym_LT_AMP;
	v->a[5972] = anon_sym_GT_AMP;
	v->a[5973] = anon_sym_GT_PIPE;
	v->a[5974] = anon_sym_LT_AMP_DASH;
	v->a[5975] = anon_sym_GT_AMP_DASH;
	v->a[5976] = anon_sym_LT_LT;
	v->a[5977] = anon_sym_LT_LT_DASH;
	v->a[5978] = aux_sym_heredoc_redirect_token1;
	v->a[5979] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_299(v);
}

void	small_parse_table_299(t_small_parse_table_array *v)
{
	v->a[5980] = anon_sym_AMP;
	v->a[5981] = sym__special_character;
	v->a[5982] = anon_sym_DQUOTE;
	v->a[5983] = sym_raw_string;
	v->a[5984] = aux_sym_number_token1;
	v->a[5985] = aux_sym_number_token2;
	v->a[5986] = anon_sym_DOLLAR_LBRACE;
	v->a[5987] = anon_sym_DOLLAR_LPAREN;
	v->a[5988] = anon_sym_BQUOTE;
	v->a[5989] = anon_sym_DOLLAR_BQUOTE;
	v->a[5990] = sym_word;
	v->a[5991] = anon_sym_SEMI;
	v->a[5992] = 22;
	v->a[5993] = actions(3);
	v->a[5994] = 1;
	v->a[5995] = sym_comment;
	v->a[5996] = actions(1146);
	v->a[5997] = 1;
	v->a[5998] = anon_sym_LPAREN;
	v->a[5999] = actions(1252);
	small_parse_table_300(v);
}

/* EOF small_parse_table_59.c */
