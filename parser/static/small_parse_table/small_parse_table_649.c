/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_649.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3245(t_small_parse_table_array *v)
{
	v->a[64900] = anon_sym_LT;
	v->a[64901] = anon_sym_GT;
	v->a[64902] = anon_sym_GT_GT;
	v->a[64903] = anon_sym_LT_AMP;
	v->a[64904] = anon_sym_GT_AMP;
	v->a[64905] = anon_sym_GT_PIPE;
	v->a[64906] = 12;
	v->a[64907] = actions(3);
	v->a[64908] = 1;
	v->a[64909] = sym_comment;
	v->a[64910] = actions(682);
	v->a[64911] = 1;
	v->a[64912] = anon_sym_PIPE;
	v->a[64913] = actions(695);
	v->a[64914] = 1;
	v->a[64915] = anon_sym_SEMI_SEMI;
	v->a[64916] = actions(2009);
	v->a[64917] = 1;
	v->a[64918] = aux_sym_heredoc_redirect_token1;
	v->a[64919] = actions(2065);
	small_parse_table_3246(v);
}

void	small_parse_table_3246(t_small_parse_table_array *v)
{
	v->a[64920] = 1;
	v->a[64921] = sym_file_descriptor;
	v->a[64922] = state(763);
	v->a[64923] = 1;
	v->a[64924] = sym_terminator;
	v->a[64925] = actions(750);
	v->a[64926] = 2;
	v->a[64927] = anon_sym_AMP;
	v->a[64928] = anon_sym_SEMI;
	v->a[64929] = actions(754);
	v->a[64930] = 2;
	v->a[64931] = anon_sym_LT_LT;
	v->a[64932] = anon_sym_LT_LT_DASH;
	v->a[64933] = actions(924);
	v->a[64934] = 2;
	v->a[64935] = anon_sym_AMP_AMP;
	v->a[64936] = anon_sym_PIPE_PIPE;
	v->a[64937] = actions(2063);
	v->a[64938] = 2;
	v->a[64939] = anon_sym_LT_AMP_DASH;
	small_parse_table_3247(v);
}

void	small_parse_table_3247(t_small_parse_table_array *v)
{
	v->a[64940] = anon_sym_GT_AMP_DASH;
	v->a[64941] = state(1268);
	v->a[64942] = 3;
	v->a[64943] = sym_file_redirect;
	v->a[64944] = sym_heredoc_redirect;
	v->a[64945] = aux_sym_redirected_statement_repeat1;
	v->a[64946] = actions(2061);
	v->a[64947] = 6;
	v->a[64948] = anon_sym_LT;
	v->a[64949] = anon_sym_GT;
	v->a[64950] = anon_sym_GT_GT;
	v->a[64951] = anon_sym_LT_AMP;
	v->a[64952] = anon_sym_GT_AMP;
	v->a[64953] = anon_sym_GT_PIPE;
	v->a[64954] = 12;
	v->a[64955] = actions(3);
	v->a[64956] = 1;
	v->a[64957] = sym_comment;
	v->a[64958] = actions(682);
	v->a[64959] = 1;
	small_parse_table_3248(v);
}

void	small_parse_table_3248(t_small_parse_table_array *v)
{
	v->a[64960] = anon_sym_PIPE;
	v->a[64961] = actions(695);
	v->a[64962] = 1;
	v->a[64963] = anon_sym_SEMI_SEMI;
	v->a[64964] = actions(2009);
	v->a[64965] = 1;
	v->a[64966] = aux_sym_heredoc_redirect_token1;
	v->a[64967] = actions(2065);
	v->a[64968] = 1;
	v->a[64969] = sym_file_descriptor;
	v->a[64970] = state(767);
	v->a[64971] = 1;
	v->a[64972] = sym_terminator;
	v->a[64973] = actions(750);
	v->a[64974] = 2;
	v->a[64975] = anon_sym_AMP;
	v->a[64976] = anon_sym_SEMI;
	v->a[64977] = actions(754);
	v->a[64978] = 2;
	v->a[64979] = anon_sym_LT_LT;
	small_parse_table_3249(v);
}

void	small_parse_table_3249(t_small_parse_table_array *v)
{
	v->a[64980] = anon_sym_LT_LT_DASH;
	v->a[64981] = actions(924);
	v->a[64982] = 2;
	v->a[64983] = anon_sym_AMP_AMP;
	v->a[64984] = anon_sym_PIPE_PIPE;
	v->a[64985] = actions(2063);
	v->a[64986] = 2;
	v->a[64987] = anon_sym_LT_AMP_DASH;
	v->a[64988] = anon_sym_GT_AMP_DASH;
	v->a[64989] = state(1268);
	v->a[64990] = 3;
	v->a[64991] = sym_file_redirect;
	v->a[64992] = sym_heredoc_redirect;
	v->a[64993] = aux_sym_redirected_statement_repeat1;
	v->a[64994] = actions(2061);
	v->a[64995] = 6;
	v->a[64996] = anon_sym_LT;
	v->a[64997] = anon_sym_GT;
	v->a[64998] = anon_sym_GT_GT;
	v->a[64999] = anon_sym_LT_AMP;
	small_parse_table_3250(v);
}

/* EOF small_parse_table_649.c */
