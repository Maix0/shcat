/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_299.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1495(t_small_parse_table_array *v)
{
	v->a[29900] = anon_sym_PIPE_AMP;
	v->a[29901] = anon_sym_EQ_TILDE;
	v->a[29902] = anon_sym_AMP_GT;
	v->a[29903] = anon_sym_AMP_GT_GT;
	v->a[29904] = anon_sym_LT_AMP;
	v->a[29905] = anon_sym_GT_AMP;
	v->a[29906] = anon_sym_GT_PIPE;
	v->a[29907] = anon_sym_LT_AMP_DASH;
	v->a[29908] = anon_sym_GT_AMP_DASH;
	v->a[29909] = anon_sym_LT_LT_DASH;
	v->a[29910] = anon_sym_LT_LT_LT;
	v->a[29911] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[29912] = anon_sym_DOLLAR_LBRACK;
	v->a[29913] = anon_sym_DOLLAR;
	v->a[29914] = sym__special_character;
	v->a[29915] = anon_sym_DQUOTE;
	v->a[29916] = sym_raw_string;
	v->a[29917] = sym_ansi_c_string;
	v->a[29918] = aux_sym_number_token1;
	v->a[29919] = aux_sym_number_token2;
	small_parse_table_1496(v);
}

void	small_parse_table_1496(t_small_parse_table_array *v)
{
	v->a[29920] = anon_sym_DOLLAR_LBRACE;
	v->a[29921] = anon_sym_DOLLAR_LPAREN;
	v->a[29922] = anon_sym_BQUOTE;
	v->a[29923] = anon_sym_DOLLAR_BQUOTE;
	v->a[29924] = anon_sym_LT_LPAREN;
	v->a[29925] = anon_sym_GT_LPAREN;
	v->a[29926] = sym_word;
	v->a[29927] = 21;
	v->a[29928] = actions(3);
	v->a[29929] = 1;
	v->a[29930] = sym_comment;
	v->a[29931] = actions(3115);
	v->a[29932] = 1;
	v->a[29933] = anon_sym_DQUOTE;
	v->a[29934] = actions(3395);
	v->a[29935] = 1;
	v->a[29936] = anon_sym_DOLLAR_LBRACK;
	v->a[29937] = actions(3397);
	v->a[29938] = 1;
	v->a[29939] = anon_sym_DOLLAR;
	small_parse_table_1497(v);
}

void	small_parse_table_1497(t_small_parse_table_array *v)
{
	v->a[29940] = actions(3401);
	v->a[29941] = 1;
	v->a[29942] = aux_sym_number_token1;
	v->a[29943] = actions(3403);
	v->a[29944] = 1;
	v->a[29945] = aux_sym_number_token2;
	v->a[29946] = actions(3405);
	v->a[29947] = 1;
	v->a[29948] = anon_sym_DOLLAR_LBRACE;
	v->a[29949] = actions(3407);
	v->a[29950] = 1;
	v->a[29951] = anon_sym_DOLLAR_LPAREN;
	v->a[29952] = actions(3409);
	v->a[29953] = 1;
	v->a[29954] = anon_sym_BQUOTE;
	v->a[29955] = actions(3411);
	v->a[29956] = 1;
	v->a[29957] = anon_sym_DOLLAR_BQUOTE;
	v->a[29958] = actions(3417);
	v->a[29959] = 1;
	small_parse_table_1498(v);
}

void	small_parse_table_1498(t_small_parse_table_array *v)
{
	v->a[29960] = sym__brace_start;
	v->a[29961] = actions(4486);
	v->a[29962] = 1;
	v->a[29963] = sym__special_character;
	v->a[29964] = actions(4488);
	v->a[29965] = 1;
	v->a[29966] = sym_test_operator;
	v->a[29967] = state(2161);
	v->a[29968] = 1;
	v->a[29969] = aux_sym__literal_repeat1;
	v->a[29970] = actions(2074);
	v->a[29971] = 2;
	v->a[29972] = sym_file_descriptor;
	v->a[29973] = aux_sym_heredoc_redirect_token1;
	v->a[29974] = actions(3393);
	v->a[29975] = 2;
	v->a[29976] = anon_sym_LPAREN_LPAREN;
	v->a[29977] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[29978] = actions(3413);
	v->a[29979] = 2;
	small_parse_table_1499(v);
}

void	small_parse_table_1499(t_small_parse_table_array *v)
{
	v->a[29980] = anon_sym_LT_LPAREN;
	v->a[29981] = anon_sym_GT_LPAREN;
	v->a[29982] = state(860);
	v->a[29983] = 2;
	v->a[29984] = sym_concatenation;
	v->a[29985] = aux_sym_for_statement_repeat1;
	v->a[29986] = actions(4484);
	v->a[29987] = 3;
	v->a[29988] = sym_raw_string;
	v->a[29989] = sym_ansi_c_string;
	v->a[29990] = sym_word;
	v->a[29991] = state(2422);
	v->a[29992] = 9;
	v->a[29993] = sym_arithmetic_expansion;
	v->a[29994] = sym_brace_expression;
	v->a[29995] = sym_string;
	v->a[29996] = sym_translated_string;
	v->a[29997] = sym_number;
	v->a[29998] = sym_simple_expansion;
	v->a[29999] = sym_expansion;
	small_parse_table_1500(v);
}

/* EOF small_parse_table_299.c */
