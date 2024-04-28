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
	v->a[25900] = actions(4086);
	v->a[25901] = 1;
	v->a[25902] = aux_sym_number_token1;
	v->a[25903] = actions(4088);
	v->a[25904] = 1;
	v->a[25905] = aux_sym_number_token2;
	v->a[25906] = actions(4090);
	v->a[25907] = 1;
	v->a[25908] = anon_sym_DOLLAR_LBRACE;
	v->a[25909] = actions(4092);
	v->a[25910] = 1;
	v->a[25911] = anon_sym_DOLLAR_LPAREN;
	v->a[25912] = actions(4094);
	v->a[25913] = 1;
	v->a[25914] = anon_sym_BQUOTE;
	v->a[25915] = actions(4096);
	v->a[25916] = 1;
	v->a[25917] = anon_sym_DOLLAR_BQUOTE;
	v->a[25918] = actions(4102);
	v->a[25919] = 1;
	small_parse_table_1296(v);
}

void	small_parse_table_1296(t_small_parse_table_array *v)
{
	v->a[25920] = sym__brace_start;
	v->a[25921] = actions(4123);
	v->a[25922] = 1;
	v->a[25923] = sym__special_character;
	v->a[25924] = actions(4245);
	v->a[25925] = 1;
	v->a[25926] = sym_test_operator;
	v->a[25927] = state(4546);
	v->a[25928] = 1;
	v->a[25929] = aux_sym__literal_repeat1;
	v->a[25930] = state(4907);
	v->a[25931] = 1;
	v->a[25932] = sym_concatenation;
	v->a[25933] = actions(4076);
	v->a[25934] = 2;
	v->a[25935] = anon_sym_LPAREN_LPAREN;
	v->a[25936] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25937] = actions(4098);
	v->a[25938] = 2;
	v->a[25939] = anon_sym_LT_LPAREN;
	small_parse_table_1297(v);
}

void	small_parse_table_1297(t_small_parse_table_array *v)
{
	v->a[25940] = anon_sym_GT_LPAREN;
	v->a[25941] = actions(2500);
	v->a[25942] = 3;
	v->a[25943] = sym_file_descriptor;
	v->a[25944] = ts_builtin_sym_end;
	v->a[25945] = aux_sym_heredoc_redirect_token1;
	v->a[25946] = actions(4243);
	v->a[25947] = 3;
	v->a[25948] = sym_raw_string;
	v->a[25949] = sym_ansi_c_string;
	v->a[25950] = sym_word;
	v->a[25951] = state(4614);
	v->a[25952] = 9;
	v->a[25953] = sym_arithmetic_expansion;
	v->a[25954] = sym_brace_expression;
	v->a[25955] = sym_string;
	v->a[25956] = sym_translated_string;
	v->a[25957] = sym_number;
	v->a[25958] = sym_simple_expansion;
	v->a[25959] = sym_expansion;
	small_parse_table_1298(v);
}

void	small_parse_table_1298(t_small_parse_table_array *v)
{
	v->a[25960] = sym_command_substitution;
	v->a[25961] = sym_process_substitution;
	v->a[25962] = actions(2498);
	v->a[25963] = 19;
	v->a[25964] = anon_sym_SEMI;
	v->a[25965] = anon_sym_PIPE_PIPE;
	v->a[25966] = anon_sym_AMP_AMP;
	v->a[25967] = anon_sym_PIPE;
	v->a[25968] = anon_sym_AMP;
	v->a[25969] = anon_sym_LT;
	v->a[25970] = anon_sym_GT;
	v->a[25971] = anon_sym_LT_LT;
	v->a[25972] = anon_sym_GT_GT;
	v->a[25973] = anon_sym_SEMI_SEMI;
	v->a[25974] = anon_sym_PIPE_AMP;
	v->a[25975] = anon_sym_AMP_GT;
	v->a[25976] = anon_sym_AMP_GT_GT;
	v->a[25977] = anon_sym_LT_AMP;
	v->a[25978] = anon_sym_GT_AMP;
	v->a[25979] = anon_sym_GT_PIPE;
	small_parse_table_1299(v);
}

void	small_parse_table_1299(t_small_parse_table_array *v)
{
	v->a[25980] = anon_sym_LT_AMP_DASH;
	v->a[25981] = anon_sym_GT_AMP_DASH;
	v->a[25982] = anon_sym_LT_LT_DASH;
	v->a[25983] = 8;
	v->a[25984] = actions(3);
	v->a[25985] = 1;
	v->a[25986] = sym_comment;
	v->a[25987] = actions(4115);
	v->a[25988] = 1;
	v->a[25989] = anon_sym_DQUOTE;
	v->a[25990] = actions(4119);
	v->a[25991] = 1;
	v->a[25992] = sym_variable_name;
	v->a[25993] = state(2334);
	v->a[25994] = 1;
	v->a[25995] = sym_string;
	v->a[25996] = actions(4117);
	v->a[25997] = 2;
	v->a[25998] = aux_sym__simple_variable_name_token1;
	v->a[25999] = aux_sym__multiline_variable_name_token1;
	small_parse_table_1300(v);
}

/* EOF small_parse_table_259.c */
