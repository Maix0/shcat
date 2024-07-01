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
	v->a[67900] = sym_terminator;
	v->a[67901] = actions(750);
	v->a[67902] = 2;
	v->a[67903] = anon_sym_AMP;
	v->a[67904] = anon_sym_SEMI;
	v->a[67905] = actions(754);
	v->a[67906] = 2;
	v->a[67907] = anon_sym_LT_LT;
	v->a[67908] = anon_sym_LT_LT_DASH;
	v->a[67909] = actions(924);
	v->a[67910] = 2;
	v->a[67911] = anon_sym_AMP_AMP;
	v->a[67912] = anon_sym_PIPE_PIPE;
	v->a[67913] = actions(2063);
	v->a[67914] = 2;
	v->a[67915] = anon_sym_LT_AMP_DASH;
	v->a[67916] = anon_sym_GT_AMP_DASH;
	v->a[67917] = state(1268);
	v->a[67918] = 3;
	v->a[67919] = sym_file_redirect;
	small_parse_table_3396(v);
}

void	small_parse_table_3396(t_small_parse_table_array *v)
{
	v->a[67920] = sym_heredoc_redirect;
	v->a[67921] = aux_sym_redirected_statement_repeat1;
	v->a[67922] = actions(2061);
	v->a[67923] = 6;
	v->a[67924] = anon_sym_LT;
	v->a[67925] = anon_sym_GT;
	v->a[67926] = anon_sym_GT_GT;
	v->a[67927] = anon_sym_LT_AMP;
	v->a[67928] = anon_sym_GT_AMP;
	v->a[67929] = anon_sym_GT_PIPE;
	v->a[67930] = 5;
	v->a[67931] = actions(3);
	v->a[67932] = 1;
	v->a[67933] = sym_comment;
	v->a[67934] = actions(690);
	v->a[67935] = 1;
	v->a[67936] = sym_file_descriptor;
	v->a[67937] = actions(756);
	v->a[67938] = 1;
	v->a[67939] = sym_variable_name;
	small_parse_table_3397(v);
}

void	small_parse_table_3397(t_small_parse_table_array *v)
{
	v->a[67940] = state(1163);
	v->a[67941] = 2;
	v->a[67942] = sym_variable_assignment;
	v->a[67943] = aux_sym__variable_assignments_repeat1;
	v->a[67944] = actions(678);
	v->a[67945] = 17;
	v->a[67946] = anon_sym_LT;
	v->a[67947] = anon_sym_GT;
	v->a[67948] = anon_sym_GT_GT;
	v->a[67949] = anon_sym_LT_AMP;
	v->a[67950] = anon_sym_GT_AMP;
	v->a[67951] = anon_sym_GT_PIPE;
	v->a[67952] = anon_sym_LT_AMP_DASH;
	v->a[67953] = anon_sym_GT_AMP_DASH;
	v->a[67954] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[67955] = anon_sym_DOLLAR;
	v->a[67956] = anon_sym_DQUOTE;
	v->a[67957] = sym_raw_string;
	v->a[67958] = sym_number;
	v->a[67959] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_3398(v);
}

void	small_parse_table_3398(t_small_parse_table_array *v)
{
	v->a[67960] = anon_sym_DOLLAR_LPAREN;
	v->a[67961] = anon_sym_BQUOTE;
	v->a[67962] = sym_word;
	v->a[67963] = 7;
	v->a[67964] = actions(3);
	v->a[67965] = 1;
	v->a[67966] = sym_comment;
	v->a[67967] = actions(2255);
	v->a[67968] = 1;
	v->a[67969] = aux_sym_heredoc_redirect_token1;
	v->a[67970] = actions(2257);
	v->a[67971] = 1;
	v->a[67972] = sym_file_descriptor;
	v->a[67973] = actions(2252);
	v->a[67974] = 2;
	v->a[67975] = anon_sym_LT_AMP_DASH;
	v->a[67976] = anon_sym_GT_AMP_DASH;
	v->a[67977] = state(1229);
	v->a[67978] = 2;
	v->a[67979] = sym_file_redirect;
	small_parse_table_3399(v);
}

void	small_parse_table_3399(t_small_parse_table_array *v)
{
	v->a[67980] = aux_sym_redirected_statement_repeat2;
	v->a[67981] = actions(2249);
	v->a[67982] = 6;
	v->a[67983] = anon_sym_LT;
	v->a[67984] = anon_sym_GT;
	v->a[67985] = anon_sym_GT_GT;
	v->a[67986] = anon_sym_LT_AMP;
	v->a[67987] = anon_sym_GT_AMP;
	v->a[67988] = anon_sym_GT_PIPE;
	v->a[67989] = actions(2247);
	v->a[67990] = 9;
	v->a[67991] = anon_sym_PIPE;
	v->a[67992] = anon_sym_SEMI_SEMI;
	v->a[67993] = anon_sym_AMP_AMP;
	v->a[67994] = anon_sym_PIPE_PIPE;
	v->a[67995] = anon_sym_LT_LT;
	v->a[67996] = anon_sym_LT_LT_DASH;
	v->a[67997] = anon_sym_AMP;
	v->a[67998] = anon_sym_BQUOTE;
	v->a[67999] = anon_sym_SEMI;
	small_parse_table_3400(v);
}

/* EOF small_parse_table_679.c */
