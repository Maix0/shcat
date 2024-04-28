/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_69.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_345(t_small_parse_table_array *v)
{
	v->a[6900] = 1;
	v->a[6901] = sym_herestring_redirect;
	v->a[6902] = state(1716);
	v->a[6903] = 1;
	v->a[6904] = sym_concatenation;
	v->a[6905] = state(4911);
	v->a[6906] = 1;
	v->a[6907] = sym_subshell;
	v->a[6908] = actions(1408);
	v->a[6909] = 2;
	v->a[6910] = sym_file_descriptor;
	v->a[6911] = aux_sym_heredoc_redirect_token1;
	v->a[6912] = actions(1543);
	v->a[6913] = 2;
	v->a[6914] = anon_sym_LPAREN_LPAREN;
	v->a[6915] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[6916] = actions(1569);
	v->a[6917] = 2;
	v->a[6918] = anon_sym_LT_LPAREN;
	v->a[6919] = anon_sym_GT_LPAREN;
	small_parse_table_346(v);
}

void	small_parse_table_346(t_small_parse_table_array *v)
{
	v->a[6920] = actions(2418);
	v->a[6921] = 2;
	v->a[6922] = anon_sym_EQ_EQ;
	v->a[6923] = anon_sym_EQ_TILDE;
	v->a[6924] = actions(2416);
	v->a[6925] = 3;
	v->a[6926] = sym_raw_string;
	v->a[6927] = sym_ansi_c_string;
	v->a[6928] = sym_word;
	v->a[6929] = state(1794);
	v->a[6930] = 9;
	v->a[6931] = sym_arithmetic_expansion;
	v->a[6932] = sym_brace_expression;
	v->a[6933] = sym_string;
	v->a[6934] = sym_translated_string;
	v->a[6935] = sym_number;
	v->a[6936] = sym_simple_expansion;
	v->a[6937] = sym_expansion;
	v->a[6938] = sym_command_substitution;
	v->a[6939] = sym_process_substitution;
	small_parse_table_347(v);
}

void	small_parse_table_347(t_small_parse_table_array *v)
{
	v->a[6940] = actions(1404);
	v->a[6941] = 16;
	v->a[6942] = anon_sym_PIPE_PIPE;
	v->a[6943] = anon_sym_AMP_AMP;
	v->a[6944] = anon_sym_PIPE;
	v->a[6945] = anon_sym_LT;
	v->a[6946] = anon_sym_GT;
	v->a[6947] = anon_sym_LT_LT;
	v->a[6948] = anon_sym_GT_GT;
	v->a[6949] = anon_sym_PIPE_AMP;
	v->a[6950] = anon_sym_AMP_GT;
	v->a[6951] = anon_sym_AMP_GT_GT;
	v->a[6952] = anon_sym_LT_AMP;
	v->a[6953] = anon_sym_GT_AMP;
	v->a[6954] = anon_sym_GT_PIPE;
	v->a[6955] = anon_sym_LT_AMP_DASH;
	v->a[6956] = anon_sym_GT_AMP_DASH;
	v->a[6957] = anon_sym_LT_LT_DASH;
	v->a[6958] = 8;
	v->a[6959] = actions(3);
	small_parse_table_348(v);
}

void	small_parse_table_348(t_small_parse_table_array *v)
{
	v->a[6960] = 1;
	v->a[6961] = sym_comment;
	v->a[6962] = actions(2428);
	v->a[6963] = 1;
	v->a[6964] = anon_sym_DQUOTE;
	v->a[6965] = actions(2432);
	v->a[6966] = 1;
	v->a[6967] = sym_variable_name;
	v->a[6968] = state(1204);
	v->a[6969] = 1;
	v->a[6970] = sym_string;
	v->a[6971] = actions(2430);
	v->a[6972] = 2;
	v->a[6973] = aux_sym__simple_variable_name_token1;
	v->a[6974] = aux_sym__multiline_variable_name_token1;
	v->a[6975] = actions(1235);
	v->a[6976] = 3;
	v->a[6977] = sym_file_descriptor;
	v->a[6978] = sym_test_operator;
	v->a[6979] = sym__brace_start;
	small_parse_table_349(v);
}

void	small_parse_table_349(t_small_parse_table_array *v)
{
	v->a[6980] = actions(2426);
	v->a[6981] = 9;
	v->a[6982] = anon_sym_DASH;
	v->a[6983] = anon_sym_STAR;
	v->a[6984] = anon_sym_BANG;
	v->a[6985] = anon_sym_QMARK;
	v->a[6986] = anon_sym_DOLLAR;
	v->a[6987] = anon_sym_POUND;
	v->a[6988] = anon_sym_AT2;
	v->a[6989] = anon_sym_0;
	v->a[6990] = anon_sym__;
	v->a[6991] = actions(1227);
	v->a[6992] = 39;
	v->a[6993] = anon_sym_LPAREN_LPAREN;
	v->a[6994] = anon_sym_SEMI;
	v->a[6995] = anon_sym_PIPE_PIPE;
	v->a[6996] = anon_sym_AMP_AMP;
	v->a[6997] = anon_sym_PIPE;
	v->a[6998] = anon_sym_AMP;
	v->a[6999] = anon_sym_LT;
	small_parse_table_350(v);
}

/* EOF small_parse_table_69.c */
