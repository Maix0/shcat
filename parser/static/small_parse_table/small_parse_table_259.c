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
	v->a[25900] = anon_sym_AMP_GT_GT;
	v->a[25901] = anon_sym_LT_AMP;
	v->a[25902] = anon_sym_GT_AMP;
	v->a[25903] = anon_sym_GT_PIPE;
	v->a[25904] = anon_sym_LT_AMP_DASH;
	v->a[25905] = anon_sym_GT_AMP_DASH;
	v->a[25906] = anon_sym_LT_LT;
	v->a[25907] = anon_sym_LT_LT_DASH;
	v->a[25908] = aux_sym_heredoc_redirect_token1;
	v->a[25909] = anon_sym_AMP;
	v->a[25910] = anon_sym_BQUOTE;
	v->a[25911] = anon_sym_SEMI;
	v->a[25912] = 12;
	v->a[25913] = actions(3);
	v->a[25914] = 1;
	v->a[25915] = sym_comment;
	v->a[25916] = actions(824);
	v->a[25917] = 1;
	v->a[25918] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25919] = actions(826);
	small_parse_table_1296(v);
}

void	small_parse_table_1296(t_small_parse_table_array *v)
{
	v->a[25920] = 1;
	v->a[25921] = anon_sym_DOLLAR;
	v->a[25922] = actions(828);
	v->a[25923] = 1;
	v->a[25924] = anon_sym_DQUOTE;
	v->a[25925] = actions(830);
	v->a[25926] = 1;
	v->a[25927] = anon_sym_DOLLAR_LBRACE;
	v->a[25928] = actions(832);
	v->a[25929] = 1;
	v->a[25930] = anon_sym_DOLLAR_LPAREN;
	v->a[25931] = actions(834);
	v->a[25932] = 1;
	v->a[25933] = anon_sym_BQUOTE;
	v->a[25934] = state(1376);
	v->a[25935] = 1;
	v->a[25936] = sym_concatenation;
	v->a[25937] = actions(717);
	v->a[25938] = 2;
	v->a[25939] = sym_file_descriptor;
	small_parse_table_1297(v);
}

void	small_parse_table_1297(t_small_parse_table_array *v)
{
	v->a[25940] = ts_builtin_sym_end;
	v->a[25941] = actions(939);
	v->a[25942] = 3;
	v->a[25943] = sym_raw_string;
	v->a[25944] = sym_number;
	v->a[25945] = sym_word;
	v->a[25946] = state(1213);
	v->a[25947] = 5;
	v->a[25948] = sym_arithmetic_expansion;
	v->a[25949] = sym_string;
	v->a[25950] = sym_simple_expansion;
	v->a[25951] = sym_expansion;
	v->a[25952] = sym_command_substitution;
	v->a[25953] = actions(719);
	v->a[25954] = 19;
	v->a[25955] = anon_sym_PIPE;
	v->a[25956] = anon_sym_SEMI_SEMI;
	v->a[25957] = anon_sym_AMP_AMP;
	v->a[25958] = anon_sym_PIPE_PIPE;
	v->a[25959] = anon_sym_LT;
	small_parse_table_1298(v);
}

void	small_parse_table_1298(t_small_parse_table_array *v)
{
	v->a[25960] = anon_sym_GT;
	v->a[25961] = anon_sym_GT_GT;
	v->a[25962] = anon_sym_AMP_GT;
	v->a[25963] = anon_sym_AMP_GT_GT;
	v->a[25964] = anon_sym_LT_AMP;
	v->a[25965] = anon_sym_GT_AMP;
	v->a[25966] = anon_sym_GT_PIPE;
	v->a[25967] = anon_sym_LT_AMP_DASH;
	v->a[25968] = anon_sym_GT_AMP_DASH;
	v->a[25969] = anon_sym_LT_LT;
	v->a[25970] = anon_sym_LT_LT_DASH;
	v->a[25971] = aux_sym_heredoc_redirect_token1;
	v->a[25972] = anon_sym_AMP;
	v->a[25973] = anon_sym_SEMI;
	v->a[25974] = 20;
	v->a[25975] = actions(3);
	v->a[25976] = 1;
	v->a[25977] = sym_comment;
	v->a[25978] = actions(884);
	v->a[25979] = 1;
	small_parse_table_1299(v);
}

void	small_parse_table_1299(t_small_parse_table_array *v)
{
	v->a[25980] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25981] = actions(886);
	v->a[25982] = 1;
	v->a[25983] = anon_sym_DOLLAR;
	v->a[25984] = actions(888);
	v->a[25985] = 1;
	v->a[25986] = anon_sym_DQUOTE;
	v->a[25987] = actions(890);
	v->a[25988] = 1;
	v->a[25989] = anon_sym_DOLLAR_LBRACE;
	v->a[25990] = actions(892);
	v->a[25991] = 1;
	v->a[25992] = anon_sym_DOLLAR_LPAREN;
	v->a[25993] = actions(894);
	v->a[25994] = 1;
	v->a[25995] = anon_sym_BQUOTE;
	v->a[25996] = actions(896);
	v->a[25997] = 1;
	v->a[25998] = sym_file_descriptor;
	v->a[25999] = actions(941);
	small_parse_table_1300(v);
}

/* EOF small_parse_table_259.c */
