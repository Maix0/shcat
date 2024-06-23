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
	v->a[27900] = anon_sym_AMP_GT_GT;
	v->a[27901] = anon_sym_LT_AMP;
	v->a[27902] = anon_sym_GT_AMP;
	v->a[27903] = anon_sym_GT_PIPE;
	v->a[27904] = anon_sym_LT_AMP_DASH;
	v->a[27905] = anon_sym_GT_AMP_DASH;
	v->a[27906] = anon_sym_LT_LT;
	v->a[27907] = anon_sym_LT_LT_DASH;
	v->a[27908] = 7;
	v->a[27909] = actions(3);
	v->a[27910] = 1;
	v->a[27911] = sym_comment;
	v->a[27912] = actions(980);
	v->a[27913] = 1;
	v->a[27914] = aux_sym_concatenation_token1;
	v->a[27915] = actions(997);
	v->a[27916] = 1;
	v->a[27917] = sym__concat;
	v->a[27918] = actions(1055);
	v->a[27919] = 1;
	small_parse_table_1396(v);
}

void	small_parse_table_1396(t_small_parse_table_array *v)
{
	v->a[27920] = anon_sym_LPAREN;
	v->a[27921] = state(278);
	v->a[27922] = 1;
	v->a[27923] = aux_sym_concatenation_repeat1;
	v->a[27924] = actions(991);
	v->a[27925] = 2;
	v->a[27926] = sym_file_descriptor;
	v->a[27927] = sym__bare_dollar;
	v->a[27928] = actions(984);
	v->a[27929] = 29;
	v->a[27930] = anon_sym_esac;
	v->a[27931] = anon_sym_PIPE;
	v->a[27932] = anon_sym_SEMI_SEMI;
	v->a[27933] = anon_sym_AMP_AMP;
	v->a[27934] = anon_sym_PIPE_PIPE;
	v->a[27935] = anon_sym_LT;
	v->a[27936] = anon_sym_GT;
	v->a[27937] = anon_sym_GT_GT;
	v->a[27938] = anon_sym_AMP_GT;
	v->a[27939] = anon_sym_AMP_GT_GT;
	small_parse_table_1397(v);
}

void	small_parse_table_1397(t_small_parse_table_array *v)
{
	v->a[27940] = anon_sym_LT_AMP;
	v->a[27941] = anon_sym_GT_AMP;
	v->a[27942] = anon_sym_GT_PIPE;
	v->a[27943] = anon_sym_LT_AMP_DASH;
	v->a[27944] = anon_sym_GT_AMP_DASH;
	v->a[27945] = anon_sym_LT_LT;
	v->a[27946] = anon_sym_LT_LT_DASH;
	v->a[27947] = aux_sym_heredoc_redirect_token1;
	v->a[27948] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27949] = anon_sym_AMP;
	v->a[27950] = anon_sym_DOLLAR;
	v->a[27951] = anon_sym_DQUOTE;
	v->a[27952] = sym_raw_string;
	v->a[27953] = sym_number;
	v->a[27954] = anon_sym_DOLLAR_LBRACE;
	v->a[27955] = anon_sym_DOLLAR_LPAREN;
	v->a[27956] = anon_sym_BQUOTE;
	v->a[27957] = sym_word;
	v->a[27958] = anon_sym_SEMI;
	v->a[27959] = 10;
	small_parse_table_1398(v);
}

void	small_parse_table_1398(t_small_parse_table_array *v)
{
	v->a[27960] = actions(3);
	v->a[27961] = 1;
	v->a[27962] = sym_comment;
	v->a[27963] = actions(807);
	v->a[27964] = 1;
	v->a[27965] = anon_sym_PIPE;
	v->a[27966] = actions(811);
	v->a[27967] = 1;
	v->a[27968] = sym_file_descriptor;
	v->a[27969] = actions(967);
	v->a[27970] = 1;
	v->a[27971] = sym_variable_name;
	v->a[27972] = actions(861);
	v->a[27973] = 2;
	v->a[27974] = anon_sym_LT_LT;
	v->a[27975] = anon_sym_LT_LT_DASH;
	v->a[27976] = actions(965);
	v->a[27977] = 2;
	v->a[27978] = anon_sym_AMP_AMP;
	v->a[27979] = anon_sym_PIPE_PIPE;
	small_parse_table_1399(v);
}

void	small_parse_table_1399(t_small_parse_table_array *v)
{
	v->a[27980] = state(1415);
	v->a[27981] = 2;
	v->a[27982] = sym_variable_assignment;
	v->a[27983] = aux_sym__variable_assignments_repeat1;
	v->a[27984] = state(1322);
	v->a[27985] = 3;
	v->a[27986] = sym_file_redirect;
	v->a[27987] = sym_heredoc_redirect;
	v->a[27988] = aux_sym_redirected_statement_repeat1;
	v->a[27989] = actions(1058);
	v->a[27990] = 4;
	v->a[27991] = anon_sym_SEMI_SEMI;
	v->a[27992] = aux_sym_heredoc_redirect_token1;
	v->a[27993] = anon_sym_AMP;
	v->a[27994] = anon_sym_SEMI;
	v->a[27995] = actions(805);
	v->a[27996] = 19;
	v->a[27997] = anon_sym_LT;
	v->a[27998] = anon_sym_GT;
	v->a[27999] = anon_sym_GT_GT;
	small_parse_table_1400(v);
}

/* EOF small_parse_table_279.c */
