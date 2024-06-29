/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_679.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3395(t_small_parse_table_array *v)
{
	v->a[67900] = anon_sym_PIPE;
	v->a[67901] = anon_sym_SEMI_SEMI;
	v->a[67902] = anon_sym_AMP_AMP;
	v->a[67903] = anon_sym_PIPE_PIPE;
	v->a[67904] = anon_sym_LT;
	v->a[67905] = anon_sym_GT;
	v->a[67906] = anon_sym_GT_GT;
	v->a[67907] = anon_sym_AMP_GT;
	v->a[67908] = anon_sym_AMP_GT_GT;
	v->a[67909] = anon_sym_LT_AMP;
	v->a[67910] = anon_sym_GT_AMP;
	v->a[67911] = anon_sym_GT_PIPE;
	v->a[67912] = anon_sym_LT_AMP_DASH;
	v->a[67913] = anon_sym_GT_AMP_DASH;
	v->a[67914] = anon_sym_LT_LT;
	v->a[67915] = anon_sym_LT_LT_DASH;
	v->a[67916] = anon_sym_AMP;
	v->a[67917] = anon_sym_SEMI;
	v->a[67918] = 11;
	v->a[67919] = actions(3);
	small_parse_table_3396(v);
}

void	small_parse_table_3396(t_small_parse_table_array *v)
{
	v->a[67920] = 1;
	v->a[67921] = sym_comment;
	v->a[67922] = actions(766);
	v->a[67923] = 1;
	v->a[67924] = anon_sym_PIPE;
	v->a[67925] = actions(2066);
	v->a[67926] = 1;
	v->a[67927] = sym_file_descriptor;
	v->a[67928] = actions(2195);
	v->a[67929] = 1;
	v->a[67930] = aux_sym_heredoc_redirect_token1;
	v->a[67931] = state(773);
	v->a[67932] = 1;
	v->a[67933] = sym_terminator;
	v->a[67934] = actions(804);
	v->a[67935] = 2;
	v->a[67936] = anon_sym_LT_LT;
	v->a[67937] = anon_sym_LT_LT_DASH;
	v->a[67938] = actions(893);
	v->a[67939] = 2;
	small_parse_table_3397(v);
}

void	small_parse_table_3397(t_small_parse_table_array *v)
{
	v->a[67940] = anon_sym_AMP_AMP;
	v->a[67941] = anon_sym_PIPE_PIPE;
	v->a[67942] = actions(2064);
	v->a[67943] = 2;
	v->a[67944] = anon_sym_LT_AMP_DASH;
	v->a[67945] = anon_sym_GT_AMP_DASH;
	v->a[67946] = actions(951);
	v->a[67947] = 3;
	v->a[67948] = anon_sym_SEMI_SEMI;
	v->a[67949] = anon_sym_AMP;
	v->a[67950] = anon_sym_SEMI;
	v->a[67951] = state(1256);
	v->a[67952] = 3;
	v->a[67953] = sym_file_redirect;
	v->a[67954] = sym_heredoc_redirect;
	v->a[67955] = aux_sym_redirected_statement_repeat1;
	v->a[67956] = actions(2062);
	v->a[67957] = 8;
	v->a[67958] = anon_sym_LT;
	v->a[67959] = anon_sym_GT;
	small_parse_table_3398(v);
}

void	small_parse_table_3398(t_small_parse_table_array *v)
{
	v->a[67960] = anon_sym_GT_GT;
	v->a[67961] = anon_sym_AMP_GT;
	v->a[67962] = anon_sym_AMP_GT_GT;
	v->a[67963] = anon_sym_LT_AMP;
	v->a[67964] = anon_sym_GT_AMP;
	v->a[67965] = anon_sym_GT_PIPE;
	v->a[67966] = 11;
	v->a[67967] = actions(3);
	v->a[67968] = 1;
	v->a[67969] = sym_comment;
	v->a[67970] = actions(831);
	v->a[67971] = 1;
	v->a[67972] = ts_builtin_sym_end;
	v->a[67973] = actions(2017);
	v->a[67974] = 1;
	v->a[67975] = aux_sym_heredoc_redirect_token1;
	v->a[67976] = actions(2019);
	v->a[67977] = 1;
	v->a[67978] = sym_file_descriptor;
	v->a[67979] = state(770);
	small_parse_table_3399(v);
}

void	small_parse_table_3399(t_small_parse_table_array *v)
{
	v->a[67980] = 1;
	v->a[67981] = sym_terminator;
	v->a[67982] = actions(804);
	v->a[67983] = 2;
	v->a[67984] = anon_sym_LT_LT;
	v->a[67985] = anon_sym_LT_LT_DASH;
	v->a[67986] = actions(835);
	v->a[67987] = 2;
	v->a[67988] = anon_sym_AMP_AMP;
	v->a[67989] = anon_sym_PIPE_PIPE;
	v->a[67990] = actions(2015);
	v->a[67991] = 2;
	v->a[67992] = anon_sym_LT_AMP_DASH;
	v->a[67993] = anon_sym_GT_AMP_DASH;
	v->a[67994] = actions(833);
	v->a[67995] = 3;
	v->a[67996] = anon_sym_SEMI_SEMI;
	v->a[67997] = anon_sym_AMP;
	v->a[67998] = anon_sym_SEMI;
	v->a[67999] = state(1133);
	small_parse_table_3400(v);
}

/* EOF small_parse_table_679.c */
