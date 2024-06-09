/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_779.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3895(t_small_parse_table_array *v)
{
	v->a[77900] = 1;
	v->a[77901] = aux_sym_number_token1;
	v->a[77902] = actions(787);
	v->a[77903] = 1;
	v->a[77904] = aux_sym_number_token2;
	v->a[77905] = actions(789);
	v->a[77906] = 1;
	v->a[77907] = anon_sym_DOLLAR_LBRACE;
	v->a[77908] = actions(791);
	v->a[77909] = 1;
	v->a[77910] = anon_sym_DOLLAR_LPAREN;
	v->a[77911] = actions(793);
	v->a[77912] = 1;
	v->a[77913] = anon_sym_BQUOTE;
	v->a[77914] = actions(3168);
	v->a[77915] = 1;
	v->a[77916] = sym__bare_dollar;
	v->a[77917] = actions(3166);
	v->a[77918] = 3;
	v->a[77919] = sym_raw_string;
	small_parse_table_3896(v);
}

void	small_parse_table_3896(t_small_parse_table_array *v)
{
	v->a[77920] = sym__comment_word;
	v->a[77921] = sym_word;
	v->a[77922] = state(589);
	v->a[77923] = 6;
	v->a[77924] = sym_arithmetic_expansion;
	v->a[77925] = sym_string;
	v->a[77926] = sym_number;
	v->a[77927] = sym_simple_expansion;
	v->a[77928] = sym_expansion;
	v->a[77929] = sym_command_substitution;
	v->a[77930] = 9;
	v->a[77931] = actions(1062);
	v->a[77932] = 1;
	v->a[77933] = anon_sym_LT_LT;
	v->a[77934] = actions(1404);
	v->a[77935] = 1;
	v->a[77936] = sym_comment;
	v->a[77937] = actions(2460);
	v->a[77938] = 1;
	v->a[77939] = sym_file_descriptor;
	small_parse_table_3897(v);
}

void	small_parse_table_3897(t_small_parse_table_array *v)
{
	v->a[77940] = actions(3107);
	v->a[77941] = 1;
	v->a[77942] = anon_sym_LT_LT_DASH;
	v->a[77943] = actions(3170);
	v->a[77944] = 2;
	v->a[77945] = anon_sym_AMP_AMP;
	v->a[77946] = anon_sym_PIPE_PIPE;
	v->a[77947] = actions(3174);
	v->a[77948] = 2;
	v->a[77949] = anon_sym_LT_AMP_DASH;
	v->a[77950] = anon_sym_GT_AMP_DASH;
	v->a[77951] = actions(3172);
	v->a[77952] = 3;
	v->a[77953] = anon_sym_GT_GT;
	v->a[77954] = anon_sym_AMP_GT_GT;
	v->a[77955] = anon_sym_GT_PIPE;
	v->a[77956] = state(1160);
	v->a[77957] = 3;
	v->a[77958] = sym_file_redirect;
	v->a[77959] = sym_heredoc_redirect;
	small_parse_table_3898(v);
}

void	small_parse_table_3898(t_small_parse_table_array *v)
{
	v->a[77960] = aux_sym_redirected_statement_repeat1;
	v->a[77961] = actions(2454);
	v->a[77962] = 5;
	v->a[77963] = anon_sym_LT;
	v->a[77964] = anon_sym_GT;
	v->a[77965] = anon_sym_AMP_GT;
	v->a[77966] = anon_sym_LT_AMP;
	v->a[77967] = anon_sym_GT_AMP;
	v->a[77968] = 12;
	v->a[77969] = actions(3);
	v->a[77970] = 1;
	v->a[77971] = sym_comment;
	v->a[77972] = actions(761);
	v->a[77973] = 1;
	v->a[77974] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77975] = actions(763);
	v->a[77976] = 1;
	v->a[77977] = anon_sym_DOLLAR;
	v->a[77978] = actions(765);
	v->a[77979] = 1;
	small_parse_table_3899(v);
}

void	small_parse_table_3899(t_small_parse_table_array *v)
{
	v->a[77980] = anon_sym_DQUOTE;
	v->a[77981] = actions(767);
	v->a[77982] = 1;
	v->a[77983] = aux_sym_number_token1;
	v->a[77984] = actions(769);
	v->a[77985] = 1;
	v->a[77986] = aux_sym_number_token2;
	v->a[77987] = actions(771);
	v->a[77988] = 1;
	v->a[77989] = anon_sym_DOLLAR_LBRACE;
	v->a[77990] = actions(773);
	v->a[77991] = 1;
	v->a[77992] = anon_sym_DOLLAR_LPAREN;
	v->a[77993] = actions(775);
	v->a[77994] = 1;
	v->a[77995] = anon_sym_BQUOTE;
	v->a[77996] = actions(955);
	v->a[77997] = 2;
	v->a[77998] = sym_raw_string;
	v->a[77999] = sym_word;
	small_parse_table_3900(v);
}

/* EOF small_parse_table_779.c */
