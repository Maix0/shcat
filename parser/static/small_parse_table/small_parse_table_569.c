/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_569.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2845(t_small_parse_table_array *v)
{
	v->a[56900] = sym_comment;
	v->a[56901] = actions(692);
	v->a[56902] = 1;
	v->a[56903] = anon_sym_PIPE;
	v->a[56904] = actions(724);
	v->a[56905] = 1;
	v->a[56906] = anon_sym_RPAREN;
	v->a[56907] = actions(1857);
	v->a[56908] = 1;
	v->a[56909] = aux_sym_heredoc_redirect_token1;
	v->a[56910] = actions(1859);
	v->a[56911] = 1;
	v->a[56912] = sym_file_descriptor;
	v->a[56913] = state(679);
	v->a[56914] = 1;
	v->a[56915] = sym_terminator;
	v->a[56916] = actions(698);
	v->a[56917] = 2;
	v->a[56918] = anon_sym_AMP_AMP;
	v->a[56919] = anon_sym_PIPE_PIPE;
	small_parse_table_2846(v);
}

void	small_parse_table_2846(t_small_parse_table_array *v)
{
	v->a[56920] = actions(700);
	v->a[56921] = 2;
	v->a[56922] = anon_sym_LT_LT;
	v->a[56923] = anon_sym_LT_LT_DASH;
	v->a[56924] = actions(696);
	v->a[56925] = 3;
	v->a[56926] = anon_sym_SEMI_SEMI;
	v->a[56927] = anon_sym_AMP;
	v->a[56928] = anon_sym_SEMI;
	v->a[56929] = state(1031);
	v->a[56930] = 3;
	v->a[56931] = sym_file_redirect;
	v->a[56932] = sym_heredoc_redirect;
	v->a[56933] = aux_sym_redirected_statement_repeat1;
	v->a[56934] = actions(1855);
	v->a[56935] = 7;
	v->a[56936] = anon_sym_LT;
	v->a[56937] = anon_sym_GT;
	v->a[56938] = anon_sym_GT_GT;
	v->a[56939] = anon_sym_LT_AMP;
	small_parse_table_2847(v);
}

void	small_parse_table_2847(t_small_parse_table_array *v)
{
	v->a[56940] = anon_sym_GT_AMP;
	v->a[56941] = anon_sym_GT_PIPE;
	v->a[56942] = anon_sym_LT_GT;
	v->a[56943] = 11;
	v->a[56944] = actions(3);
	v->a[56945] = 1;
	v->a[56946] = sym_comment;
	v->a[56947] = actions(692);
	v->a[56948] = 1;
	v->a[56949] = anon_sym_PIPE;
	v->a[56950] = actions(724);
	v->a[56951] = 1;
	v->a[56952] = anon_sym_RPAREN;
	v->a[56953] = actions(1857);
	v->a[56954] = 1;
	v->a[56955] = aux_sym_heredoc_redirect_token1;
	v->a[56956] = actions(1859);
	v->a[56957] = 1;
	v->a[56958] = sym_file_descriptor;
	v->a[56959] = state(680);
	small_parse_table_2848(v);
}

void	small_parse_table_2848(t_small_parse_table_array *v)
{
	v->a[56960] = 1;
	v->a[56961] = sym_terminator;
	v->a[56962] = actions(698);
	v->a[56963] = 2;
	v->a[56964] = anon_sym_AMP_AMP;
	v->a[56965] = anon_sym_PIPE_PIPE;
	v->a[56966] = actions(700);
	v->a[56967] = 2;
	v->a[56968] = anon_sym_LT_LT;
	v->a[56969] = anon_sym_LT_LT_DASH;
	v->a[56970] = actions(696);
	v->a[56971] = 3;
	v->a[56972] = anon_sym_SEMI_SEMI;
	v->a[56973] = anon_sym_AMP;
	v->a[56974] = anon_sym_SEMI;
	v->a[56975] = state(1031);
	v->a[56976] = 3;
	v->a[56977] = sym_file_redirect;
	v->a[56978] = sym_heredoc_redirect;
	v->a[56979] = aux_sym_redirected_statement_repeat1;
	small_parse_table_2849(v);
}

void	small_parse_table_2849(t_small_parse_table_array *v)
{
	v->a[56980] = actions(1855);
	v->a[56981] = 7;
	v->a[56982] = anon_sym_LT;
	v->a[56983] = anon_sym_GT;
	v->a[56984] = anon_sym_GT_GT;
	v->a[56985] = anon_sym_LT_AMP;
	v->a[56986] = anon_sym_GT_AMP;
	v->a[56987] = anon_sym_GT_PIPE;
	v->a[56988] = anon_sym_LT_GT;
	v->a[56989] = 11;
	v->a[56990] = actions(3);
	v->a[56991] = 1;
	v->a[56992] = sym_comment;
	v->a[56993] = actions(692);
	v->a[56994] = 1;
	v->a[56995] = anon_sym_PIPE;
	v->a[56996] = actions(724);
	v->a[56997] = 1;
	v->a[56998] = anon_sym_RPAREN;
	v->a[56999] = actions(1857);
	small_parse_table_2850(v);
}

/* EOF small_parse_table_569.c */
