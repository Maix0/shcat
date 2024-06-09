/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_189.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_945(t_small_parse_table_array *v)
{
	v->a[18900] = 1;
	v->a[18901] = sym_variable_assignment;
	v->a[18902] = state(582);
	v->a[18903] = 1;
	v->a[18904] = sym_concatenation;
	v->a[18905] = state(585);
	v->a[18906] = 1;
	v->a[18907] = aux_sym_command_repeat1;
	v->a[18908] = state(718);
	v->a[18909] = 1;
	v->a[18910] = sym_file_redirect;
	v->a[18911] = state(1356);
	v->a[18912] = 1;
	v->a[18913] = aux_sym_redirected_statement_repeat2;
	v->a[18914] = state(1384);
	v->a[18915] = 1;
	v->a[18916] = sym_pipeline;
	v->a[18917] = actions(11);
	v->a[18918] = 2;
	v->a[18919] = anon_sym_while;
	small_parse_table_946(v);
}

void	small_parse_table_946(t_small_parse_table_array *v)
{
	v->a[18920] = anon_sym_until;
	v->a[18921] = actions(355);
	v->a[18922] = 2;
	v->a[18923] = anon_sym_LT_AMP_DASH;
	v->a[18924] = anon_sym_GT_AMP_DASH;
	v->a[18925] = state(686);
	v->a[18926] = 6;
	v->a[18927] = sym_arithmetic_expansion;
	v->a[18928] = sym_string;
	v->a[18929] = sym_number;
	v->a[18930] = sym_simple_expansion;
	v->a[18931] = sym_expansion;
	v->a[18932] = sym_command_substitution;
	v->a[18933] = actions(353);
	v->a[18934] = 8;
	v->a[18935] = anon_sym_LT;
	v->a[18936] = anon_sym_GT;
	v->a[18937] = anon_sym_GT_GT;
	v->a[18938] = anon_sym_AMP_GT;
	v->a[18939] = anon_sym_AMP_GT_GT;
	small_parse_table_947(v);
}

void	small_parse_table_947(t_small_parse_table_array *v)
{
	v->a[18940] = anon_sym_LT_AMP;
	v->a[18941] = anon_sym_GT_AMP;
	v->a[18942] = anon_sym_GT_PIPE;
	v->a[18943] = state(1007);
	v->a[18944] = 13;
	v->a[18945] = sym__statement_not_pipeline;
	v->a[18946] = sym_redirected_statement;
	v->a[18947] = sym_for_statement;
	v->a[18948] = sym_while_statement;
	v->a[18949] = sym_if_statement;
	v->a[18950] = sym_case_statement;
	v->a[18951] = sym_function_definition;
	v->a[18952] = sym_compound_statement;
	v->a[18953] = sym_subshell;
	v->a[18954] = sym_list;
	v->a[18955] = sym_negated_command;
	v->a[18956] = sym_command;
	v->a[18957] = sym_variable_assignments;
	v->a[18958] = 31;
	v->a[18959] = actions(3);
	small_parse_table_948(v);
}

void	small_parse_table_948(t_small_parse_table_array *v)
{
	v->a[18960] = 1;
	v->a[18961] = sym_comment;
	v->a[18962] = actions(7);
	v->a[18963] = 1;
	v->a[18964] = sym_word;
	v->a[18965] = actions(9);
	v->a[18966] = 1;
	v->a[18967] = anon_sym_for;
	v->a[18968] = actions(13);
	v->a[18969] = 1;
	v->a[18970] = anon_sym_if;
	v->a[18971] = actions(15);
	v->a[18972] = 1;
	v->a[18973] = anon_sym_case;
	v->a[18974] = actions(17);
	v->a[18975] = 1;
	v->a[18976] = anon_sym_LPAREN;
	v->a[18977] = actions(19);
	v->a[18978] = 1;
	v->a[18979] = anon_sym_LBRACE;
	small_parse_table_949(v);
}

void	small_parse_table_949(t_small_parse_table_array *v)
{
	v->a[18980] = actions(21);
	v->a[18981] = 1;
	v->a[18982] = anon_sym_BANG;
	v->a[18983] = actions(27);
	v->a[18984] = 1;
	v->a[18985] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[18986] = actions(29);
	v->a[18987] = 1;
	v->a[18988] = anon_sym_DOLLAR;
	v->a[18989] = actions(31);
	v->a[18990] = 1;
	v->a[18991] = anon_sym_DQUOTE;
	v->a[18992] = actions(33);
	v->a[18993] = 1;
	v->a[18994] = sym_raw_string;
	v->a[18995] = actions(35);
	v->a[18996] = 1;
	v->a[18997] = aux_sym_number_token1;
	v->a[18998] = actions(37);
	v->a[18999] = 1;
	small_parse_table_950(v);
}

/* EOF small_parse_table_189.c */
