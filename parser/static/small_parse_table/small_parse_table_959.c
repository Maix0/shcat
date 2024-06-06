/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_959.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4795(t_small_parse_table_array *v)
{
	v->a[95900] = actions(3549);
	v->a[95901] = 3;
	v->a[95902] = sym_file_descriptor;
	v->a[95903] = ts_builtin_sym_end;
	v->a[95904] = aux_sym_heredoc_redirect_token1;
	v->a[95905] = actions(3547);
	v->a[95906] = 21;
	v->a[95907] = anon_sym_PIPE;
	v->a[95908] = anon_sym_RPAREN;
	v->a[95909] = anon_sym_SEMI_SEMI;
	v->a[95910] = anon_sym_PIPE_AMP;
	v->a[95911] = anon_sym_AMP_AMP;
	v->a[95912] = anon_sym_PIPE_PIPE;
	v->a[95913] = anon_sym_LT;
	v->a[95914] = anon_sym_GT;
	v->a[95915] = anon_sym_GT_GT;
	v->a[95916] = anon_sym_AMP_GT;
	v->a[95917] = anon_sym_AMP_GT_GT;
	v->a[95918] = anon_sym_LT_AMP;
	v->a[95919] = anon_sym_GT_AMP;
	small_parse_table_4796(v);
}

void	small_parse_table_4796(t_small_parse_table_array *v)
{
	v->a[95920] = anon_sym_GT_PIPE;
	v->a[95921] = anon_sym_LT_AMP_DASH;
	v->a[95922] = anon_sym_GT_AMP_DASH;
	v->a[95923] = anon_sym_LT_LT;
	v->a[95924] = anon_sym_LT_LT_DASH;
	v->a[95925] = anon_sym_AMP;
	v->a[95926] = anon_sym_BQUOTE;
	v->a[95927] = anon_sym_SEMI;
	v->a[95928] = 3;
	v->a[95929] = actions(3);
	v->a[95930] = 1;
	v->a[95931] = sym_comment;
	v->a[95932] = actions(2778);
	v->a[95933] = 4;
	v->a[95934] = sym_file_descriptor;
	v->a[95935] = sym__concat;
	v->a[95936] = ts_builtin_sym_end;
	v->a[95937] = aux_sym_heredoc_redirect_token1;
	v->a[95938] = actions(2776);
	v->a[95939] = 22;
	small_parse_table_4797(v);
}

void	small_parse_table_4797(t_small_parse_table_array *v)
{
	v->a[95940] = anon_sym_PIPE;
	v->a[95941] = anon_sym_RPAREN;
	v->a[95942] = anon_sym_SEMI_SEMI;
	v->a[95943] = anon_sym_PIPE_AMP;
	v->a[95944] = anon_sym_AMP_AMP;
	v->a[95945] = anon_sym_PIPE_PIPE;
	v->a[95946] = anon_sym_LT;
	v->a[95947] = anon_sym_GT;
	v->a[95948] = anon_sym_GT_GT;
	v->a[95949] = anon_sym_AMP_GT;
	v->a[95950] = anon_sym_AMP_GT_GT;
	v->a[95951] = anon_sym_LT_AMP;
	v->a[95952] = anon_sym_GT_AMP;
	v->a[95953] = anon_sym_GT_PIPE;
	v->a[95954] = anon_sym_LT_AMP_DASH;
	v->a[95955] = anon_sym_GT_AMP_DASH;
	v->a[95956] = anon_sym_LT_LT;
	v->a[95957] = anon_sym_LT_LT_DASH;
	v->a[95958] = anon_sym_AMP;
	v->a[95959] = aux_sym_concatenation_token1;
	small_parse_table_4798(v);
}

void	small_parse_table_4798(t_small_parse_table_array *v)
{
	v->a[95960] = anon_sym_BQUOTE;
	v->a[95961] = anon_sym_SEMI;
	v->a[95962] = 8;
	v->a[95963] = actions(3);
	v->a[95964] = 1;
	v->a[95965] = sym_comment;
	v->a[95966] = actions(5157);
	v->a[95967] = 1;
	v->a[95968] = aux_sym_heredoc_redirect_token1;
	v->a[95969] = actions(5243);
	v->a[95970] = 1;
	v->a[95971] = sym_file_descriptor;
	v->a[95972] = actions(2708);
	v->a[95973] = 2;
	v->a[95974] = anon_sym_LT_LT;
	v->a[95975] = anon_sym_LT_LT_DASH;
	v->a[95976] = actions(5241);
	v->a[95977] = 2;
	v->a[95978] = anon_sym_LT_AMP_DASH;
	v->a[95979] = anon_sym_GT_AMP_DASH;
	small_parse_table_4799(v);
}

void	small_parse_table_4799(t_small_parse_table_array *v)
{
	v->a[95980] = state(2016);
	v->a[95981] = 3;
	v->a[95982] = sym_file_redirect;
	v->a[95983] = sym_heredoc_redirect;
	v->a[95984] = aux_sym_redirected_statement_repeat1;
	v->a[95985] = actions(5239);
	v->a[95986] = 8;
	v->a[95987] = anon_sym_LT;
	v->a[95988] = anon_sym_GT;
	v->a[95989] = anon_sym_GT_GT;
	v->a[95990] = anon_sym_AMP_GT;
	v->a[95991] = anon_sym_AMP_GT_GT;
	v->a[95992] = anon_sym_LT_AMP;
	v->a[95993] = anon_sym_GT_AMP;
	v->a[95994] = anon_sym_GT_PIPE;
	v->a[95995] = actions(5151);
	v->a[95996] = 9;
	v->a[95997] = anon_sym_PIPE;
	v->a[95998] = anon_sym_SEMI_SEMI;
	v->a[95999] = anon_sym_SEMI_AMP;
	small_parse_table_4800(v);
}

/* EOF small_parse_table_959.c */
