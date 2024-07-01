/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_709.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3545(t_small_parse_table_array *v)
{
	v->a[70900] = actions(1788);
	v->a[70901] = 1;
	v->a[70902] = anon_sym_BQUOTE;
	v->a[70903] = actions(1790);
	v->a[70904] = 1;
	v->a[70905] = sym_extglob_pattern;
	v->a[70906] = state(1329);
	v->a[70907] = 1;
	v->a[70908] = aux_sym_case_statement_repeat1;
	v->a[70909] = state(1920);
	v->a[70910] = 1;
	v->a[70911] = sym_case_item;
	v->a[70912] = state(2204);
	v->a[70913] = 1;
	v->a[70914] = sym__case_item_last;
	v->a[70915] = state(2096);
	v->a[70916] = 2;
	v->a[70917] = sym_concatenation;
	v->a[70918] = sym__extglob_blob;
	v->a[70919] = actions(1770);
	small_parse_table_3546(v);
}

void	small_parse_table_3546(t_small_parse_table_array *v)
{
	v->a[70920] = 3;
	v->a[70921] = sym_raw_string;
	v->a[70922] = sym_number;
	v->a[70923] = sym_word;
	v->a[70924] = state(2001);
	v->a[70925] = 5;
	v->a[70926] = sym_arithmetic_expansion;
	v->a[70927] = sym_string;
	v->a[70928] = sym_simple_expansion;
	v->a[70929] = sym_expansion;
	v->a[70930] = sym_command_substitution;
	v->a[70931] = 6;
	v->a[70932] = actions(3);
	v->a[70933] = 1;
	v->a[70934] = sym_comment;
	v->a[70935] = actions(2057);
	v->a[70936] = 1;
	v->a[70937] = aux_sym_concatenation_token1;
	v->a[70938] = actions(2059);
	v->a[70939] = 1;
	small_parse_table_3547(v);
}

void	small_parse_table_3547(t_small_parse_table_array *v)
{
	v->a[70940] = sym__concat;
	v->a[70941] = state(1221);
	v->a[70942] = 1;
	v->a[70943] = aux_sym_concatenation_repeat1;
	v->a[70944] = actions(602);
	v->a[70945] = 2;
	v->a[70946] = sym_file_descriptor;
	v->a[70947] = aux_sym_heredoc_redirect_token1;
	v->a[70948] = actions(604);
	v->a[70949] = 16;
	v->a[70950] = anon_sym_PIPE;
	v->a[70951] = anon_sym_SEMI_SEMI;
	v->a[70952] = anon_sym_AMP_AMP;
	v->a[70953] = anon_sym_PIPE_PIPE;
	v->a[70954] = anon_sym_LT;
	v->a[70955] = anon_sym_GT;
	v->a[70956] = anon_sym_GT_GT;
	v->a[70957] = anon_sym_LT_AMP;
	v->a[70958] = anon_sym_GT_AMP;
	v->a[70959] = anon_sym_GT_PIPE;
	small_parse_table_3548(v);
}

void	small_parse_table_3548(t_small_parse_table_array *v)
{
	v->a[70960] = anon_sym_LT_AMP_DASH;
	v->a[70961] = anon_sym_GT_AMP_DASH;
	v->a[70962] = anon_sym_LT_LT;
	v->a[70963] = anon_sym_LT_LT_DASH;
	v->a[70964] = anon_sym_AMP;
	v->a[70965] = anon_sym_SEMI;
	v->a[70966] = 3;
	v->a[70967] = actions(3);
	v->a[70968] = 1;
	v->a[70969] = sym_comment;
	v->a[70970] = actions(2444);
	v->a[70971] = 3;
	v->a[70972] = sym_file_descriptor;
	v->a[70973] = ts_builtin_sym_end;
	v->a[70974] = aux_sym_heredoc_redirect_token1;
	v->a[70975] = actions(2446);
	v->a[70976] = 18;
	v->a[70977] = anon_sym_PIPE;
	v->a[70978] = anon_sym_RPAREN;
	v->a[70979] = anon_sym_SEMI_SEMI;
	small_parse_table_3549(v);
}

void	small_parse_table_3549(t_small_parse_table_array *v)
{
	v->a[70980] = anon_sym_AMP_AMP;
	v->a[70981] = anon_sym_PIPE_PIPE;
	v->a[70982] = anon_sym_LT;
	v->a[70983] = anon_sym_GT;
	v->a[70984] = anon_sym_GT_GT;
	v->a[70985] = anon_sym_LT_AMP;
	v->a[70986] = anon_sym_GT_AMP;
	v->a[70987] = anon_sym_GT_PIPE;
	v->a[70988] = anon_sym_LT_AMP_DASH;
	v->a[70989] = anon_sym_GT_AMP_DASH;
	v->a[70990] = anon_sym_LT_LT;
	v->a[70991] = anon_sym_LT_LT_DASH;
	v->a[70992] = anon_sym_AMP;
	v->a[70993] = anon_sym_BQUOTE;
	v->a[70994] = anon_sym_SEMI;
	v->a[70995] = 3;
	v->a[70996] = actions(3);
	v->a[70997] = 1;
	v->a[70998] = sym_comment;
	v->a[70999] = actions(2399);
	small_parse_table_3550(v);
}

/* EOF small_parse_table_709.c */
