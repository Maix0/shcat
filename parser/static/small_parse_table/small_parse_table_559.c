/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_559.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2795(t_small_parse_table_array *v)
{
	v->a[55900] = 1;
	v->a[55901] = sym_file_descriptor;
	v->a[55902] = state(813);
	v->a[55903] = 1;
	v->a[55904] = sym_terminator;
	v->a[55905] = actions(744);
	v->a[55906] = 2;
	v->a[55907] = anon_sym_LT_LT;
	v->a[55908] = anon_sym_LT_LT_DASH;
	v->a[55909] = actions(990);
	v->a[55910] = 2;
	v->a[55911] = anon_sym_AMP_AMP;
	v->a[55912] = anon_sym_PIPE_PIPE;
	v->a[55913] = actions(740);
	v->a[55914] = 3;
	v->a[55915] = anon_sym_SEMI_SEMI;
	v->a[55916] = anon_sym_AMP;
	v->a[55917] = anon_sym_SEMI;
	v->a[55918] = state(1059);
	v->a[55919] = 3;
	small_parse_table_2796(v);
}

void	small_parse_table_2796(t_small_parse_table_array *v)
{
	v->a[55920] = sym_file_redirect;
	v->a[55921] = sym_heredoc_redirect;
	v->a[55922] = aux_sym_redirected_statement_repeat1;
	v->a[55923] = actions(1863);
	v->a[55924] = 7;
	v->a[55925] = anon_sym_LT;
	v->a[55926] = anon_sym_GT;
	v->a[55927] = anon_sym_GT_GT;
	v->a[55928] = anon_sym_LT_AMP;
	v->a[55929] = anon_sym_GT_AMP;
	v->a[55930] = anon_sym_GT_PIPE;
	v->a[55931] = anon_sym_LT_GT;
	v->a[55932] = 6;
	v->a[55933] = actions(3);
	v->a[55934] = 1;
	v->a[55935] = sym_comment;
	v->a[55936] = actions(1845);
	v->a[55937] = 1;
	v->a[55938] = aux_sym_concatenation_token1;
	v->a[55939] = actions(1877);
	small_parse_table_2797(v);
}

void	small_parse_table_2797(t_small_parse_table_array *v)
{
	v->a[55940] = 1;
	v->a[55941] = sym__concat;
	v->a[55942] = state(899);
	v->a[55943] = 1;
	v->a[55944] = aux_sym_concatenation_repeat1;
	v->a[55945] = actions(1047);
	v->a[55946] = 4;
	v->a[55947] = sym_file_descriptor;
	v->a[55948] = sym_variable_name;
	v->a[55949] = ts_builtin_sym_end;
	v->a[55950] = aux_sym_heredoc_redirect_token1;
	v->a[55951] = actions(1043);
	v->a[55952] = 15;
	v->a[55953] = anon_sym_PIPE;
	v->a[55954] = anon_sym_SEMI_SEMI;
	v->a[55955] = anon_sym_AMP_AMP;
	v->a[55956] = anon_sym_PIPE_PIPE;
	v->a[55957] = anon_sym_LT;
	v->a[55958] = anon_sym_GT;
	v->a[55959] = anon_sym_GT_GT;
	small_parse_table_2798(v);
}

void	small_parse_table_2798(t_small_parse_table_array *v)
{
	v->a[55960] = anon_sym_LT_AMP;
	v->a[55961] = anon_sym_GT_AMP;
	v->a[55962] = anon_sym_GT_PIPE;
	v->a[55963] = anon_sym_LT_GT;
	v->a[55964] = anon_sym_LT_LT;
	v->a[55965] = anon_sym_LT_LT_DASH;
	v->a[55966] = anon_sym_AMP;
	v->a[55967] = anon_sym_SEMI;
	v->a[55968] = 11;
	v->a[55969] = actions(3);
	v->a[55970] = 1;
	v->a[55971] = sym_comment;
	v->a[55972] = actions(736);
	v->a[55973] = 1;
	v->a[55974] = anon_sym_PIPE;
	v->a[55975] = actions(842);
	v->a[55976] = 1;
	v->a[55977] = anon_sym_RPAREN;
	v->a[55978] = actions(1865);
	v->a[55979] = 1;
	small_parse_table_2799(v);
}

void	small_parse_table_2799(t_small_parse_table_array *v)
{
	v->a[55980] = aux_sym_heredoc_redirect_token1;
	v->a[55981] = actions(1881);
	v->a[55982] = 1;
	v->a[55983] = sym_file_descriptor;
	v->a[55984] = state(634);
	v->a[55985] = 1;
	v->a[55986] = sym_terminator;
	v->a[55987] = actions(742);
	v->a[55988] = 2;
	v->a[55989] = anon_sym_AMP_AMP;
	v->a[55990] = anon_sym_PIPE_PIPE;
	v->a[55991] = actions(744);
	v->a[55992] = 2;
	v->a[55993] = anon_sym_LT_LT;
	v->a[55994] = anon_sym_LT_LT_DASH;
	v->a[55995] = actions(740);
	v->a[55996] = 3;
	v->a[55997] = anon_sym_SEMI_SEMI;
	v->a[55998] = anon_sym_AMP;
	v->a[55999] = anon_sym_SEMI;
	small_parse_table_2800(v);
}

/* EOF small_parse_table_559.c */
