/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_599.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2995(t_small_parse_table_array *v)
{
	v->a[59900] = 2;
	v->a[59901] = anon_sym_LT_AMP_DASH;
	v->a[59902] = anon_sym_GT_AMP_DASH;
	v->a[59903] = state(1176);
	v->a[59904] = 3;
	v->a[59905] = sym_file_redirect;
	v->a[59906] = sym_heredoc_redirect;
	v->a[59907] = aux_sym_redirected_statement_repeat1;
	v->a[59908] = actions(2013);
	v->a[59909] = 6;
	v->a[59910] = anon_sym_LT;
	v->a[59911] = anon_sym_GT;
	v->a[59912] = anon_sym_GT_GT;
	v->a[59913] = anon_sym_LT_AMP;
	v->a[59914] = anon_sym_GT_AMP;
	v->a[59915] = anon_sym_GT_PIPE;
	v->a[59916] = 3;
	v->a[59917] = actions(3);
	v->a[59918] = 1;
	v->a[59919] = sym_comment;
	small_parse_table_2996(v);
}

void	small_parse_table_2996(t_small_parse_table_array *v)
{
	v->a[59920] = actions(1283);
	v->a[59921] = 2;
	v->a[59922] = sym_file_descriptor;
	v->a[59923] = sym__concat;
	v->a[59924] = actions(1285);
	v->a[59925] = 21;
	v->a[59926] = anon_sym_AMP_AMP;
	v->a[59927] = anon_sym_PIPE_PIPE;
	v->a[59928] = anon_sym_LT;
	v->a[59929] = anon_sym_GT;
	v->a[59930] = anon_sym_GT_GT;
	v->a[59931] = anon_sym_LT_AMP;
	v->a[59932] = anon_sym_GT_AMP;
	v->a[59933] = anon_sym_GT_PIPE;
	v->a[59934] = anon_sym_LT_AMP_DASH;
	v->a[59935] = anon_sym_GT_AMP_DASH;
	v->a[59936] = aux_sym_heredoc_redirect_token1;
	v->a[59937] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[59938] = aux_sym_concatenation_token1;
	v->a[59939] = anon_sym_DOLLAR;
	small_parse_table_2997(v);
}

void	small_parse_table_2997(t_small_parse_table_array *v)
{
	v->a[59940] = anon_sym_DQUOTE;
	v->a[59941] = sym_raw_string;
	v->a[59942] = sym_number;
	v->a[59943] = anon_sym_DOLLAR_LBRACE;
	v->a[59944] = anon_sym_DOLLAR_LPAREN;
	v->a[59945] = anon_sym_BQUOTE;
	v->a[59946] = sym_word;
	v->a[59947] = 3;
	v->a[59948] = actions(3);
	v->a[59949] = 1;
	v->a[59950] = sym_comment;
	v->a[59951] = actions(982);
	v->a[59952] = 2;
	v->a[59953] = sym_file_descriptor;
	v->a[59954] = sym__concat;
	v->a[59955] = actions(980);
	v->a[59956] = 21;
	v->a[59957] = anon_sym_AMP_AMP;
	v->a[59958] = anon_sym_PIPE_PIPE;
	v->a[59959] = anon_sym_LT;
	small_parse_table_2998(v);
}

void	small_parse_table_2998(t_small_parse_table_array *v)
{
	v->a[59960] = anon_sym_GT;
	v->a[59961] = anon_sym_GT_GT;
	v->a[59962] = anon_sym_LT_AMP;
	v->a[59963] = anon_sym_GT_AMP;
	v->a[59964] = anon_sym_GT_PIPE;
	v->a[59965] = anon_sym_LT_AMP_DASH;
	v->a[59966] = anon_sym_GT_AMP_DASH;
	v->a[59967] = aux_sym_heredoc_redirect_token1;
	v->a[59968] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[59969] = aux_sym_concatenation_token1;
	v->a[59970] = anon_sym_DOLLAR;
	v->a[59971] = anon_sym_DQUOTE;
	v->a[59972] = sym_raw_string;
	v->a[59973] = sym_number;
	v->a[59974] = anon_sym_DOLLAR_LBRACE;
	v->a[59975] = anon_sym_DOLLAR_LPAREN;
	v->a[59976] = anon_sym_BQUOTE;
	v->a[59977] = sym_word;
	v->a[59978] = 12;
	v->a[59979] = actions(3);
	small_parse_table_2999(v);
}

void	small_parse_table_2999(t_small_parse_table_array *v)
{
	v->a[59980] = 1;
	v->a[59981] = sym_comment;
	v->a[59982] = actions(682);
	v->a[59983] = 1;
	v->a[59984] = anon_sym_PIPE;
	v->a[59985] = actions(2017);
	v->a[59986] = 1;
	v->a[59987] = aux_sym_heredoc_redirect_token1;
	v->a[59988] = actions(2019);
	v->a[59989] = 1;
	v->a[59990] = sym_file_descriptor;
	v->a[59991] = state(691);
	v->a[59992] = 1;
	v->a[59993] = sym_terminator;
	v->a[59994] = actions(684);
	v->a[59995] = 2;
	v->a[59996] = anon_sym_AMP_AMP;
	v->a[59997] = anon_sym_PIPE_PIPE;
	v->a[59998] = actions(686);
	v->a[59999] = 2;
	small_parse_table_3000(v);
}

/* EOF small_parse_table_599.c */
