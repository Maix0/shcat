/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_179.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_895(t_small_parse_table_array *v)
{
	v->a[17900] = anon_sym_AMP;
	v->a[17901] = anon_sym_LT;
	v->a[17902] = anon_sym_GT;
	v->a[17903] = anon_sym_LT_LT;
	v->a[17904] = anon_sym_GT_GT;
	v->a[17905] = anon_sym_SEMI_SEMI;
	v->a[17906] = anon_sym_PIPE_AMP;
	v->a[17907] = anon_sym_AMP_GT;
	v->a[17908] = anon_sym_AMP_GT_GT;
	v->a[17909] = anon_sym_LT_AMP;
	v->a[17910] = anon_sym_GT_AMP;
	v->a[17911] = anon_sym_GT_PIPE;
	v->a[17912] = anon_sym_LT_AMP_DASH;
	v->a[17913] = anon_sym_GT_AMP_DASH;
	v->a[17914] = anon_sym_LT_LT_DASH;
	v->a[17915] = aux_sym_heredoc_redirect_token1;
	v->a[17916] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[17917] = anon_sym_DOLLAR_LBRACK;
	v->a[17918] = sym__special_character;
	v->a[17919] = sym_raw_string;
	small_parse_table_896(v);
}

void	small_parse_table_896(t_small_parse_table_array *v)
{
	v->a[17920] = sym_ansi_c_string;
	v->a[17921] = aux_sym_number_token1;
	v->a[17922] = aux_sym_number_token2;
	v->a[17923] = anon_sym_DOLLAR_LBRACE;
	v->a[17924] = anon_sym_DOLLAR_LPAREN;
	v->a[17925] = anon_sym_BQUOTE;
	v->a[17926] = anon_sym_DOLLAR_BQUOTE;
	v->a[17927] = anon_sym_LT_LPAREN;
	v->a[17928] = anon_sym_GT_LPAREN;
	v->a[17929] = sym_word;
	v->a[17930] = 8;
	v->a[17931] = actions(3);
	v->a[17932] = 1;
	v->a[17933] = sym_comment;
	v->a[17934] = actions(3439);
	v->a[17935] = 1;
	v->a[17936] = anon_sym_DQUOTE;
	v->a[17937] = actions(3653);
	v->a[17938] = 1;
	v->a[17939] = sym_variable_name;
	small_parse_table_897(v);
}

void	small_parse_table_897(t_small_parse_table_array *v)
{
	v->a[17940] = state(1878);
	v->a[17941] = 1;
	v->a[17942] = sym_string;
	v->a[17943] = actions(3651);
	v->a[17944] = 2;
	v->a[17945] = aux_sym__simple_variable_name_token1;
	v->a[17946] = aux_sym__multiline_variable_name_token1;
	v->a[17947] = actions(1235);
	v->a[17948] = 4;
	v->a[17949] = sym_file_descriptor;
	v->a[17950] = sym_test_operator;
	v->a[17951] = sym__brace_start;
	v->a[17952] = ts_builtin_sym_end;
	v->a[17953] = actions(3649);
	v->a[17954] = 9;
	v->a[17955] = anon_sym_DASH;
	v->a[17956] = anon_sym_STAR;
	v->a[17957] = anon_sym_BANG;
	v->a[17958] = anon_sym_QMARK;
	v->a[17959] = anon_sym_DOLLAR;
	small_parse_table_898(v);
}

void	small_parse_table_898(t_small_parse_table_array *v)
{
	v->a[17960] = anon_sym_POUND;
	v->a[17961] = anon_sym_AT2;
	v->a[17962] = anon_sym_0;
	v->a[17963] = anon_sym__;
	v->a[17964] = actions(1227);
	v->a[17965] = 35;
	v->a[17966] = anon_sym_LPAREN_LPAREN;
	v->a[17967] = anon_sym_SEMI;
	v->a[17968] = anon_sym_PIPE_PIPE;
	v->a[17969] = anon_sym_AMP_AMP;
	v->a[17970] = anon_sym_PIPE;
	v->a[17971] = anon_sym_AMP;
	v->a[17972] = anon_sym_LT;
	v->a[17973] = anon_sym_GT;
	v->a[17974] = anon_sym_LT_LT;
	v->a[17975] = anon_sym_GT_GT;
	v->a[17976] = anon_sym_SEMI_SEMI;
	v->a[17977] = anon_sym_PIPE_AMP;
	v->a[17978] = anon_sym_AMP_GT;
	v->a[17979] = anon_sym_AMP_GT_GT;
	small_parse_table_899(v);
}

void	small_parse_table_899(t_small_parse_table_array *v)
{
	v->a[17980] = anon_sym_LT_AMP;
	v->a[17981] = anon_sym_GT_AMP;
	v->a[17982] = anon_sym_GT_PIPE;
	v->a[17983] = anon_sym_LT_AMP_DASH;
	v->a[17984] = anon_sym_GT_AMP_DASH;
	v->a[17985] = anon_sym_LT_LT_DASH;
	v->a[17986] = aux_sym_heredoc_redirect_token1;
	v->a[17987] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[17988] = anon_sym_DOLLAR_LBRACK;
	v->a[17989] = sym__special_character;
	v->a[17990] = sym_raw_string;
	v->a[17991] = sym_ansi_c_string;
	v->a[17992] = aux_sym_number_token1;
	v->a[17993] = aux_sym_number_token2;
	v->a[17994] = anon_sym_DOLLAR_LBRACE;
	v->a[17995] = anon_sym_DOLLAR_LPAREN;
	v->a[17996] = anon_sym_BQUOTE;
	v->a[17997] = anon_sym_DOLLAR_BQUOTE;
	v->a[17998] = anon_sym_LT_LPAREN;
	v->a[17999] = anon_sym_GT_LPAREN;
	small_parse_table_900(v);
}

/* EOF small_parse_table_179.c */
