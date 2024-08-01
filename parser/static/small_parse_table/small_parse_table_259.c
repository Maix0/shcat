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
	v->a[25901] = anon_sym_DOLLAR;
	v->a[25902] = actions(57);
	v->a[25903] = 1;
	v->a[25904] = anon_sym_DQUOTE;
	v->a[25905] = actions(61);
	v->a[25906] = 1;
	v->a[25907] = anon_sym_DOLLAR_LBRACE;
	v->a[25908] = actions(63);
	v->a[25909] = 1;
	v->a[25910] = anon_sym_DOLLAR_LPAREN;
	v->a[25911] = actions(65);
	v->a[25912] = 1;
	v->a[25913] = anon_sym_BQUOTE;
	v->a[25914] = actions(341);
	v->a[25915] = 1;
	v->a[25916] = sym_variable_name;
	v->a[25917] = state(253);
	v->a[25918] = 1;
	v->a[25919] = sym_command_name;
	small_parse_table_1296(v);
}

void	small_parse_table_1296(t_small_parse_table_array *v)
{
	v->a[25920] = state(555);
	v->a[25921] = 1;
	v->a[25922] = sym_concatenation;
	v->a[25923] = state(1083);
	v->a[25924] = 1;
	v->a[25925] = sym_file_redirect;
	v->a[25926] = state(792);
	v->a[25927] = 2;
	v->a[25928] = sym_variable_assignment;
	v->a[25929] = aux_sym_command_repeat1;
	v->a[25930] = actions(337);
	v->a[25931] = 3;
	v->a[25932] = sym_raw_string;
	v->a[25933] = sym_number;
	v->a[25934] = sym_word;
	v->a[25935] = actions(758);
	v->a[25936] = 3;
	v->a[25937] = anon_sym_LT;
	v->a[25938] = anon_sym_GT;
	v->a[25939] = anon_sym_GT_GT;
	small_parse_table_1297(v);
}

void	small_parse_table_1297(t_small_parse_table_array *v)
{
	v->a[25940] = state(525);
	v->a[25941] = 5;
	v->a[25942] = sym_arithmetic_expansion;
	v->a[25943] = sym_string;
	v->a[25944] = sym_simple_expansion;
	v->a[25945] = sym_expansion;
	v->a[25946] = sym_command_substitution;
	v->a[25947] = 4;
	v->a[25948] = actions(3);
	v->a[25949] = 1;
	v->a[25950] = sym_comment;
	v->a[25951] = actions(1044);
	v->a[25952] = 1;
	v->a[25953] = sym_variable_name;
	v->a[25954] = actions(1042);
	v->a[25955] = 2;
	v->a[25956] = anon_sym_RPAREN;
	v->a[25957] = anon_sym_SEMI_SEMI;
	v->a[25958] = actions(1040);
	v->a[25959] = 20;
	small_parse_table_1298(v);
}

void	small_parse_table_1298(t_small_parse_table_array *v)
{
	v->a[25960] = anon_sym_for;
	v->a[25961] = anon_sym_while;
	v->a[25962] = anon_sym_until;
	v->a[25963] = anon_sym_if;
	v->a[25964] = anon_sym_case;
	v->a[25965] = anon_sym_LPAREN;
	v->a[25966] = anon_sym_LBRACE;
	v->a[25967] = anon_sym_BANG;
	v->a[25968] = anon_sym_LT;
	v->a[25969] = anon_sym_GT;
	v->a[25970] = anon_sym_GT_GT;
	v->a[25971] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25972] = anon_sym_DOLLAR;
	v->a[25973] = anon_sym_DQUOTE;
	v->a[25974] = sym_raw_string;
	v->a[25975] = sym_number;
	v->a[25976] = anon_sym_DOLLAR_LBRACE;
	v->a[25977] = anon_sym_DOLLAR_LPAREN;
	v->a[25978] = anon_sym_BQUOTE;
	v->a[25979] = sym_word;
	small_parse_table_1299(v);
}

void	small_parse_table_1299(t_small_parse_table_array *v)
{
	v->a[25980] = 3;
	v->a[25981] = actions(3);
	v->a[25982] = 1;
	v->a[25983] = sym_comment;
	v->a[25984] = actions(1116);
	v->a[25985] = 2;
	v->a[25986] = sym__concat;
	v->a[25987] = sym_variable_name;
	v->a[25988] = actions(1114);
	v->a[25989] = 21;
	v->a[25990] = anon_sym_esac;
	v->a[25991] = anon_sym_PIPE;
	v->a[25992] = anon_sym_SEMI_SEMI;
	v->a[25993] = anon_sym_AMP_AMP;
	v->a[25994] = anon_sym_PIPE_PIPE;
	v->a[25995] = anon_sym_LT;
	v->a[25996] = anon_sym_GT;
	v->a[25997] = anon_sym_GT_GT;
	v->a[25998] = anon_sym_LT_LT;
	v->a[25999] = aux_sym_heredoc_redirect_token1;
	small_parse_table_1300(v);
}

/* EOF small_parse_table_259.c */
