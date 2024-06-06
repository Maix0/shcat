/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1059.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5295(t_small_parse_table_array *v)
{
	v->a[105900] = 1;
	v->a[105901] = sym__brace_start;
	v->a[105902] = actions(6071);
	v->a[105903] = 1;
	v->a[105904] = sym_word;
	v->a[105905] = state(1662);
	v->a[105906] = 1;
	v->a[105907] = aux_sym__literal_repeat1;
	v->a[105908] = actions(6073);
	v->a[105909] = 2;
	v->a[105910] = sym_test_operator;
	v->a[105911] = sym_raw_string;
	v->a[105912] = state(538);
	v->a[105913] = 2;
	v->a[105914] = sym_concatenation;
	v->a[105915] = aux_sym_for_statement_repeat1;
	v->a[105916] = state(1461);
	v->a[105917] = 7;
	v->a[105918] = sym_arithmetic_expansion;
	v->a[105919] = sym_brace_expression;
	small_parse_table_5296(v);
}

void	small_parse_table_5296(t_small_parse_table_array *v)
{
	v->a[105920] = sym_string;
	v->a[105921] = sym_number;
	v->a[105922] = sym_simple_expansion;
	v->a[105923] = sym_expansion;
	v->a[105924] = sym_command_substitution;
	v->a[105925] = 3;
	v->a[105926] = actions(3);
	v->a[105927] = 1;
	v->a[105928] = sym_comment;
	v->a[105929] = actions(6085);
	v->a[105930] = 3;
	v->a[105931] = sym_file_descriptor;
	v->a[105932] = ts_builtin_sym_end;
	v->a[105933] = aux_sym_heredoc_redirect_token1;
	v->a[105934] = actions(6087);
	v->a[105935] = 21;
	v->a[105936] = anon_sym_PIPE;
	v->a[105937] = anon_sym_RPAREN;
	v->a[105938] = anon_sym_SEMI_SEMI;
	v->a[105939] = anon_sym_PIPE_AMP;
	small_parse_table_5297(v);
}

void	small_parse_table_5297(t_small_parse_table_array *v)
{
	v->a[105940] = anon_sym_AMP_AMP;
	v->a[105941] = anon_sym_PIPE_PIPE;
	v->a[105942] = anon_sym_LT;
	v->a[105943] = anon_sym_GT;
	v->a[105944] = anon_sym_GT_GT;
	v->a[105945] = anon_sym_AMP_GT;
	v->a[105946] = anon_sym_AMP_GT_GT;
	v->a[105947] = anon_sym_LT_AMP;
	v->a[105948] = anon_sym_GT_AMP;
	v->a[105949] = anon_sym_GT_PIPE;
	v->a[105950] = anon_sym_LT_AMP_DASH;
	v->a[105951] = anon_sym_GT_AMP_DASH;
	v->a[105952] = anon_sym_LT_LT;
	v->a[105953] = anon_sym_LT_LT_DASH;
	v->a[105954] = anon_sym_AMP;
	v->a[105955] = anon_sym_BQUOTE;
	v->a[105956] = anon_sym_SEMI;
	v->a[105957] = 3;
	v->a[105958] = actions(3);
	v->a[105959] = 1;
	small_parse_table_5298(v);
}

void	small_parse_table_5298(t_small_parse_table_array *v)
{
	v->a[105960] = sym_comment;
	v->a[105961] = actions(6089);
	v->a[105962] = 3;
	v->a[105963] = sym_file_descriptor;
	v->a[105964] = ts_builtin_sym_end;
	v->a[105965] = aux_sym_heredoc_redirect_token1;
	v->a[105966] = actions(6091);
	v->a[105967] = 21;
	v->a[105968] = anon_sym_PIPE;
	v->a[105969] = anon_sym_RPAREN;
	v->a[105970] = anon_sym_SEMI_SEMI;
	v->a[105971] = anon_sym_PIPE_AMP;
	v->a[105972] = anon_sym_AMP_AMP;
	v->a[105973] = anon_sym_PIPE_PIPE;
	v->a[105974] = anon_sym_LT;
	v->a[105975] = anon_sym_GT;
	v->a[105976] = anon_sym_GT_GT;
	v->a[105977] = anon_sym_AMP_GT;
	v->a[105978] = anon_sym_AMP_GT_GT;
	v->a[105979] = anon_sym_LT_AMP;
	small_parse_table_5299(v);
}

void	small_parse_table_5299(t_small_parse_table_array *v)
{
	v->a[105980] = anon_sym_GT_AMP;
	v->a[105981] = anon_sym_GT_PIPE;
	v->a[105982] = anon_sym_LT_AMP_DASH;
	v->a[105983] = anon_sym_GT_AMP_DASH;
	v->a[105984] = anon_sym_LT_LT;
	v->a[105985] = anon_sym_LT_LT_DASH;
	v->a[105986] = anon_sym_AMP;
	v->a[105987] = anon_sym_BQUOTE;
	v->a[105988] = anon_sym_SEMI;
	v->a[105989] = 3;
	v->a[105990] = actions(3);
	v->a[105991] = 1;
	v->a[105992] = sym_comment;
	v->a[105993] = actions(6095);
	v->a[105994] = 2;
	v->a[105995] = sym_file_descriptor;
	v->a[105996] = aux_sym_heredoc_redirect_token1;
	v->a[105997] = actions(6093);
	v->a[105998] = 22;
	v->a[105999] = anon_sym_esac;
	small_parse_table_5300(v);
}

/* EOF small_parse_table_1059.c */
