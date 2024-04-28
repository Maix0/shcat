/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_419.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2095(t_small_parse_table_array *v)
{
	v->a[41900] = anon_sym_LT_LT_DASH;
	v->a[41901] = 12;
	v->a[41902] = actions(3);
	v->a[41903] = 1;
	v->a[41904] = sym_comment;
	v->a[41905] = actions(5103);
	v->a[41906] = 1;
	v->a[41907] = sym_variable_name;
	v->a[41908] = actions(5142);
	v->a[41909] = 1;
	v->a[41910] = aux_sym_heredoc_redirect_token1;
	v->a[41911] = state(6727);
	v->a[41912] = 1;
	v->a[41913] = sym_subscript;
	v->a[41914] = actions(4253);
	v->a[41915] = 2;
	v->a[41916] = anon_sym_PIPE;
	v->a[41917] = anon_sym_PIPE_AMP;
	v->a[41918] = actions(4692);
	v->a[41919] = 2;
	small_parse_table_2096(v);
}

void	small_parse_table_2096(t_small_parse_table_array *v)
{
	v->a[41920] = anon_sym_LT_LT;
	v->a[41921] = anon_sym_LT_LT_DASH;
	v->a[41922] = actions(5099);
	v->a[41923] = 2;
	v->a[41924] = anon_sym_PIPE_PIPE;
	v->a[41925] = anon_sym_AMP_AMP;
	v->a[41926] = state(4787);
	v->a[41927] = 2;
	v->a[41928] = sym_variable_assignment;
	v->a[41929] = aux_sym_variable_assignments_repeat1;
	v->a[41930] = actions(4261);
	v->a[41931] = 3;
	v->a[41932] = sym_file_descriptor;
	v->a[41933] = sym_test_operator;
	v->a[41934] = sym__brace_start;
	v->a[41935] = actions(5140);
	v->a[41936] = 3;
	v->a[41937] = anon_sym_SEMI;
	v->a[41938] = anon_sym_AMP;
	v->a[41939] = anon_sym_SEMI_SEMI;
	small_parse_table_2097(v);
}

void	small_parse_table_2097(t_small_parse_table_array *v)
{
	v->a[41940] = state(4986);
	v->a[41941] = 3;
	v->a[41942] = sym_file_redirect;
	v->a[41943] = sym_heredoc_redirect;
	v->a[41944] = aux_sym_redirected_statement_repeat1;
	v->a[41945] = actions(4247);
	v->a[41946] = 28;
	v->a[41947] = anon_sym_LPAREN_LPAREN;
	v->a[41948] = anon_sym_LT;
	v->a[41949] = anon_sym_GT;
	v->a[41950] = anon_sym_GT_GT;
	v->a[41951] = anon_sym_AMP_GT;
	v->a[41952] = anon_sym_AMP_GT_GT;
	v->a[41953] = anon_sym_LT_AMP;
	v->a[41954] = anon_sym_GT_AMP;
	v->a[41955] = anon_sym_GT_PIPE;
	v->a[41956] = anon_sym_LT_AMP_DASH;
	v->a[41957] = anon_sym_GT_AMP_DASH;
	v->a[41958] = anon_sym_LT_LT_LT;
	v->a[41959] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_2098(v);
}

void	small_parse_table_2098(t_small_parse_table_array *v)
{
	v->a[41960] = anon_sym_DOLLAR_LBRACK;
	v->a[41961] = anon_sym_DOLLAR;
	v->a[41962] = sym__special_character;
	v->a[41963] = anon_sym_DQUOTE;
	v->a[41964] = sym_raw_string;
	v->a[41965] = sym_ansi_c_string;
	v->a[41966] = aux_sym_number_token1;
	v->a[41967] = aux_sym_number_token2;
	v->a[41968] = anon_sym_DOLLAR_LBRACE;
	v->a[41969] = anon_sym_DOLLAR_LPAREN;
	v->a[41970] = anon_sym_BQUOTE;
	v->a[41971] = anon_sym_DOLLAR_BQUOTE;
	v->a[41972] = anon_sym_LT_LPAREN;
	v->a[41973] = anon_sym_GT_LPAREN;
	v->a[41974] = sym_word;
	v->a[41975] = 3;
	v->a[41976] = actions(3);
	v->a[41977] = 1;
	v->a[41978] = sym_comment;
	v->a[41979] = actions(1253);
	small_parse_table_2099(v);
}

void	small_parse_table_2099(t_small_parse_table_array *v)
{
	v->a[41980] = 6;
	v->a[41981] = sym_file_descriptor;
	v->a[41982] = sym__concat;
	v->a[41983] = sym_test_operator;
	v->a[41984] = sym__bare_dollar;
	v->a[41985] = sym__brace_start;
	v->a[41986] = aux_sym_heredoc_redirect_token1;
	v->a[41987] = actions(1251);
	v->a[41988] = 42;
	v->a[41989] = anon_sym_LPAREN_LPAREN;
	v->a[41990] = anon_sym_SEMI;
	v->a[41991] = anon_sym_PIPE_PIPE;
	v->a[41992] = anon_sym_AMP_AMP;
	v->a[41993] = anon_sym_PIPE;
	v->a[41994] = anon_sym_AMP;
	v->a[41995] = anon_sym_EQ_EQ;
	v->a[41996] = anon_sym_LT;
	v->a[41997] = anon_sym_GT;
	v->a[41998] = anon_sym_LT_LT;
	v->a[41999] = anon_sym_GT_GT;
	small_parse_table_2100(v);
}

/* EOF small_parse_table_419.c */
