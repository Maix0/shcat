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
	v->a[68900] = 1;
	v->a[68901] = sym_file_descriptor;
	v->a[68902] = actions(1951);
	v->a[68903] = 2;
	v->a[68904] = anon_sym_AMP_AMP;
	v->a[68905] = anon_sym_PIPE_PIPE;
	v->a[68906] = actions(2741);
	v->a[68907] = 2;
	v->a[68908] = anon_sym_LT;
	v->a[68909] = anon_sym_GT;
	v->a[68910] = state(1392);
	v->a[68911] = 3;
	v->a[68912] = sym_file_redirect;
	v->a[68913] = sym_heredoc_redirect;
	v->a[68914] = aux_sym_redirected_statement_repeat1;
	v->a[68915] = actions(2743);
	v->a[68916] = 5;
	v->a[68917] = anon_sym_GT_GT;
	v->a[68918] = anon_sym_LT_AMP;
	v->a[68919] = anon_sym_GT_AMP;
	small_parse_table_3446(v);
}

void	small_parse_table_3446(t_small_parse_table_array *v)
{
	v->a[68920] = anon_sym_GT_PIPE;
	v->a[68921] = anon_sym_LT_GT;
	v->a[68922] = 3;
	v->a[68923] = actions(501);
	v->a[68924] = 1;
	v->a[68925] = sym_comment;
	v->a[68926] = actions(680);
	v->a[68927] = 4;
	v->a[68928] = anon_sym_PIPE;
	v->a[68929] = anon_sym_LT;
	v->a[68930] = anon_sym_GT;
	v->a[68931] = anon_sym_LT_LT;
	v->a[68932] = actions(682);
	v->a[68933] = 12;
	v->a[68934] = sym_file_descriptor;
	v->a[68935] = sym__concat;
	v->a[68936] = sym_variable_name;
	v->a[68937] = anon_sym_AMP_AMP;
	v->a[68938] = anon_sym_PIPE_PIPE;
	v->a[68939] = anon_sym_GT_GT;
	small_parse_table_3447(v);
}

void	small_parse_table_3447(t_small_parse_table_array *v)
{
	v->a[68940] = anon_sym_LT_AMP;
	v->a[68941] = anon_sym_GT_AMP;
	v->a[68942] = anon_sym_GT_PIPE;
	v->a[68943] = anon_sym_LT_GT;
	v->a[68944] = anon_sym_LT_LT_DASH;
	v->a[68945] = aux_sym_concatenation_token1;
	v->a[68946] = 10;
	v->a[68947] = actions(3);
	v->a[68948] = 1;
	v->a[68949] = sym_comment;
	v->a[68950] = actions(819);
	v->a[68951] = 1;
	v->a[68952] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[68953] = actions(821);
	v->a[68954] = 1;
	v->a[68955] = anon_sym_DOLLAR;
	v->a[68956] = actions(823);
	v->a[68957] = 1;
	v->a[68958] = anon_sym_DQUOTE;
	v->a[68959] = actions(825);
	small_parse_table_3448(v);
}

void	small_parse_table_3448(t_small_parse_table_array *v)
{
	v->a[68960] = 1;
	v->a[68961] = anon_sym_DOLLAR_LBRACE;
	v->a[68962] = actions(827);
	v->a[68963] = 1;
	v->a[68964] = anon_sym_DOLLAR_LPAREN;
	v->a[68965] = actions(829);
	v->a[68966] = 1;
	v->a[68967] = anon_sym_BQUOTE;
	v->a[68968] = state(262);
	v->a[68969] = 2;
	v->a[68970] = sym_concatenation;
	v->a[68971] = aux_sym_for_statement_repeat1;
	v->a[68972] = actions(817);
	v->a[68973] = 3;
	v->a[68974] = sym_raw_string;
	v->a[68975] = sym_number;
	v->a[68976] = sym_word;
	v->a[68977] = state(533);
	v->a[68978] = 5;
	v->a[68979] = sym_arithmetic_expansion;
	small_parse_table_3449(v);
}

void	small_parse_table_3449(t_small_parse_table_array *v)
{
	v->a[68980] = sym_string;
	v->a[68981] = sym_simple_expansion;
	v->a[68982] = sym_expansion;
	v->a[68983] = sym_command_substitution;
	v->a[68984] = 10;
	v->a[68985] = actions(3);
	v->a[68986] = 1;
	v->a[68987] = sym_comment;
	v->a[68988] = actions(819);
	v->a[68989] = 1;
	v->a[68990] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[68991] = actions(821);
	v->a[68992] = 1;
	v->a[68993] = anon_sym_DOLLAR;
	v->a[68994] = actions(823);
	v->a[68995] = 1;
	v->a[68996] = anon_sym_DQUOTE;
	v->a[68997] = actions(825);
	v->a[68998] = 1;
	v->a[68999] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_3450(v);
}

/* EOF small_parse_table_689.c */
