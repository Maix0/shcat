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
	v->a[29900] = sym__bare_dollar;
	v->a[29901] = ts_builtin_sym_end;
	v->a[29902] = actions(1057);
	v->a[29903] = 26;
	v->a[29904] = anon_sym_LPAREN;
	v->a[29905] = anon_sym_PIPE;
	v->a[29906] = anon_sym_SEMI_SEMI;
	v->a[29907] = anon_sym_AMP_AMP;
	v->a[29908] = anon_sym_PIPE_PIPE;
	v->a[29909] = anon_sym_LT;
	v->a[29910] = anon_sym_GT;
	v->a[29911] = anon_sym_GT_GT;
	v->a[29912] = anon_sym_LT_AMP;
	v->a[29913] = anon_sym_GT_AMP;
	v->a[29914] = anon_sym_GT_PIPE;
	v->a[29915] = anon_sym_LT_GT;
	v->a[29916] = anon_sym_LT_LT;
	v->a[29917] = anon_sym_LT_LT_DASH;
	v->a[29918] = aux_sym_heredoc_redirect_token1;
	v->a[29919] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1496(v);
}

void	small_parse_table_1496(t_small_parse_table_array *v)
{
	v->a[29920] = anon_sym_AMP;
	v->a[29921] = anon_sym_DOLLAR;
	v->a[29922] = anon_sym_DQUOTE;
	v->a[29923] = sym_raw_string;
	v->a[29924] = sym_number;
	v->a[29925] = anon_sym_DOLLAR_LBRACE;
	v->a[29926] = anon_sym_DOLLAR_LPAREN;
	v->a[29927] = anon_sym_BQUOTE;
	v->a[29928] = sym_word;
	v->a[29929] = anon_sym_SEMI;
	v->a[29930] = 16;
	v->a[29931] = actions(3);
	v->a[29932] = 1;
	v->a[29933] = sym_comment;
	v->a[29934] = actions(321);
	v->a[29935] = 1;
	v->a[29936] = anon_sym_LPAREN;
	v->a[29937] = actions(473);
	v->a[29938] = 1;
	v->a[29939] = sym_file_descriptor;
	small_parse_table_1497(v);
}

void	small_parse_table_1497(t_small_parse_table_array *v)
{
	v->a[29940] = actions(1130);
	v->a[29941] = 1;
	v->a[29942] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[29943] = actions(1132);
	v->a[29944] = 1;
	v->a[29945] = anon_sym_DOLLAR;
	v->a[29946] = actions(1134);
	v->a[29947] = 1;
	v->a[29948] = anon_sym_DQUOTE;
	v->a[29949] = actions(1136);
	v->a[29950] = 1;
	v->a[29951] = anon_sym_DOLLAR_LBRACE;
	v->a[29952] = actions(1138);
	v->a[29953] = 1;
	v->a[29954] = anon_sym_DOLLAR_LPAREN;
	v->a[29955] = actions(1140);
	v->a[29956] = 1;
	v->a[29957] = anon_sym_BQUOTE;
	v->a[29958] = actions(1142);
	v->a[29959] = 1;
	small_parse_table_1498(v);
}

void	small_parse_table_1498(t_small_parse_table_array *v)
{
	v->a[29960] = sym__bare_dollar;
	v->a[29961] = state(512);
	v->a[29962] = 1;
	v->a[29963] = aux_sym_command_repeat2;
	v->a[29964] = state(912);
	v->a[29965] = 1;
	v->a[29966] = sym_concatenation;
	v->a[29967] = state(1606);
	v->a[29968] = 1;
	v->a[29969] = sym_subshell;
	v->a[29970] = actions(1128);
	v->a[29971] = 3;
	v->a[29972] = sym_raw_string;
	v->a[29973] = sym_number;
	v->a[29974] = sym_word;
	v->a[29975] = state(779);
	v->a[29976] = 5;
	v->a[29977] = sym_arithmetic_expansion;
	v->a[29978] = sym_string;
	v->a[29979] = sym_simple_expansion;
	small_parse_table_1499(v);
}

void	small_parse_table_1499(t_small_parse_table_array *v)
{
	v->a[29980] = sym_expansion;
	v->a[29981] = sym_command_substitution;
	v->a[29982] = actions(475);
	v->a[29983] = 12;
	v->a[29984] = anon_sym_PIPE;
	v->a[29985] = anon_sym_AMP_AMP;
	v->a[29986] = anon_sym_PIPE_PIPE;
	v->a[29987] = anon_sym_LT;
	v->a[29988] = anon_sym_GT;
	v->a[29989] = anon_sym_GT_GT;
	v->a[29990] = anon_sym_LT_AMP;
	v->a[29991] = anon_sym_GT_AMP;
	v->a[29992] = anon_sym_GT_PIPE;
	v->a[29993] = anon_sym_LT_GT;
	v->a[29994] = anon_sym_LT_LT;
	v->a[29995] = anon_sym_LT_LT_DASH;
	v->a[29996] = 6;
	v->a[29997] = actions(3);
	v->a[29998] = 1;
	v->a[29999] = sym_comment;
	small_parse_table_1500(v);
}

/* EOF small_parse_table_299.c */
