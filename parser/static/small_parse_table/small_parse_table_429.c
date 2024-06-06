/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_429.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2145(t_small_parse_table_array *v)
{
	v->a[42900] = anon_sym_PIPE_AMP;
	v->a[42901] = anon_sym_AMP_AMP;
	v->a[42902] = anon_sym_PIPE_PIPE;
	v->a[42903] = anon_sym_LT;
	v->a[42904] = anon_sym_GT;
	v->a[42905] = anon_sym_GT_GT;
	v->a[42906] = anon_sym_AMP_GT;
	v->a[42907] = anon_sym_AMP_GT_GT;
	v->a[42908] = anon_sym_LT_AMP;
	v->a[42909] = anon_sym_GT_AMP;
	v->a[42910] = anon_sym_GT_PIPE;
	v->a[42911] = anon_sym_LT_AMP_DASH;
	v->a[42912] = anon_sym_GT_AMP_DASH;
	v->a[42913] = anon_sym_LT_LT;
	v->a[42914] = anon_sym_LT_LT_DASH;
	v->a[42915] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[42916] = anon_sym_AMP;
	v->a[42917] = aux_sym_concatenation_token1;
	v->a[42918] = anon_sym_DOLLAR;
	v->a[42919] = sym__special_character;
	small_parse_table_2146(v);
}

void	small_parse_table_2146(t_small_parse_table_array *v)
{
	v->a[42920] = anon_sym_DQUOTE;
	v->a[42921] = sym_raw_string;
	v->a[42922] = aux_sym_number_token1;
	v->a[42923] = aux_sym_number_token2;
	v->a[42924] = anon_sym_DOLLAR_LBRACE;
	v->a[42925] = anon_sym_DOLLAR_LPAREN;
	v->a[42926] = anon_sym_BQUOTE;
	v->a[42927] = anon_sym_DOLLAR_BQUOTE;
	v->a[42928] = aux_sym__simple_variable_name_token1;
	v->a[42929] = sym_word;
	v->a[42930] = anon_sym_SEMI;
	v->a[42931] = 3;
	v->a[42932] = actions(3);
	v->a[42933] = 1;
	v->a[42934] = sym_comment;
	v->a[42935] = actions(2778);
	v->a[42936] = 5;
	v->a[42937] = sym_file_descriptor;
	v->a[42938] = sym__concat;
	v->a[42939] = sym_test_operator;
	small_parse_table_2147(v);
}

void	small_parse_table_2147(t_small_parse_table_array *v)
{
	v->a[42940] = sym__brace_start;
	v->a[42941] = aux_sym_heredoc_redirect_token1;
	v->a[42942] = actions(2776);
	v->a[42943] = 35;
	v->a[42944] = anon_sym_PIPE;
	v->a[42945] = anon_sym_SEMI_SEMI;
	v->a[42946] = anon_sym_SEMI_AMP;
	v->a[42947] = anon_sym_SEMI_SEMI_AMP;
	v->a[42948] = anon_sym_PIPE_AMP;
	v->a[42949] = anon_sym_AMP_AMP;
	v->a[42950] = anon_sym_PIPE_PIPE;
	v->a[42951] = anon_sym_LT;
	v->a[42952] = anon_sym_GT;
	v->a[42953] = anon_sym_GT_GT;
	v->a[42954] = anon_sym_AMP_GT;
	v->a[42955] = anon_sym_AMP_GT_GT;
	v->a[42956] = anon_sym_LT_AMP;
	v->a[42957] = anon_sym_GT_AMP;
	v->a[42958] = anon_sym_GT_PIPE;
	v->a[42959] = anon_sym_LT_AMP_DASH;
	small_parse_table_2148(v);
}

void	small_parse_table_2148(t_small_parse_table_array *v)
{
	v->a[42960] = anon_sym_GT_AMP_DASH;
	v->a[42961] = anon_sym_LT_LT;
	v->a[42962] = anon_sym_LT_LT_DASH;
	v->a[42963] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[42964] = anon_sym_AMP;
	v->a[42965] = aux_sym_concatenation_token1;
	v->a[42966] = anon_sym_DOLLAR;
	v->a[42967] = sym__special_character;
	v->a[42968] = anon_sym_DQUOTE;
	v->a[42969] = sym_raw_string;
	v->a[42970] = aux_sym_number_token1;
	v->a[42971] = aux_sym_number_token2;
	v->a[42972] = anon_sym_DOLLAR_LBRACE;
	v->a[42973] = anon_sym_DOLLAR_LPAREN;
	v->a[42974] = anon_sym_BQUOTE;
	v->a[42975] = anon_sym_DOLLAR_BQUOTE;
	v->a[42976] = aux_sym__simple_variable_name_token1;
	v->a[42977] = sym_word;
	v->a[42978] = anon_sym_SEMI;
	v->a[42979] = 3;
	small_parse_table_2149(v);
}

void	small_parse_table_2149(t_small_parse_table_array *v)
{
	v->a[42980] = actions(3);
	v->a[42981] = 1;
	v->a[42982] = sym_comment;
	v->a[42983] = actions(3050);
	v->a[42984] = 7;
	v->a[42985] = sym_file_descriptor;
	v->a[42986] = sym__concat;
	v->a[42987] = sym_variable_name;
	v->a[42988] = sym_test_operator;
	v->a[42989] = sym__brace_start;
	v->a[42990] = ts_builtin_sym_end;
	v->a[42991] = aux_sym_heredoc_redirect_token1;
	v->a[42992] = actions(3048);
	v->a[42993] = 33;
	v->a[42994] = anon_sym_PIPE;
	v->a[42995] = anon_sym_SEMI_SEMI;
	v->a[42996] = anon_sym_PIPE_AMP;
	v->a[42997] = anon_sym_AMP_AMP;
	v->a[42998] = anon_sym_PIPE_PIPE;
	v->a[42999] = anon_sym_LT;
	small_parse_table_2150(v);
}

/* EOF small_parse_table_429.c */
