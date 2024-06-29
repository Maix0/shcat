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
	v->a[68900] = actions(2066);
	v->a[68901] = 1;
	v->a[68902] = sym_file_descriptor;
	v->a[68903] = actions(2145);
	v->a[68904] = 1;
	v->a[68905] = aux_sym_heredoc_redirect_token1;
	v->a[68906] = state(798);
	v->a[68907] = 1;
	v->a[68908] = sym_terminator;
	v->a[68909] = actions(804);
	v->a[68910] = 2;
	v->a[68911] = anon_sym_LT_LT;
	v->a[68912] = anon_sym_LT_LT_DASH;
	v->a[68913] = actions(893);
	v->a[68914] = 2;
	v->a[68915] = anon_sym_AMP_AMP;
	v->a[68916] = anon_sym_PIPE_PIPE;
	v->a[68917] = actions(2064);
	v->a[68918] = 2;
	v->a[68919] = anon_sym_LT_AMP_DASH;
	small_parse_table_3446(v);
}

void	small_parse_table_3446(t_small_parse_table_array *v)
{
	v->a[68920] = anon_sym_GT_AMP_DASH;
	v->a[68921] = actions(953);
	v->a[68922] = 3;
	v->a[68923] = anon_sym_SEMI_SEMI;
	v->a[68924] = anon_sym_AMP;
	v->a[68925] = anon_sym_SEMI;
	v->a[68926] = state(1256);
	v->a[68927] = 3;
	v->a[68928] = sym_file_redirect;
	v->a[68929] = sym_heredoc_redirect;
	v->a[68930] = aux_sym_redirected_statement_repeat1;
	v->a[68931] = actions(2062);
	v->a[68932] = 8;
	v->a[68933] = anon_sym_LT;
	v->a[68934] = anon_sym_GT;
	v->a[68935] = anon_sym_GT_GT;
	v->a[68936] = anon_sym_AMP_GT;
	v->a[68937] = anon_sym_AMP_GT_GT;
	v->a[68938] = anon_sym_LT_AMP;
	v->a[68939] = anon_sym_GT_AMP;
	small_parse_table_3447(v);
}

void	small_parse_table_3447(t_small_parse_table_array *v)
{
	v->a[68940] = anon_sym_GT_PIPE;
	v->a[68941] = 3;
	v->a[68942] = actions(3);
	v->a[68943] = 1;
	v->a[68944] = sym_comment;
	v->a[68945] = actions(2259);
	v->a[68946] = 3;
	v->a[68947] = sym_file_descriptor;
	v->a[68948] = ts_builtin_sym_end;
	v->a[68949] = aux_sym_heredoc_redirect_token1;
	v->a[68950] = actions(2261);
	v->a[68951] = 20;
	v->a[68952] = anon_sym_PIPE;
	v->a[68953] = anon_sym_RPAREN;
	v->a[68954] = anon_sym_SEMI_SEMI;
	v->a[68955] = anon_sym_AMP_AMP;
	v->a[68956] = anon_sym_PIPE_PIPE;
	v->a[68957] = anon_sym_LT;
	v->a[68958] = anon_sym_GT;
	v->a[68959] = anon_sym_GT_GT;
	small_parse_table_3448(v);
}

void	small_parse_table_3448(t_small_parse_table_array *v)
{
	v->a[68960] = anon_sym_AMP_GT;
	v->a[68961] = anon_sym_AMP_GT_GT;
	v->a[68962] = anon_sym_LT_AMP;
	v->a[68963] = anon_sym_GT_AMP;
	v->a[68964] = anon_sym_GT_PIPE;
	v->a[68965] = anon_sym_LT_AMP_DASH;
	v->a[68966] = anon_sym_GT_AMP_DASH;
	v->a[68967] = anon_sym_LT_LT;
	v->a[68968] = anon_sym_LT_LT_DASH;
	v->a[68969] = anon_sym_AMP;
	v->a[68970] = anon_sym_BQUOTE;
	v->a[68971] = anon_sym_SEMI;
	v->a[68972] = 3;
	v->a[68973] = actions(3);
	v->a[68974] = 1;
	v->a[68975] = sym_comment;
	v->a[68976] = actions(1118);
	v->a[68977] = 3;
	v->a[68978] = sym_file_descriptor;
	v->a[68979] = sym__concat;
	small_parse_table_3449(v);
}

void	small_parse_table_3449(t_small_parse_table_array *v)
{
	v->a[68980] = aux_sym_heredoc_redirect_token1;
	v->a[68981] = actions(1116);
	v->a[68982] = 20;
	v->a[68983] = anon_sym_esac;
	v->a[68984] = anon_sym_PIPE;
	v->a[68985] = anon_sym_SEMI_SEMI;
	v->a[68986] = anon_sym_AMP_AMP;
	v->a[68987] = anon_sym_PIPE_PIPE;
	v->a[68988] = anon_sym_LT;
	v->a[68989] = anon_sym_GT;
	v->a[68990] = anon_sym_GT_GT;
	v->a[68991] = anon_sym_AMP_GT;
	v->a[68992] = anon_sym_AMP_GT_GT;
	v->a[68993] = anon_sym_LT_AMP;
	v->a[68994] = anon_sym_GT_AMP;
	v->a[68995] = anon_sym_GT_PIPE;
	v->a[68996] = anon_sym_LT_AMP_DASH;
	v->a[68997] = anon_sym_GT_AMP_DASH;
	v->a[68998] = anon_sym_LT_LT;
	v->a[68999] = anon_sym_LT_LT_DASH;
	small_parse_table_3450(v);
}

/* EOF small_parse_table_689.c */
