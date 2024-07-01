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
	v->a[25900] = actions(1001);
	v->a[25901] = 3;
	v->a[25902] = sym_raw_string;
	v->a[25903] = sym_number;
	v->a[25904] = sym_word;
	v->a[25905] = state(628);
	v->a[25906] = 5;
	v->a[25907] = sym_arithmetic_expansion;
	v->a[25908] = sym_string;
	v->a[25909] = sym_simple_expansion;
	v->a[25910] = sym_expansion;
	v->a[25911] = sym_command_substitution;
	v->a[25912] = actions(604);
	v->a[25913] = 18;
	v->a[25914] = anon_sym_PIPE;
	v->a[25915] = anon_sym_SEMI_SEMI;
	v->a[25916] = anon_sym_AMP_AMP;
	v->a[25917] = anon_sym_PIPE_PIPE;
	v->a[25918] = anon_sym_LT;
	v->a[25919] = anon_sym_GT;
	small_parse_table_1296(v);
}

void	small_parse_table_1296(t_small_parse_table_array *v)
{
	v->a[25920] = anon_sym_GT_GT;
	v->a[25921] = anon_sym_LT_AMP;
	v->a[25922] = anon_sym_GT_AMP;
	v->a[25923] = anon_sym_GT_PIPE;
	v->a[25924] = anon_sym_LT_AMP_DASH;
	v->a[25925] = anon_sym_GT_AMP_DASH;
	v->a[25926] = anon_sym_LT_LT;
	v->a[25927] = anon_sym_LT_LT_DASH;
	v->a[25928] = aux_sym_heredoc_redirect_token1;
	v->a[25929] = anon_sym_AMP;
	v->a[25930] = anon_sym_BQUOTE;
	v->a[25931] = anon_sym_SEMI;
	v->a[25932] = 3;
	v->a[25933] = actions(870);
	v->a[25934] = 1;
	v->a[25935] = sym_comment;
	v->a[25936] = actions(1003);
	v->a[25937] = 13;
	v->a[25938] = anon_sym_PIPE;
	v->a[25939] = anon_sym_EQ;
	small_parse_table_1297(v);
}

void	small_parse_table_1297(t_small_parse_table_array *v)
{
	v->a[25940] = anon_sym_LT;
	v->a[25941] = anon_sym_GT;
	v->a[25942] = anon_sym_GT_GT;
	v->a[25943] = anon_sym_LT_LT;
	v->a[25944] = anon_sym_CARET;
	v->a[25945] = anon_sym_AMP;
	v->a[25946] = anon_sym_PLUS;
	v->a[25947] = anon_sym_DASH;
	v->a[25948] = anon_sym_STAR;
	v->a[25949] = anon_sym_SLASH;
	v->a[25950] = anon_sym_PERCENT;
	v->a[25951] = actions(1005);
	v->a[25952] = 21;
	v->a[25953] = anon_sym_AMP_AMP;
	v->a[25954] = anon_sym_PIPE_PIPE;
	v->a[25955] = anon_sym_RPAREN_RPAREN;
	v->a[25956] = anon_sym_PLUS_EQ;
	v->a[25957] = anon_sym_DASH_EQ;
	v->a[25958] = anon_sym_STAR_EQ;
	v->a[25959] = anon_sym_SLASH_EQ;
	small_parse_table_1298(v);
}

void	small_parse_table_1298(t_small_parse_table_array *v)
{
	v->a[25960] = anon_sym_PERCENT_EQ;
	v->a[25961] = anon_sym_LT_LT_EQ;
	v->a[25962] = anon_sym_GT_GT_EQ;
	v->a[25963] = anon_sym_AMP_EQ;
	v->a[25964] = anon_sym_CARET_EQ;
	v->a[25965] = anon_sym_PIPE_EQ;
	v->a[25966] = anon_sym_EQ_EQ;
	v->a[25967] = anon_sym_BANG_EQ;
	v->a[25968] = anon_sym_LT_EQ;
	v->a[25969] = anon_sym_GT_EQ;
	v->a[25970] = anon_sym_QMARK;
	v->a[25971] = anon_sym_COLON;
	v->a[25972] = anon_sym_PLUS_PLUS2;
	v->a[25973] = anon_sym_DASH_DASH2;
	v->a[25974] = 3;
	v->a[25975] = actions(870);
	v->a[25976] = 1;
	v->a[25977] = sym_comment;
	v->a[25978] = actions(1007);
	v->a[25979] = 13;
	small_parse_table_1299(v);
}

void	small_parse_table_1299(t_small_parse_table_array *v)
{
	v->a[25980] = anon_sym_PIPE;
	v->a[25981] = anon_sym_EQ;
	v->a[25982] = anon_sym_LT;
	v->a[25983] = anon_sym_GT;
	v->a[25984] = anon_sym_GT_GT;
	v->a[25985] = anon_sym_LT_LT;
	v->a[25986] = anon_sym_CARET;
	v->a[25987] = anon_sym_AMP;
	v->a[25988] = anon_sym_PLUS;
	v->a[25989] = anon_sym_DASH;
	v->a[25990] = anon_sym_STAR;
	v->a[25991] = anon_sym_SLASH;
	v->a[25992] = anon_sym_PERCENT;
	v->a[25993] = actions(1009);
	v->a[25994] = 21;
	v->a[25995] = anon_sym_AMP_AMP;
	v->a[25996] = anon_sym_PIPE_PIPE;
	v->a[25997] = anon_sym_RPAREN_RPAREN;
	v->a[25998] = anon_sym_PLUS_EQ;
	v->a[25999] = anon_sym_DASH_EQ;
	small_parse_table_1300(v);
}

/* EOF small_parse_table_259.c */
