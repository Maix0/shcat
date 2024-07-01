/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_549.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2745(t_small_parse_table_array *v)
{
	v->a[54900] = 3;
	v->a[54901] = anon_sym_SEMI_SEMI;
	v->a[54902] = anon_sym_AMP;
	v->a[54903] = anon_sym_SEMI;
	v->a[54904] = state(1073);
	v->a[54905] = 3;
	v->a[54906] = sym_file_redirect;
	v->a[54907] = sym_heredoc_redirect;
	v->a[54908] = aux_sym_redirected_statement_repeat1;
	v->a[54909] = actions(1837);
	v->a[54910] = 7;
	v->a[54911] = anon_sym_LT;
	v->a[54912] = anon_sym_GT;
	v->a[54913] = anon_sym_GT_GT;
	v->a[54914] = anon_sym_LT_AMP;
	v->a[54915] = anon_sym_GT_AMP;
	v->a[54916] = anon_sym_GT_PIPE;
	v->a[54917] = anon_sym_LT_GT;
	v->a[54918] = 11;
	v->a[54919] = actions(3);
	small_parse_table_2746(v);
}

void	small_parse_table_2746(t_small_parse_table_array *v)
{
	v->a[54920] = 1;
	v->a[54921] = sym_comment;
	v->a[54922] = actions(736);
	v->a[54923] = 1;
	v->a[54924] = anon_sym_PIPE;
	v->a[54925] = actions(804);
	v->a[54926] = 1;
	v->a[54927] = ts_builtin_sym_end;
	v->a[54928] = actions(1839);
	v->a[54929] = 1;
	v->a[54930] = aux_sym_heredoc_redirect_token1;
	v->a[54931] = actions(1841);
	v->a[54932] = 1;
	v->a[54933] = sym_file_descriptor;
	v->a[54934] = state(743);
	v->a[54935] = 1;
	v->a[54936] = sym_terminator;
	v->a[54937] = actions(744);
	v->a[54938] = 2;
	v->a[54939] = anon_sym_LT_LT;
	small_parse_table_2747(v);
}

void	small_parse_table_2747(t_small_parse_table_array *v)
{
	v->a[54940] = anon_sym_LT_LT_DASH;
	v->a[54941] = actions(808);
	v->a[54942] = 2;
	v->a[54943] = anon_sym_AMP_AMP;
	v->a[54944] = anon_sym_PIPE_PIPE;
	v->a[54945] = actions(806);
	v->a[54946] = 3;
	v->a[54947] = anon_sym_SEMI_SEMI;
	v->a[54948] = anon_sym_AMP;
	v->a[54949] = anon_sym_SEMI;
	v->a[54950] = state(1073);
	v->a[54951] = 3;
	v->a[54952] = sym_file_redirect;
	v->a[54953] = sym_heredoc_redirect;
	v->a[54954] = aux_sym_redirected_statement_repeat1;
	v->a[54955] = actions(1837);
	v->a[54956] = 7;
	v->a[54957] = anon_sym_LT;
	v->a[54958] = anon_sym_GT;
	v->a[54959] = anon_sym_GT_GT;
	small_parse_table_2748(v);
}

void	small_parse_table_2748(t_small_parse_table_array *v)
{
	v->a[54960] = anon_sym_LT_AMP;
	v->a[54961] = anon_sym_GT_AMP;
	v->a[54962] = anon_sym_GT_PIPE;
	v->a[54963] = anon_sym_LT_GT;
	v->a[54964] = 11;
	v->a[54965] = actions(3);
	v->a[54966] = 1;
	v->a[54967] = sym_comment;
	v->a[54968] = actions(736);
	v->a[54969] = 1;
	v->a[54970] = anon_sym_PIPE;
	v->a[54971] = actions(804);
	v->a[54972] = 1;
	v->a[54973] = ts_builtin_sym_end;
	v->a[54974] = actions(1839);
	v->a[54975] = 1;
	v->a[54976] = aux_sym_heredoc_redirect_token1;
	v->a[54977] = actions(1841);
	v->a[54978] = 1;
	v->a[54979] = sym_file_descriptor;
	small_parse_table_2749(v);
}

void	small_parse_table_2749(t_small_parse_table_array *v)
{
	v->a[54980] = state(746);
	v->a[54981] = 1;
	v->a[54982] = sym_terminator;
	v->a[54983] = actions(744);
	v->a[54984] = 2;
	v->a[54985] = anon_sym_LT_LT;
	v->a[54986] = anon_sym_LT_LT_DASH;
	v->a[54987] = actions(808);
	v->a[54988] = 2;
	v->a[54989] = anon_sym_AMP_AMP;
	v->a[54990] = anon_sym_PIPE_PIPE;
	v->a[54991] = actions(806);
	v->a[54992] = 3;
	v->a[54993] = anon_sym_SEMI_SEMI;
	v->a[54994] = anon_sym_AMP;
	v->a[54995] = anon_sym_SEMI;
	v->a[54996] = state(1073);
	v->a[54997] = 3;
	v->a[54998] = sym_file_redirect;
	v->a[54999] = sym_heredoc_redirect;
	small_parse_table_2750(v);
}

/* EOF small_parse_table_549.c */
