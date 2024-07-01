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
	v->a[68900] = sym_raw_string;
	v->a[68901] = sym_number;
	v->a[68902] = sym__comment_word;
	v->a[68903] = sym_word;
	v->a[68904] = state(1756);
	v->a[68905] = 5;
	v->a[68906] = sym_arithmetic_expansion;
	v->a[68907] = sym_string;
	v->a[68908] = sym_simple_expansion;
	v->a[68909] = sym_expansion;
	v->a[68910] = sym_command_substitution;
	v->a[68911] = 11;
	v->a[68912] = actions(3);
	v->a[68913] = 1;
	v->a[68914] = sym_comment;
	v->a[68915] = actions(1638);
	v->a[68916] = 1;
	v->a[68917] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[68918] = actions(1640);
	v->a[68919] = 1;
	small_parse_table_3446(v);
}

void	small_parse_table_3446(t_small_parse_table_array *v)
{
	v->a[68920] = anon_sym_DOLLAR;
	v->a[68921] = actions(1642);
	v->a[68922] = 1;
	v->a[68923] = anon_sym_DQUOTE;
	v->a[68924] = actions(1644);
	v->a[68925] = 1;
	v->a[68926] = anon_sym_DOLLAR_LBRACE;
	v->a[68927] = actions(1646);
	v->a[68928] = 1;
	v->a[68929] = anon_sym_DOLLAR_LPAREN;
	v->a[68930] = actions(1648);
	v->a[68931] = 1;
	v->a[68932] = anon_sym_BQUOTE;
	v->a[68933] = actions(1650);
	v->a[68934] = 1;
	v->a[68935] = sym_extglob_pattern;
	v->a[68936] = state(1874);
	v->a[68937] = 2;
	v->a[68938] = sym_concatenation;
	v->a[68939] = sym__extglob_blob;
	small_parse_table_3447(v);
}

void	small_parse_table_3447(t_small_parse_table_array *v)
{
	v->a[68940] = actions(2706);
	v->a[68941] = 3;
	v->a[68942] = sym_raw_string;
	v->a[68943] = sym_number;
	v->a[68944] = sym_word;
	v->a[68945] = state(1805);
	v->a[68946] = 5;
	v->a[68947] = sym_arithmetic_expansion;
	v->a[68948] = sym_string;
	v->a[68949] = sym_simple_expansion;
	v->a[68950] = sym_expansion;
	v->a[68951] = sym_command_substitution;
	v->a[68952] = 4;
	v->a[68953] = actions(3);
	v->a[68954] = 1;
	v->a[68955] = sym_comment;
	v->a[68956] = actions(997);
	v->a[68957] = 2;
	v->a[68958] = sym_file_descriptor;
	v->a[68959] = aux_sym_heredoc_redirect_token1;
	small_parse_table_3448(v);
}

void	small_parse_table_3448(t_small_parse_table_array *v)
{
	v->a[68960] = state(1359);
	v->a[68961] = 3;
	v->a[68962] = sym_file_redirect;
	v->a[68963] = sym_heredoc_redirect;
	v->a[68964] = aux_sym_redirected_statement_repeat1;
	v->a[68965] = actions(960);
	v->a[68966] = 12;
	v->a[68967] = anon_sym_PIPE;
	v->a[68968] = anon_sym_AMP_AMP;
	v->a[68969] = anon_sym_PIPE_PIPE;
	v->a[68970] = anon_sym_LT;
	v->a[68971] = anon_sym_GT;
	v->a[68972] = anon_sym_GT_GT;
	v->a[68973] = anon_sym_LT_AMP;
	v->a[68974] = anon_sym_GT_AMP;
	v->a[68975] = anon_sym_GT_PIPE;
	v->a[68976] = anon_sym_LT_GT;
	v->a[68977] = anon_sym_LT_LT;
	v->a[68978] = anon_sym_LT_LT_DASH;
	v->a[68979] = 10;
	small_parse_table_3449(v);
}

void	small_parse_table_3449(t_small_parse_table_array *v)
{
	v->a[68980] = actions(3);
	v->a[68981] = 1;
	v->a[68982] = sym_comment;
	v->a[68983] = actions(2374);
	v->a[68984] = 1;
	v->a[68985] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[68986] = actions(2378);
	v->a[68987] = 1;
	v->a[68988] = anon_sym_DQUOTE;
	v->a[68989] = actions(2380);
	v->a[68990] = 1;
	v->a[68991] = anon_sym_DOLLAR_LBRACE;
	v->a[68992] = actions(2382);
	v->a[68993] = 1;
	v->a[68994] = anon_sym_DOLLAR_LPAREN;
	v->a[68995] = actions(2384);
	v->a[68996] = 1;
	v->a[68997] = anon_sym_BQUOTE;
	v->a[68998] = actions(2386);
	v->a[68999] = 1;
	small_parse_table_3450(v);
}

/* EOF small_parse_table_689.c */
