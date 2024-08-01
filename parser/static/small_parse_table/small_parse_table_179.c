/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_179.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_895(t_small_parse_table_array *v)
{
	v->a[17900] = actions(3);
	v->a[17901] = 1;
	v->a[17902] = sym_comment;
	v->a[17903] = actions(423);
	v->a[17904] = 1;
	v->a[17905] = sym_variable_name;
	v->a[17906] = state(201);
	v->a[17907] = 2;
	v->a[17908] = sym_concatenation;
	v->a[17909] = aux_sym_for_statement_repeat1;
	v->a[17910] = state(415);
	v->a[17911] = 5;
	v->a[17912] = sym_arithmetic_expansion;
	v->a[17913] = sym_string;
	v->a[17914] = sym_simple_expansion;
	v->a[17915] = sym_expansion;
	v->a[17916] = sym_command_substitution;
	v->a[17917] = actions(421);
	v->a[17918] = 19;
	v->a[17919] = anon_sym_PIPE;
	small_parse_table_896(v);
}

void	small_parse_table_896(t_small_parse_table_array *v)
{
	v->a[17920] = anon_sym_SEMI_SEMI;
	v->a[17921] = anon_sym_AMP_AMP;
	v->a[17922] = anon_sym_PIPE_PIPE;
	v->a[17923] = anon_sym_LT;
	v->a[17924] = anon_sym_GT;
	v->a[17925] = anon_sym_GT_GT;
	v->a[17926] = anon_sym_LT_LT;
	v->a[17927] = aux_sym_heredoc_redirect_token1;
	v->a[17928] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[17929] = anon_sym_DOLLAR;
	v->a[17930] = anon_sym_DQUOTE;
	v->a[17931] = sym_raw_string;
	v->a[17932] = sym_number;
	v->a[17933] = anon_sym_DOLLAR_LBRACE;
	v->a[17934] = anon_sym_DOLLAR_LPAREN;
	v->a[17935] = anon_sym_BQUOTE;
	v->a[17936] = sym_word;
	v->a[17937] = anon_sym_SEMI;
	v->a[17938] = 11;
	v->a[17939] = actions(3);
	small_parse_table_897(v);
}

void	small_parse_table_897(t_small_parse_table_array *v)
{
	v->a[17940] = 1;
	v->a[17941] = sym_comment;
	v->a[17942] = actions(580);
	v->a[17943] = 1;
	v->a[17944] = anon_sym_PIPE;
	v->a[17945] = actions(584);
	v->a[17946] = 1;
	v->a[17947] = anon_sym_LT_LT;
	v->a[17948] = actions(588);
	v->a[17949] = 1;
	v->a[17950] = sym_variable_name;
	v->a[17951] = state(356);
	v->a[17952] = 1;
	v->a[17953] = sym_terminator;
	v->a[17954] = actions(582);
	v->a[17955] = 2;
	v->a[17956] = anon_sym_AMP_AMP;
	v->a[17957] = anon_sym_PIPE_PIPE;
	v->a[17958] = actions(586);
	v->a[17959] = 2;
	small_parse_table_898(v);
}

void	small_parse_table_898(t_small_parse_table_array *v)
{
	v->a[17960] = aux_sym_heredoc_redirect_token1;
	v->a[17961] = anon_sym_SEMI;
	v->a[17962] = actions(591);
	v->a[17963] = 2;
	v->a[17964] = anon_sym_esac;
	v->a[17965] = anon_sym_SEMI_SEMI;
	v->a[17966] = state(970);
	v->a[17967] = 2;
	v->a[17968] = sym_variable_assignment;
	v->a[17969] = aux_sym__variable_assignments_repeat1;
	v->a[17970] = state(971);
	v->a[17971] = 3;
	v->a[17972] = sym_file_redirect;
	v->a[17973] = sym_heredoc_redirect;
	v->a[17974] = aux_sym_redirected_statement_repeat1;
	v->a[17975] = actions(576);
	v->a[17976] = 12;
	v->a[17977] = anon_sym_LT;
	v->a[17978] = anon_sym_GT;
	v->a[17979] = anon_sym_GT_GT;
	small_parse_table_899(v);
}

void	small_parse_table_899(t_small_parse_table_array *v)
{
	v->a[17980] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[17981] = anon_sym_DOLLAR;
	v->a[17982] = anon_sym_DQUOTE;
	v->a[17983] = sym_raw_string;
	v->a[17984] = sym_number;
	v->a[17985] = anon_sym_DOLLAR_LBRACE;
	v->a[17986] = anon_sym_DOLLAR_LPAREN;
	v->a[17987] = anon_sym_BQUOTE;
	v->a[17988] = sym_word;
	v->a[17989] = 11;
	v->a[17990] = actions(3);
	v->a[17991] = 1;
	v->a[17992] = sym_comment;
	v->a[17993] = actions(580);
	v->a[17994] = 1;
	v->a[17995] = anon_sym_PIPE;
	v->a[17996] = actions(597);
	v->a[17997] = 1;
	v->a[17998] = anon_sym_LT_LT;
	v->a[17999] = actions(691);
	small_parse_table_900(v);
}

/* EOF small_parse_table_179.c */
