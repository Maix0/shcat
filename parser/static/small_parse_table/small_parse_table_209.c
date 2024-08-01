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
	v->a[20900] = actions(343);
	v->a[20901] = 14;
	v->a[20902] = anon_sym_AMP_AMP;
	v->a[20903] = anon_sym_PIPE_PIPE;
	v->a[20904] = anon_sym_LT;
	v->a[20905] = anon_sym_GT;
	v->a[20906] = anon_sym_GT_GT;
	v->a[20907] = aux_sym_heredoc_redirect_token1;
	v->a[20908] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20909] = anon_sym_DQUOTE;
	v->a[20910] = sym_raw_string;
	v->a[20911] = sym_number;
	v->a[20912] = anon_sym_DOLLAR_LBRACE;
	v->a[20913] = anon_sym_DOLLAR_LPAREN;
	v->a[20914] = anon_sym_BQUOTE;
	v->a[20915] = sym_word;
	v->a[20916] = 5;
	v->a[20917] = actions(3);
	v->a[20918] = 1;
	v->a[20919] = sym_comment;
	small_parse_table_1046(v);
}

void	small_parse_table_1046(t_small_parse_table_array *v)
{
	v->a[20920] = actions(423);
	v->a[20921] = 1;
	v->a[20922] = sym_variable_name;
	v->a[20923] = state(242);
	v->a[20924] = 2;
	v->a[20925] = sym_concatenation;
	v->a[20926] = aux_sym_for_statement_repeat1;
	v->a[20927] = state(530);
	v->a[20928] = 5;
	v->a[20929] = sym_arithmetic_expansion;
	v->a[20930] = sym_string;
	v->a[20931] = sym_simple_expansion;
	v->a[20932] = sym_expansion;
	v->a[20933] = sym_command_substitution;
	v->a[20934] = actions(421);
	v->a[20935] = 17;
	v->a[20936] = anon_sym_PIPE;
	v->a[20937] = anon_sym_AMP_AMP;
	v->a[20938] = anon_sym_PIPE_PIPE;
	v->a[20939] = anon_sym_LT;
	small_parse_table_1047(v);
}

void	small_parse_table_1047(t_small_parse_table_array *v)
{
	v->a[20940] = anon_sym_GT;
	v->a[20941] = anon_sym_GT_GT;
	v->a[20942] = anon_sym_LT_LT;
	v->a[20943] = aux_sym_heredoc_redirect_token1;
	v->a[20944] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20945] = anon_sym_DOLLAR;
	v->a[20946] = anon_sym_DQUOTE;
	v->a[20947] = sym_raw_string;
	v->a[20948] = sym_number;
	v->a[20949] = anon_sym_DOLLAR_LBRACE;
	v->a[20950] = anon_sym_DOLLAR_LPAREN;
	v->a[20951] = anon_sym_BQUOTE;
	v->a[20952] = sym_word;
	v->a[20953] = 3;
	v->a[20954] = actions(3);
	v->a[20955] = 1;
	v->a[20956] = sym_comment;
	v->a[20957] = actions(869);
	v->a[20958] = 1;
	v->a[20959] = sym_variable_name;
	small_parse_table_1048(v);
}

void	small_parse_table_1048(t_small_parse_table_array *v)
{
	v->a[20960] = actions(867);
	v->a[20961] = 24;
	v->a[20962] = anon_sym_for;
	v->a[20963] = anon_sym_while;
	v->a[20964] = anon_sym_until;
	v->a[20965] = anon_sym_done;
	v->a[20966] = anon_sym_if;
	v->a[20967] = anon_sym_then;
	v->a[20968] = anon_sym_case;
	v->a[20969] = anon_sym_LPAREN;
	v->a[20970] = anon_sym_RPAREN;
	v->a[20971] = anon_sym_SEMI_SEMI;
	v->a[20972] = anon_sym_LBRACE;
	v->a[20973] = anon_sym_BANG;
	v->a[20974] = anon_sym_LT;
	v->a[20975] = anon_sym_GT;
	v->a[20976] = anon_sym_GT_GT;
	v->a[20977] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20978] = anon_sym_DOLLAR;
	v->a[20979] = anon_sym_DQUOTE;
	small_parse_table_1049(v);
}

void	small_parse_table_1049(t_small_parse_table_array *v)
{
	v->a[20980] = sym_raw_string;
	v->a[20981] = sym_number;
	v->a[20982] = anon_sym_DOLLAR_LBRACE;
	v->a[20983] = anon_sym_DOLLAR_LPAREN;
	v->a[20984] = anon_sym_BQUOTE;
	v->a[20985] = sym_word;
	v->a[20986] = 13;
	v->a[20987] = actions(3);
	v->a[20988] = 1;
	v->a[20989] = sym_comment;
	v->a[20990] = actions(53);
	v->a[20991] = 1;
	v->a[20992] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20993] = actions(55);
	v->a[20994] = 1;
	v->a[20995] = anon_sym_DOLLAR;
	v->a[20996] = actions(57);
	v->a[20997] = 1;
	v->a[20998] = anon_sym_DQUOTE;
	v->a[20999] = actions(61);
	small_parse_table_1050(v);
}

/* EOF small_parse_table_209.c */
