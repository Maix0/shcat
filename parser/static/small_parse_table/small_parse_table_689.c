/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_689.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3445(t_small_parse_table_array *v)
{
	v->a[68900] = anon_sym_DQUOTE;
	v->a[68901] = actions(63);
	v->a[68902] = 1;
	v->a[68903] = anon_sym_DOLLAR_LBRACE;
	v->a[68904] = actions(65);
	v->a[68905] = 1;
	v->a[68906] = anon_sym_DOLLAR_LPAREN;
	v->a[68907] = actions(67);
	v->a[68908] = 1;
	v->a[68909] = anon_sym_BQUOTE;
	v->a[68910] = actions(2462);
	v->a[68911] = 1;
	v->a[68912] = sym__bare_dollar;
	v->a[68913] = actions(2458);
	v->a[68914] = 5;
	v->a[68915] = aux_sym_concatenation_token1;
	v->a[68916] = sym_raw_string;
	v->a[68917] = sym_number;
	v->a[68918] = sym__comment_word;
	v->a[68919] = sym_word;
	small_parse_table_3446(v);
}

void	small_parse_table_3446(t_small_parse_table_array *v)
{
	v->a[68920] = state(403);
	v->a[68921] = 5;
	v->a[68922] = sym_arithmetic_expansion;
	v->a[68923] = sym_string;
	v->a[68924] = sym_simple_expansion;
	v->a[68925] = sym_expansion;
	v->a[68926] = sym_command_substitution;
	v->a[68927] = 10;
	v->a[68928] = actions(3);
	v->a[68929] = 1;
	v->a[68930] = sym_comment;
	v->a[68931] = actions(1641);
	v->a[68932] = 1;
	v->a[68933] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[68934] = actions(1643);
	v->a[68935] = 1;
	v->a[68936] = anon_sym_DOLLAR;
	v->a[68937] = actions(1645);
	v->a[68938] = 1;
	v->a[68939] = anon_sym_DQUOTE;
	small_parse_table_3447(v);
}

void	small_parse_table_3447(t_small_parse_table_array *v)
{
	v->a[68940] = actions(1647);
	v->a[68941] = 1;
	v->a[68942] = anon_sym_DOLLAR_LBRACE;
	v->a[68943] = actions(1649);
	v->a[68944] = 1;
	v->a[68945] = anon_sym_DOLLAR_LPAREN;
	v->a[68946] = actions(1651);
	v->a[68947] = 1;
	v->a[68948] = anon_sym_BQUOTE;
	v->a[68949] = actions(2541);
	v->a[68950] = 1;
	v->a[68951] = sym__bare_dollar;
	v->a[68952] = actions(2537);
	v->a[68953] = 5;
	v->a[68954] = aux_sym_concatenation_token1;
	v->a[68955] = sym_raw_string;
	v->a[68956] = sym_number;
	v->a[68957] = sym__comment_word;
	v->a[68958] = sym_word;
	v->a[68959] = state(1867);
	small_parse_table_3448(v);
}

void	small_parse_table_3448(t_small_parse_table_array *v)
{
	v->a[68960] = 5;
	v->a[68961] = sym_arithmetic_expansion;
	v->a[68962] = sym_string;
	v->a[68963] = sym_simple_expansion;
	v->a[68964] = sym_expansion;
	v->a[68965] = sym_command_substitution;
	v->a[68966] = 7;
	v->a[68967] = actions(3);
	v->a[68968] = 1;
	v->a[68969] = sym_comment;
	v->a[68970] = actions(1976);
	v->a[68971] = 1;
	v->a[68972] = aux_sym_heredoc_redirect_token1;
	v->a[68973] = actions(2604);
	v->a[68974] = 1;
	v->a[68975] = sym_file_descriptor;
	v->a[68976] = actions(700);
	v->a[68977] = 2;
	v->a[68978] = anon_sym_LT_LT;
	v->a[68979] = anon_sym_LT_LT_DASH;
	small_parse_table_3449(v);
}

void	small_parse_table_3449(t_small_parse_table_array *v)
{
	v->a[68980] = actions(1974);
	v->a[68981] = 3;
	v->a[68982] = anon_sym_PIPE;
	v->a[68983] = anon_sym_AMP_AMP;
	v->a[68984] = anon_sym_PIPE_PIPE;
	v->a[68985] = state(1333);
	v->a[68986] = 3;
	v->a[68987] = sym_file_redirect;
	v->a[68988] = sym_heredoc_redirect;
	v->a[68989] = aux_sym_redirected_statement_repeat1;
	v->a[68990] = actions(2600);
	v->a[68991] = 7;
	v->a[68992] = anon_sym_LT;
	v->a[68993] = anon_sym_GT;
	v->a[68994] = anon_sym_GT_GT;
	v->a[68995] = anon_sym_LT_AMP;
	v->a[68996] = anon_sym_GT_AMP;
	v->a[68997] = anon_sym_GT_PIPE;
	v->a[68998] = anon_sym_LT_GT;
	v->a[68999] = 10;
	small_parse_table_3450(v);
}

/* EOF small_parse_table_689.c */
