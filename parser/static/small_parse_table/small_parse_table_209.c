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
	v->a[20900] = ts_builtin_sym_end;
	v->a[20901] = actions(423);
	v->a[20902] = 9;
	v->a[20903] = anon_sym_BANG;
	v->a[20904] = anon_sym_DASH;
	v->a[20905] = anon_sym_STAR;
	v->a[20906] = anon_sym_QMARK;
	v->a[20907] = anon_sym_DOLLAR;
	v->a[20908] = anon_sym_POUND;
	v->a[20909] = anon_sym_AT;
	v->a[20910] = anon_sym_0;
	v->a[20911] = anon_sym__;
	v->a[20912] = actions(407);
	v->a[20913] = 29;
	v->a[20914] = anon_sym_LPAREN;
	v->a[20915] = anon_sym_PIPE;
	v->a[20916] = anon_sym_SEMI_SEMI;
	v->a[20917] = anon_sym_AMP_AMP;
	v->a[20918] = anon_sym_PIPE_PIPE;
	v->a[20919] = anon_sym_LT;
	small_parse_table_1046(v);
}

void	small_parse_table_1046(t_small_parse_table_array *v)
{
	v->a[20920] = anon_sym_GT;
	v->a[20921] = anon_sym_GT_GT;
	v->a[20922] = anon_sym_AMP_GT;
	v->a[20923] = anon_sym_AMP_GT_GT;
	v->a[20924] = anon_sym_LT_AMP;
	v->a[20925] = anon_sym_GT_AMP;
	v->a[20926] = anon_sym_GT_PIPE;
	v->a[20927] = anon_sym_LT_AMP_DASH;
	v->a[20928] = anon_sym_GT_AMP_DASH;
	v->a[20929] = anon_sym_LT_LT;
	v->a[20930] = anon_sym_LT_LT_DASH;
	v->a[20931] = aux_sym_heredoc_redirect_token1;
	v->a[20932] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20933] = anon_sym_AMP;
	v->a[20934] = anon_sym_DQUOTE;
	v->a[20935] = sym_raw_string;
	v->a[20936] = aux_sym_number_token1;
	v->a[20937] = aux_sym_number_token2;
	v->a[20938] = anon_sym_DOLLAR_LBRACE;
	v->a[20939] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1047(v);
}

void	small_parse_table_1047(t_small_parse_table_array *v)
{
	v->a[20940] = anon_sym_BQUOTE;
	v->a[20941] = sym_word;
	v->a[20942] = anon_sym_SEMI;
	v->a[20943] = 6;
	v->a[20944] = actions(3);
	v->a[20945] = 1;
	v->a[20946] = sym_comment;
	v->a[20947] = actions(433);
	v->a[20948] = 1;
	v->a[20949] = sym_variable_name;
	v->a[20950] = actions(413);
	v->a[20951] = 2;
	v->a[20952] = sym_file_descriptor;
	v->a[20953] = sym__bare_dollar;
	v->a[20954] = actions(431);
	v->a[20955] = 2;
	v->a[20956] = aux_sym__simple_variable_name_token1;
	v->a[20957] = aux_sym__multiline_variable_name_token1;
	v->a[20958] = actions(429);
	v->a[20959] = 9;
	small_parse_table_1048(v);
}

void	small_parse_table_1048(t_small_parse_table_array *v)
{
	v->a[20960] = anon_sym_BANG;
	v->a[20961] = anon_sym_DASH;
	v->a[20962] = anon_sym_STAR;
	v->a[20963] = anon_sym_QMARK;
	v->a[20964] = anon_sym_DOLLAR;
	v->a[20965] = anon_sym_POUND;
	v->a[20966] = anon_sym_AT;
	v->a[20967] = anon_sym_0;
	v->a[20968] = anon_sym__;
	v->a[20969] = actions(407);
	v->a[20970] = 29;
	v->a[20971] = anon_sym_PIPE;
	v->a[20972] = anon_sym_RPAREN;
	v->a[20973] = anon_sym_SEMI_SEMI;
	v->a[20974] = anon_sym_AMP_AMP;
	v->a[20975] = anon_sym_PIPE_PIPE;
	v->a[20976] = anon_sym_LT;
	v->a[20977] = anon_sym_GT;
	v->a[20978] = anon_sym_GT_GT;
	v->a[20979] = anon_sym_AMP_GT;
	small_parse_table_1049(v);
}

void	small_parse_table_1049(t_small_parse_table_array *v)
{
	v->a[20980] = anon_sym_AMP_GT_GT;
	v->a[20981] = anon_sym_LT_AMP;
	v->a[20982] = anon_sym_GT_AMP;
	v->a[20983] = anon_sym_GT_PIPE;
	v->a[20984] = anon_sym_LT_AMP_DASH;
	v->a[20985] = anon_sym_GT_AMP_DASH;
	v->a[20986] = anon_sym_LT_LT;
	v->a[20987] = anon_sym_LT_LT_DASH;
	v->a[20988] = aux_sym_heredoc_redirect_token1;
	v->a[20989] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20990] = anon_sym_AMP;
	v->a[20991] = anon_sym_DQUOTE;
	v->a[20992] = sym_raw_string;
	v->a[20993] = aux_sym_number_token1;
	v->a[20994] = aux_sym_number_token2;
	v->a[20995] = anon_sym_DOLLAR_LBRACE;
	v->a[20996] = anon_sym_DOLLAR_LPAREN;
	v->a[20997] = anon_sym_BQUOTE;
	v->a[20998] = sym_word;
	v->a[20999] = anon_sym_SEMI;
	small_parse_table_1050(v);
}

/* EOF small_parse_table_209.c */
