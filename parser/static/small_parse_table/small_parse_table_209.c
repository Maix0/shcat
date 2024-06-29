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
	v->a[20900] = anon_sym_DASH;
	v->a[20901] = anon_sym_STAR;
	v->a[20902] = anon_sym_QMARK;
	v->a[20903] = anon_sym_DOLLAR;
	v->a[20904] = anon_sym_POUND;
	v->a[20905] = anon_sym_AT;
	v->a[20906] = anon_sym_0;
	v->a[20907] = anon_sym__;
	v->a[20908] = actions(379);
	v->a[20909] = 27;
	v->a[20910] = anon_sym_PIPE;
	v->a[20911] = anon_sym_SEMI_SEMI;
	v->a[20912] = anon_sym_AMP_AMP;
	v->a[20913] = anon_sym_PIPE_PIPE;
	v->a[20914] = anon_sym_LT;
	v->a[20915] = anon_sym_GT;
	v->a[20916] = anon_sym_GT_GT;
	v->a[20917] = anon_sym_AMP_GT;
	v->a[20918] = anon_sym_AMP_GT_GT;
	v->a[20919] = anon_sym_LT_AMP;
	small_parse_table_1046(v);
}

void	small_parse_table_1046(t_small_parse_table_array *v)
{
	v->a[20920] = anon_sym_GT_AMP;
	v->a[20921] = anon_sym_GT_PIPE;
	v->a[20922] = anon_sym_LT_AMP_DASH;
	v->a[20923] = anon_sym_GT_AMP_DASH;
	v->a[20924] = anon_sym_LT_LT;
	v->a[20925] = anon_sym_LT_LT_DASH;
	v->a[20926] = aux_sym_heredoc_redirect_token1;
	v->a[20927] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20928] = anon_sym_AMP;
	v->a[20929] = anon_sym_DQUOTE;
	v->a[20930] = sym_raw_string;
	v->a[20931] = sym_number;
	v->a[20932] = anon_sym_DOLLAR_LBRACE;
	v->a[20933] = anon_sym_DOLLAR_LPAREN;
	v->a[20934] = anon_sym_BQUOTE;
	v->a[20935] = sym_word;
	v->a[20936] = anon_sym_SEMI;
	v->a[20937] = 16;
	v->a[20938] = actions(3);
	v->a[20939] = 1;
	small_parse_table_1047(v);
}

void	small_parse_table_1047(t_small_parse_table_array *v)
{
	v->a[20940] = sym_comment;
	v->a[20941] = actions(17);
	v->a[20942] = 1;
	v->a[20943] = anon_sym_LPAREN;
	v->a[20944] = actions(461);
	v->a[20945] = 1;
	v->a[20946] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20947] = actions(463);
	v->a[20948] = 1;
	v->a[20949] = anon_sym_DOLLAR;
	v->a[20950] = actions(465);
	v->a[20951] = 1;
	v->a[20952] = anon_sym_DQUOTE;
	v->a[20953] = actions(467);
	v->a[20954] = 1;
	v->a[20955] = anon_sym_DOLLAR_LBRACE;
	v->a[20956] = actions(469);
	v->a[20957] = 1;
	v->a[20958] = anon_sym_DOLLAR_LPAREN;
	v->a[20959] = actions(471);
	small_parse_table_1048(v);
}

void	small_parse_table_1048(t_small_parse_table_array *v)
{
	v->a[20960] = 1;
	v->a[20961] = anon_sym_BQUOTE;
	v->a[20962] = actions(473);
	v->a[20963] = 1;
	v->a[20964] = sym__bare_dollar;
	v->a[20965] = state(202);
	v->a[20966] = 1;
	v->a[20967] = aux_sym_command_repeat2;
	v->a[20968] = state(706);
	v->a[20969] = 1;
	v->a[20970] = sym_concatenation;
	v->a[20971] = state(1263);
	v->a[20972] = 1;
	v->a[20973] = sym_subshell;
	v->a[20974] = actions(491);
	v->a[20975] = 2;
	v->a[20976] = sym_file_descriptor;
	v->a[20977] = ts_builtin_sym_end;
	v->a[20978] = actions(457);
	v->a[20979] = 3;
	small_parse_table_1049(v);
}

void	small_parse_table_1049(t_small_parse_table_array *v)
{
	v->a[20980] = sym_raw_string;
	v->a[20981] = sym_number;
	v->a[20982] = sym_word;
	v->a[20983] = state(333);
	v->a[20984] = 5;
	v->a[20985] = sym_arithmetic_expansion;
	v->a[20986] = sym_string;
	v->a[20987] = sym_simple_expansion;
	v->a[20988] = sym_expansion;
	v->a[20989] = sym_command_substitution;
	v->a[20990] = actions(493);
	v->a[20991] = 19;
	v->a[20992] = anon_sym_PIPE;
	v->a[20993] = anon_sym_SEMI_SEMI;
	v->a[20994] = anon_sym_AMP_AMP;
	v->a[20995] = anon_sym_PIPE_PIPE;
	v->a[20996] = anon_sym_LT;
	v->a[20997] = anon_sym_GT;
	v->a[20998] = anon_sym_GT_GT;
	v->a[20999] = anon_sym_AMP_GT;
	small_parse_table_1050(v);
}

/* EOF small_parse_table_209.c */
