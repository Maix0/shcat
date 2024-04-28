/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1919.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9595(t_small_parse_table_array *v)
{
	v->a[191900] = sym_file_descriptor;
	v->a[191901] = sym_variable_name;
	v->a[191902] = sym_test_operator;
	v->a[191903] = sym__brace_start;
	v->a[191904] = anon_sym_LPAREN_LPAREN;
	v->a[191905] = anon_sym_GT_GT;
	v->a[191906] = anon_sym_AMP_GT_GT;
	v->a[191907] = anon_sym_GT_PIPE;
	v->a[191908] = anon_sym_LT_AMP_DASH;
	v->a[191909] = anon_sym_GT_AMP_DASH;
	v->a[191910] = anon_sym_LT_LT_LT;
	v->a[191911] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[191912] = anon_sym_DOLLAR_LBRACK;
	v->a[191913] = anon_sym_DQUOTE;
	v->a[191914] = sym_raw_string;
	v->a[191915] = sym_ansi_c_string;
	v->a[191916] = anon_sym_DOLLAR_LBRACE;
	v->a[191917] = anon_sym_BQUOTE;
	v->a[191918] = anon_sym_DOLLAR_BQUOTE;
	v->a[191919] = anon_sym_LT_LPAREN;
	small_parse_table_9596(v);
}

void	small_parse_table_9596(t_small_parse_table_array *v)
{
	v->a[191920] = anon_sym_GT_LPAREN;
	v->a[191921] = 8;
	v->a[191922] = actions(3);
	v->a[191923] = 1;
	v->a[191924] = sym_comment;
	v->a[191925] = actions(1241);
	v->a[191926] = 1;
	v->a[191927] = sym_file_descriptor;
	v->a[191928] = actions(3791);
	v->a[191929] = 1;
	v->a[191930] = anon_sym_DQUOTE;
	v->a[191931] = actions(7444);
	v->a[191932] = 1;
	v->a[191933] = sym_variable_name;
	v->a[191934] = state(4389);
	v->a[191935] = 1;
	v->a[191936] = sym_string;
	v->a[191937] = actions(7442);
	v->a[191938] = 2;
	v->a[191939] = aux_sym__simple_variable_name_token1;
	small_parse_table_9597(v);
}

void	small_parse_table_9597(t_small_parse_table_array *v)
{
	v->a[191940] = aux_sym__multiline_variable_name_token1;
	v->a[191941] = actions(7440);
	v->a[191942] = 9;
	v->a[191943] = anon_sym_DASH;
	v->a[191944] = anon_sym_STAR;
	v->a[191945] = anon_sym_BANG;
	v->a[191946] = anon_sym_QMARK;
	v->a[191947] = anon_sym_DOLLAR;
	v->a[191948] = anon_sym_POUND;
	v->a[191949] = anon_sym_AT2;
	v->a[191950] = anon_sym_0;
	v->a[191951] = anon_sym__;
	v->a[191952] = actions(1239);
	v->a[191953] = 18;
	v->a[191954] = anon_sym_PIPE_PIPE;
	v->a[191955] = anon_sym_AMP_AMP;
	v->a[191956] = anon_sym_PIPE;
	v->a[191957] = anon_sym_LT;
	v->a[191958] = anon_sym_GT;
	v->a[191959] = anon_sym_LT_LT;
	small_parse_table_9598(v);
}

void	small_parse_table_9598(t_small_parse_table_array *v)
{
	v->a[191960] = anon_sym_GT_GT;
	v->a[191961] = anon_sym_PIPE_AMP;
	v->a[191962] = anon_sym_AMP_GT;
	v->a[191963] = anon_sym_AMP_GT_GT;
	v->a[191964] = anon_sym_LT_AMP;
	v->a[191965] = anon_sym_GT_AMP;
	v->a[191966] = anon_sym_GT_PIPE;
	v->a[191967] = anon_sym_LT_AMP_DASH;
	v->a[191968] = anon_sym_GT_AMP_DASH;
	v->a[191969] = anon_sym_LT_LT_DASH;
	v->a[191970] = aux_sym_heredoc_redirect_token1;
	v->a[191971] = anon_sym_LT_LT_LT;
	v->a[191972] = 5;
	v->a[191973] = actions(71);
	v->a[191974] = 1;
	v->a[191975] = sym_comment;
	v->a[191976] = actions(8552);
	v->a[191977] = 1;
	v->a[191978] = sym__special_character;
	v->a[191979] = state(3544);
	small_parse_table_9599(v);
}

void	small_parse_table_9599(t_small_parse_table_array *v)
{
	v->a[191980] = 1;
	v->a[191981] = aux_sym__literal_repeat1;
	v->a[191982] = actions(5695);
	v->a[191983] = 10;
	v->a[191984] = anon_sym_LT;
	v->a[191985] = anon_sym_GT;
	v->a[191986] = anon_sym_AMP_GT;
	v->a[191987] = anon_sym_LT_AMP;
	v->a[191988] = anon_sym_GT_AMP;
	v->a[191989] = anon_sym_DOLLAR;
	v->a[191990] = aux_sym_number_token1;
	v->a[191991] = aux_sym_number_token2;
	v->a[191992] = anon_sym_DOLLAR_LPAREN;
	v->a[191993] = sym_word;
	v->a[191994] = actions(5697);
	v->a[191995] = 21;
	v->a[191996] = sym_file_descriptor;
	v->a[191997] = sym_variable_name;
	v->a[191998] = sym_test_operator;
	v->a[191999] = sym__brace_start;
	small_parse_table_9600(v);
}

/* EOF small_parse_table_1919.c */
