/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_259.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1295(t_small_parse_table_array *v)
{
	v->a[25900] = anon_sym_GT_PIPE;
	v->a[25901] = anon_sym_LT_GT;
	v->a[25902] = anon_sym_LT_LT;
	v->a[25903] = anon_sym_LT_LT_DASH;
	v->a[25904] = aux_sym_heredoc_redirect_token1;
	v->a[25905] = 7;
	v->a[25906] = actions(3);
	v->a[25907] = 1;
	v->a[25908] = sym_comment;
	v->a[25909] = actions(975);
	v->a[25910] = 1;
	v->a[25911] = sym__bare_dollar;
	v->a[25912] = actions(985);
	v->a[25913] = 1;
	v->a[25914] = anon_sym_LPAREN;
	v->a[25915] = actions(987);
	v->a[25916] = 1;
	v->a[25917] = aux_sym_concatenation_token1;
	v->a[25918] = actions(989);
	v->a[25919] = 1;
	small_parse_table_1296(v);
}

void	small_parse_table_1296(t_small_parse_table_array *v)
{
	v->a[25920] = sym__concat;
	v->a[25921] = state(326);
	v->a[25922] = 1;
	v->a[25923] = aux_sym_concatenation_repeat1;
	v->a[25924] = actions(967);
	v->a[25925] = 25;
	v->a[25926] = anon_sym_PIPE;
	v->a[25927] = anon_sym_RPAREN;
	v->a[25928] = anon_sym_SEMI_SEMI;
	v->a[25929] = anon_sym_AMP_AMP;
	v->a[25930] = anon_sym_PIPE_PIPE;
	v->a[25931] = anon_sym_LT;
	v->a[25932] = anon_sym_GT;
	v->a[25933] = anon_sym_GT_GT;
	v->a[25934] = anon_sym_LT_AMP;
	v->a[25935] = anon_sym_GT_AMP;
	v->a[25936] = anon_sym_GT_PIPE;
	v->a[25937] = anon_sym_LT_GT;
	v->a[25938] = anon_sym_LT_LT;
	v->a[25939] = anon_sym_LT_LT_DASH;
	small_parse_table_1297(v);
}

void	small_parse_table_1297(t_small_parse_table_array *v)
{
	v->a[25940] = aux_sym_heredoc_redirect_token1;
	v->a[25941] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25942] = anon_sym_DOLLAR;
	v->a[25943] = anon_sym_DQUOTE;
	v->a[25944] = sym_raw_string;
	v->a[25945] = sym_number;
	v->a[25946] = anon_sym_DOLLAR_LBRACE;
	v->a[25947] = anon_sym_DOLLAR_LPAREN;
	v->a[25948] = anon_sym_BQUOTE;
	v->a[25949] = sym_word;
	v->a[25950] = anon_sym_SEMI;
	v->a[25951] = 13;
	v->a[25952] = actions(3);
	v->a[25953] = 1;
	v->a[25954] = sym_comment;
	v->a[25955] = actions(542);
	v->a[25956] = 1;
	v->a[25957] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25958] = actions(545);
	v->a[25959] = 1;
	small_parse_table_1298(v);
}

void	small_parse_table_1298(t_small_parse_table_array *v)
{
	v->a[25960] = anon_sym_DOLLAR;
	v->a[25961] = actions(548);
	v->a[25962] = 1;
	v->a[25963] = anon_sym_DQUOTE;
	v->a[25964] = actions(551);
	v->a[25965] = 1;
	v->a[25966] = anon_sym_DOLLAR_LBRACE;
	v->a[25967] = actions(554);
	v->a[25968] = 1;
	v->a[25969] = anon_sym_DOLLAR_LPAREN;
	v->a[25970] = actions(557);
	v->a[25971] = 1;
	v->a[25972] = anon_sym_BQUOTE;
	v->a[25973] = actions(560);
	v->a[25974] = 1;
	v->a[25975] = sym__bare_dollar;
	v->a[25976] = state(322);
	v->a[25977] = 1;
	v->a[25978] = aux_sym_command_repeat2;
	v->a[25979] = state(614);
	small_parse_table_1299(v);
}

void	small_parse_table_1299(t_small_parse_table_array *v)
{
	v->a[25980] = 1;
	v->a[25981] = sym_concatenation;
	v->a[25982] = actions(991);
	v->a[25983] = 3;
	v->a[25984] = sym_raw_string;
	v->a[25985] = sym_number;
	v->a[25986] = sym_word;
	v->a[25987] = state(570);
	v->a[25988] = 5;
	v->a[25989] = sym_arithmetic_expansion;
	v->a[25990] = sym_string;
	v->a[25991] = sym_simple_expansion;
	v->a[25992] = sym_expansion;
	v->a[25993] = sym_command_substitution;
	v->a[25994] = actions(506);
	v->a[25995] = 13;
	v->a[25996] = anon_sym_PIPE;
	v->a[25997] = anon_sym_AMP_AMP;
	v->a[25998] = anon_sym_PIPE_PIPE;
	v->a[25999] = anon_sym_LT;
	small_parse_table_1300(v);
}

/* EOF small_parse_table_259.c */
