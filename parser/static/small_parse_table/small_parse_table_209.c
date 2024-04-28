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
	v->a[20900] = actions(3);
	v->a[20901] = 1;
	v->a[20902] = sym_comment;
	v->a[20903] = actions(2261);
	v->a[20904] = 1;
	v->a[20905] = anon_sym_DOLLAR_LBRACK;
	v->a[20906] = actions(2263);
	v->a[20907] = 1;
	v->a[20908] = anon_sym_DOLLAR;
	v->a[20909] = actions(2267);
	v->a[20910] = 1;
	v->a[20911] = anon_sym_DQUOTE;
	v->a[20912] = actions(2269);
	v->a[20913] = 1;
	v->a[20914] = aux_sym_number_token1;
	v->a[20915] = actions(2271);
	v->a[20916] = 1;
	v->a[20917] = aux_sym_number_token2;
	v->a[20918] = actions(2273);
	v->a[20919] = 1;
	small_parse_table_1046(v);
}

void	small_parse_table_1046(t_small_parse_table_array *v)
{
	v->a[20920] = anon_sym_DOLLAR_LBRACE;
	v->a[20921] = actions(2275);
	v->a[20922] = 1;
	v->a[20923] = anon_sym_DOLLAR_LPAREN;
	v->a[20924] = actions(2277);
	v->a[20925] = 1;
	v->a[20926] = anon_sym_BQUOTE;
	v->a[20927] = actions(2279);
	v->a[20928] = 1;
	v->a[20929] = anon_sym_DOLLAR_BQUOTE;
	v->a[20930] = actions(2289);
	v->a[20931] = 1;
	v->a[20932] = sym__brace_start;
	v->a[20933] = actions(3970);
	v->a[20934] = 1;
	v->a[20935] = sym__special_character;
	v->a[20936] = actions(3972);
	v->a[20937] = 1;
	v->a[20938] = aux_sym__simple_variable_name_token1;
	v->a[20939] = actions(3974);
	small_parse_table_1047(v);
}

void	small_parse_table_1047(t_small_parse_table_array *v)
{
	v->a[20940] = 1;
	v->a[20941] = sym_variable_name;
	v->a[20942] = actions(3976);
	v->a[20943] = 1;
	v->a[20944] = sym_test_operator;
	v->a[20945] = state(1743);
	v->a[20946] = 1;
	v->a[20947] = aux_sym__literal_repeat1;
	v->a[20948] = state(6739);
	v->a[20949] = 1;
	v->a[20950] = sym_subscript;
	v->a[20951] = actions(1757);
	v->a[20952] = 2;
	v->a[20953] = sym_file_descriptor;
	v->a[20954] = aux_sym_heredoc_redirect_token1;
	v->a[20955] = actions(2259);
	v->a[20956] = 2;
	v->a[20957] = anon_sym_LPAREN_LPAREN;
	v->a[20958] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20959] = actions(2281);
	small_parse_table_1048(v);
}

void	small_parse_table_1048(t_small_parse_table_array *v)
{
	v->a[20960] = 2;
	v->a[20961] = anon_sym_LT_LPAREN;
	v->a[20962] = anon_sym_GT_LPAREN;
	v->a[20963] = actions(3968);
	v->a[20964] = 3;
	v->a[20965] = sym_raw_string;
	v->a[20966] = sym_ansi_c_string;
	v->a[20967] = sym_word;
	v->a[20968] = state(777);
	v->a[20969] = 3;
	v->a[20970] = sym_variable_assignment;
	v->a[20971] = sym_concatenation;
	v->a[20972] = aux_sym_declaration_command_repeat1;
	v->a[20973] = state(2330);
	v->a[20974] = 9;
	v->a[20975] = sym_arithmetic_expansion;
	v->a[20976] = sym_brace_expression;
	v->a[20977] = sym_string;
	v->a[20978] = sym_translated_string;
	v->a[20979] = sym_number;
	small_parse_table_1049(v);
}

void	small_parse_table_1049(t_small_parse_table_array *v)
{
	v->a[20980] = sym_simple_expansion;
	v->a[20981] = sym_expansion;
	v->a[20982] = sym_command_substitution;
	v->a[20983] = sym_process_substitution;
	v->a[20984] = actions(1755);
	v->a[20985] = 16;
	v->a[20986] = anon_sym_PIPE_PIPE;
	v->a[20987] = anon_sym_AMP_AMP;
	v->a[20988] = anon_sym_PIPE;
	v->a[20989] = anon_sym_LT;
	v->a[20990] = anon_sym_GT;
	v->a[20991] = anon_sym_LT_LT;
	v->a[20992] = anon_sym_GT_GT;
	v->a[20993] = anon_sym_PIPE_AMP;
	v->a[20994] = anon_sym_AMP_GT;
	v->a[20995] = anon_sym_AMP_GT_GT;
	v->a[20996] = anon_sym_LT_AMP;
	v->a[20997] = anon_sym_GT_AMP;
	v->a[20998] = anon_sym_GT_PIPE;
	v->a[20999] = anon_sym_LT_AMP_DASH;
	small_parse_table_1050(v);
}

/* EOF small_parse_table_209.c */
