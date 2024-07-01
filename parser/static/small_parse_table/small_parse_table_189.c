/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_189.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_945(t_small_parse_table_array *v)
{
	v->a[18900] = anon_sym_DOLLAR;
	v->a[18901] = actions(447);
	v->a[18902] = 1;
	v->a[18903] = anon_sym_DQUOTE;
	v->a[18904] = actions(449);
	v->a[18905] = 1;
	v->a[18906] = anon_sym_DOLLAR_LBRACE;
	v->a[18907] = actions(451);
	v->a[18908] = 1;
	v->a[18909] = anon_sym_DOLLAR_LPAREN;
	v->a[18910] = actions(453);
	v->a[18911] = 1;
	v->a[18912] = anon_sym_BQUOTE;
	v->a[18913] = actions(455);
	v->a[18914] = 1;
	v->a[18915] = sym__bare_dollar;
	v->a[18916] = state(195);
	v->a[18917] = 1;
	v->a[18918] = aux_sym_command_repeat2;
	v->a[18919] = state(681);
	small_parse_table_946(v);
}

void	small_parse_table_946(t_small_parse_table_array *v)
{
	v->a[18920] = 1;
	v->a[18921] = sym_concatenation;
	v->a[18922] = state(1156);
	v->a[18923] = 1;
	v->a[18924] = sym_subshell;
	v->a[18925] = actions(437);
	v->a[18926] = 2;
	v->a[18927] = sym_file_descriptor;
	v->a[18928] = ts_builtin_sym_end;
	v->a[18929] = actions(439);
	v->a[18930] = 3;
	v->a[18931] = sym_raw_string;
	v->a[18932] = sym_number;
	v->a[18933] = sym_word;
	v->a[18934] = state(386);
	v->a[18935] = 5;
	v->a[18936] = sym_arithmetic_expansion;
	v->a[18937] = sym_string;
	v->a[18938] = sym_simple_expansion;
	v->a[18939] = sym_expansion;
	small_parse_table_947(v);
}

void	small_parse_table_947(t_small_parse_table_array *v)
{
	v->a[18940] = sym_command_substitution;
	v->a[18941] = actions(441);
	v->a[18942] = 16;
	v->a[18943] = anon_sym_PIPE;
	v->a[18944] = anon_sym_SEMI_SEMI;
	v->a[18945] = anon_sym_AMP_AMP;
	v->a[18946] = anon_sym_PIPE_PIPE;
	v->a[18947] = anon_sym_LT;
	v->a[18948] = anon_sym_GT;
	v->a[18949] = anon_sym_GT_GT;
	v->a[18950] = anon_sym_LT_AMP;
	v->a[18951] = anon_sym_GT_AMP;
	v->a[18952] = anon_sym_GT_PIPE;
	v->a[18953] = anon_sym_LT_GT;
	v->a[18954] = anon_sym_LT_LT;
	v->a[18955] = anon_sym_LT_LT_DASH;
	v->a[18956] = aux_sym_heredoc_redirect_token1;
	v->a[18957] = anon_sym_AMP;
	v->a[18958] = anon_sym_SEMI;
	v->a[18959] = 6;
	small_parse_table_948(v);
}

void	small_parse_table_948(t_small_parse_table_array *v)
{
	v->a[18960] = actions(3);
	v->a[18961] = 1;
	v->a[18962] = sym_comment;
	v->a[18963] = actions(367);
	v->a[18964] = 1;
	v->a[18965] = sym_file_descriptor;
	v->a[18966] = actions(417);
	v->a[18967] = 1;
	v->a[18968] = sym_variable_name;
	v->a[18969] = actions(415);
	v->a[18970] = 2;
	v->a[18971] = aux_sym__simple_variable_name_token1;
	v->a[18972] = aux_sym__multiline_variable_name_token1;
	v->a[18973] = actions(413);
	v->a[18974] = 9;
	v->a[18975] = anon_sym_BANG;
	v->a[18976] = anon_sym_DASH;
	v->a[18977] = anon_sym_STAR;
	v->a[18978] = anon_sym_QMARK;
	v->a[18979] = anon_sym_DOLLAR;
	small_parse_table_949(v);
}

void	small_parse_table_949(t_small_parse_table_array *v)
{
	v->a[18980] = anon_sym_POUND;
	v->a[18981] = anon_sym_AT;
	v->a[18982] = anon_sym_0;
	v->a[18983] = anon_sym__;
	v->a[18984] = actions(361);
	v->a[18985] = 24;
	v->a[18986] = anon_sym_PIPE;
	v->a[18987] = anon_sym_SEMI_SEMI;
	v->a[18988] = anon_sym_AMP_AMP;
	v->a[18989] = anon_sym_PIPE_PIPE;
	v->a[18990] = anon_sym_LT;
	v->a[18991] = anon_sym_GT;
	v->a[18992] = anon_sym_GT_GT;
	v->a[18993] = anon_sym_LT_AMP;
	v->a[18994] = anon_sym_GT_AMP;
	v->a[18995] = anon_sym_GT_PIPE;
	v->a[18996] = anon_sym_LT_GT;
	v->a[18997] = anon_sym_LT_LT;
	v->a[18998] = anon_sym_LT_LT_DASH;
	v->a[18999] = aux_sym_heredoc_redirect_token1;
	small_parse_table_950(v);
}

/* EOF small_parse_table_189.c */
