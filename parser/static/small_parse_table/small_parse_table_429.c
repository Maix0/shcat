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
	v->a[42900] = state(970);
	v->a[42901] = 2;
	v->a[42902] = sym_variable_assignment;
	v->a[42903] = aux_sym__variable_assignments_repeat1;
	v->a[42904] = actions(576);
	v->a[42905] = 12;
	v->a[42906] = anon_sym_LT;
	v->a[42907] = anon_sym_GT;
	v->a[42908] = anon_sym_GT_GT;
	v->a[42909] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[42910] = anon_sym_DOLLAR;
	v->a[42911] = anon_sym_DQUOTE;
	v->a[42912] = sym_raw_string;
	v->a[42913] = sym_number;
	v->a[42914] = anon_sym_DOLLAR_LBRACE;
	v->a[42915] = anon_sym_DOLLAR_LPAREN;
	v->a[42916] = anon_sym_BQUOTE;
	v->a[42917] = sym_word;
	v->a[42918] = 10;
	v->a[42919] = actions(3);
	small_parse_table_2146(v);
}

void	small_parse_table_2146(t_small_parse_table_array *v)
{
	v->a[42920] = 1;
	v->a[42921] = sym_comment;
	v->a[42922] = actions(580);
	v->a[42923] = 1;
	v->a[42924] = anon_sym_PIPE;
	v->a[42925] = actions(591);
	v->a[42926] = 1;
	v->a[42927] = anon_sym_RPAREN;
	v->a[42928] = actions(597);
	v->a[42929] = 1;
	v->a[42930] = anon_sym_LT_LT;
	v->a[42931] = actions(1870);
	v->a[42932] = 1;
	v->a[42933] = aux_sym_heredoc_redirect_token1;
	v->a[42934] = state(386);
	v->a[42935] = 1;
	v->a[42936] = sym_terminator;
	v->a[42937] = actions(593);
	v->a[42938] = 2;
	v->a[42939] = anon_sym_SEMI_SEMI;
	small_parse_table_2147(v);
}

void	small_parse_table_2147(t_small_parse_table_array *v)
{
	v->a[42940] = anon_sym_SEMI;
	v->a[42941] = actions(595);
	v->a[42942] = 2;
	v->a[42943] = anon_sym_AMP_AMP;
	v->a[42944] = anon_sym_PIPE_PIPE;
	v->a[42945] = actions(1868);
	v->a[42946] = 3;
	v->a[42947] = anon_sym_LT;
	v->a[42948] = anon_sym_GT;
	v->a[42949] = anon_sym_GT_GT;
	v->a[42950] = state(916);
	v->a[42951] = 3;
	v->a[42952] = sym_file_redirect;
	v->a[42953] = sym_heredoc_redirect;
	v->a[42954] = aux_sym_redirected_statement_repeat1;
	v->a[42955] = 10;
	v->a[42956] = actions(3);
	v->a[42957] = 1;
	v->a[42958] = sym_comment;
	v->a[42959] = actions(580);
	small_parse_table_2148(v);
}

void	small_parse_table_2148(t_small_parse_table_array *v)
{
	v->a[42960] = 1;
	v->a[42961] = anon_sym_PIPE;
	v->a[42962] = actions(597);
	v->a[42963] = 1;
	v->a[42964] = anon_sym_LT_LT;
	v->a[42965] = actions(716);
	v->a[42966] = 1;
	v->a[42967] = ts_builtin_sym_end;
	v->a[42968] = actions(1874);
	v->a[42969] = 1;
	v->a[42970] = aux_sym_heredoc_redirect_token1;
	v->a[42971] = state(446);
	v->a[42972] = 1;
	v->a[42973] = sym_terminator;
	v->a[42974] = actions(693);
	v->a[42975] = 2;
	v->a[42976] = anon_sym_SEMI_SEMI;
	v->a[42977] = anon_sym_SEMI;
	v->a[42978] = actions(695);
	v->a[42979] = 2;
	small_parse_table_2149(v);
}

void	small_parse_table_2149(t_small_parse_table_array *v)
{
	v->a[42980] = anon_sym_AMP_AMP;
	v->a[42981] = anon_sym_PIPE_PIPE;
	v->a[42982] = actions(1872);
	v->a[42983] = 3;
	v->a[42984] = anon_sym_LT;
	v->a[42985] = anon_sym_GT;
	v->a[42986] = anon_sym_GT_GT;
	v->a[42987] = state(922);
	v->a[42988] = 3;
	v->a[42989] = sym_file_redirect;
	v->a[42990] = sym_heredoc_redirect;
	v->a[42991] = aux_sym_redirected_statement_repeat1;
	v->a[42992] = 10;
	v->a[42993] = actions(3);
	v->a[42994] = 1;
	v->a[42995] = sym_comment;
	v->a[42996] = actions(580);
	v->a[42997] = 1;
	v->a[42998] = anon_sym_PIPE;
	v->a[42999] = actions(597);
	small_parse_table_2150(v);
}

/* EOF small_parse_table_429.c */
