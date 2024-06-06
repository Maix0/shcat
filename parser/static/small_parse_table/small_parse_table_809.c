/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_809.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4045(t_small_parse_table_array *v)
{
	v->a[80900] = 1;
	v->a[80901] = anon_sym_DQUOTE;
	v->a[80902] = actions(4556);
	v->a[80903] = 1;
	v->a[80904] = anon_sym_DOLLAR_LBRACE;
	v->a[80905] = actions(4558);
	v->a[80906] = 1;
	v->a[80907] = anon_sym_BQUOTE;
	v->a[80908] = actions(4560);
	v->a[80909] = 1;
	v->a[80910] = anon_sym_DOLLAR_BQUOTE;
	v->a[80911] = actions(4568);
	v->a[80912] = 1;
	v->a[80913] = anon_sym_esac;
	v->a[80914] = state(3393);
	v->a[80915] = 1;
	v->a[80916] = aux_sym__literal_repeat1;
	v->a[80917] = state(3821);
	v->a[80918] = 1;
	v->a[80919] = sym_last_case_item;
	small_parse_table_4046(v);
}

void	small_parse_table_4046(t_small_parse_table_array *v)
{
	v->a[80920] = actions(4358);
	v->a[80921] = 2;
	v->a[80922] = sym_test_operator;
	v->a[80923] = sym_raw_string;
	v->a[80924] = state(1753);
	v->a[80925] = 2;
	v->a[80926] = sym_case_item;
	v->a[80927] = aux_sym_case_statement_repeat1;
	v->a[80928] = state(3472);
	v->a[80929] = 2;
	v->a[80930] = sym_concatenation;
	v->a[80931] = sym__extglob_blob;
	v->a[80932] = state(3295);
	v->a[80933] = 7;
	v->a[80934] = sym_arithmetic_expansion;
	v->a[80935] = sym_brace_expression;
	v->a[80936] = sym_string;
	v->a[80937] = sym_number;
	v->a[80938] = sym_simple_expansion;
	v->a[80939] = sym_expansion;
	small_parse_table_4047(v);
}

void	small_parse_table_4047(t_small_parse_table_array *v)
{
	v->a[80940] = sym_command_substitution;
	v->a[80941] = 3;
	v->a[80942] = actions(3);
	v->a[80943] = 1;
	v->a[80944] = sym_comment;
	v->a[80945] = actions(2967);
	v->a[80946] = 5;
	v->a[80947] = sym_file_descriptor;
	v->a[80948] = sym__concat;
	v->a[80949] = sym_test_operator;
	v->a[80950] = sym__brace_start;
	v->a[80951] = aux_sym_heredoc_redirect_token1;
	v->a[80952] = actions(2965);
	v->a[80953] = 25;
	v->a[80954] = anon_sym_AMP_AMP;
	v->a[80955] = anon_sym_PIPE_PIPE;
	v->a[80956] = anon_sym_LT;
	v->a[80957] = anon_sym_GT;
	v->a[80958] = anon_sym_GT_GT;
	v->a[80959] = anon_sym_AMP_GT;
	small_parse_table_4048(v);
}

void	small_parse_table_4048(t_small_parse_table_array *v)
{
	v->a[80960] = anon_sym_AMP_GT_GT;
	v->a[80961] = anon_sym_LT_AMP;
	v->a[80962] = anon_sym_GT_AMP;
	v->a[80963] = anon_sym_GT_PIPE;
	v->a[80964] = anon_sym_LT_AMP_DASH;
	v->a[80965] = anon_sym_GT_AMP_DASH;
	v->a[80966] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[80967] = aux_sym_concatenation_token1;
	v->a[80968] = anon_sym_DOLLAR;
	v->a[80969] = sym__special_character;
	v->a[80970] = anon_sym_DQUOTE;
	v->a[80971] = sym_raw_string;
	v->a[80972] = aux_sym_number_token1;
	v->a[80973] = aux_sym_number_token2;
	v->a[80974] = anon_sym_DOLLAR_LBRACE;
	v->a[80975] = anon_sym_DOLLAR_LPAREN;
	v->a[80976] = anon_sym_BQUOTE;
	v->a[80977] = anon_sym_DOLLAR_BQUOTE;
	v->a[80978] = sym_word;
	v->a[80979] = 6;
	small_parse_table_4049(v);
}

void	small_parse_table_4049(t_small_parse_table_array *v)
{
	v->a[80980] = actions(3);
	v->a[80981] = 1;
	v->a[80982] = sym_comment;
	v->a[80983] = actions(828);
	v->a[80984] = 1;
	v->a[80985] = sym_file_descriptor;
	v->a[80986] = actions(4412);
	v->a[80987] = 1;
	v->a[80988] = sym_variable_name;
	v->a[80989] = actions(4410);
	v->a[80990] = 2;
	v->a[80991] = aux_sym__simple_variable_name_token1;
	v->a[80992] = aux_sym__multiline_variable_name_token1;
	v->a[80993] = actions(4408);
	v->a[80994] = 9;
	v->a[80995] = anon_sym_BANG;
	v->a[80996] = anon_sym_DASH;
	v->a[80997] = anon_sym_STAR;
	v->a[80998] = anon_sym_QMARK;
	v->a[80999] = anon_sym_DOLLAR;
	small_parse_table_4050(v);
}

/* EOF small_parse_table_809.c */
