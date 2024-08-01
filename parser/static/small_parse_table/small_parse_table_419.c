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
	v->a[41900] = anon_sym_SEMI;
	v->a[41901] = actions(762);
	v->a[41902] = 2;
	v->a[41903] = anon_sym_AMP_AMP;
	v->a[41904] = anon_sym_PIPE_PIPE;
	v->a[41905] = actions(1880);
	v->a[41906] = 3;
	v->a[41907] = anon_sym_LT;
	v->a[41908] = anon_sym_GT;
	v->a[41909] = anon_sym_GT_GT;
	v->a[41910] = state(925);
	v->a[41911] = 3;
	v->a[41912] = sym_file_redirect;
	v->a[41913] = sym_heredoc_redirect;
	v->a[41914] = aux_sym_redirected_statement_repeat1;
	v->a[41915] = 6;
	v->a[41916] = actions(3);
	v->a[41917] = 1;
	v->a[41918] = sym_comment;
	v->a[41919] = actions(1890);
	small_parse_table_2096(v);
}

void	small_parse_table_2096(t_small_parse_table_array *v)
{
	v->a[41920] = 1;
	v->a[41921] = aux_sym_concatenation_token1;
	v->a[41922] = actions(1892);
	v->a[41923] = 1;
	v->a[41924] = sym__concat;
	v->a[41925] = state(886);
	v->a[41926] = 1;
	v->a[41927] = aux_sym_concatenation_repeat1;
	v->a[41928] = actions(917);
	v->a[41929] = 2;
	v->a[41930] = sym_variable_name;
	v->a[41931] = aux_sym_heredoc_redirect_token1;
	v->a[41932] = actions(919);
	v->a[41933] = 10;
	v->a[41934] = anon_sym_PIPE;
	v->a[41935] = anon_sym_RPAREN;
	v->a[41936] = anon_sym_SEMI_SEMI;
	v->a[41937] = anon_sym_AMP_AMP;
	v->a[41938] = anon_sym_PIPE_PIPE;
	v->a[41939] = anon_sym_LT;
	small_parse_table_2097(v);
}

void	small_parse_table_2097(t_small_parse_table_array *v)
{
	v->a[41940] = anon_sym_GT;
	v->a[41941] = anon_sym_GT_GT;
	v->a[41942] = anon_sym_LT_LT;
	v->a[41943] = anon_sym_SEMI;
	v->a[41944] = 10;
	v->a[41945] = actions(3);
	v->a[41946] = 1;
	v->a[41947] = sym_comment;
	v->a[41948] = actions(580);
	v->a[41949] = 1;
	v->a[41950] = anon_sym_PIPE;
	v->a[41951] = actions(597);
	v->a[41952] = 1;
	v->a[41953] = anon_sym_LT_LT;
	v->a[41954] = actions(691);
	v->a[41955] = 1;
	v->a[41956] = ts_builtin_sym_end;
	v->a[41957] = actions(1874);
	v->a[41958] = 1;
	v->a[41959] = aux_sym_heredoc_redirect_token1;
	small_parse_table_2098(v);
}

void	small_parse_table_2098(t_small_parse_table_array *v)
{
	v->a[41960] = state(461);
	v->a[41961] = 1;
	v->a[41962] = sym_terminator;
	v->a[41963] = actions(693);
	v->a[41964] = 2;
	v->a[41965] = anon_sym_SEMI_SEMI;
	v->a[41966] = anon_sym_SEMI;
	v->a[41967] = actions(695);
	v->a[41968] = 2;
	v->a[41969] = anon_sym_AMP_AMP;
	v->a[41970] = anon_sym_PIPE_PIPE;
	v->a[41971] = actions(1872);
	v->a[41972] = 3;
	v->a[41973] = anon_sym_LT;
	v->a[41974] = anon_sym_GT;
	v->a[41975] = anon_sym_GT_GT;
	v->a[41976] = state(922);
	v->a[41977] = 3;
	v->a[41978] = sym_file_redirect;
	v->a[41979] = sym_heredoc_redirect;
	small_parse_table_2099(v);
}

void	small_parse_table_2099(t_small_parse_table_array *v)
{
	v->a[41980] = aux_sym_redirected_statement_repeat1;
	v->a[41981] = 10;
	v->a[41982] = actions(3);
	v->a[41983] = 1;
	v->a[41984] = sym_comment;
	v->a[41985] = actions(580);
	v->a[41986] = 1;
	v->a[41987] = anon_sym_PIPE;
	v->a[41988] = actions(584);
	v->a[41989] = 1;
	v->a[41990] = anon_sym_LT_LT;
	v->a[41991] = actions(586);
	v->a[41992] = 1;
	v->a[41993] = anon_sym_SEMI;
	v->a[41994] = actions(1878);
	v->a[41995] = 1;
	v->a[41996] = aux_sym_heredoc_redirect_token1;
	v->a[41997] = state(330);
	v->a[41998] = 1;
	v->a[41999] = sym_terminator;
	small_parse_table_2100(v);
}

/* EOF small_parse_table_419.c */
