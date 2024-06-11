/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_809.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4045(t_small_parse_table_array *v)
{
	v->a[80900] = anon_sym_esac;
	v->a[80901] = anon_sym_PIPE;
	v->a[80902] = anon_sym_SEMI_SEMI;
	v->a[80903] = anon_sym_AMP_AMP;
	v->a[80904] = anon_sym_PIPE_PIPE;
	v->a[80905] = anon_sym_LT;
	v->a[80906] = anon_sym_GT;
	v->a[80907] = anon_sym_GT_GT;
	v->a[80908] = anon_sym_AMP_GT;
	v->a[80909] = anon_sym_AMP_GT_GT;
	v->a[80910] = anon_sym_LT_AMP;
	v->a[80911] = anon_sym_GT_AMP;
	v->a[80912] = anon_sym_GT_PIPE;
	v->a[80913] = anon_sym_LT_AMP_DASH;
	v->a[80914] = anon_sym_GT_AMP_DASH;
	v->a[80915] = anon_sym_LT_LT;
	v->a[80916] = anon_sym_LT_LT_DASH;
	v->a[80917] = anon_sym_AMP;
	v->a[80918] = anon_sym_SEMI;
	v->a[80919] = 5;
	small_parse_table_4046(v);
}

void	small_parse_table_4046(t_small_parse_table_array *v)
{
	v->a[80920] = actions(3);
	v->a[80921] = 1;
	v->a[80922] = sym_comment;
	v->a[80923] = actions(2524);
	v->a[80924] = 1;
	v->a[80925] = sym_variable_name;
	v->a[80926] = actions(2522);
	v->a[80927] = 2;
	v->a[80928] = aux_sym__simple_variable_name_token1;
	v->a[80929] = aux_sym__multiline_variable_name_token1;
	v->a[80930] = actions(381);
	v->a[80931] = 9;
	v->a[80932] = aux_sym_heredoc_redirect_token1;
	v->a[80933] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[80934] = anon_sym_DQUOTE;
	v->a[80935] = sym_raw_string;
	v->a[80936] = sym_number;
	v->a[80937] = anon_sym_DOLLAR_LBRACE;
	v->a[80938] = anon_sym_DOLLAR_LPAREN;
	v->a[80939] = anon_sym_BQUOTE;
	small_parse_table_4047(v);
}

void	small_parse_table_4047(t_small_parse_table_array *v)
{
	v->a[80940] = sym_word;
	v->a[80941] = actions(2520);
	v->a[80942] = 9;
	v->a[80943] = anon_sym_BANG;
	v->a[80944] = anon_sym_DASH;
	v->a[80945] = anon_sym_STAR;
	v->a[80946] = anon_sym_QMARK;
	v->a[80947] = anon_sym_DOLLAR;
	v->a[80948] = anon_sym_POUND;
	v->a[80949] = anon_sym_AT;
	v->a[80950] = anon_sym_0;
	v->a[80951] = anon_sym__;
	v->a[80952] = 3;
	v->a[80953] = actions(3);
	v->a[80954] = 1;
	v->a[80955] = sym_comment;
	v->a[80956] = actions(543);
	v->a[80957] = 2;
	v->a[80958] = sym_file_descriptor;
	v->a[80959] = sym_variable_name;
	small_parse_table_4048(v);
}

void	small_parse_table_4048(t_small_parse_table_array *v)
{
	v->a[80960] = actions(541);
	v->a[80961] = 19;
	v->a[80962] = anon_sym_LT;
	v->a[80963] = anon_sym_GT;
	v->a[80964] = anon_sym_GT_GT;
	v->a[80965] = anon_sym_AMP_GT;
	v->a[80966] = anon_sym_AMP_GT_GT;
	v->a[80967] = anon_sym_LT_AMP;
	v->a[80968] = anon_sym_GT_AMP;
	v->a[80969] = anon_sym_GT_PIPE;
	v->a[80970] = anon_sym_LT_AMP_DASH;
	v->a[80971] = anon_sym_GT_AMP_DASH;
	v->a[80972] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[80973] = anon_sym_DOLLAR;
	v->a[80974] = anon_sym_DQUOTE;
	v->a[80975] = sym_raw_string;
	v->a[80976] = sym_number;
	v->a[80977] = anon_sym_DOLLAR_LBRACE;
	v->a[80978] = anon_sym_DOLLAR_LPAREN;
	v->a[80979] = anon_sym_BQUOTE;
	small_parse_table_4049(v);
}

void	small_parse_table_4049(t_small_parse_table_array *v)
{
	v->a[80980] = sym_word;
	v->a[80981] = 3;
	v->a[80982] = actions(3);
	v->a[80983] = 1;
	v->a[80984] = sym_comment;
	v->a[80985] = actions(2808);
	v->a[80986] = 2;
	v->a[80987] = sym_file_descriptor;
	v->a[80988] = aux_sym_heredoc_redirect_token1;
	v->a[80989] = actions(2810);
	v->a[80990] = 19;
	v->a[80991] = anon_sym_esac;
	v->a[80992] = anon_sym_PIPE;
	v->a[80993] = anon_sym_SEMI_SEMI;
	v->a[80994] = anon_sym_AMP_AMP;
	v->a[80995] = anon_sym_PIPE_PIPE;
	v->a[80996] = anon_sym_LT;
	v->a[80997] = anon_sym_GT;
	v->a[80998] = anon_sym_GT_GT;
	v->a[80999] = anon_sym_AMP_GT;
	small_parse_table_4050(v);
}

/* EOF small_parse_table_809.c */
