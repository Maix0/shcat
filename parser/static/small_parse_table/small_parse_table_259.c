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
	v->a[25900] = actions(925);
	v->a[25901] = 2;
	v->a[25902] = anon_sym_AMP_AMP;
	v->a[25903] = anon_sym_PIPE_PIPE;
	v->a[25904] = actions(929);
	v->a[25905] = 2;
	v->a[25906] = anon_sym_LT_AMP_DASH;
	v->a[25907] = anon_sym_GT_AMP_DASH;
	v->a[25908] = state(1509);
	v->a[25909] = 2;
	v->a[25910] = sym_file_redirect;
	v->a[25911] = aux_sym_redirected_statement_repeat2;
	v->a[25912] = state(1614);
	v->a[25913] = 6;
	v->a[25914] = sym_arithmetic_expansion;
	v->a[25915] = sym_string;
	v->a[25916] = sym_number;
	v->a[25917] = sym_simple_expansion;
	v->a[25918] = sym_expansion;
	v->a[25919] = sym_command_substitution;
	small_parse_table_1296(v);
}

void	small_parse_table_1296(t_small_parse_table_array *v)
{
	v->a[25920] = actions(927);
	v->a[25921] = 8;
	v->a[25922] = anon_sym_LT;
	v->a[25923] = anon_sym_GT;
	v->a[25924] = anon_sym_GT_GT;
	v->a[25925] = anon_sym_AMP_GT;
	v->a[25926] = anon_sym_AMP_GT_GT;
	v->a[25927] = anon_sym_LT_AMP;
	v->a[25928] = anon_sym_GT_AMP;
	v->a[25929] = anon_sym_GT_PIPE;
	v->a[25930] = 5;
	v->a[25931] = actions(3);
	v->a[25932] = 1;
	v->a[25933] = sym_comment;
	v->a[25934] = state(699);
	v->a[25935] = 1;
	v->a[25936] = sym_concatenation;
	v->a[25937] = actions(750);
	v->a[25938] = 2;
	v->a[25939] = sym_file_descriptor;
	small_parse_table_1297(v);
}

void	small_parse_table_1297(t_small_parse_table_array *v)
{
	v->a[25940] = sym_variable_name;
	v->a[25941] = state(462);
	v->a[25942] = 6;
	v->a[25943] = sym_arithmetic_expansion;
	v->a[25944] = sym_string;
	v->a[25945] = sym_number;
	v->a[25946] = sym_simple_expansion;
	v->a[25947] = sym_expansion;
	v->a[25948] = sym_command_substitution;
	v->a[25949] = actions(748);
	v->a[25950] = 29;
	v->a[25951] = anon_sym_PIPE;
	v->a[25952] = anon_sym_SEMI_SEMI;
	v->a[25953] = anon_sym_AMP_AMP;
	v->a[25954] = anon_sym_PIPE_PIPE;
	v->a[25955] = anon_sym_LT;
	v->a[25956] = anon_sym_GT;
	v->a[25957] = anon_sym_GT_GT;
	v->a[25958] = anon_sym_AMP_GT;
	v->a[25959] = anon_sym_AMP_GT_GT;
	small_parse_table_1298(v);
}

void	small_parse_table_1298(t_small_parse_table_array *v)
{
	v->a[25960] = anon_sym_LT_AMP;
	v->a[25961] = anon_sym_GT_AMP;
	v->a[25962] = anon_sym_GT_PIPE;
	v->a[25963] = anon_sym_LT_AMP_DASH;
	v->a[25964] = anon_sym_GT_AMP_DASH;
	v->a[25965] = anon_sym_LT_LT;
	v->a[25966] = anon_sym_LT_LT_DASH;
	v->a[25967] = aux_sym_heredoc_redirect_token1;
	v->a[25968] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25969] = anon_sym_AMP;
	v->a[25970] = anon_sym_DOLLAR;
	v->a[25971] = anon_sym_DQUOTE;
	v->a[25972] = sym_raw_string;
	v->a[25973] = aux_sym_number_token1;
	v->a[25974] = aux_sym_number_token2;
	v->a[25975] = anon_sym_DOLLAR_LBRACE;
	v->a[25976] = anon_sym_DOLLAR_LPAREN;
	v->a[25977] = anon_sym_BQUOTE;
	v->a[25978] = sym_word;
	v->a[25979] = anon_sym_SEMI;
	small_parse_table_1299(v);
}

void	small_parse_table_1299(t_small_parse_table_array *v)
{
	v->a[25980] = 14;
	v->a[25981] = actions(3);
	v->a[25982] = 1;
	v->a[25983] = sym_comment;
	v->a[25984] = actions(662);
	v->a[25985] = 1;
	v->a[25986] = sym_file_descriptor;
	v->a[25987] = actions(846);
	v->a[25988] = 1;
	v->a[25989] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25990] = actions(849);
	v->a[25991] = 1;
	v->a[25992] = anon_sym_DOLLAR;
	v->a[25993] = actions(852);
	v->a[25994] = 1;
	v->a[25995] = anon_sym_DQUOTE;
	v->a[25996] = actions(855);
	v->a[25997] = 1;
	v->a[25998] = aux_sym_number_token1;
	v->a[25999] = actions(858);
	small_parse_table_1300(v);
}

/* EOF small_parse_table_259.c */
