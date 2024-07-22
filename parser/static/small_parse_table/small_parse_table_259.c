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
	v->a[25900] = 1;
	v->a[25901] = anon_sym_AMP;
	v->a[25902] = actions(721);
	v->a[25903] = 1;
	v->a[25904] = anon_sym_QMARK;
	v->a[25905] = actions(723);
	v->a[25906] = 1;
	v->a[25907] = anon_sym_EQ;
	v->a[25908] = actions(958);
	v->a[25909] = 1;
	v->a[25910] = anon_sym_RPAREN_RPAREN;
	v->a[25911] = actions(499);
	v->a[25912] = 2;
	v->a[25913] = anon_sym_PLUS_PLUS2;
	v->a[25914] = anon_sym_DASH_DASH2;
	v->a[25915] = actions(658);
	v->a[25916] = 2;
	v->a[25917] = anon_sym_LT;
	v->a[25918] = anon_sym_GT;
	v->a[25919] = actions(660);
	small_parse_table_1296(v);
}

void	small_parse_table_1296(t_small_parse_table_array *v)
{
	v->a[25920] = 2;
	v->a[25921] = anon_sym_GT_GT;
	v->a[25922] = anon_sym_LT_LT;
	v->a[25923] = actions(668);
	v->a[25924] = 2;
	v->a[25925] = anon_sym_EQ_EQ;
	v->a[25926] = anon_sym_BANG_EQ;
	v->a[25927] = actions(670);
	v->a[25928] = 2;
	v->a[25929] = anon_sym_LT_EQ;
	v->a[25930] = anon_sym_GT_EQ;
	v->a[25931] = actions(672);
	v->a[25932] = 2;
	v->a[25933] = anon_sym_PLUS;
	v->a[25934] = anon_sym_DASH;
	v->a[25935] = actions(674);
	v->a[25936] = 3;
	v->a[25937] = anon_sym_STAR;
	v->a[25938] = anon_sym_SLASH;
	v->a[25939] = anon_sym_PERCENT;
	small_parse_table_1297(v);
}

void	small_parse_table_1297(t_small_parse_table_array *v)
{
	v->a[25940] = actions(802);
	v->a[25941] = 10;
	v->a[25942] = anon_sym_PLUS_EQ;
	v->a[25943] = anon_sym_DASH_EQ;
	v->a[25944] = anon_sym_STAR_EQ;
	v->a[25945] = anon_sym_SLASH_EQ;
	v->a[25946] = anon_sym_PERCENT_EQ;
	v->a[25947] = anon_sym_LT_LT_EQ;
	v->a[25948] = anon_sym_GT_GT_EQ;
	v->a[25949] = anon_sym_AMP_EQ;
	v->a[25950] = anon_sym_CARET_EQ;
	v->a[25951] = anon_sym_PIPE_EQ;
	v->a[25952] = 12;
	v->a[25953] = actions(3);
	v->a[25954] = 1;
	v->a[25955] = sym_comment;
	v->a[25956] = actions(678);
	v->a[25957] = 1;
	v->a[25958] = sym_file_descriptor;
	v->a[25959] = actions(962);
	small_parse_table_1298(v);
}

void	small_parse_table_1298(t_small_parse_table_array *v)
{
	v->a[25960] = 1;
	v->a[25961] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25962] = actions(964);
	v->a[25963] = 1;
	v->a[25964] = anon_sym_DOLLAR;
	v->a[25965] = actions(966);
	v->a[25966] = 1;
	v->a[25967] = anon_sym_DQUOTE;
	v->a[25968] = actions(968);
	v->a[25969] = 1;
	v->a[25970] = anon_sym_DOLLAR_LBRACE;
	v->a[25971] = actions(970);
	v->a[25972] = 1;
	v->a[25973] = anon_sym_DOLLAR_LPAREN;
	v->a[25974] = actions(972);
	v->a[25975] = 1;
	v->a[25976] = anon_sym_BQUOTE;
	v->a[25977] = state(256);
	v->a[25978] = 2;
	v->a[25979] = sym_concatenation;
	small_parse_table_1299(v);
}

void	small_parse_table_1299(t_small_parse_table_array *v)
{
	v->a[25980] = aux_sym_for_statement_repeat1;
	v->a[25981] = actions(960);
	v->a[25982] = 3;
	v->a[25983] = sym_raw_string;
	v->a[25984] = sym_number;
	v->a[25985] = sym_word;
	v->a[25986] = state(519);
	v->a[25987] = 5;
	v->a[25988] = sym_arithmetic_expansion;
	v->a[25989] = sym_string;
	v->a[25990] = sym_simple_expansion;
	v->a[25991] = sym_expansion;
	v->a[25992] = sym_command_substitution;
	v->a[25993] = actions(676);
	v->a[25994] = 16;
	v->a[25995] = anon_sym_PIPE;
	v->a[25996] = anon_sym_RPAREN;
	v->a[25997] = anon_sym_SEMI_SEMI;
	v->a[25998] = anon_sym_AMP_AMP;
	v->a[25999] = anon_sym_PIPE_PIPE;
	small_parse_table_1300(v);
}

/* EOF small_parse_table_259.c */
