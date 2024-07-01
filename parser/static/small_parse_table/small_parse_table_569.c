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
	v->a[56900] = aux_sym_heredoc_redirect_token1;
	v->a[56901] = actions(1881);
	v->a[56902] = 1;
	v->a[56903] = sym_file_descriptor;
	v->a[56904] = state(631);
	v->a[56905] = 1;
	v->a[56906] = sym_terminator;
	v->a[56907] = actions(742);
	v->a[56908] = 2;
	v->a[56909] = anon_sym_AMP_AMP;
	v->a[56910] = anon_sym_PIPE_PIPE;
	v->a[56911] = actions(744);
	v->a[56912] = 2;
	v->a[56913] = anon_sym_LT_LT;
	v->a[56914] = anon_sym_LT_LT_DASH;
	v->a[56915] = actions(740);
	v->a[56916] = 3;
	v->a[56917] = anon_sym_SEMI_SEMI;
	v->a[56918] = anon_sym_AMP;
	v->a[56919] = anon_sym_SEMI;
	small_parse_table_2846(v);
}

void	small_parse_table_2846(t_small_parse_table_array *v)
{
	v->a[56920] = state(1080);
	v->a[56921] = 3;
	v->a[56922] = sym_file_redirect;
	v->a[56923] = sym_heredoc_redirect;
	v->a[56924] = aux_sym_redirected_statement_repeat1;
	v->a[56925] = actions(1879);
	v->a[56926] = 7;
	v->a[56927] = anon_sym_LT;
	v->a[56928] = anon_sym_GT;
	v->a[56929] = anon_sym_GT_GT;
	v->a[56930] = anon_sym_LT_AMP;
	v->a[56931] = anon_sym_GT_AMP;
	v->a[56932] = anon_sym_GT_PIPE;
	v->a[56933] = anon_sym_LT_GT;
	v->a[56934] = 11;
	v->a[56935] = actions(3);
	v->a[56936] = 1;
	v->a[56937] = sym_comment;
	v->a[56938] = actions(736);
	v->a[56939] = 1;
	small_parse_table_2847(v);
}

void	small_parse_table_2847(t_small_parse_table_array *v)
{
	v->a[56940] = anon_sym_PIPE;
	v->a[56941] = actions(842);
	v->a[56942] = 1;
	v->a[56943] = anon_sym_RPAREN;
	v->a[56944] = actions(1865);
	v->a[56945] = 1;
	v->a[56946] = aux_sym_heredoc_redirect_token1;
	v->a[56947] = actions(1881);
	v->a[56948] = 1;
	v->a[56949] = sym_file_descriptor;
	v->a[56950] = state(651);
	v->a[56951] = 1;
	v->a[56952] = sym_terminator;
	v->a[56953] = actions(742);
	v->a[56954] = 2;
	v->a[56955] = anon_sym_AMP_AMP;
	v->a[56956] = anon_sym_PIPE_PIPE;
	v->a[56957] = actions(744);
	v->a[56958] = 2;
	v->a[56959] = anon_sym_LT_LT;
	small_parse_table_2848(v);
}

void	small_parse_table_2848(t_small_parse_table_array *v)
{
	v->a[56960] = anon_sym_LT_LT_DASH;
	v->a[56961] = actions(740);
	v->a[56962] = 3;
	v->a[56963] = anon_sym_SEMI_SEMI;
	v->a[56964] = anon_sym_AMP;
	v->a[56965] = anon_sym_SEMI;
	v->a[56966] = state(1080);
	v->a[56967] = 3;
	v->a[56968] = sym_file_redirect;
	v->a[56969] = sym_heredoc_redirect;
	v->a[56970] = aux_sym_redirected_statement_repeat1;
	v->a[56971] = actions(1879);
	v->a[56972] = 7;
	v->a[56973] = anon_sym_LT;
	v->a[56974] = anon_sym_GT;
	v->a[56975] = anon_sym_GT_GT;
	v->a[56976] = anon_sym_LT_AMP;
	v->a[56977] = anon_sym_GT_AMP;
	v->a[56978] = anon_sym_GT_PIPE;
	v->a[56979] = anon_sym_LT_GT;
	small_parse_table_2849(v);
}

void	small_parse_table_2849(t_small_parse_table_array *v)
{
	v->a[56980] = 11;
	v->a[56981] = actions(3);
	v->a[56982] = 1;
	v->a[56983] = sym_comment;
	v->a[56984] = actions(736);
	v->a[56985] = 1;
	v->a[56986] = anon_sym_PIPE;
	v->a[56987] = actions(1851);
	v->a[56988] = 1;
	v->a[56989] = aux_sym_heredoc_redirect_token1;
	v->a[56990] = actions(1853);
	v->a[56991] = 1;
	v->a[56992] = sym_file_descriptor;
	v->a[56993] = state(645);
	v->a[56994] = 1;
	v->a[56995] = sym_terminator;
	v->a[56996] = actions(738);
	v->a[56997] = 2;
	v->a[56998] = anon_sym_esac;
	v->a[56999] = anon_sym_SEMI_SEMI;
	small_parse_table_2850(v);
}

/* EOF small_parse_table_569.c */
