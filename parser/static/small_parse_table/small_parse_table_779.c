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
	v->a[77900] = actions(3);
	v->a[77901] = 1;
	v->a[77902] = sym_comment;
	v->a[77903] = actions(2695);
	v->a[77904] = 1;
	v->a[77905] = aux_sym_concatenation_token1;
	v->a[77906] = actions(2697);
	v->a[77907] = 1;
	v->a[77908] = sym__concat;
	v->a[77909] = state(1569);
	v->a[77910] = 1;
	v->a[77911] = aux_sym_concatenation_repeat1;
	v->a[77912] = actions(548);
	v->a[77913] = 2;
	v->a[77914] = sym_file_descriptor;
	v->a[77915] = aux_sym_heredoc_redirect_token1;
	v->a[77916] = actions(546);
	v->a[77917] = 12;
	v->a[77918] = anon_sym_AMP_AMP;
	v->a[77919] = anon_sym_PIPE_PIPE;
	small_parse_table_3896(v);
}

void	small_parse_table_3896(t_small_parse_table_array *v)
{
	v->a[77920] = anon_sym_LT;
	v->a[77921] = anon_sym_GT;
	v->a[77922] = anon_sym_GT_GT;
	v->a[77923] = anon_sym_AMP_GT;
	v->a[77924] = anon_sym_AMP_GT_GT;
	v->a[77925] = anon_sym_LT_AMP;
	v->a[77926] = anon_sym_GT_AMP;
	v->a[77927] = anon_sym_GT_PIPE;
	v->a[77928] = anon_sym_LT_AMP_DASH;
	v->a[77929] = anon_sym_GT_AMP_DASH;
	v->a[77930] = 12;
	v->a[77931] = actions(3);
	v->a[77932] = 1;
	v->a[77933] = sym_comment;
	v->a[77934] = actions(2701);
	v->a[77935] = 1;
	v->a[77936] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77937] = actions(2703);
	v->a[77938] = 1;
	v->a[77939] = anon_sym_DOLLAR;
	small_parse_table_3897(v);
}

void	small_parse_table_3897(t_small_parse_table_array *v)
{
	v->a[77940] = actions(2705);
	v->a[77941] = 1;
	v->a[77942] = anon_sym_DQUOTE;
	v->a[77943] = actions(2707);
	v->a[77944] = 1;
	v->a[77945] = anon_sym_DOLLAR_LBRACE;
	v->a[77946] = actions(2709);
	v->a[77947] = 1;
	v->a[77948] = anon_sym_DOLLAR_LPAREN;
	v->a[77949] = actions(2711);
	v->a[77950] = 1;
	v->a[77951] = anon_sym_BQUOTE;
	v->a[77952] = actions(2713);
	v->a[77953] = 1;
	v->a[77954] = sym__comment_word;
	v->a[77955] = actions(2715);
	v->a[77956] = 1;
	v->a[77957] = sym__empty_value;
	v->a[77958] = state(1503);
	v->a[77959] = 1;
	small_parse_table_3898(v);
}

void	small_parse_table_3898(t_small_parse_table_array *v)
{
	v->a[77960] = sym_concatenation;
	v->a[77961] = actions(2699);
	v->a[77962] = 3;
	v->a[77963] = sym_raw_string;
	v->a[77964] = sym_number;
	v->a[77965] = sym_word;
	v->a[77966] = state(1405);
	v->a[77967] = 5;
	v->a[77968] = sym_arithmetic_expansion;
	v->a[77969] = sym_string;
	v->a[77970] = sym_simple_expansion;
	v->a[77971] = sym_expansion;
	v->a[77972] = sym_command_substitution;
	v->a[77973] = 12;
	v->a[77974] = actions(3);
	v->a[77975] = 1;
	v->a[77976] = sym_comment;
	v->a[77977] = actions(2719);
	v->a[77978] = 1;
	v->a[77979] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_3899(v);
}

void	small_parse_table_3899(t_small_parse_table_array *v)
{
	v->a[77980] = actions(2721);
	v->a[77981] = 1;
	v->a[77982] = anon_sym_DOLLAR;
	v->a[77983] = actions(2723);
	v->a[77984] = 1;
	v->a[77985] = anon_sym_DQUOTE;
	v->a[77986] = actions(2725);
	v->a[77987] = 1;
	v->a[77988] = anon_sym_DOLLAR_LBRACE;
	v->a[77989] = actions(2727);
	v->a[77990] = 1;
	v->a[77991] = anon_sym_DOLLAR_LPAREN;
	v->a[77992] = actions(2729);
	v->a[77993] = 1;
	v->a[77994] = anon_sym_BQUOTE;
	v->a[77995] = actions(2731);
	v->a[77996] = 1;
	v->a[77997] = sym__comment_word;
	v->a[77998] = actions(2733);
	v->a[77999] = 1;
	small_parse_table_3900(v);
}

/* EOF small_parse_table_779.c */
