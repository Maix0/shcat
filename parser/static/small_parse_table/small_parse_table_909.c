/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_909.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4545(t_small_parse_table_array *v)
{
	v->a[90900] = 1;
	v->a[90901] = aux_sym_concatenation_repeat1;
	v->a[90902] = state(2079);
	v->a[90903] = 1;
	v->a[90904] = aux_sym__case_item_last_repeat1;
	v->a[90905] = actions(3988);
	v->a[90906] = 2;
	v->a[90907] = sym__concat;
	v->a[90908] = aux_sym_concatenation_token1;
	v->a[90909] = 6;
	v->a[90910] = actions(870);
	v->a[90911] = 1;
	v->a[90912] = sym_comment;
	v->a[90913] = actions(3980);
	v->a[90914] = 1;
	v->a[90915] = anon_sym_elif;
	v->a[90916] = actions(3982);
	v->a[90917] = 1;
	v->a[90918] = anon_sym_else;
	v->a[90919] = actions(4010);
	small_parse_table_4546(v);
}

void	small_parse_table_4546(t_small_parse_table_array *v)
{
	v->a[90920] = 1;
	v->a[90921] = anon_sym_fi;
	v->a[90922] = state(2324);
	v->a[90923] = 1;
	v->a[90924] = sym_else_clause;
	v->a[90925] = state(2052);
	v->a[90926] = 2;
	v->a[90927] = sym_elif_clause;
	v->a[90928] = aux_sym_if_statement_repeat1;
	v->a[90929] = 5;
	v->a[90930] = actions(3);
	v->a[90931] = 1;
	v->a[90932] = sym_comment;
	v->a[90933] = actions(3859);
	v->a[90934] = 1;
	v->a[90935] = aux_sym_heredoc_redirect_token1;
	v->a[90936] = actions(4012);
	v->a[90937] = 1;
	v->a[90938] = anon_sym_in;
	v->a[90939] = state(2109);
	small_parse_table_4547(v);
}

void	small_parse_table_4547(t_small_parse_table_array *v)
{
	v->a[90940] = 1;
	v->a[90941] = sym_terminator;
	v->a[90942] = actions(2262);
	v->a[90943] = 3;
	v->a[90944] = anon_sym_SEMI_SEMI;
	v->a[90945] = anon_sym_AMP;
	v->a[90946] = anon_sym_SEMI;
	v->a[90947] = 6;
	v->a[90948] = actions(870);
	v->a[90949] = 1;
	v->a[90950] = sym_comment;
	v->a[90951] = actions(3980);
	v->a[90952] = 1;
	v->a[90953] = anon_sym_elif;
	v->a[90954] = actions(3982);
	v->a[90955] = 1;
	v->a[90956] = anon_sym_else;
	v->a[90957] = actions(4014);
	v->a[90958] = 1;
	v->a[90959] = anon_sym_fi;
	small_parse_table_4548(v);
}

void	small_parse_table_4548(t_small_parse_table_array *v)
{
	v->a[90960] = state(2203);
	v->a[90961] = 1;
	v->a[90962] = sym_else_clause;
	v->a[90963] = state(2052);
	v->a[90964] = 2;
	v->a[90965] = sym_elif_clause;
	v->a[90966] = aux_sym_if_statement_repeat1;
	v->a[90967] = 5;
	v->a[90968] = actions(870);
	v->a[90969] = 1;
	v->a[90970] = sym_comment;
	v->a[90971] = actions(4016);
	v->a[90972] = 1;
	v->a[90973] = sym_simple_heredoc_body;
	v->a[90974] = actions(4018);
	v->a[90975] = 1;
	v->a[90976] = sym__heredoc_body_beginning;
	v->a[90977] = state(2220);
	v->a[90978] = 1;
	v->a[90979] = sym_heredoc_body;
	small_parse_table_4549(v);
}

void	small_parse_table_4549(t_small_parse_table_array *v)
{
	v->a[90980] = state(1371);
	v->a[90981] = 2;
	v->a[90982] = sym__heredoc_body;
	v->a[90983] = sym__simple_heredoc_body;
	v->a[90984] = 5;
	v->a[90985] = actions(870);
	v->a[90986] = 1;
	v->a[90987] = sym_comment;
	v->a[90988] = actions(4018);
	v->a[90989] = 1;
	v->a[90990] = sym__heredoc_body_beginning;
	v->a[90991] = actions(4020);
	v->a[90992] = 1;
	v->a[90993] = sym_simple_heredoc_body;
	v->a[90994] = state(2221);
	v->a[90995] = 1;
	v->a[90996] = sym_heredoc_body;
	v->a[90997] = state(1737);
	v->a[90998] = 2;
	v->a[90999] = sym__heredoc_body;
	small_parse_table_4550(v);
}

/* EOF small_parse_table_909.c */
