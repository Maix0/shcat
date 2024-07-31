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
	v->a[23900] = 3;
	v->a[23901] = anon_sym_SEMI_SEMI;
	v->a[23902] = aux_sym_heredoc_redirect_token1;
	v->a[23903] = anon_sym_SEMI;
	v->a[23904] = state(984);
	v->a[23905] = 3;
	v->a[23906] = sym_file_redirect;
	v->a[23907] = sym_heredoc_redirect;
	v->a[23908] = aux_sym_redirected_statement_repeat1;
	v->a[23909] = actions(742);
	v->a[23910] = 16;
	v->a[23911] = anon_sym_LT;
	v->a[23912] = anon_sym_GT;
	v->a[23913] = anon_sym_GT_GT;
	v->a[23914] = anon_sym_LT_AMP;
	v->a[23915] = anon_sym_GT_AMP;
	v->a[23916] = anon_sym_GT_PIPE;
	v->a[23917] = anon_sym_LT_GT;
	v->a[23918] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23919] = anon_sym_DOLLAR;
	small_parse_table_1196(v);
}

void	small_parse_table_1196(t_small_parse_table_array *v)
{
	v->a[23920] = anon_sym_DQUOTE;
	v->a[23921] = sym_raw_string;
	v->a[23922] = sym_number;
	v->a[23923] = anon_sym_DOLLAR_LBRACE;
	v->a[23924] = anon_sym_DOLLAR_LPAREN;
	v->a[23925] = anon_sym_BQUOTE;
	v->a[23926] = sym_word;
	v->a[23927] = 7;
	v->a[23928] = actions(3);
	v->a[23929] = 1;
	v->a[23930] = sym_comment;
	v->a[23931] = actions(746);
	v->a[23932] = 1;
	v->a[23933] = anon_sym_PIPE;
	v->a[23934] = actions(862);
	v->a[23935] = 1;
	v->a[23936] = sym_variable_name;
	v->a[23937] = state(959);
	v->a[23938] = 2;
	v->a[23939] = sym_variable_assignment;
	small_parse_table_1197(v);
}

void	small_parse_table_1197(t_small_parse_table_array *v)
{
	v->a[23940] = aux_sym__variable_assignments_repeat1;
	v->a[23941] = state(918);
	v->a[23942] = 3;
	v->a[23943] = sym_file_redirect;
	v->a[23944] = sym_heredoc_redirect;
	v->a[23945] = aux_sym_redirected_statement_repeat1;
	v->a[23946] = actions(916);
	v->a[23947] = 8;
	v->a[23948] = anon_sym_RPAREN;
	v->a[23949] = anon_sym_SEMI_SEMI;
	v->a[23950] = anon_sym_AMP_AMP;
	v->a[23951] = anon_sym_PIPE_PIPE;
	v->a[23952] = anon_sym_LT_LT;
	v->a[23953] = anon_sym_LT_LT_DASH;
	v->a[23954] = aux_sym_heredoc_redirect_token1;
	v->a[23955] = anon_sym_SEMI;
	v->a[23956] = actions(742);
	v->a[23957] = 16;
	v->a[23958] = anon_sym_LT;
	v->a[23959] = anon_sym_GT;
	small_parse_table_1198(v);
}

void	small_parse_table_1198(t_small_parse_table_array *v)
{
	v->a[23960] = anon_sym_GT_GT;
	v->a[23961] = anon_sym_LT_AMP;
	v->a[23962] = anon_sym_GT_AMP;
	v->a[23963] = anon_sym_GT_PIPE;
	v->a[23964] = anon_sym_LT_GT;
	v->a[23965] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23966] = anon_sym_DOLLAR;
	v->a[23967] = anon_sym_DQUOTE;
	v->a[23968] = sym_raw_string;
	v->a[23969] = sym_number;
	v->a[23970] = anon_sym_DOLLAR_LBRACE;
	v->a[23971] = anon_sym_DOLLAR_LPAREN;
	v->a[23972] = anon_sym_BQUOTE;
	v->a[23973] = sym_word;
	v->a[23974] = 7;
	v->a[23975] = actions(3);
	v->a[23976] = 1;
	v->a[23977] = sym_comment;
	v->a[23978] = actions(852);
	v->a[23979] = 1;
	small_parse_table_1199(v);
}

void	small_parse_table_1199(t_small_parse_table_array *v)
{
	v->a[23980] = sym_variable_name;
	v->a[23981] = actions(918);
	v->a[23982] = 1;
	v->a[23983] = ts_builtin_sym_end;
	v->a[23984] = state(919);
	v->a[23985] = 2;
	v->a[23986] = sym_variable_assignment;
	v->a[23987] = aux_sym__variable_assignments_repeat1;
	v->a[23988] = state(924);
	v->a[23989] = 3;
	v->a[23990] = sym_file_redirect;
	v->a[23991] = sym_heredoc_redirect;
	v->a[23992] = aux_sym_redirected_statement_repeat1;
	v->a[23993] = actions(742);
	v->a[23994] = 9;
	v->a[23995] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23996] = anon_sym_DOLLAR;
	v->a[23997] = anon_sym_DQUOTE;
	v->a[23998] = sym_raw_string;
	v->a[23999] = sym_number;
	small_parse_table_1200(v);
}

/* EOF small_parse_table_239.c */
