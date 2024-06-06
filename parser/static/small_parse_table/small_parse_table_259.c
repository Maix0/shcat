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
	v->a[25900] = sym__special_character;
	v->a[25901] = anon_sym_DQUOTE;
	v->a[25902] = sym_raw_string;
	v->a[25903] = aux_sym_number_token1;
	v->a[25904] = aux_sym_number_token2;
	v->a[25905] = anon_sym_DOLLAR_LBRACE;
	v->a[25906] = anon_sym_DOLLAR_LPAREN;
	v->a[25907] = anon_sym_BQUOTE;
	v->a[25908] = anon_sym_DOLLAR_BQUOTE;
	v->a[25909] = sym_word;
	v->a[25910] = anon_sym_SEMI;
	v->a[25911] = 5;
	v->a[25912] = actions(3);
	v->a[25913] = 1;
	v->a[25914] = sym_comment;
	v->a[25915] = actions(3199);
	v->a[25916] = 1;
	v->a[25917] = sym__special_character;
	v->a[25918] = state(627);
	v->a[25919] = 1;
	small_parse_table_1296(v);
}

void	small_parse_table_1296(t_small_parse_table_array *v)
{
	v->a[25920] = aux_sym__literal_repeat1;
	v->a[25921] = actions(3197);
	v->a[25922] = 5;
	v->a[25923] = sym_file_descriptor;
	v->a[25924] = sym_variable_name;
	v->a[25925] = sym_test_operator;
	v->a[25926] = sym__brace_start;
	v->a[25927] = aux_sym_heredoc_redirect_token1;
	v->a[25928] = actions(3195);
	v->a[25929] = 34;
	v->a[25930] = anon_sym_esac;
	v->a[25931] = anon_sym_PIPE;
	v->a[25932] = anon_sym_SEMI_SEMI;
	v->a[25933] = anon_sym_SEMI_AMP;
	v->a[25934] = anon_sym_SEMI_SEMI_AMP;
	v->a[25935] = anon_sym_PIPE_AMP;
	v->a[25936] = anon_sym_AMP_AMP;
	v->a[25937] = anon_sym_PIPE_PIPE;
	v->a[25938] = anon_sym_LT;
	v->a[25939] = anon_sym_GT;
	small_parse_table_1297(v);
}

void	small_parse_table_1297(t_small_parse_table_array *v)
{
	v->a[25940] = anon_sym_GT_GT;
	v->a[25941] = anon_sym_AMP_GT;
	v->a[25942] = anon_sym_AMP_GT_GT;
	v->a[25943] = anon_sym_LT_AMP;
	v->a[25944] = anon_sym_GT_AMP;
	v->a[25945] = anon_sym_GT_PIPE;
	v->a[25946] = anon_sym_LT_AMP_DASH;
	v->a[25947] = anon_sym_GT_AMP_DASH;
	v->a[25948] = anon_sym_LT_LT;
	v->a[25949] = anon_sym_LT_LT_DASH;
	v->a[25950] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25951] = anon_sym_AMP;
	v->a[25952] = anon_sym_DOLLAR;
	v->a[25953] = anon_sym_DQUOTE;
	v->a[25954] = sym_raw_string;
	v->a[25955] = aux_sym_number_token1;
	v->a[25956] = aux_sym_number_token2;
	v->a[25957] = anon_sym_DOLLAR_LBRACE;
	v->a[25958] = anon_sym_DOLLAR_LPAREN;
	v->a[25959] = anon_sym_BQUOTE;
	small_parse_table_1298(v);
}

void	small_parse_table_1298(t_small_parse_table_array *v)
{
	v->a[25960] = anon_sym_DOLLAR_BQUOTE;
	v->a[25961] = aux_sym__simple_variable_name_token1;
	v->a[25962] = sym_word;
	v->a[25963] = anon_sym_SEMI;
	v->a[25964] = 3;
	v->a[25965] = actions(3);
	v->a[25966] = 1;
	v->a[25967] = sym_comment;
	v->a[25968] = actions(3066);
	v->a[25969] = 5;
	v->a[25970] = sym_file_descriptor;
	v->a[25971] = sym__concat;
	v->a[25972] = sym_test_operator;
	v->a[25973] = sym__brace_start;
	v->a[25974] = aux_sym_heredoc_redirect_token1;
	v->a[25975] = actions(3064);
	v->a[25976] = 36;
	v->a[25977] = anon_sym_esac;
	v->a[25978] = anon_sym_PIPE;
	v->a[25979] = anon_sym_SEMI_SEMI;
	small_parse_table_1299(v);
}

void	small_parse_table_1299(t_small_parse_table_array *v)
{
	v->a[25980] = anon_sym_SEMI_AMP;
	v->a[25981] = anon_sym_SEMI_SEMI_AMP;
	v->a[25982] = anon_sym_PIPE_AMP;
	v->a[25983] = anon_sym_AMP_AMP;
	v->a[25984] = anon_sym_PIPE_PIPE;
	v->a[25985] = anon_sym_LT;
	v->a[25986] = anon_sym_GT;
	v->a[25987] = anon_sym_GT_GT;
	v->a[25988] = anon_sym_AMP_GT;
	v->a[25989] = anon_sym_AMP_GT_GT;
	v->a[25990] = anon_sym_LT_AMP;
	v->a[25991] = anon_sym_GT_AMP;
	v->a[25992] = anon_sym_GT_PIPE;
	v->a[25993] = anon_sym_LT_AMP_DASH;
	v->a[25994] = anon_sym_GT_AMP_DASH;
	v->a[25995] = anon_sym_LT_LT;
	v->a[25996] = anon_sym_LT_LT_DASH;
	v->a[25997] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25998] = anon_sym_AMP;
	v->a[25999] = aux_sym_concatenation_token1;
	small_parse_table_1300(v);
}

/* EOF small_parse_table_259.c */
