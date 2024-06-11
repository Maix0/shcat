/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_699.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3495(t_small_parse_table_array *v)
{
	v->a[69900] = anon_sym_PIPE;
	v->a[69901] = actions(2184);
	v->a[69902] = 1;
	v->a[69903] = sym_file_descriptor;
	v->a[69904] = actions(2294);
	v->a[69905] = 1;
	v->a[69906] = aux_sym_heredoc_redirect_token1;
	v->a[69907] = actions(2296);
	v->a[69908] = 1;
	v->a[69909] = anon_sym_AMP;
	v->a[69910] = actions(2298);
	v->a[69911] = 1;
	v->a[69912] = anon_sym_SEMI;
	v->a[69913] = actions(840);
	v->a[69914] = 2;
	v->a[69915] = anon_sym_esac;
	v->a[69916] = anon_sym_SEMI_SEMI;
	v->a[69917] = actions(842);
	v->a[69918] = 2;
	v->a[69919] = anon_sym_AMP_AMP;
	small_parse_table_3496(v);
}

void	small_parse_table_3496(t_small_parse_table_array *v)
{
	v->a[69920] = anon_sym_PIPE_PIPE;
	v->a[69921] = actions(844);
	v->a[69922] = 2;
	v->a[69923] = anon_sym_LT_LT;
	v->a[69924] = anon_sym_LT_LT_DASH;
	v->a[69925] = actions(2180);
	v->a[69926] = 2;
	v->a[69927] = anon_sym_LT_AMP_DASH;
	v->a[69928] = anon_sym_GT_AMP_DASH;
	v->a[69929] = state(1214);
	v->a[69930] = 3;
	v->a[69931] = sym_file_redirect;
	v->a[69932] = sym_heredoc_redirect;
	v->a[69933] = aux_sym_redirected_statement_repeat1;
	v->a[69934] = actions(2178);
	v->a[69935] = 8;
	v->a[69936] = anon_sym_LT;
	v->a[69937] = anon_sym_GT;
	v->a[69938] = anon_sym_GT_GT;
	v->a[69939] = anon_sym_AMP_GT;
	small_parse_table_3497(v);
}

void	small_parse_table_3497(t_small_parse_table_array *v)
{
	v->a[69940] = anon_sym_AMP_GT_GT;
	v->a[69941] = anon_sym_LT_AMP;
	v->a[69942] = anon_sym_GT_AMP;
	v->a[69943] = anon_sym_GT_PIPE;
	v->a[69944] = 6;
	v->a[69945] = actions(3);
	v->a[69946] = 1;
	v->a[69947] = sym_comment;
	v->a[69948] = actions(2128);
	v->a[69949] = 1;
	v->a[69950] = aux_sym_concatenation_token1;
	v->a[69951] = actions(2130);
	v->a[69952] = 1;
	v->a[69953] = sym__concat;
	v->a[69954] = state(1280);
	v->a[69955] = 1;
	v->a[69956] = aux_sym_concatenation_repeat1;
	v->a[69957] = actions(608);
	v->a[69958] = 2;
	v->a[69959] = sym_file_descriptor;
	small_parse_table_3498(v);
}

void	small_parse_table_3498(t_small_parse_table_array *v)
{
	v->a[69960] = sym_variable_name;
	v->a[69961] = actions(610);
	v->a[69962] = 19;
	v->a[69963] = anon_sym_LT;
	v->a[69964] = anon_sym_GT;
	v->a[69965] = anon_sym_GT_GT;
	v->a[69966] = anon_sym_AMP_GT;
	v->a[69967] = anon_sym_AMP_GT_GT;
	v->a[69968] = anon_sym_LT_AMP;
	v->a[69969] = anon_sym_GT_AMP;
	v->a[69970] = anon_sym_GT_PIPE;
	v->a[69971] = anon_sym_LT_AMP_DASH;
	v->a[69972] = anon_sym_GT_AMP_DASH;
	v->a[69973] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[69974] = anon_sym_DOLLAR;
	v->a[69975] = anon_sym_DQUOTE;
	v->a[69976] = sym_raw_string;
	v->a[69977] = sym_number;
	v->a[69978] = anon_sym_DOLLAR_LBRACE;
	v->a[69979] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_3499(v);
}

void	small_parse_table_3499(t_small_parse_table_array *v)
{
	v->a[69980] = anon_sym_BQUOTE;
	v->a[69981] = sym_word;
	v->a[69982] = 3;
	v->a[69983] = actions(3);
	v->a[69984] = 1;
	v->a[69985] = sym_comment;
	v->a[69986] = actions(1175);
	v->a[69987] = 4;
	v->a[69988] = sym_file_descriptor;
	v->a[69989] = sym_variable_name;
	v->a[69990] = ts_builtin_sym_end;
	v->a[69991] = aux_sym_heredoc_redirect_token1;
	v->a[69992] = actions(1173);
	v->a[69993] = 20;
	v->a[69994] = anon_sym_PIPE;
	v->a[69995] = anon_sym_RPAREN;
	v->a[69996] = anon_sym_SEMI_SEMI;
	v->a[69997] = anon_sym_AMP_AMP;
	v->a[69998] = anon_sym_PIPE_PIPE;
	v->a[69999] = anon_sym_LT;
	small_parse_table_3500(v);
}

/* EOF small_parse_table_699.c */
