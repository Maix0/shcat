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
	v->a[20900] = 1;
	v->a[20901] = anon_sym_DOLLAR_LBRACE;
	v->a[20902] = actions(467);
	v->a[20903] = 1;
	v->a[20904] = anon_sym_DOLLAR_LPAREN;
	v->a[20905] = actions(469);
	v->a[20906] = 1;
	v->a[20907] = anon_sym_BQUOTE;
	v->a[20908] = actions(473);
	v->a[20909] = 1;
	v->a[20910] = sym__bare_dollar;
	v->a[20911] = actions(493);
	v->a[20912] = 1;
	v->a[20913] = sym_file_descriptor;
	v->a[20914] = state(205);
	v->a[20915] = 1;
	v->a[20916] = aux_sym_command_repeat2;
	v->a[20917] = state(793);
	v->a[20918] = 1;
	v->a[20919] = sym_concatenation;
	small_parse_table_1046(v);
}

void	small_parse_table_1046(t_small_parse_table_array *v)
{
	v->a[20920] = state(1474);
	v->a[20921] = 1;
	v->a[20922] = sym_subshell;
	v->a[20923] = actions(455);
	v->a[20924] = 3;
	v->a[20925] = sym_raw_string;
	v->a[20926] = sym_number;
	v->a[20927] = sym_word;
	v->a[20928] = state(361);
	v->a[20929] = 5;
	v->a[20930] = sym_arithmetic_expansion;
	v->a[20931] = sym_string;
	v->a[20932] = sym_simple_expansion;
	v->a[20933] = sym_expansion;
	v->a[20934] = sym_command_substitution;
	v->a[20935] = actions(491);
	v->a[20936] = 20;
	v->a[20937] = anon_sym_esac;
	v->a[20938] = anon_sym_PIPE;
	v->a[20939] = anon_sym_SEMI_SEMI;
	small_parse_table_1047(v);
}

void	small_parse_table_1047(t_small_parse_table_array *v)
{
	v->a[20940] = anon_sym_AMP_AMP;
	v->a[20941] = anon_sym_PIPE_PIPE;
	v->a[20942] = anon_sym_LT;
	v->a[20943] = anon_sym_GT;
	v->a[20944] = anon_sym_GT_GT;
	v->a[20945] = anon_sym_AMP_GT;
	v->a[20946] = anon_sym_AMP_GT_GT;
	v->a[20947] = anon_sym_LT_AMP;
	v->a[20948] = anon_sym_GT_AMP;
	v->a[20949] = anon_sym_GT_PIPE;
	v->a[20950] = anon_sym_LT_AMP_DASH;
	v->a[20951] = anon_sym_GT_AMP_DASH;
	v->a[20952] = anon_sym_LT_LT;
	v->a[20953] = anon_sym_LT_LT_DASH;
	v->a[20954] = aux_sym_heredoc_redirect_token1;
	v->a[20955] = anon_sym_AMP;
	v->a[20956] = anon_sym_SEMI;
	v->a[20957] = 16;
	v->a[20958] = actions(3);
	v->a[20959] = 1;
	small_parse_table_1048(v);
}

void	small_parse_table_1048(t_small_parse_table_array *v)
{
	v->a[20960] = sym_comment;
	v->a[20961] = actions(17);
	v->a[20962] = 1;
	v->a[20963] = anon_sym_LPAREN;
	v->a[20964] = actions(471);
	v->a[20965] = 1;
	v->a[20966] = sym_file_descriptor;
	v->a[20967] = actions(497);
	v->a[20968] = 1;
	v->a[20969] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20970] = actions(499);
	v->a[20971] = 1;
	v->a[20972] = anon_sym_DOLLAR;
	v->a[20973] = actions(501);
	v->a[20974] = 1;
	v->a[20975] = anon_sym_DQUOTE;
	v->a[20976] = actions(503);
	v->a[20977] = 1;
	v->a[20978] = anon_sym_DOLLAR_LBRACE;
	v->a[20979] = actions(505);
	small_parse_table_1049(v);
}

void	small_parse_table_1049(t_small_parse_table_array *v)
{
	v->a[20980] = 1;
	v->a[20981] = anon_sym_DOLLAR_LPAREN;
	v->a[20982] = actions(507);
	v->a[20983] = 1;
	v->a[20984] = anon_sym_BQUOTE;
	v->a[20985] = actions(509);
	v->a[20986] = 1;
	v->a[20987] = sym__bare_dollar;
	v->a[20988] = state(194);
	v->a[20989] = 1;
	v->a[20990] = aux_sym_command_repeat2;
	v->a[20991] = state(729);
	v->a[20992] = 1;
	v->a[20993] = sym_concatenation;
	v->a[20994] = state(1436);
	v->a[20995] = 1;
	v->a[20996] = sym_subshell;
	v->a[20997] = actions(495);
	v->a[20998] = 3;
	v->a[20999] = sym_raw_string;
	small_parse_table_1050(v);
}

/* EOF small_parse_table_209.c */
