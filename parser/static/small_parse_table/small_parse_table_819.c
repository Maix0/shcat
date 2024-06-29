/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_819.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4095(t_small_parse_table_array *v)
{
	v->a[81900] = actions(3096);
	v->a[81901] = 1;
	v->a[81902] = aux_sym_concatenation_token1;
	v->a[81903] = actions(3099);
	v->a[81904] = 1;
	v->a[81905] = sym__concat;
	v->a[81906] = state(1571);
	v->a[81907] = 1;
	v->a[81908] = aux_sym_concatenation_repeat1;
	v->a[81909] = actions(988);
	v->a[81910] = 2;
	v->a[81911] = sym_file_descriptor;
	v->a[81912] = aux_sym_heredoc_redirect_token1;
	v->a[81913] = actions(983);
	v->a[81914] = 12;
	v->a[81915] = anon_sym_AMP_AMP;
	v->a[81916] = anon_sym_PIPE_PIPE;
	v->a[81917] = anon_sym_LT;
	v->a[81918] = anon_sym_GT;
	v->a[81919] = anon_sym_GT_GT;
	small_parse_table_4096(v);
}

void	small_parse_table_4096(t_small_parse_table_array *v)
{
	v->a[81920] = anon_sym_AMP_GT;
	v->a[81921] = anon_sym_AMP_GT_GT;
	v->a[81922] = anon_sym_LT_AMP;
	v->a[81923] = anon_sym_GT_AMP;
	v->a[81924] = anon_sym_GT_PIPE;
	v->a[81925] = anon_sym_LT_AMP_DASH;
	v->a[81926] = anon_sym_GT_AMP_DASH;
	v->a[81927] = 10;
	v->a[81928] = actions(3);
	v->a[81929] = 1;
	v->a[81930] = sym_comment;
	v->a[81931] = actions(1883);
	v->a[81932] = 1;
	v->a[81933] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[81934] = actions(1885);
	v->a[81935] = 1;
	v->a[81936] = anon_sym_DOLLAR;
	v->a[81937] = actions(1887);
	v->a[81938] = 1;
	v->a[81939] = anon_sym_DQUOTE;
	small_parse_table_4097(v);
}

void	small_parse_table_4097(t_small_parse_table_array *v)
{
	v->a[81940] = actions(1889);
	v->a[81941] = 1;
	v->a[81942] = anon_sym_DOLLAR_LBRACE;
	v->a[81943] = actions(1891);
	v->a[81944] = 1;
	v->a[81945] = anon_sym_DOLLAR_LPAREN;
	v->a[81946] = actions(1893);
	v->a[81947] = 1;
	v->a[81948] = anon_sym_BQUOTE;
	v->a[81949] = actions(2989);
	v->a[81950] = 1;
	v->a[81951] = sym__bare_dollar;
	v->a[81952] = actions(2985);
	v->a[81953] = 5;
	v->a[81954] = aux_sym_concatenation_token1;
	v->a[81955] = sym_raw_string;
	v->a[81956] = sym_number;
	v->a[81957] = sym__comment_word;
	v->a[81958] = sym_word;
	v->a[81959] = state(2074);
	small_parse_table_4098(v);
}

void	small_parse_table_4098(t_small_parse_table_array *v)
{
	v->a[81960] = 5;
	v->a[81961] = sym_arithmetic_expansion;
	v->a[81962] = sym_string;
	v->a[81963] = sym_simple_expansion;
	v->a[81964] = sym_expansion;
	v->a[81965] = sym_command_substitution;
	v->a[81966] = 10;
	v->a[81967] = actions(3);
	v->a[81968] = 1;
	v->a[81969] = sym_comment;
	v->a[81970] = actions(1772);
	v->a[81971] = 1;
	v->a[81972] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[81973] = actions(1776);
	v->a[81974] = 1;
	v->a[81975] = anon_sym_DQUOTE;
	v->a[81976] = actions(1778);
	v->a[81977] = 1;
	v->a[81978] = anon_sym_DOLLAR_LBRACE;
	v->a[81979] = actions(1780);
	small_parse_table_4099(v);
}

void	small_parse_table_4099(t_small_parse_table_array *v)
{
	v->a[81980] = 1;
	v->a[81981] = anon_sym_DOLLAR_LPAREN;
	v->a[81982] = actions(1782);
	v->a[81983] = 1;
	v->a[81984] = anon_sym_BQUOTE;
	v->a[81985] = actions(3080);
	v->a[81986] = 1;
	v->a[81987] = sym__bare_dollar;
	v->a[81988] = actions(3102);
	v->a[81989] = 1;
	v->a[81990] = anon_sym_DOLLAR;
	v->a[81991] = actions(3078);
	v->a[81992] = 5;
	v->a[81993] = aux_sym_concatenation_token1;
	v->a[81994] = sym_raw_string;
	v->a[81995] = sym_number;
	v->a[81996] = sym__comment_word;
	v->a[81997] = sym_word;
	v->a[81998] = state(1596);
	v->a[81999] = 5;
	small_parse_table_4100(v);
}

/* EOF small_parse_table_819.c */
