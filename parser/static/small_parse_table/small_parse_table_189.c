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
	v->a[18900] = sym_file_descriptor;
	v->a[18901] = state(210);
	v->a[18902] = 1;
	v->a[18903] = aux_sym_command_repeat2;
	v->a[18904] = state(674);
	v->a[18905] = 1;
	v->a[18906] = sym_concatenation;
	v->a[18907] = state(1157);
	v->a[18908] = 1;
	v->a[18909] = sym_subshell;
	v->a[18910] = actions(401);
	v->a[18911] = 3;
	v->a[18912] = sym_raw_string;
	v->a[18913] = sym_number;
	v->a[18914] = sym_word;
	v->a[18915] = state(446);
	v->a[18916] = 5;
	v->a[18917] = sym_arithmetic_expansion;
	v->a[18918] = sym_string;
	v->a[18919] = sym_simple_expansion;
	small_parse_table_946(v);
}

void	small_parse_table_946(t_small_parse_table_array *v)
{
	v->a[18920] = sym_expansion;
	v->a[18921] = sym_command_substitution;
	v->a[18922] = actions(471);
	v->a[18923] = 16;
	v->a[18924] = anon_sym_PIPE;
	v->a[18925] = anon_sym_RPAREN;
	v->a[18926] = anon_sym_SEMI_SEMI;
	v->a[18927] = anon_sym_AMP_AMP;
	v->a[18928] = anon_sym_PIPE_PIPE;
	v->a[18929] = anon_sym_LT;
	v->a[18930] = anon_sym_GT;
	v->a[18931] = anon_sym_GT_GT;
	v->a[18932] = anon_sym_LT_AMP;
	v->a[18933] = anon_sym_GT_AMP;
	v->a[18934] = anon_sym_GT_PIPE;
	v->a[18935] = anon_sym_LT_GT;
	v->a[18936] = anon_sym_LT_LT;
	v->a[18937] = anon_sym_LT_LT_DASH;
	v->a[18938] = aux_sym_heredoc_redirect_token1;
	v->a[18939] = anon_sym_SEMI;
	small_parse_table_947(v);
}

void	small_parse_table_947(t_small_parse_table_array *v)
{
	v->a[18940] = 6;
	v->a[18941] = actions(3);
	v->a[18942] = 1;
	v->a[18943] = sym_comment;
	v->a[18944] = actions(367);
	v->a[18945] = 1;
	v->a[18946] = sym_file_descriptor;
	v->a[18947] = actions(479);
	v->a[18948] = 1;
	v->a[18949] = sym_variable_name;
	v->a[18950] = actions(477);
	v->a[18951] = 2;
	v->a[18952] = aux_sym__simple_variable_name_token1;
	v->a[18953] = aux_sym__multiline_variable_name_token1;
	v->a[18954] = actions(475);
	v->a[18955] = 8;
	v->a[18956] = anon_sym_BANG;
	v->a[18957] = anon_sym_DASH;
	v->a[18958] = anon_sym_STAR;
	v->a[18959] = anon_sym_QMARK;
	small_parse_table_948(v);
}

void	small_parse_table_948(t_small_parse_table_array *v)
{
	v->a[18960] = anon_sym_DOLLAR;
	v->a[18961] = anon_sym_POUND;
	v->a[18962] = anon_sym_AT;
	v->a[18963] = anon_sym_0;
	v->a[18964] = actions(361);
	v->a[18965] = 24;
	v->a[18966] = anon_sym_esac;
	v->a[18967] = anon_sym_PIPE;
	v->a[18968] = anon_sym_SEMI_SEMI;
	v->a[18969] = anon_sym_AMP_AMP;
	v->a[18970] = anon_sym_PIPE_PIPE;
	v->a[18971] = anon_sym_LT;
	v->a[18972] = anon_sym_GT;
	v->a[18973] = anon_sym_GT_GT;
	v->a[18974] = anon_sym_LT_AMP;
	v->a[18975] = anon_sym_GT_AMP;
	v->a[18976] = anon_sym_GT_PIPE;
	v->a[18977] = anon_sym_LT_GT;
	v->a[18978] = anon_sym_LT_LT;
	v->a[18979] = anon_sym_LT_LT_DASH;
	small_parse_table_949(v);
}

void	small_parse_table_949(t_small_parse_table_array *v)
{
	v->a[18980] = aux_sym_heredoc_redirect_token1;
	v->a[18981] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[18982] = anon_sym_DQUOTE;
	v->a[18983] = sym_raw_string;
	v->a[18984] = sym_number;
	v->a[18985] = anon_sym_DOLLAR_LBRACE;
	v->a[18986] = anon_sym_DOLLAR_LPAREN;
	v->a[18987] = anon_sym_BQUOTE;
	v->a[18988] = sym_word;
	v->a[18989] = anon_sym_SEMI;
	v->a[18990] = 6;
	v->a[18991] = actions(3);
	v->a[18992] = 1;
	v->a[18993] = sym_comment;
	v->a[18994] = actions(485);
	v->a[18995] = 1;
	v->a[18996] = sym_variable_name;
	v->a[18997] = actions(367);
	v->a[18998] = 2;
	v->a[18999] = sym_file_descriptor;
	small_parse_table_950(v);
}

/* EOF small_parse_table_189.c */
