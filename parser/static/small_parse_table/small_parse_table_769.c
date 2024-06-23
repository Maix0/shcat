/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_769.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3845(t_small_parse_table_array *v)
{
	v->a[76900] = 1;
	v->a[76901] = sym_variable_name;
	v->a[76902] = actions(2117);
	v->a[76903] = 2;
	v->a[76904] = sym_file_descriptor;
	v->a[76905] = aux_sym_heredoc_redirect_token1;
	v->a[76906] = state(1417);
	v->a[76907] = 2;
	v->a[76908] = sym_variable_assignment;
	v->a[76909] = aux_sym__variable_assignments_repeat1;
	v->a[76910] = actions(2115);
	v->a[76911] = 18;
	v->a[76912] = anon_sym_PIPE;
	v->a[76913] = anon_sym_SEMI_SEMI;
	v->a[76914] = anon_sym_AMP_AMP;
	v->a[76915] = anon_sym_PIPE_PIPE;
	v->a[76916] = anon_sym_LT;
	v->a[76917] = anon_sym_GT;
	v->a[76918] = anon_sym_GT_GT;
	v->a[76919] = anon_sym_AMP_GT;
	small_parse_table_3846(v);
}

void	small_parse_table_3846(t_small_parse_table_array *v)
{
	v->a[76920] = anon_sym_AMP_GT_GT;
	v->a[76921] = anon_sym_LT_AMP;
	v->a[76922] = anon_sym_GT_AMP;
	v->a[76923] = anon_sym_GT_PIPE;
	v->a[76924] = anon_sym_LT_AMP_DASH;
	v->a[76925] = anon_sym_GT_AMP_DASH;
	v->a[76926] = anon_sym_LT_LT;
	v->a[76927] = anon_sym_LT_LT_DASH;
	v->a[76928] = anon_sym_AMP;
	v->a[76929] = anon_sym_SEMI;
	v->a[76930] = 5;
	v->a[76931] = actions(3);
	v->a[76932] = 1;
	v->a[76933] = sym_comment;
	v->a[76934] = actions(811);
	v->a[76935] = 1;
	v->a[76936] = sym_file_descriptor;
	v->a[76937] = actions(967);
	v->a[76938] = 1;
	v->a[76939] = sym_variable_name;
	small_parse_table_3847(v);
}

void	small_parse_table_3847(t_small_parse_table_array *v)
{
	v->a[76940] = state(1415);
	v->a[76941] = 2;
	v->a[76942] = sym_variable_assignment;
	v->a[76943] = aux_sym__variable_assignments_repeat1;
	v->a[76944] = actions(805);
	v->a[76945] = 19;
	v->a[76946] = anon_sym_LT;
	v->a[76947] = anon_sym_GT;
	v->a[76948] = anon_sym_GT_GT;
	v->a[76949] = anon_sym_AMP_GT;
	v->a[76950] = anon_sym_AMP_GT_GT;
	v->a[76951] = anon_sym_LT_AMP;
	v->a[76952] = anon_sym_GT_AMP;
	v->a[76953] = anon_sym_GT_PIPE;
	v->a[76954] = anon_sym_LT_AMP_DASH;
	v->a[76955] = anon_sym_GT_AMP_DASH;
	v->a[76956] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76957] = anon_sym_DOLLAR;
	v->a[76958] = anon_sym_DQUOTE;
	v->a[76959] = sym_raw_string;
	small_parse_table_3848(v);
}

void	small_parse_table_3848(t_small_parse_table_array *v)
{
	v->a[76960] = sym_number;
	v->a[76961] = anon_sym_DOLLAR_LBRACE;
	v->a[76962] = anon_sym_DOLLAR_LPAREN;
	v->a[76963] = anon_sym_BQUOTE;
	v->a[76964] = sym_word;
	v->a[76965] = 7;
	v->a[76966] = actions(3);
	v->a[76967] = 1;
	v->a[76968] = sym_comment;
	v->a[76969] = actions(2769);
	v->a[76970] = 1;
	v->a[76971] = sym_file_descriptor;
	v->a[76972] = actions(2067);
	v->a[76973] = 2;
	v->a[76974] = anon_sym_LT_AMP_DASH;
	v->a[76975] = anon_sym_GT_AMP_DASH;
	v->a[76976] = actions(2685);
	v->a[76977] = 2;
	v->a[76978] = ts_builtin_sym_end;
	v->a[76979] = aux_sym_heredoc_redirect_token1;
	small_parse_table_3849(v);
}

void	small_parse_table_3849(t_small_parse_table_array *v)
{
	v->a[76980] = state(1386);
	v->a[76981] = 2;
	v->a[76982] = sym_file_redirect;
	v->a[76983] = aux_sym_redirected_statement_repeat2;
	v->a[76984] = actions(2065);
	v->a[76985] = 8;
	v->a[76986] = anon_sym_LT;
	v->a[76987] = anon_sym_GT;
	v->a[76988] = anon_sym_GT_GT;
	v->a[76989] = anon_sym_AMP_GT;
	v->a[76990] = anon_sym_AMP_GT_GT;
	v->a[76991] = anon_sym_LT_AMP;
	v->a[76992] = anon_sym_GT_AMP;
	v->a[76993] = anon_sym_GT_PIPE;
	v->a[76994] = actions(2683);
	v->a[76995] = 8;
	v->a[76996] = anon_sym_PIPE;
	v->a[76997] = anon_sym_SEMI_SEMI;
	v->a[76998] = anon_sym_AMP_AMP;
	v->a[76999] = anon_sym_PIPE_PIPE;
	small_parse_table_3850(v);
}

/* EOF small_parse_table_769.c */
