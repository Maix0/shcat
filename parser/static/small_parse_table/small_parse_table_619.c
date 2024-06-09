/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_619.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3095(t_small_parse_table_array *v)
{
	v->a[61900] = anon_sym_PIPE;
	v->a[61901] = anon_sym_RPAREN;
	v->a[61902] = anon_sym_SEMI_SEMI;
	v->a[61903] = anon_sym_AMP_AMP;
	v->a[61904] = anon_sym_PIPE_PIPE;
	v->a[61905] = anon_sym_LT;
	v->a[61906] = anon_sym_GT;
	v->a[61907] = anon_sym_GT_GT;
	v->a[61908] = anon_sym_AMP_GT;
	v->a[61909] = anon_sym_AMP_GT_GT;
	v->a[61910] = anon_sym_LT_AMP;
	v->a[61911] = anon_sym_GT_AMP;
	v->a[61912] = anon_sym_GT_PIPE;
	v->a[61913] = anon_sym_LT_AMP_DASH;
	v->a[61914] = anon_sym_GT_AMP_DASH;
	v->a[61915] = anon_sym_LT_LT;
	v->a[61916] = anon_sym_LT_LT_DASH;
	v->a[61917] = anon_sym_AMP;
	v->a[61918] = aux_sym_concatenation_token1;
	v->a[61919] = anon_sym_BQUOTE;
	small_parse_table_3096(v);
}

void	small_parse_table_3096(t_small_parse_table_array *v)
{
	v->a[61920] = anon_sym_SEMI;
	v->a[61921] = 5;
	v->a[61922] = actions(3);
	v->a[61923] = 1;
	v->a[61924] = sym_comment;
	v->a[61925] = actions(2207);
	v->a[61926] = 1;
	v->a[61927] = sym_variable_name;
	v->a[61928] = actions(2205);
	v->a[61929] = 2;
	v->a[61930] = aux_sym__simple_variable_name_token1;
	v->a[61931] = aux_sym__multiline_variable_name_token1;
	v->a[61932] = actions(2203);
	v->a[61933] = 9;
	v->a[61934] = anon_sym_BANG;
	v->a[61935] = anon_sym_DASH;
	v->a[61936] = anon_sym_STAR;
	v->a[61937] = anon_sym_QMARK;
	v->a[61938] = anon_sym_DOLLAR;
	v->a[61939] = anon_sym_POUND;
	small_parse_table_3097(v);
}

void	small_parse_table_3097(t_small_parse_table_array *v)
{
	v->a[61940] = anon_sym_AT;
	v->a[61941] = anon_sym_0;
	v->a[61942] = anon_sym__;
	v->a[61943] = actions(407);
	v->a[61944] = 13;
	v->a[61945] = anon_sym_SEMI_SEMI;
	v->a[61946] = aux_sym_heredoc_redirect_token1;
	v->a[61947] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[61948] = anon_sym_AMP;
	v->a[61949] = anon_sym_DQUOTE;
	v->a[61950] = sym_raw_string;
	v->a[61951] = aux_sym_number_token1;
	v->a[61952] = aux_sym_number_token2;
	v->a[61953] = anon_sym_DOLLAR_LBRACE;
	v->a[61954] = anon_sym_DOLLAR_LPAREN;
	v->a[61955] = anon_sym_BQUOTE;
	v->a[61956] = sym_word;
	v->a[61957] = anon_sym_SEMI;
	v->a[61958] = 3;
	v->a[61959] = actions(3);
	small_parse_table_3098(v);
}

void	small_parse_table_3098(t_small_parse_table_array *v)
{
	v->a[61960] = 1;
	v->a[61961] = sym_comment;
	v->a[61962] = actions(1251);
	v->a[61963] = 4;
	v->a[61964] = sym_file_descriptor;
	v->a[61965] = sym__concat;
	v->a[61966] = ts_builtin_sym_end;
	v->a[61967] = aux_sym_heredoc_redirect_token1;
	v->a[61968] = actions(1253);
	v->a[61969] = 21;
	v->a[61970] = anon_sym_PIPE;
	v->a[61971] = anon_sym_RPAREN;
	v->a[61972] = anon_sym_SEMI_SEMI;
	v->a[61973] = anon_sym_AMP_AMP;
	v->a[61974] = anon_sym_PIPE_PIPE;
	v->a[61975] = anon_sym_LT;
	v->a[61976] = anon_sym_GT;
	v->a[61977] = anon_sym_GT_GT;
	v->a[61978] = anon_sym_AMP_GT;
	v->a[61979] = anon_sym_AMP_GT_GT;
	small_parse_table_3099(v);
}

void	small_parse_table_3099(t_small_parse_table_array *v)
{
	v->a[61980] = anon_sym_LT_AMP;
	v->a[61981] = anon_sym_GT_AMP;
	v->a[61982] = anon_sym_GT_PIPE;
	v->a[61983] = anon_sym_LT_AMP_DASH;
	v->a[61984] = anon_sym_GT_AMP_DASH;
	v->a[61985] = anon_sym_LT_LT;
	v->a[61986] = anon_sym_LT_LT_DASH;
	v->a[61987] = anon_sym_AMP;
	v->a[61988] = aux_sym_concatenation_token1;
	v->a[61989] = anon_sym_BQUOTE;
	v->a[61990] = anon_sym_SEMI;
	v->a[61991] = 3;
	v->a[61992] = actions(3);
	v->a[61993] = 1;
	v->a[61994] = sym_comment;
	v->a[61995] = actions(1247);
	v->a[61996] = 4;
	v->a[61997] = sym_file_descriptor;
	v->a[61998] = sym__concat;
	v->a[61999] = ts_builtin_sym_end;
	small_parse_table_3100(v);
}

/* EOF small_parse_table_619.c */
