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
	v->a[23900] = anon_sym_SEMI;
	v->a[23901] = 12;
	v->a[23902] = actions(3);
	v->a[23903] = 1;
	v->a[23904] = sym_comment;
	v->a[23905] = actions(682);
	v->a[23906] = 1;
	v->a[23907] = anon_sym_PIPE;
	v->a[23908] = actions(690);
	v->a[23909] = 1;
	v->a[23910] = sym_file_descriptor;
	v->a[23911] = actions(785);
	v->a[23912] = 1;
	v->a[23913] = sym_variable_name;
	v->a[23914] = actions(813);
	v->a[23915] = 1;
	v->a[23916] = ts_builtin_sym_end;
	v->a[23917] = state(791);
	v->a[23918] = 1;
	v->a[23919] = sym_terminator;
	small_parse_table_1196(v);
}

void	small_parse_table_1196(t_small_parse_table_array *v)
{
	v->a[23920] = actions(754);
	v->a[23921] = 2;
	v->a[23922] = anon_sym_LT_LT;
	v->a[23923] = anon_sym_LT_LT_DASH;
	v->a[23924] = actions(783);
	v->a[23925] = 2;
	v->a[23926] = anon_sym_AMP_AMP;
	v->a[23927] = anon_sym_PIPE_PIPE;
	v->a[23928] = state(1155);
	v->a[23929] = 2;
	v->a[23930] = sym_variable_assignment;
	v->a[23931] = aux_sym__variable_assignments_repeat1;
	v->a[23932] = state(1160);
	v->a[23933] = 3;
	v->a[23934] = sym_file_redirect;
	v->a[23935] = sym_heredoc_redirect;
	v->a[23936] = aux_sym_redirected_statement_repeat1;
	v->a[23937] = actions(781);
	v->a[23938] = 4;
	v->a[23939] = anon_sym_SEMI_SEMI;
	small_parse_table_1197(v);
}

void	small_parse_table_1197(t_small_parse_table_array *v)
{
	v->a[23940] = aux_sym_heredoc_redirect_token1;
	v->a[23941] = anon_sym_AMP;
	v->a[23942] = anon_sym_SEMI;
	v->a[23943] = actions(678);
	v->a[23944] = 17;
	v->a[23945] = anon_sym_LT;
	v->a[23946] = anon_sym_GT;
	v->a[23947] = anon_sym_GT_GT;
	v->a[23948] = anon_sym_LT_AMP;
	v->a[23949] = anon_sym_GT_AMP;
	v->a[23950] = anon_sym_GT_PIPE;
	v->a[23951] = anon_sym_LT_AMP_DASH;
	v->a[23952] = anon_sym_GT_AMP_DASH;
	v->a[23953] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23954] = anon_sym_DOLLAR;
	v->a[23955] = anon_sym_DQUOTE;
	v->a[23956] = sym_raw_string;
	v->a[23957] = sym_number;
	v->a[23958] = anon_sym_DOLLAR_LBRACE;
	v->a[23959] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1198(v);
}

void	small_parse_table_1198(t_small_parse_table_array *v)
{
	v->a[23960] = anon_sym_BQUOTE;
	v->a[23961] = sym_word;
	v->a[23962] = 6;
	v->a[23963] = actions(3);
	v->a[23964] = 1;
	v->a[23965] = sym_comment;
	v->a[23966] = actions(819);
	v->a[23967] = 1;
	v->a[23968] = sym_variable_name;
	v->a[23969] = actions(379);
	v->a[23970] = 2;
	v->a[23971] = sym_file_descriptor;
	v->a[23972] = sym__bare_dollar;
	v->a[23973] = actions(817);
	v->a[23974] = 2;
	v->a[23975] = aux_sym__simple_variable_name_token1;
	v->a[23976] = aux_sym__multiline_variable_name_token1;
	v->a[23977] = actions(815);
	v->a[23978] = 9;
	v->a[23979] = anon_sym_BANG;
	small_parse_table_1199(v);
}

void	small_parse_table_1199(t_small_parse_table_array *v)
{
	v->a[23980] = anon_sym_DASH;
	v->a[23981] = anon_sym_STAR;
	v->a[23982] = anon_sym_QMARK;
	v->a[23983] = anon_sym_DOLLAR;
	v->a[23984] = anon_sym_POUND;
	v->a[23985] = anon_sym_AT;
	v->a[23986] = anon_sym_0;
	v->a[23987] = anon_sym__;
	v->a[23988] = actions(381);
	v->a[23989] = 21;
	v->a[23990] = anon_sym_PIPE;
	v->a[23991] = anon_sym_AMP_AMP;
	v->a[23992] = anon_sym_PIPE_PIPE;
	v->a[23993] = anon_sym_LT;
	v->a[23994] = anon_sym_GT;
	v->a[23995] = anon_sym_GT_GT;
	v->a[23996] = anon_sym_LT_AMP;
	v->a[23997] = anon_sym_GT_AMP;
	v->a[23998] = anon_sym_GT_PIPE;
	v->a[23999] = anon_sym_LT_AMP_DASH;
	small_parse_table_1200(v);
}

/* EOF small_parse_table_239.c */
