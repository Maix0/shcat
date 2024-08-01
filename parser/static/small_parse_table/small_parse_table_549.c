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
	v->a[54900] = anon_sym_PLUS_PLUS;
	v->a[54901] = anon_sym_DASH_DASH;
	v->a[54902] = 6;
	v->a[54903] = actions(1436);
	v->a[54904] = 1;
	v->a[54905] = sym_comment;
	v->a[54906] = actions(2760);
	v->a[54907] = 1;
	v->a[54908] = anon_sym_LT_LT;
	v->a[54909] = actions(2828);
	v->a[54910] = 1;
	v->a[54911] = anon_sym_GT_GT;
	v->a[54912] = actions(2633);
	v->a[54913] = 2;
	v->a[54914] = anon_sym_LT;
	v->a[54915] = anon_sym_GT;
	v->a[54916] = actions(2826);
	v->a[54917] = 2;
	v->a[54918] = anon_sym_AMP_AMP;
	v->a[54919] = anon_sym_PIPE_PIPE;
	small_parse_table_2746(v);
}

void	small_parse_table_2746(t_small_parse_table_array *v)
{
	v->a[54920] = state(1225);
	v->a[54921] = 3;
	v->a[54922] = sym_file_redirect;
	v->a[54923] = sym_heredoc_redirect;
	v->a[54924] = aux_sym_redirected_statement_repeat1;
	v->a[54925] = 5;
	v->a[54926] = actions(3);
	v->a[54927] = 1;
	v->a[54928] = sym_comment;
	v->a[54929] = actions(1974);
	v->a[54930] = 1;
	v->a[54931] = aux_sym_heredoc_redirect_token1;
	v->a[54932] = actions(2830);
	v->a[54933] = 1;
	v->a[54934] = anon_sym_PIPE;
	v->a[54935] = state(1352);
	v->a[54936] = 1;
	v->a[54937] = aux_sym_pipeline_repeat1;
	v->a[54938] = actions(1979);
	v->a[54939] = 6;
	small_parse_table_2747(v);
}

void	small_parse_table_2747(t_small_parse_table_array *v)
{
	v->a[54940] = anon_sym_AMP_AMP;
	v->a[54941] = anon_sym_PIPE_PIPE;
	v->a[54942] = anon_sym_LT;
	v->a[54943] = anon_sym_GT;
	v->a[54944] = anon_sym_GT_GT;
	v->a[54945] = anon_sym_LT_LT;
	v->a[54946] = 6;
	v->a[54947] = actions(1436);
	v->a[54948] = 1;
	v->a[54949] = sym_comment;
	v->a[54950] = actions(2754);
	v->a[54951] = 1;
	v->a[54952] = anon_sym_QMARK;
	v->a[54953] = actions(2833);
	v->a[54954] = 1;
	v->a[54955] = anon_sym_RPAREN_RPAREN;
	v->a[54956] = actions(2702);
	v->a[54957] = 2;
	v->a[54958] = anon_sym_PLUS;
	v->a[54959] = anon_sym_DASH;
	small_parse_table_2748(v);
}

void	small_parse_table_2748(t_small_parse_table_array *v)
{
	v->a[54960] = actions(2706);
	v->a[54961] = 2;
	v->a[54962] = anon_sym_PLUS_PLUS;
	v->a[54963] = anon_sym_DASH_DASH;
	v->a[54964] = actions(2704);
	v->a[54965] = 3;
	v->a[54966] = anon_sym_STAR;
	v->a[54967] = anon_sym_SLASH;
	v->a[54968] = anon_sym_PERCENT;
	v->a[54969] = 6;
	v->a[54970] = actions(1436);
	v->a[54971] = 1;
	v->a[54972] = sym_comment;
	v->a[54973] = actions(2754);
	v->a[54974] = 1;
	v->a[54975] = anon_sym_QMARK;
	v->a[54976] = actions(2835);
	v->a[54977] = 1;
	v->a[54978] = anon_sym_RPAREN_RPAREN;
	v->a[54979] = actions(2702);
	small_parse_table_2749(v);
}

void	small_parse_table_2749(t_small_parse_table_array *v)
{
	v->a[54980] = 2;
	v->a[54981] = anon_sym_PLUS;
	v->a[54982] = anon_sym_DASH;
	v->a[54983] = actions(2706);
	v->a[54984] = 2;
	v->a[54985] = anon_sym_PLUS_PLUS;
	v->a[54986] = anon_sym_DASH_DASH;
	v->a[54987] = actions(2704);
	v->a[54988] = 3;
	v->a[54989] = anon_sym_STAR;
	v->a[54990] = anon_sym_SLASH;
	v->a[54991] = anon_sym_PERCENT;
	v->a[54992] = 3;
	v->a[54993] = actions(1436);
	v->a[54994] = 1;
	v->a[54995] = sym_comment;
	v->a[54996] = actions(1106);
	v->a[54997] = 2;
	v->a[54998] = anon_sym_PLUS;
	v->a[54999] = anon_sym_DASH;
	small_parse_table_2750(v);
}

/* EOF small_parse_table_549.c */
