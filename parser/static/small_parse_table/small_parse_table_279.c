/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_279.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1395(t_small_parse_table_array *v)
{
	v->a[27900] = state(1157);
	v->a[27901] = 3;
	v->a[27902] = sym_file_redirect;
	v->a[27903] = sym_heredoc_redirect;
	v->a[27904] = aux_sym_redirected_statement_repeat1;
	v->a[27905] = actions(900);
	v->a[27906] = 8;
	v->a[27907] = anon_sym_SEMI_SEMI;
	v->a[27908] = anon_sym_AMP_AMP;
	v->a[27909] = anon_sym_PIPE_PIPE;
	v->a[27910] = anon_sym_LT_LT;
	v->a[27911] = anon_sym_LT_LT_DASH;
	v->a[27912] = aux_sym_heredoc_redirect_token1;
	v->a[27913] = anon_sym_AMP;
	v->a[27914] = anon_sym_SEMI;
	v->a[27915] = actions(762);
	v->a[27916] = 19;
	v->a[27917] = anon_sym_LT;
	v->a[27918] = anon_sym_GT;
	v->a[27919] = anon_sym_GT_GT;
	small_parse_table_1396(v);
}

void	small_parse_table_1396(t_small_parse_table_array *v)
{
	v->a[27920] = anon_sym_AMP_GT;
	v->a[27921] = anon_sym_AMP_GT_GT;
	v->a[27922] = anon_sym_LT_AMP;
	v->a[27923] = anon_sym_GT_AMP;
	v->a[27924] = anon_sym_GT_PIPE;
	v->a[27925] = anon_sym_LT_AMP_DASH;
	v->a[27926] = anon_sym_GT_AMP_DASH;
	v->a[27927] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27928] = anon_sym_DOLLAR;
	v->a[27929] = anon_sym_DQUOTE;
	v->a[27930] = sym_raw_string;
	v->a[27931] = sym_number;
	v->a[27932] = anon_sym_DOLLAR_LBRACE;
	v->a[27933] = anon_sym_DOLLAR_LPAREN;
	v->a[27934] = anon_sym_BQUOTE;
	v->a[27935] = sym_word;
	v->a[27936] = 6;
	v->a[27937] = actions(3);
	v->a[27938] = 1;
	v->a[27939] = sym_comment;
	small_parse_table_1397(v);
}

void	small_parse_table_1397(t_small_parse_table_array *v)
{
	v->a[27940] = actions(959);
	v->a[27941] = 1;
	v->a[27942] = aux_sym_concatenation_token1;
	v->a[27943] = actions(1027);
	v->a[27944] = 1;
	v->a[27945] = sym__concat;
	v->a[27946] = state(283);
	v->a[27947] = 1;
	v->a[27948] = aux_sym_concatenation_repeat1;
	v->a[27949] = actions(1000);
	v->a[27950] = 2;
	v->a[27951] = sym_file_descriptor;
	v->a[27952] = sym__bare_dollar;
	v->a[27953] = actions(993);
	v->a[27954] = 30;
	v->a[27955] = anon_sym_LPAREN;
	v->a[27956] = anon_sym_PIPE;
	v->a[27957] = anon_sym_RPAREN;
	v->a[27958] = anon_sym_SEMI_SEMI;
	v->a[27959] = anon_sym_AMP_AMP;
	small_parse_table_1398(v);
}

void	small_parse_table_1398(t_small_parse_table_array *v)
{
	v->a[27960] = anon_sym_PIPE_PIPE;
	v->a[27961] = anon_sym_LT;
	v->a[27962] = anon_sym_GT;
	v->a[27963] = anon_sym_GT_GT;
	v->a[27964] = anon_sym_AMP_GT;
	v->a[27965] = anon_sym_AMP_GT_GT;
	v->a[27966] = anon_sym_LT_AMP;
	v->a[27967] = anon_sym_GT_AMP;
	v->a[27968] = anon_sym_GT_PIPE;
	v->a[27969] = anon_sym_LT_AMP_DASH;
	v->a[27970] = anon_sym_GT_AMP_DASH;
	v->a[27971] = anon_sym_LT_LT;
	v->a[27972] = anon_sym_LT_LT_DASH;
	v->a[27973] = aux_sym_heredoc_redirect_token1;
	v->a[27974] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27975] = anon_sym_AMP;
	v->a[27976] = anon_sym_DOLLAR;
	v->a[27977] = anon_sym_DQUOTE;
	v->a[27978] = sym_raw_string;
	v->a[27979] = sym_number;
	small_parse_table_1399(v);
}

void	small_parse_table_1399(t_small_parse_table_array *v)
{
	v->a[27980] = anon_sym_DOLLAR_LBRACE;
	v->a[27981] = anon_sym_DOLLAR_LPAREN;
	v->a[27982] = anon_sym_BQUOTE;
	v->a[27983] = sym_word;
	v->a[27984] = anon_sym_SEMI;
	v->a[27985] = 6;
	v->a[27986] = actions(3);
	v->a[27987] = 1;
	v->a[27988] = sym_comment;
	v->a[27989] = actions(1006);
	v->a[27990] = 1;
	v->a[27991] = aux_sym_concatenation_token1;
	v->a[27992] = actions(1029);
	v->a[27993] = 1;
	v->a[27994] = sym__concat;
	v->a[27995] = state(294);
	v->a[27996] = 1;
	v->a[27997] = aux_sym_concatenation_repeat1;
	v->a[27998] = actions(961);
	v->a[27999] = 3;
	small_parse_table_1400(v);
}

/* EOF small_parse_table_279.c */
