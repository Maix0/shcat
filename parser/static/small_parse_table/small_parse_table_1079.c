/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1079.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5395(t_small_parse_table_array *v)
{
	v->a[107900] = state(335);
	v->a[107901] = 2;
	v->a[107902] = sym_concatenation;
	v->a[107903] = aux_sym_for_statement_repeat1;
	v->a[107904] = state(637);
	v->a[107905] = 7;
	v->a[107906] = sym_arithmetic_expansion;
	v->a[107907] = sym_brace_expression;
	v->a[107908] = sym_string;
	v->a[107909] = sym_number;
	v->a[107910] = sym_simple_expansion;
	v->a[107911] = sym_expansion;
	v->a[107912] = sym_command_substitution;
	v->a[107913] = 3;
	v->a[107914] = actions(3);
	v->a[107915] = 1;
	v->a[107916] = sym_comment;
	v->a[107917] = actions(6185);
	v->a[107918] = 2;
	v->a[107919] = sym_file_descriptor;
	small_parse_table_5396(v);
}

void	small_parse_table_5396(t_small_parse_table_array *v)
{
	v->a[107920] = aux_sym_heredoc_redirect_token1;
	v->a[107921] = actions(6187);
	v->a[107922] = 22;
	v->a[107923] = anon_sym_esac;
	v->a[107924] = anon_sym_PIPE;
	v->a[107925] = anon_sym_SEMI_SEMI;
	v->a[107926] = anon_sym_SEMI_AMP;
	v->a[107927] = anon_sym_SEMI_SEMI_AMP;
	v->a[107928] = anon_sym_PIPE_AMP;
	v->a[107929] = anon_sym_AMP_AMP;
	v->a[107930] = anon_sym_PIPE_PIPE;
	v->a[107931] = anon_sym_LT;
	v->a[107932] = anon_sym_GT;
	v->a[107933] = anon_sym_GT_GT;
	v->a[107934] = anon_sym_AMP_GT;
	v->a[107935] = anon_sym_AMP_GT_GT;
	v->a[107936] = anon_sym_LT_AMP;
	v->a[107937] = anon_sym_GT_AMP;
	v->a[107938] = anon_sym_GT_PIPE;
	v->a[107939] = anon_sym_LT_AMP_DASH;
	small_parse_table_5397(v);
}

void	small_parse_table_5397(t_small_parse_table_array *v)
{
	v->a[107940] = anon_sym_GT_AMP_DASH;
	v->a[107941] = anon_sym_LT_LT;
	v->a[107942] = anon_sym_LT_LT_DASH;
	v->a[107943] = anon_sym_AMP;
	v->a[107944] = anon_sym_SEMI;
	v->a[107945] = 3;
	v->a[107946] = actions(3);
	v->a[107947] = 1;
	v->a[107948] = sym_comment;
	v->a[107949] = actions(6185);
	v->a[107950] = 2;
	v->a[107951] = sym_file_descriptor;
	v->a[107952] = aux_sym_heredoc_redirect_token1;
	v->a[107953] = actions(6187);
	v->a[107954] = 22;
	v->a[107955] = anon_sym_esac;
	v->a[107956] = anon_sym_PIPE;
	v->a[107957] = anon_sym_SEMI_SEMI;
	v->a[107958] = anon_sym_SEMI_AMP;
	v->a[107959] = anon_sym_SEMI_SEMI_AMP;
	small_parse_table_5398(v);
}

void	small_parse_table_5398(t_small_parse_table_array *v)
{
	v->a[107960] = anon_sym_PIPE_AMP;
	v->a[107961] = anon_sym_AMP_AMP;
	v->a[107962] = anon_sym_PIPE_PIPE;
	v->a[107963] = anon_sym_LT;
	v->a[107964] = anon_sym_GT;
	v->a[107965] = anon_sym_GT_GT;
	v->a[107966] = anon_sym_AMP_GT;
	v->a[107967] = anon_sym_AMP_GT_GT;
	v->a[107968] = anon_sym_LT_AMP;
	v->a[107969] = anon_sym_GT_AMP;
	v->a[107970] = anon_sym_GT_PIPE;
	v->a[107971] = anon_sym_LT_AMP_DASH;
	v->a[107972] = anon_sym_GT_AMP_DASH;
	v->a[107973] = anon_sym_LT_LT;
	v->a[107974] = anon_sym_LT_LT_DASH;
	v->a[107975] = anon_sym_AMP;
	v->a[107976] = anon_sym_SEMI;
	v->a[107977] = 5;
	v->a[107978] = actions(3);
	v->a[107979] = 1;
	small_parse_table_5399(v);
}

void	small_parse_table_5399(t_small_parse_table_array *v)
{
	v->a[107980] = sym_comment;
	v->a[107981] = state(2261);
	v->a[107982] = 1;
	v->a[107983] = aux_sym_pipeline_repeat1;
	v->a[107984] = actions(5439);
	v->a[107985] = 2;
	v->a[107986] = sym_file_descriptor;
	v->a[107987] = aux_sym_heredoc_redirect_token1;
	v->a[107988] = actions(6244);
	v->a[107989] = 2;
	v->a[107990] = anon_sym_PIPE;
	v->a[107991] = anon_sym_PIPE_AMP;
	v->a[107992] = actions(5435);
	v->a[107993] = 19;
	v->a[107994] = anon_sym_SEMI_SEMI;
	v->a[107995] = anon_sym_SEMI_AMP;
	v->a[107996] = anon_sym_SEMI_SEMI_AMP;
	v->a[107997] = anon_sym_AMP_AMP;
	v->a[107998] = anon_sym_PIPE_PIPE;
	v->a[107999] = anon_sym_LT;
	small_parse_table_5400(v);
}

/* EOF small_parse_table_1079.c */
