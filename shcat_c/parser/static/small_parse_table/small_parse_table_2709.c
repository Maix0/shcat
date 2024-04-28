/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2709.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13545(t_small_parse_table_array *v)
{
	v->a[270900] = anon_sym_GT_AMP;
	v->a[270901] = anon_sym_GT_PIPE;
	v->a[270902] = anon_sym_LT_AMP_DASH;
	v->a[270903] = anon_sym_GT_AMP_DASH;
	v->a[270904] = anon_sym_LT_LT_DASH;
	v->a[270905] = 4;
	v->a[270906] = actions(3);
	v->a[270907] = 1;
	v->a[270908] = sym_comment;
	v->a[270909] = actions(4272);
	v->a[270910] = 2;
	v->a[270911] = sym_file_descriptor;
	v->a[270912] = aux_sym_heredoc_redirect_token1;
	v->a[270913] = state(4986);
	v->a[270914] = 3;
	v->a[270915] = sym_file_redirect;
	v->a[270916] = sym_heredoc_redirect;
	v->a[270917] = aux_sym_redirected_statement_repeat1;
	v->a[270918] = actions(4270);
	v->a[270919] = 19;
	small_parse_table_13546(v);
}

void	small_parse_table_13546(t_small_parse_table_array *v)
{
	v->a[270920] = anon_sym_SEMI;
	v->a[270921] = anon_sym_PIPE_PIPE;
	v->a[270922] = anon_sym_AMP_AMP;
	v->a[270923] = anon_sym_PIPE;
	v->a[270924] = anon_sym_AMP;
	v->a[270925] = anon_sym_LT;
	v->a[270926] = anon_sym_GT;
	v->a[270927] = anon_sym_LT_LT;
	v->a[270928] = anon_sym_GT_GT;
	v->a[270929] = anon_sym_SEMI_SEMI;
	v->a[270930] = anon_sym_PIPE_AMP;
	v->a[270931] = anon_sym_AMP_GT;
	v->a[270932] = anon_sym_AMP_GT_GT;
	v->a[270933] = anon_sym_LT_AMP;
	v->a[270934] = anon_sym_GT_AMP;
	v->a[270935] = anon_sym_GT_PIPE;
	v->a[270936] = anon_sym_LT_AMP_DASH;
	v->a[270937] = anon_sym_GT_AMP_DASH;
	v->a[270938] = anon_sym_LT_LT_DASH;
	v->a[270939] = 8;
	small_parse_table_13547(v);
}

void	small_parse_table_13547(t_small_parse_table_array *v)
{
	v->a[270940] = actions(3);
	v->a[270941] = 1;
	v->a[270942] = sym_comment;
	v->a[270943] = actions(11431);
	v->a[270944] = 1;
	v->a[270945] = aux_sym_heredoc_redirect_token1;
	v->a[270946] = actions(12286);
	v->a[270947] = 1;
	v->a[270948] = sym_file_descriptor;
	v->a[270949] = actions(11920);
	v->a[270950] = 2;
	v->a[270951] = anon_sym_LT_LT;
	v->a[270952] = anon_sym_LT_LT_DASH;
	v->a[270953] = actions(12283);
	v->a[270954] = 2;
	v->a[270955] = anon_sym_LT_AMP_DASH;
	v->a[270956] = anon_sym_GT_AMP_DASH;
	v->a[270957] = state(4998);
	v->a[270958] = 3;
	v->a[270959] = sym_file_redirect;
	small_parse_table_13548(v);
}

void	small_parse_table_13548(t_small_parse_table_array *v)
{
	v->a[270960] = sym_heredoc_redirect;
	v->a[270961] = aux_sym_redirected_statement_repeat1;
	v->a[270962] = actions(11420);
	v->a[270963] = 7;
	v->a[270964] = anon_sym_SEMI;
	v->a[270965] = anon_sym_PIPE_PIPE;
	v->a[270966] = anon_sym_AMP_AMP;
	v->a[270967] = anon_sym_PIPE;
	v->a[270968] = anon_sym_AMP;
	v->a[270969] = anon_sym_SEMI_SEMI;
	v->a[270970] = anon_sym_PIPE_AMP;
	v->a[270971] = actions(12280);
	v->a[270972] = 8;
	v->a[270973] = anon_sym_LT;
	v->a[270974] = anon_sym_GT;
	v->a[270975] = anon_sym_GT_GT;
	v->a[270976] = anon_sym_AMP_GT;
	v->a[270977] = anon_sym_AMP_GT_GT;
	v->a[270978] = anon_sym_LT_AMP;
	v->a[270979] = anon_sym_GT_AMP;
	small_parse_table_13549(v);
}

void	small_parse_table_13549(t_small_parse_table_array *v)
{
	v->a[270980] = anon_sym_GT_PIPE;
	v->a[270981] = 18;
	v->a[270982] = actions(71);
	v->a[270983] = 1;
	v->a[270984] = sym_comment;
	v->a[270985] = actions(11256);
	v->a[270986] = 1;
	v->a[270987] = anon_sym_DOLLAR;
	v->a[270988] = actions(11262);
	v->a[270989] = 1;
	v->a[270990] = aux_sym_number_token2;
	v->a[270991] = actions(12233);
	v->a[270992] = 1;
	v->a[270993] = anon_sym_LPAREN;
	v->a[270994] = actions(12235);
	v->a[270995] = 1;
	v->a[270996] = aux_sym__c_word_token1;
	v->a[270997] = actions(12237);
	v->a[270998] = 1;
	v->a[270999] = anon_sym_DQUOTE;
	small_parse_table_13550(v);
}

/* EOF small_parse_table_2709.c */
