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
	v->a[77900] = actions(5886);
	v->a[77901] = 1;
	v->a[77902] = anon_sym_DOLLAR_BQUOTE;
	v->a[77903] = actions(5890);
	v->a[77904] = 1;
	v->a[77905] = sym_test_operator;
	v->a[77906] = actions(5892);
	v->a[77907] = 1;
	v->a[77908] = sym__brace_start;
	v->a[77909] = state(5674);
	v->a[77910] = 1;
	v->a[77911] = aux_sym__literal_repeat1;
	v->a[77912] = state(5738);
	v->a[77913] = 1;
	v->a[77914] = sym_concatenation;
	v->a[77915] = actions(2496);
	v->a[77916] = 2;
	v->a[77917] = sym_file_descriptor;
	v->a[77918] = aux_sym_heredoc_redirect_token1;
	v->a[77919] = actions(5866);
	small_parse_table_3896(v);
}

void	small_parse_table_3896(t_small_parse_table_array *v)
{
	v->a[77920] = 2;
	v->a[77921] = anon_sym_LPAREN_LPAREN;
	v->a[77922] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77923] = actions(5888);
	v->a[77924] = 2;
	v->a[77925] = anon_sym_LT_LPAREN;
	v->a[77926] = anon_sym_GT_LPAREN;
	v->a[77927] = actions(5864);
	v->a[77928] = 3;
	v->a[77929] = sym_raw_string;
	v->a[77930] = sym_ansi_c_string;
	v->a[77931] = sym_word;
	v->a[77932] = state(5608);
	v->a[77933] = 9;
	v->a[77934] = sym_arithmetic_expansion;
	v->a[77935] = sym_brace_expression;
	v->a[77936] = sym_string;
	v->a[77937] = sym_translated_string;
	v->a[77938] = sym_number;
	v->a[77939] = sym_simple_expansion;
	small_parse_table_3897(v);
}

void	small_parse_table_3897(t_small_parse_table_array *v)
{
	v->a[77940] = sym_expansion;
	v->a[77941] = sym_command_substitution;
	v->a[77942] = sym_process_substitution;
	v->a[77943] = actions(2494);
	v->a[77944] = 13;
	v->a[77945] = anon_sym_PIPE_PIPE;
	v->a[77946] = anon_sym_AMP_AMP;
	v->a[77947] = anon_sym_LT;
	v->a[77948] = anon_sym_GT;
	v->a[77949] = anon_sym_GT_GT;
	v->a[77950] = anon_sym_AMP_GT;
	v->a[77951] = anon_sym_AMP_GT_GT;
	v->a[77952] = anon_sym_LT_AMP;
	v->a[77953] = anon_sym_GT_AMP;
	v->a[77954] = anon_sym_GT_PIPE;
	v->a[77955] = anon_sym_LT_AMP_DASH;
	v->a[77956] = anon_sym_GT_AMP_DASH;
	v->a[77957] = anon_sym_LT_LT_LT;
	v->a[77958] = 3;
	v->a[77959] = actions(3);
	small_parse_table_3898(v);
}

void	small_parse_table_3898(t_small_parse_table_array *v)
{
	v->a[77960] = 1;
	v->a[77961] = sym_comment;
	v->a[77962] = actions(1322);
	v->a[77963] = 5;
	v->a[77964] = sym_file_descriptor;
	v->a[77965] = sym__concat;
	v->a[77966] = sym_test_operator;
	v->a[77967] = sym__brace_start;
	v->a[77968] = aux_sym_heredoc_redirect_token1;
	v->a[77969] = actions(1320);
	v->a[77970] = 40;
	v->a[77971] = anon_sym_LPAREN_LPAREN;
	v->a[77972] = anon_sym_SEMI;
	v->a[77973] = anon_sym_PIPE_PIPE;
	v->a[77974] = anon_sym_AMP_AMP;
	v->a[77975] = anon_sym_PIPE;
	v->a[77976] = anon_sym_AMP;
	v->a[77977] = anon_sym_LT;
	v->a[77978] = anon_sym_GT;
	v->a[77979] = anon_sym_LT_LT;
	small_parse_table_3899(v);
}

void	small_parse_table_3899(t_small_parse_table_array *v)
{
	v->a[77980] = anon_sym_GT_GT;
	v->a[77981] = anon_sym_SEMI_SEMI;
	v->a[77982] = anon_sym_SEMI_AMP;
	v->a[77983] = anon_sym_SEMI_SEMI_AMP;
	v->a[77984] = anon_sym_PIPE_AMP;
	v->a[77985] = anon_sym_AMP_GT;
	v->a[77986] = anon_sym_AMP_GT_GT;
	v->a[77987] = anon_sym_LT_AMP;
	v->a[77988] = anon_sym_GT_AMP;
	v->a[77989] = anon_sym_GT_PIPE;
	v->a[77990] = anon_sym_LT_AMP_DASH;
	v->a[77991] = anon_sym_GT_AMP_DASH;
	v->a[77992] = anon_sym_LT_LT_DASH;
	v->a[77993] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77994] = anon_sym_DOLLAR_LBRACK;
	v->a[77995] = aux_sym_concatenation_token1;
	v->a[77996] = anon_sym_DOLLAR;
	v->a[77997] = sym__special_character;
	v->a[77998] = anon_sym_DQUOTE;
	v->a[77999] = sym_raw_string;
	small_parse_table_3900(v);
}

/* EOF small_parse_table_779.c */
