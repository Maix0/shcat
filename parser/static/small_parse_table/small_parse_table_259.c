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
	v->a[25900] = anon_sym_AMP;
	v->a[25901] = anon_sym_SEMI;
	v->a[25902] = 5;
	v->a[25903] = actions(3);
	v->a[25904] = 1;
	v->a[25905] = sym_comment;
	v->a[25906] = state(768);
	v->a[25907] = 1;
	v->a[25908] = sym_concatenation;
	v->a[25909] = actions(754);
	v->a[25910] = 2;
	v->a[25911] = sym_file_descriptor;
	v->a[25912] = sym_variable_name;
	v->a[25913] = state(460);
	v->a[25914] = 5;
	v->a[25915] = sym_arithmetic_expansion;
	v->a[25916] = sym_string;
	v->a[25917] = sym_simple_expansion;
	v->a[25918] = sym_expansion;
	v->a[25919] = sym_command_substitution;
	small_parse_table_1296(v);
}

void	small_parse_table_1296(t_small_parse_table_array *v)
{
	v->a[25920] = actions(756);
	v->a[25921] = 28;
	v->a[25922] = anon_sym_PIPE;
	v->a[25923] = anon_sym_SEMI_SEMI;
	v->a[25924] = anon_sym_AMP_AMP;
	v->a[25925] = anon_sym_PIPE_PIPE;
	v->a[25926] = anon_sym_LT;
	v->a[25927] = anon_sym_GT;
	v->a[25928] = anon_sym_GT_GT;
	v->a[25929] = anon_sym_AMP_GT;
	v->a[25930] = anon_sym_AMP_GT_GT;
	v->a[25931] = anon_sym_LT_AMP;
	v->a[25932] = anon_sym_GT_AMP;
	v->a[25933] = anon_sym_GT_PIPE;
	v->a[25934] = anon_sym_LT_AMP_DASH;
	v->a[25935] = anon_sym_GT_AMP_DASH;
	v->a[25936] = anon_sym_LT_LT;
	v->a[25937] = anon_sym_LT_LT_DASH;
	v->a[25938] = aux_sym_heredoc_redirect_token1;
	v->a[25939] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1297(v);
}

void	small_parse_table_1297(t_small_parse_table_array *v)
{
	v->a[25940] = anon_sym_AMP;
	v->a[25941] = anon_sym_DOLLAR;
	v->a[25942] = anon_sym_DQUOTE;
	v->a[25943] = sym_raw_string;
	v->a[25944] = sym_number;
	v->a[25945] = anon_sym_DOLLAR_LBRACE;
	v->a[25946] = anon_sym_DOLLAR_LPAREN;
	v->a[25947] = anon_sym_BQUOTE;
	v->a[25948] = sym_word;
	v->a[25949] = anon_sym_SEMI;
	v->a[25950] = 6;
	v->a[25951] = actions(3);
	v->a[25952] = 1;
	v->a[25953] = sym_comment;
	v->a[25954] = actions(385);
	v->a[25955] = 1;
	v->a[25956] = sym_file_descriptor;
	v->a[25957] = actions(925);
	v->a[25958] = 1;
	v->a[25959] = sym_variable_name;
	small_parse_table_1298(v);
}

void	small_parse_table_1298(t_small_parse_table_array *v)
{
	v->a[25960] = actions(923);
	v->a[25961] = 2;
	v->a[25962] = aux_sym__simple_variable_name_token1;
	v->a[25963] = aux_sym__multiline_variable_name_token1;
	v->a[25964] = actions(921);
	v->a[25965] = 9;
	v->a[25966] = anon_sym_BANG;
	v->a[25967] = anon_sym_DASH;
	v->a[25968] = anon_sym_STAR;
	v->a[25969] = anon_sym_QMARK;
	v->a[25970] = anon_sym_DOLLAR;
	v->a[25971] = anon_sym_POUND;
	v->a[25972] = anon_sym_AT;
	v->a[25973] = anon_sym_0;
	v->a[25974] = anon_sym__;
	v->a[25975] = actions(379);
	v->a[25976] = 23;
	v->a[25977] = anon_sym_PIPE;
	v->a[25978] = anon_sym_AMP_AMP;
	v->a[25979] = anon_sym_PIPE_PIPE;
	small_parse_table_1299(v);
}

void	small_parse_table_1299(t_small_parse_table_array *v)
{
	v->a[25980] = anon_sym_LT;
	v->a[25981] = anon_sym_GT;
	v->a[25982] = anon_sym_GT_GT;
	v->a[25983] = anon_sym_AMP_GT;
	v->a[25984] = anon_sym_AMP_GT_GT;
	v->a[25985] = anon_sym_LT_AMP;
	v->a[25986] = anon_sym_GT_AMP;
	v->a[25987] = anon_sym_GT_PIPE;
	v->a[25988] = anon_sym_LT_AMP_DASH;
	v->a[25989] = anon_sym_GT_AMP_DASH;
	v->a[25990] = anon_sym_LT_LT;
	v->a[25991] = anon_sym_LT_LT_DASH;
	v->a[25992] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25993] = anon_sym_DQUOTE;
	v->a[25994] = sym_raw_string;
	v->a[25995] = sym_number;
	v->a[25996] = anon_sym_DOLLAR_LBRACE;
	v->a[25997] = anon_sym_DOLLAR_LPAREN;
	v->a[25998] = anon_sym_BQUOTE;
	v->a[25999] = sym_word;
	small_parse_table_1300(v);
}

/* EOF small_parse_table_259.c */
