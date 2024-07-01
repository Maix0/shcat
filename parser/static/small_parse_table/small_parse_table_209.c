/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_209.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1045(t_small_parse_table_array *v)
{
	v->a[20900] = state(1264);
	v->a[20901] = 1;
	v->a[20902] = sym_subshell;
	v->a[20903] = actions(511);
	v->a[20904] = 3;
	v->a[20905] = sym_raw_string;
	v->a[20906] = sym_number;
	v->a[20907] = sym_word;
	v->a[20908] = state(493);
	v->a[20909] = 5;
	v->a[20910] = sym_arithmetic_expansion;
	v->a[20911] = sym_string;
	v->a[20912] = sym_simple_expansion;
	v->a[20913] = sym_expansion;
	v->a[20914] = sym_command_substitution;
	v->a[20915] = actions(491);
	v->a[20916] = 17;
	v->a[20917] = anon_sym_PIPE;
	v->a[20918] = anon_sym_SEMI_SEMI;
	v->a[20919] = anon_sym_AMP_AMP;
	small_parse_table_1046(v);
}

void	small_parse_table_1046(t_small_parse_table_array *v)
{
	v->a[20920] = anon_sym_PIPE_PIPE;
	v->a[20921] = anon_sym_LT;
	v->a[20922] = anon_sym_GT;
	v->a[20923] = anon_sym_GT_GT;
	v->a[20924] = anon_sym_LT_AMP;
	v->a[20925] = anon_sym_GT_AMP;
	v->a[20926] = anon_sym_GT_PIPE;
	v->a[20927] = anon_sym_LT_AMP_DASH;
	v->a[20928] = anon_sym_GT_AMP_DASH;
	v->a[20929] = anon_sym_LT_LT;
	v->a[20930] = anon_sym_LT_LT_DASH;
	v->a[20931] = aux_sym_heredoc_redirect_token1;
	v->a[20932] = anon_sym_AMP;
	v->a[20933] = anon_sym_SEMI;
	v->a[20934] = 15;
	v->a[20935] = actions(3);
	v->a[20936] = 1;
	v->a[20937] = sym_comment;
	v->a[20938] = actions(17);
	v->a[20939] = 1;
	small_parse_table_1047(v);
}

void	small_parse_table_1047(t_small_parse_table_array *v)
{
	v->a[20940] = anon_sym_LPAREN;
	v->a[20941] = actions(459);
	v->a[20942] = 1;
	v->a[20943] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20944] = actions(461);
	v->a[20945] = 1;
	v->a[20946] = anon_sym_DOLLAR;
	v->a[20947] = actions(463);
	v->a[20948] = 1;
	v->a[20949] = anon_sym_DQUOTE;
	v->a[20950] = actions(465);
	v->a[20951] = 1;
	v->a[20952] = anon_sym_DOLLAR_LBRACE;
	v->a[20953] = actions(467);
	v->a[20954] = 1;
	v->a[20955] = anon_sym_DOLLAR_LPAREN;
	v->a[20956] = actions(471);
	v->a[20957] = 1;
	v->a[20958] = sym_file_descriptor;
	v->a[20959] = actions(473);
	small_parse_table_1048(v);
}

void	small_parse_table_1048(t_small_parse_table_array *v)
{
	v->a[20960] = 1;
	v->a[20961] = sym__bare_dollar;
	v->a[20962] = state(225);
	v->a[20963] = 1;
	v->a[20964] = aux_sym_command_repeat2;
	v->a[20965] = state(718);
	v->a[20966] = 1;
	v->a[20967] = sym_concatenation;
	v->a[20968] = state(1235);
	v->a[20969] = 1;
	v->a[20970] = sym_subshell;
	v->a[20971] = actions(511);
	v->a[20972] = 3;
	v->a[20973] = sym_raw_string;
	v->a[20974] = sym_number;
	v->a[20975] = sym_word;
	v->a[20976] = state(493);
	v->a[20977] = 5;
	v->a[20978] = sym_arithmetic_expansion;
	v->a[20979] = sym_string;
	small_parse_table_1049(v);
}

void	small_parse_table_1049(t_small_parse_table_array *v)
{
	v->a[20980] = sym_simple_expansion;
	v->a[20981] = sym_expansion;
	v->a[20982] = sym_command_substitution;
	v->a[20983] = actions(457);
	v->a[20984] = 18;
	v->a[20985] = anon_sym_PIPE;
	v->a[20986] = anon_sym_SEMI_SEMI;
	v->a[20987] = anon_sym_AMP_AMP;
	v->a[20988] = anon_sym_PIPE_PIPE;
	v->a[20989] = anon_sym_LT;
	v->a[20990] = anon_sym_GT;
	v->a[20991] = anon_sym_GT_GT;
	v->a[20992] = anon_sym_LT_AMP;
	v->a[20993] = anon_sym_GT_AMP;
	v->a[20994] = anon_sym_GT_PIPE;
	v->a[20995] = anon_sym_LT_AMP_DASH;
	v->a[20996] = anon_sym_GT_AMP_DASH;
	v->a[20997] = anon_sym_LT_LT;
	v->a[20998] = anon_sym_LT_LT_DASH;
	v->a[20999] = aux_sym_heredoc_redirect_token1;
	small_parse_table_1050(v);
}

/* EOF small_parse_table_209.c */
