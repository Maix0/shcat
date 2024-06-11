/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_879.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4395(t_small_parse_table_array *v)
{
	v->a[87900] = sym_arithmetic_expansion;
	v->a[87901] = sym_string;
	v->a[87902] = sym_simple_expansion;
	v->a[87903] = sym_expansion;
	v->a[87904] = sym_command_substitution;
	v->a[87905] = 8;
	v->a[87906] = actions(3);
	v->a[87907] = 1;
	v->a[87908] = sym_comment;
	v->a[87909] = actions(896);
	v->a[87910] = 1;
	v->a[87911] = sym_file_descriptor;
	v->a[87912] = actions(3569);
	v->a[87913] = 1;
	v->a[87914] = aux_sym_heredoc_redirect_token1;
	v->a[87915] = state(2308);
	v->a[87916] = 1;
	v->a[87917] = sym__heredoc_expression;
	v->a[87918] = actions(876);
	v->a[87919] = 2;
	small_parse_table_4396(v);
}

void	small_parse_table_4396(t_small_parse_table_array *v)
{
	v->a[87920] = anon_sym_AMP_AMP;
	v->a[87921] = anon_sym_PIPE_PIPE;
	v->a[87922] = actions(880);
	v->a[87923] = 2;
	v->a[87924] = anon_sym_LT_AMP_DASH;
	v->a[87925] = anon_sym_GT_AMP_DASH;
	v->a[87926] = state(1733);
	v->a[87927] = 2;
	v->a[87928] = sym_file_redirect;
	v->a[87929] = aux_sym_redirected_statement_repeat2;
	v->a[87930] = actions(878);
	v->a[87931] = 8;
	v->a[87932] = anon_sym_LT;
	v->a[87933] = anon_sym_GT;
	v->a[87934] = anon_sym_GT_GT;
	v->a[87935] = anon_sym_AMP_GT;
	v->a[87936] = anon_sym_AMP_GT_GT;
	v->a[87937] = anon_sym_LT_AMP;
	v->a[87938] = anon_sym_GT_AMP;
	v->a[87939] = anon_sym_GT_PIPE;
	small_parse_table_4397(v);
}

void	small_parse_table_4397(t_small_parse_table_array *v)
{
	v->a[87940] = 12;
	v->a[87941] = actions(3);
	v->a[87942] = 1;
	v->a[87943] = sym_comment;
	v->a[87944] = actions(884);
	v->a[87945] = 1;
	v->a[87946] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[87947] = actions(886);
	v->a[87948] = 1;
	v->a[87949] = anon_sym_DOLLAR;
	v->a[87950] = actions(888);
	v->a[87951] = 1;
	v->a[87952] = anon_sym_DQUOTE;
	v->a[87953] = actions(890);
	v->a[87954] = 1;
	v->a[87955] = anon_sym_DOLLAR_LBRACE;
	v->a[87956] = actions(892);
	v->a[87957] = 1;
	v->a[87958] = anon_sym_DOLLAR_LPAREN;
	v->a[87959] = actions(894);
	small_parse_table_4398(v);
}

void	small_parse_table_4398(t_small_parse_table_array *v)
{
	v->a[87960] = 1;
	v->a[87961] = anon_sym_BQUOTE;
	v->a[87962] = actions(3571);
	v->a[87963] = 1;
	v->a[87964] = aux_sym_heredoc_redirect_token1;
	v->a[87965] = state(1613);
	v->a[87966] = 1;
	v->a[87967] = aux_sym__heredoc_command;
	v->a[87968] = state(2098);
	v->a[87969] = 1;
	v->a[87970] = sym_concatenation;
	v->a[87971] = actions(872);
	v->a[87972] = 3;
	v->a[87973] = sym_raw_string;
	v->a[87974] = sym_number;
	v->a[87975] = sym_word;
	v->a[87976] = state(1944);
	v->a[87977] = 5;
	v->a[87978] = sym_arithmetic_expansion;
	v->a[87979] = sym_string;
	small_parse_table_4399(v);
}

void	small_parse_table_4399(t_small_parse_table_array *v)
{
	v->a[87980] = sym_simple_expansion;
	v->a[87981] = sym_expansion;
	v->a[87982] = sym_command_substitution;
	v->a[87983] = 3;
	v->a[87984] = actions(1094);
	v->a[87985] = 1;
	v->a[87986] = sym_comment;
	v->a[87987] = actions(2655);
	v->a[87988] = 7;
	v->a[87989] = anon_sym_PIPE;
	v->a[87990] = anon_sym_LT;
	v->a[87991] = anon_sym_GT;
	v->a[87992] = anon_sym_AMP_GT;
	v->a[87993] = anon_sym_LT_AMP;
	v->a[87994] = anon_sym_GT_AMP;
	v->a[87995] = anon_sym_LT_LT;
	v->a[87996] = actions(2653);
	v->a[87997] = 9;
	v->a[87998] = sym_file_descriptor;
	v->a[87999] = anon_sym_AMP_AMP;
	small_parse_table_4400(v);
}

/* EOF small_parse_table_879.c */
