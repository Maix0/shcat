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
	v->a[18900] = 1;
	v->a[18901] = sym_variable_name;
	v->a[18902] = state(438);
	v->a[18903] = 1;
	v->a[18904] = sym_terminator;
	v->a[18905] = actions(769);
	v->a[18906] = 2;
	v->a[18907] = anon_sym_AMP_AMP;
	v->a[18908] = anon_sym_PIPE_PIPE;
	v->a[18909] = state(995);
	v->a[18910] = 2;
	v->a[18911] = sym_variable_assignment;
	v->a[18912] = aux_sym__variable_assignments_repeat1;
	v->a[18913] = actions(767);
	v->a[18914] = 3;
	v->a[18915] = anon_sym_SEMI_SEMI;
	v->a[18916] = aux_sym_heredoc_redirect_token1;
	v->a[18917] = anon_sym_SEMI;
	v->a[18918] = state(1040);
	v->a[18919] = 3;
	small_parse_table_946(v);
}

void	small_parse_table_946(t_small_parse_table_array *v)
{
	v->a[18920] = sym_file_redirect;
	v->a[18921] = sym_heredoc_redirect;
	v->a[18922] = aux_sym_redirected_statement_repeat1;
	v->a[18923] = actions(576);
	v->a[18924] = 12;
	v->a[18925] = anon_sym_LT;
	v->a[18926] = anon_sym_GT;
	v->a[18927] = anon_sym_GT_GT;
	v->a[18928] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[18929] = anon_sym_DOLLAR;
	v->a[18930] = anon_sym_DQUOTE;
	v->a[18931] = sym_raw_string;
	v->a[18932] = sym_number;
	v->a[18933] = anon_sym_DOLLAR_LBRACE;
	v->a[18934] = anon_sym_DOLLAR_LPAREN;
	v->a[18935] = anon_sym_BQUOTE;
	v->a[18936] = sym_word;
	v->a[18937] = 19;
	v->a[18938] = actions(3);
	v->a[18939] = 1;
	small_parse_table_947(v);
}

void	small_parse_table_947(t_small_parse_table_array *v)
{
	v->a[18940] = sym_comment;
	v->a[18941] = actions(17);
	v->a[18942] = 1;
	v->a[18943] = anon_sym_LPAREN;
	v->a[18944] = actions(53);
	v->a[18945] = 1;
	v->a[18946] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[18947] = actions(55);
	v->a[18948] = 1;
	v->a[18949] = anon_sym_DOLLAR;
	v->a[18950] = actions(57);
	v->a[18951] = 1;
	v->a[18952] = anon_sym_DQUOTE;
	v->a[18953] = actions(61);
	v->a[18954] = 1;
	v->a[18955] = anon_sym_DOLLAR_LBRACE;
	v->a[18956] = actions(63);
	v->a[18957] = 1;
	v->a[18958] = anon_sym_DOLLAR_LPAREN;
	v->a[18959] = actions(65);
	small_parse_table_948(v);
}

void	small_parse_table_948(t_small_parse_table_array *v)
{
	v->a[18960] = 1;
	v->a[18961] = anon_sym_BQUOTE;
	v->a[18962] = actions(67);
	v->a[18963] = 1;
	v->a[18964] = sym_variable_name;
	v->a[18965] = state(179);
	v->a[18966] = 1;
	v->a[18967] = sym_command_name;
	v->a[18968] = state(385);
	v->a[18969] = 1;
	v->a[18970] = aux_sym_command_repeat1;
	v->a[18971] = state(555);
	v->a[18972] = 1;
	v->a[18973] = sym_concatenation;
	v->a[18974] = state(602);
	v->a[18975] = 1;
	v->a[18976] = sym_variable_assignment;
	v->a[18977] = state(1039);
	v->a[18978] = 1;
	v->a[18979] = sym_subshell;
	small_parse_table_949(v);
}

void	small_parse_table_949(t_small_parse_table_array *v)
{
	v->a[18980] = state(1065);
	v->a[18981] = 1;
	v->a[18982] = sym_command;
	v->a[18983] = state(1083);
	v->a[18984] = 1;
	v->a[18985] = sym_file_redirect;
	v->a[18986] = actions(59);
	v->a[18987] = 3;
	v->a[18988] = sym_raw_string;
	v->a[18989] = sym_number;
	v->a[18990] = sym_word;
	v->a[18991] = actions(758);
	v->a[18992] = 3;
	v->a[18993] = anon_sym_LT;
	v->a[18994] = anon_sym_GT;
	v->a[18995] = anon_sym_GT_GT;
	v->a[18996] = state(401);
	v->a[18997] = 5;
	v->a[18998] = sym_arithmetic_expansion;
	v->a[18999] = sym_string;
	small_parse_table_950(v);
}

/* EOF small_parse_table_189.c */
