/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_889.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4445(t_small_parse_table_array *v)
{
	v->a[88900] = sym_word;
	v->a[88901] = 3;
	v->a[88902] = actions(3);
	v->a[88903] = 1;
	v->a[88904] = sym_comment;
	v->a[88905] = actions(1263);
	v->a[88906] = 5;
	v->a[88907] = sym_file_descriptor;
	v->a[88908] = sym_variable_name;
	v->a[88909] = sym_test_operator;
	v->a[88910] = sym__brace_start;
	v->a[88911] = aux_sym_heredoc_redirect_token1;
	v->a[88912] = actions(1261);
	v->a[88913] = 39;
	v->a[88914] = anon_sym_LPAREN_LPAREN;
	v->a[88915] = anon_sym_SEMI;
	v->a[88916] = anon_sym_PIPE_PIPE;
	v->a[88917] = anon_sym_AMP_AMP;
	v->a[88918] = anon_sym_PIPE;
	v->a[88919] = anon_sym_AMP;
	small_parse_table_4446(v);
}

void	small_parse_table_4446(t_small_parse_table_array *v)
{
	v->a[88920] = anon_sym_LT;
	v->a[88921] = anon_sym_GT;
	v->a[88922] = anon_sym_LT_LT;
	v->a[88923] = anon_sym_GT_GT;
	v->a[88924] = anon_sym_SEMI_SEMI;
	v->a[88925] = anon_sym_SEMI_AMP;
	v->a[88926] = anon_sym_SEMI_SEMI_AMP;
	v->a[88927] = anon_sym_PIPE_AMP;
	v->a[88928] = anon_sym_AMP_GT;
	v->a[88929] = anon_sym_AMP_GT_GT;
	v->a[88930] = anon_sym_LT_AMP;
	v->a[88931] = anon_sym_GT_AMP;
	v->a[88932] = anon_sym_GT_PIPE;
	v->a[88933] = anon_sym_LT_AMP_DASH;
	v->a[88934] = anon_sym_GT_AMP_DASH;
	v->a[88935] = anon_sym_LT_LT_DASH;
	v->a[88936] = anon_sym_LT_LT_LT;
	v->a[88937] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[88938] = anon_sym_DOLLAR_LBRACK;
	v->a[88939] = anon_sym_DOLLAR;
	small_parse_table_4447(v);
}

void	small_parse_table_4447(t_small_parse_table_array *v)
{
	v->a[88940] = sym__special_character;
	v->a[88941] = anon_sym_DQUOTE;
	v->a[88942] = sym_raw_string;
	v->a[88943] = sym_ansi_c_string;
	v->a[88944] = aux_sym_number_token1;
	v->a[88945] = aux_sym_number_token2;
	v->a[88946] = anon_sym_DOLLAR_LBRACE;
	v->a[88947] = anon_sym_DOLLAR_LPAREN;
	v->a[88948] = anon_sym_BQUOTE;
	v->a[88949] = anon_sym_DOLLAR_BQUOTE;
	v->a[88950] = anon_sym_LT_LPAREN;
	v->a[88951] = anon_sym_GT_LPAREN;
	v->a[88952] = sym_word;
	v->a[88953] = 6;
	v->a[88954] = actions(3);
	v->a[88955] = 1;
	v->a[88956] = sym_comment;
	v->a[88957] = actions(6017);
	v->a[88958] = 1;
	v->a[88959] = aux_sym_concatenation_token1;
	small_parse_table_4448(v);
}

void	small_parse_table_4448(t_small_parse_table_array *v)
{
	v->a[88960] = actions(6019);
	v->a[88961] = 1;
	v->a[88962] = sym__concat;
	v->a[88963] = state(1908);
	v->a[88964] = 1;
	v->a[88965] = aux_sym_concatenation_repeat1;
	v->a[88966] = actions(5395);
	v->a[88967] = 5;
	v->a[88968] = sym_file_descriptor;
	v->a[88969] = sym_test_operator;
	v->a[88970] = sym__brace_start;
	v->a[88971] = ts_builtin_sym_end;
	v->a[88972] = aux_sym_heredoc_redirect_token1;
	v->a[88973] = actions(5393);
	v->a[88974] = 36;
	v->a[88975] = anon_sym_LPAREN_LPAREN;
	v->a[88976] = anon_sym_SEMI;
	v->a[88977] = anon_sym_PIPE_PIPE;
	v->a[88978] = anon_sym_AMP_AMP;
	v->a[88979] = anon_sym_PIPE;
	small_parse_table_4449(v);
}

void	small_parse_table_4449(t_small_parse_table_array *v)
{
	v->a[88980] = anon_sym_AMP;
	v->a[88981] = anon_sym_LT;
	v->a[88982] = anon_sym_GT;
	v->a[88983] = anon_sym_LT_LT;
	v->a[88984] = anon_sym_GT_GT;
	v->a[88985] = anon_sym_SEMI_SEMI;
	v->a[88986] = anon_sym_PIPE_AMP;
	v->a[88987] = anon_sym_AMP_GT;
	v->a[88988] = anon_sym_AMP_GT_GT;
	v->a[88989] = anon_sym_LT_AMP;
	v->a[88990] = anon_sym_GT_AMP;
	v->a[88991] = anon_sym_GT_PIPE;
	v->a[88992] = anon_sym_LT_AMP_DASH;
	v->a[88993] = anon_sym_GT_AMP_DASH;
	v->a[88994] = anon_sym_LT_LT_DASH;
	v->a[88995] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[88996] = anon_sym_DOLLAR_LBRACK;
	v->a[88997] = anon_sym_DOLLAR;
	v->a[88998] = sym__special_character;
	v->a[88999] = anon_sym_DQUOTE;
	small_parse_table_4450(v);
}

/* EOF small_parse_table_889.c */
