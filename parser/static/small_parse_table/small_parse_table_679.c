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
	v->a[67900] = 3;
	v->a[67901] = sym_file_redirect;
	v->a[67902] = sym_heredoc_redirect;
	v->a[67903] = aux_sym_redirected_statement_repeat1;
	v->a[67904] = actions(2065);
	v->a[67905] = 8;
	v->a[67906] = anon_sym_LT;
	v->a[67907] = anon_sym_GT;
	v->a[67908] = anon_sym_GT_GT;
	v->a[67909] = anon_sym_AMP_GT;
	v->a[67910] = anon_sym_AMP_GT_GT;
	v->a[67911] = anon_sym_LT_AMP;
	v->a[67912] = anon_sym_GT_AMP;
	v->a[67913] = anon_sym_GT_PIPE;
	v->a[67914] = 11;
	v->a[67915] = actions(3);
	v->a[67916] = 1;
	v->a[67917] = sym_comment;
	v->a[67918] = actions(807);
	v->a[67919] = 1;
	small_parse_table_3396(v);
}

void	small_parse_table_3396(t_small_parse_table_array *v)
{
	v->a[67920] = anon_sym_PIPE;
	v->a[67921] = actions(943);
	v->a[67922] = 1;
	v->a[67923] = anon_sym_RPAREN;
	v->a[67924] = actions(2081);
	v->a[67925] = 1;
	v->a[67926] = aux_sym_heredoc_redirect_token1;
	v->a[67927] = actions(2083);
	v->a[67928] = 1;
	v->a[67929] = sym_file_descriptor;
	v->a[67930] = actions(859);
	v->a[67931] = 2;
	v->a[67932] = anon_sym_AMP_AMP;
	v->a[67933] = anon_sym_PIPE_PIPE;
	v->a[67934] = actions(861);
	v->a[67935] = 2;
	v->a[67936] = anon_sym_LT_LT;
	v->a[67937] = anon_sym_LT_LT_DASH;
	v->a[67938] = actions(2079);
	v->a[67939] = 2;
	small_parse_table_3397(v);
}

void	small_parse_table_3397(t_small_parse_table_array *v)
{
	v->a[67940] = anon_sym_LT_AMP_DASH;
	v->a[67941] = anon_sym_GT_AMP_DASH;
	v->a[67942] = actions(945);
	v->a[67943] = 3;
	v->a[67944] = anon_sym_SEMI_SEMI;
	v->a[67945] = anon_sym_AMP;
	v->a[67946] = anon_sym_SEMI;
	v->a[67947] = state(1283);
	v->a[67948] = 3;
	v->a[67949] = sym_file_redirect;
	v->a[67950] = sym_heredoc_redirect;
	v->a[67951] = aux_sym_redirected_statement_repeat1;
	v->a[67952] = actions(2077);
	v->a[67953] = 8;
	v->a[67954] = anon_sym_LT;
	v->a[67955] = anon_sym_GT;
	v->a[67956] = anon_sym_GT_GT;
	v->a[67957] = anon_sym_AMP_GT;
	v->a[67958] = anon_sym_AMP_GT_GT;
	v->a[67959] = anon_sym_LT_AMP;
	small_parse_table_3398(v);
}

void	small_parse_table_3398(t_small_parse_table_array *v)
{
	v->a[67960] = anon_sym_GT_AMP;
	v->a[67961] = anon_sym_GT_PIPE;
	v->a[67962] = 6;
	v->a[67963] = actions(3);
	v->a[67964] = 1;
	v->a[67965] = sym_comment;
	v->a[67966] = actions(2085);
	v->a[67967] = 1;
	v->a[67968] = aux_sym_concatenation_token1;
	v->a[67969] = actions(2087);
	v->a[67970] = 1;
	v->a[67971] = sym__concat;
	v->a[67972] = state(1108);
	v->a[67973] = 1;
	v->a[67974] = aux_sym_concatenation_repeat1;
	v->a[67975] = actions(972);
	v->a[67976] = 2;
	v->a[67977] = sym_file_descriptor;
	v->a[67978] = aux_sym_heredoc_redirect_token1;
	v->a[67979] = actions(974);
	small_parse_table_3399(v);
}

void	small_parse_table_3399(t_small_parse_table_array *v)
{
	v->a[67980] = 19;
	v->a[67981] = anon_sym_PIPE;
	v->a[67982] = anon_sym_RPAREN;
	v->a[67983] = anon_sym_SEMI_SEMI;
	v->a[67984] = anon_sym_AMP_AMP;
	v->a[67985] = anon_sym_PIPE_PIPE;
	v->a[67986] = anon_sym_LT;
	v->a[67987] = anon_sym_GT;
	v->a[67988] = anon_sym_GT_GT;
	v->a[67989] = anon_sym_AMP_GT;
	v->a[67990] = anon_sym_AMP_GT_GT;
	v->a[67991] = anon_sym_LT_AMP;
	v->a[67992] = anon_sym_GT_AMP;
	v->a[67993] = anon_sym_GT_PIPE;
	v->a[67994] = anon_sym_LT_AMP_DASH;
	v->a[67995] = anon_sym_GT_AMP_DASH;
	v->a[67996] = anon_sym_LT_LT;
	v->a[67997] = anon_sym_LT_LT_DASH;
	v->a[67998] = anon_sym_AMP;
	v->a[67999] = anon_sym_SEMI;
	small_parse_table_3400(v);
}

/* EOF small_parse_table_679.c */
