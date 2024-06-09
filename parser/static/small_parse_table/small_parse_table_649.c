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
	v->a[64900] = anon_sym_LT_AMP;
	v->a[64901] = anon_sym_GT_AMP;
	v->a[64902] = anon_sym_GT_PIPE;
	v->a[64903] = anon_sym_LT_AMP_DASH;
	v->a[64904] = anon_sym_GT_AMP_DASH;
	v->a[64905] = anon_sym_LT_LT;
	v->a[64906] = anon_sym_LT_LT_DASH;
	v->a[64907] = anon_sym_AMP;
	v->a[64908] = anon_sym_BQUOTE;
	v->a[64909] = anon_sym_SEMI;
	v->a[64910] = 11;
	v->a[64911] = actions(3);
	v->a[64912] = 1;
	v->a[64913] = sym_comment;
	v->a[64914] = actions(1002);
	v->a[64915] = 1;
	v->a[64916] = anon_sym_PIPE;
	v->a[64917] = actions(1033);
	v->a[64918] = 1;
	v->a[64919] = anon_sym_BQUOTE;
	small_parse_table_3246(v);
}

void	small_parse_table_3246(t_small_parse_table_array *v)
{
	v->a[64920] = actions(2350);
	v->a[64921] = 1;
	v->a[64922] = aux_sym_heredoc_redirect_token1;
	v->a[64923] = actions(2352);
	v->a[64924] = 1;
	v->a[64925] = sym_file_descriptor;
	v->a[64926] = actions(1062);
	v->a[64927] = 2;
	v->a[64928] = anon_sym_LT_LT;
	v->a[64929] = anon_sym_LT_LT_DASH;
	v->a[64930] = actions(1143);
	v->a[64931] = 2;
	v->a[64932] = anon_sym_AMP_AMP;
	v->a[64933] = anon_sym_PIPE_PIPE;
	v->a[64934] = actions(2348);
	v->a[64935] = 2;
	v->a[64936] = anon_sym_LT_AMP_DASH;
	v->a[64937] = anon_sym_GT_AMP_DASH;
	v->a[64938] = actions(1141);
	v->a[64939] = 3;
	small_parse_table_3247(v);
}

void	small_parse_table_3247(t_small_parse_table_array *v)
{
	v->a[64940] = anon_sym_SEMI_SEMI;
	v->a[64941] = anon_sym_AMP;
	v->a[64942] = anon_sym_SEMI;
	v->a[64943] = state(1095);
	v->a[64944] = 3;
	v->a[64945] = sym_file_redirect;
	v->a[64946] = sym_heredoc_redirect;
	v->a[64947] = aux_sym_redirected_statement_repeat1;
	v->a[64948] = actions(2346);
	v->a[64949] = 8;
	v->a[64950] = anon_sym_LT;
	v->a[64951] = anon_sym_GT;
	v->a[64952] = anon_sym_GT_GT;
	v->a[64953] = anon_sym_AMP_GT;
	v->a[64954] = anon_sym_AMP_GT_GT;
	v->a[64955] = anon_sym_LT_AMP;
	v->a[64956] = anon_sym_GT_AMP;
	v->a[64957] = anon_sym_GT_PIPE;
	v->a[64958] = 3;
	v->a[64959] = actions(3);
	small_parse_table_3248(v);
}

void	small_parse_table_3248(t_small_parse_table_array *v)
{
	v->a[64960] = 1;
	v->a[64961] = sym_comment;
	v->a[64962] = actions(1194);
	v->a[64963] = 3;
	v->a[64964] = sym_file_descriptor;
	v->a[64965] = sym__concat;
	v->a[64966] = sym_variable_name;
	v->a[64967] = actions(1196);
	v->a[64968] = 21;
	v->a[64969] = anon_sym_LT;
	v->a[64970] = anon_sym_GT;
	v->a[64971] = anon_sym_GT_GT;
	v->a[64972] = anon_sym_AMP_GT;
	v->a[64973] = anon_sym_AMP_GT_GT;
	v->a[64974] = anon_sym_LT_AMP;
	v->a[64975] = anon_sym_GT_AMP;
	v->a[64976] = anon_sym_GT_PIPE;
	v->a[64977] = anon_sym_LT_AMP_DASH;
	v->a[64978] = anon_sym_GT_AMP_DASH;
	v->a[64979] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_3249(v);
}

void	small_parse_table_3249(t_small_parse_table_array *v)
{
	v->a[64980] = aux_sym_concatenation_token1;
	v->a[64981] = anon_sym_DOLLAR;
	v->a[64982] = anon_sym_DQUOTE;
	v->a[64983] = sym_raw_string;
	v->a[64984] = aux_sym_number_token1;
	v->a[64985] = aux_sym_number_token2;
	v->a[64986] = anon_sym_DOLLAR_LBRACE;
	v->a[64987] = anon_sym_DOLLAR_LPAREN;
	v->a[64988] = anon_sym_BQUOTE;
	v->a[64989] = sym_word;
	v->a[64990] = 6;
	v->a[64991] = actions(3);
	v->a[64992] = 1;
	v->a[64993] = sym_comment;
	v->a[64994] = actions(2298);
	v->a[64995] = 1;
	v->a[64996] = aux_sym_concatenation_token1;
	v->a[64997] = actions(2354);
	v->a[64998] = 1;
	v->a[64999] = sym__concat;
	small_parse_table_3250(v);
}

/* EOF small_parse_table_649.c */
