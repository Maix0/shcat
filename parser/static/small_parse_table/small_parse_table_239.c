/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_239.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1195(t_small_parse_table_array *v)
{
	v->a[23900] = anon_sym_PIPE;
	v->a[23901] = anon_sym_SEMI_SEMI;
	v->a[23902] = anon_sym_AMP_AMP;
	v->a[23903] = anon_sym_PIPE_PIPE;
	v->a[23904] = anon_sym_LT;
	v->a[23905] = anon_sym_GT;
	v->a[23906] = anon_sym_GT_GT;
	v->a[23907] = anon_sym_AMP_GT;
	v->a[23908] = anon_sym_AMP_GT_GT;
	v->a[23909] = anon_sym_LT_AMP;
	v->a[23910] = anon_sym_GT_AMP;
	v->a[23911] = anon_sym_GT_PIPE;
	v->a[23912] = anon_sym_LT_AMP_DASH;
	v->a[23913] = anon_sym_GT_AMP_DASH;
	v->a[23914] = anon_sym_LT_LT;
	v->a[23915] = anon_sym_LT_LT_DASH;
	v->a[23916] = aux_sym_heredoc_redirect_token1;
	v->a[23917] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23918] = anon_sym_AMP;
	v->a[23919] = anon_sym_DOLLAR;
	small_parse_table_1196(v);
}

void	small_parse_table_1196(t_small_parse_table_array *v)
{
	v->a[23920] = anon_sym_DQUOTE;
	v->a[23921] = sym_raw_string;
	v->a[23922] = aux_sym_number_token1;
	v->a[23923] = aux_sym_number_token2;
	v->a[23924] = anon_sym_DOLLAR_LBRACE;
	v->a[23925] = anon_sym_DOLLAR_LPAREN;
	v->a[23926] = anon_sym_BQUOTE;
	v->a[23927] = sym_word;
	v->a[23928] = anon_sym_SEMI;
	v->a[23929] = 5;
	v->a[23930] = actions(3);
	v->a[23931] = 1;
	v->a[23932] = sym_comment;
	v->a[23933] = state(731);
	v->a[23934] = 1;
	v->a[23935] = sym_concatenation;
	v->a[23936] = actions(755);
	v->a[23937] = 3;
	v->a[23938] = sym_file_descriptor;
	v->a[23939] = sym_variable_name;
	small_parse_table_1197(v);
}

void	small_parse_table_1197(t_small_parse_table_array *v)
{
	v->a[23940] = ts_builtin_sym_end;
	v->a[23941] = state(330);
	v->a[23942] = 6;
	v->a[23943] = sym_arithmetic_expansion;
	v->a[23944] = sym_string;
	v->a[23945] = sym_number;
	v->a[23946] = sym_simple_expansion;
	v->a[23947] = sym_expansion;
	v->a[23948] = sym_command_substitution;
	v->a[23949] = actions(757);
	v->a[23950] = 29;
	v->a[23951] = anon_sym_PIPE;
	v->a[23952] = anon_sym_SEMI_SEMI;
	v->a[23953] = anon_sym_AMP_AMP;
	v->a[23954] = anon_sym_PIPE_PIPE;
	v->a[23955] = anon_sym_LT;
	v->a[23956] = anon_sym_GT;
	v->a[23957] = anon_sym_GT_GT;
	v->a[23958] = anon_sym_AMP_GT;
	v->a[23959] = anon_sym_AMP_GT_GT;
	small_parse_table_1198(v);
}

void	small_parse_table_1198(t_small_parse_table_array *v)
{
	v->a[23960] = anon_sym_LT_AMP;
	v->a[23961] = anon_sym_GT_AMP;
	v->a[23962] = anon_sym_GT_PIPE;
	v->a[23963] = anon_sym_LT_AMP_DASH;
	v->a[23964] = anon_sym_GT_AMP_DASH;
	v->a[23965] = anon_sym_LT_LT;
	v->a[23966] = anon_sym_LT_LT_DASH;
	v->a[23967] = aux_sym_heredoc_redirect_token1;
	v->a[23968] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23969] = anon_sym_AMP;
	v->a[23970] = anon_sym_DOLLAR;
	v->a[23971] = anon_sym_DQUOTE;
	v->a[23972] = sym_raw_string;
	v->a[23973] = aux_sym_number_token1;
	v->a[23974] = aux_sym_number_token2;
	v->a[23975] = anon_sym_DOLLAR_LBRACE;
	v->a[23976] = anon_sym_DOLLAR_LPAREN;
	v->a[23977] = anon_sym_BQUOTE;
	v->a[23978] = sym_word;
	v->a[23979] = anon_sym_SEMI;
	small_parse_table_1199(v);
}

void	small_parse_table_1199(t_small_parse_table_array *v)
{
	v->a[23980] = 6;
	v->a[23981] = actions(3);
	v->a[23982] = 1;
	v->a[23983] = sym_comment;
	v->a[23984] = actions(433);
	v->a[23985] = 1;
	v->a[23986] = sym_variable_name;
	v->a[23987] = actions(413);
	v->a[23988] = 2;
	v->a[23989] = sym_file_descriptor;
	v->a[23990] = sym__bare_dollar;
	v->a[23991] = actions(431);
	v->a[23992] = 2;
	v->a[23993] = aux_sym__simple_variable_name_token1;
	v->a[23994] = aux_sym__multiline_variable_name_token1;
	v->a[23995] = actions(429);
	v->a[23996] = 9;
	v->a[23997] = anon_sym_BANG;
	v->a[23998] = anon_sym_DASH;
	v->a[23999] = anon_sym_STAR;
	small_parse_table_1200(v);
}

/* EOF small_parse_table_239.c */
