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
	v->a[18900] = anon_sym_GT_GT;
	v->a[18901] = anon_sym_PIPE_AMP;
	v->a[18902] = anon_sym_AMP_GT_GT;
	v->a[18903] = anon_sym_GT_PIPE;
	v->a[18904] = anon_sym_LT_AMP_DASH;
	v->a[18905] = anon_sym_GT_AMP_DASH;
	v->a[18906] = anon_sym_LT_LT_DASH;
	v->a[18907] = 30;
	v->a[18908] = actions(3);
	v->a[18909] = 1;
	v->a[18910] = sym_comment;
	v->a[18911] = actions(3725);
	v->a[18912] = 1;
	v->a[18913] = aux_sym_heredoc_redirect_token1;
	v->a[18914] = actions(3727);
	v->a[18915] = 1;
	v->a[18916] = anon_sym_LT_LT_LT;
	v->a[18917] = actions(3729);
	v->a[18918] = 1;
	v->a[18919] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_946(v);
}

void	small_parse_table_946(t_small_parse_table_array *v)
{
	v->a[18920] = actions(3731);
	v->a[18921] = 1;
	v->a[18922] = anon_sym_DOLLAR;
	v->a[18923] = actions(3733);
	v->a[18924] = 1;
	v->a[18925] = sym__special_character;
	v->a[18926] = actions(3735);
	v->a[18927] = 1;
	v->a[18928] = anon_sym_DQUOTE;
	v->a[18929] = actions(3737);
	v->a[18930] = 1;
	v->a[18931] = aux_sym_number_token1;
	v->a[18932] = actions(3739);
	v->a[18933] = 1;
	v->a[18934] = aux_sym_number_token2;
	v->a[18935] = actions(3741);
	v->a[18936] = 1;
	v->a[18937] = anon_sym_DOLLAR_LBRACE;
	v->a[18938] = actions(3743);
	v->a[18939] = 1;
	small_parse_table_947(v);
}

void	small_parse_table_947(t_small_parse_table_array *v)
{
	v->a[18940] = anon_sym_DOLLAR_LPAREN;
	v->a[18941] = actions(3745);
	v->a[18942] = 1;
	v->a[18943] = anon_sym_BQUOTE;
	v->a[18944] = actions(3747);
	v->a[18945] = 1;
	v->a[18946] = anon_sym_DOLLAR_BQUOTE;
	v->a[18947] = actions(3751);
	v->a[18948] = 1;
	v->a[18949] = sym_file_descriptor;
	v->a[18950] = actions(3753);
	v->a[18951] = 1;
	v->a[18952] = sym_test_operator;
	v->a[18953] = actions(3755);
	v->a[18954] = 1;
	v->a[18955] = sym__brace_start;
	v->a[18956] = state(3570);
	v->a[18957] = 1;
	v->a[18958] = aux_sym__heredoc_command;
	v->a[18959] = state(5351);
	small_parse_table_948(v);
}

void	small_parse_table_948(t_small_parse_table_array *v)
{
	v->a[18960] = 1;
	v->a[18961] = aux_sym__literal_repeat1;
	v->a[18962] = state(5456);
	v->a[18963] = 1;
	v->a[18964] = sym_concatenation;
	v->a[18965] = state(7036);
	v->a[18966] = 1;
	v->a[18967] = sym__heredoc_expression;
	v->a[18968] = state(7039);
	v->a[18969] = 1;
	v->a[18970] = sym__heredoc_pipeline;
	v->a[18971] = actions(3715);
	v->a[18972] = 2;
	v->a[18973] = anon_sym_LPAREN_LPAREN;
	v->a[18974] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[18975] = actions(3717);
	v->a[18976] = 2;
	v->a[18977] = anon_sym_PIPE_PIPE;
	v->a[18978] = anon_sym_AMP_AMP;
	v->a[18979] = actions(3719);
	small_parse_table_949(v);
}

void	small_parse_table_949(t_small_parse_table_array *v)
{
	v->a[18980] = 2;
	v->a[18981] = anon_sym_PIPE;
	v->a[18982] = anon_sym_PIPE_AMP;
	v->a[18983] = actions(3723);
	v->a[18984] = 2;
	v->a[18985] = anon_sym_LT_AMP_DASH;
	v->a[18986] = anon_sym_GT_AMP_DASH;
	v->a[18987] = actions(3749);
	v->a[18988] = 2;
	v->a[18989] = anon_sym_LT_LPAREN;
	v->a[18990] = anon_sym_GT_LPAREN;
	v->a[18991] = actions(3713);
	v->a[18992] = 3;
	v->a[18993] = sym_raw_string;
	v->a[18994] = sym_ansi_c_string;
	v->a[18995] = sym_word;
	v->a[18996] = state(5505);
	v->a[18997] = 3;
	v->a[18998] = sym_file_redirect;
	v->a[18999] = sym_herestring_redirect;
	small_parse_table_950(v);
}

/* EOF small_parse_table_189.c */
