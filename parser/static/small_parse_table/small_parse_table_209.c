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
	v->a[20900] = anon_sym_GT_GT;
	v->a[20901] = anon_sym_LT_LT;
	v->a[20902] = anon_sym_CARET;
	v->a[20903] = anon_sym_AMP;
	v->a[20904] = anon_sym_PLUS;
	v->a[20905] = anon_sym_DASH;
	v->a[20906] = anon_sym_STAR;
	v->a[20907] = anon_sym_SLASH;
	v->a[20908] = anon_sym_PERCENT;
	v->a[20909] = actions(662);
	v->a[20910] = 21;
	v->a[20911] = anon_sym_AMP_AMP;
	v->a[20912] = anon_sym_PIPE_PIPE;
	v->a[20913] = anon_sym_RPAREN_RPAREN;
	v->a[20914] = anon_sym_PLUS_EQ;
	v->a[20915] = anon_sym_DASH_EQ;
	v->a[20916] = anon_sym_STAR_EQ;
	v->a[20917] = anon_sym_SLASH_EQ;
	v->a[20918] = anon_sym_PERCENT_EQ;
	v->a[20919] = anon_sym_LT_LT_EQ;
	small_parse_table_1046(v);
}

void	small_parse_table_1046(t_small_parse_table_array *v)
{
	v->a[20920] = anon_sym_GT_GT_EQ;
	v->a[20921] = anon_sym_AMP_EQ;
	v->a[20922] = anon_sym_CARET_EQ;
	v->a[20923] = anon_sym_PIPE_EQ;
	v->a[20924] = anon_sym_EQ_EQ;
	v->a[20925] = anon_sym_BANG_EQ;
	v->a[20926] = anon_sym_LT_EQ;
	v->a[20927] = anon_sym_GT_EQ;
	v->a[20928] = anon_sym_QMARK;
	v->a[20929] = anon_sym_COLON;
	v->a[20930] = anon_sym_PLUS_PLUS2;
	v->a[20931] = anon_sym_DASH_DASH2;
	v->a[20932] = 12;
	v->a[20933] = actions(3);
	v->a[20934] = 1;
	v->a[20935] = sym_comment;
	v->a[20936] = actions(495);
	v->a[20937] = 1;
	v->a[20938] = sym_file_descriptor;
	v->a[20939] = actions(668);
	small_parse_table_1047(v);
}

void	small_parse_table_1047(t_small_parse_table_array *v)
{
	v->a[20940] = 1;
	v->a[20941] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20942] = actions(670);
	v->a[20943] = 1;
	v->a[20944] = anon_sym_DOLLAR;
	v->a[20945] = actions(672);
	v->a[20946] = 1;
	v->a[20947] = anon_sym_DQUOTE;
	v->a[20948] = actions(674);
	v->a[20949] = 1;
	v->a[20950] = anon_sym_DOLLAR_LBRACE;
	v->a[20951] = actions(676);
	v->a[20952] = 1;
	v->a[20953] = anon_sym_DOLLAR_LPAREN;
	v->a[20954] = actions(678);
	v->a[20955] = 1;
	v->a[20956] = anon_sym_BQUOTE;
	v->a[20957] = state(233);
	v->a[20958] = 2;
	v->a[20959] = sym_concatenation;
	small_parse_table_1048(v);
}

void	small_parse_table_1048(t_small_parse_table_array *v)
{
	v->a[20960] = aux_sym_for_statement_repeat1;
	v->a[20961] = actions(666);
	v->a[20962] = 3;
	v->a[20963] = sym_raw_string;
	v->a[20964] = sym_number;
	v->a[20965] = sym_word;
	v->a[20966] = state(463);
	v->a[20967] = 5;
	v->a[20968] = sym_arithmetic_expansion;
	v->a[20969] = sym_string;
	v->a[20970] = sym_simple_expansion;
	v->a[20971] = sym_expansion;
	v->a[20972] = sym_command_substitution;
	v->a[20973] = actions(497);
	v->a[20974] = 17;
	v->a[20975] = anon_sym_esac;
	v->a[20976] = anon_sym_PIPE;
	v->a[20977] = anon_sym_SEMI_SEMI;
	v->a[20978] = anon_sym_AMP_AMP;
	v->a[20979] = anon_sym_PIPE_PIPE;
	small_parse_table_1049(v);
}

void	small_parse_table_1049(t_small_parse_table_array *v)
{
	v->a[20980] = anon_sym_LT;
	v->a[20981] = anon_sym_GT;
	v->a[20982] = anon_sym_GT_GT;
	v->a[20983] = anon_sym_LT_AMP;
	v->a[20984] = anon_sym_GT_AMP;
	v->a[20985] = anon_sym_GT_PIPE;
	v->a[20986] = anon_sym_LT_GT;
	v->a[20987] = anon_sym_LT_LT;
	v->a[20988] = anon_sym_LT_LT_DASH;
	v->a[20989] = aux_sym_heredoc_redirect_token1;
	v->a[20990] = anon_sym_AMP;
	v->a[20991] = anon_sym_SEMI;
	v->a[20992] = 7;
	v->a[20993] = actions(664);
	v->a[20994] = 1;
	v->a[20995] = sym_comment;
	v->a[20996] = actions(684);
	v->a[20997] = 2;
	v->a[20998] = anon_sym_GT_GT;
	v->a[20999] = anon_sym_LT_LT;
	small_parse_table_1050(v);
}

/* EOF small_parse_table_209.c */
