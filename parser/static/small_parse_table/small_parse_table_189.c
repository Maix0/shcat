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
	v->a[18900] = anon_sym_DOLLAR;
	v->a[18901] = actions(63);
	v->a[18902] = 1;
	v->a[18903] = anon_sym_DQUOTE;
	v->a[18904] = actions(67);
	v->a[18905] = 1;
	v->a[18906] = anon_sym_DOLLAR_LBRACE;
	v->a[18907] = actions(69);
	v->a[18908] = 1;
	v->a[18909] = anon_sym_DOLLAR_LPAREN;
	v->a[18910] = actions(71);
	v->a[18911] = 1;
	v->a[18912] = anon_sym_BQUOTE;
	v->a[18913] = actions(363);
	v->a[18914] = 1;
	v->a[18915] = sym_word;
	v->a[18916] = actions(365);
	v->a[18917] = 1;
	v->a[18918] = anon_sym_BANG;
	v->a[18919] = actions(373);
	small_parse_table_946(v);
}

void	small_parse_table_946(t_small_parse_table_array *v)
{
	v->a[18920] = 1;
	v->a[18921] = sym_file_descriptor;
	v->a[18922] = actions(375);
	v->a[18923] = 1;
	v->a[18924] = sym_variable_name;
	v->a[18925] = state(242);
	v->a[18926] = 1;
	v->a[18927] = sym_command_name;
	v->a[18928] = state(614);
	v->a[18929] = 1;
	v->a[18930] = sym_variable_assignment;
	v->a[18931] = state(647);
	v->a[18932] = 1;
	v->a[18933] = sym_concatenation;
	v->a[18934] = state(738);
	v->a[18935] = 1;
	v->a[18936] = sym_file_redirect;
	v->a[18937] = state(768);
	v->a[18938] = 1;
	v->a[18939] = aux_sym_command_repeat1;
	small_parse_table_947(v);
}

void	small_parse_table_947(t_small_parse_table_array *v)
{
	v->a[18940] = state(1564);
	v->a[18941] = 1;
	v->a[18942] = aux_sym_redirected_statement_repeat2;
	v->a[18943] = state(1586);
	v->a[18944] = 1;
	v->a[18945] = sym_pipeline;
	v->a[18946] = state(2263);
	v->a[18947] = 1;
	v->a[18948] = sym__statement_not_pipeline;
	v->a[18949] = actions(11);
	v->a[18950] = 2;
	v->a[18951] = anon_sym_while;
	v->a[18952] = anon_sym_until;
	v->a[18953] = actions(369);
	v->a[18954] = 2;
	v->a[18955] = anon_sym_LT_AMP_DASH;
	v->a[18956] = anon_sym_GT_AMP_DASH;
	v->a[18957] = actions(371);
	v->a[18958] = 2;
	v->a[18959] = sym_raw_string;
	small_parse_table_948(v);
}

void	small_parse_table_948(t_small_parse_table_array *v)
{
	v->a[18960] = sym_number;
	v->a[18961] = state(790);
	v->a[18962] = 5;
	v->a[18963] = sym_arithmetic_expansion;
	v->a[18964] = sym_string;
	v->a[18965] = sym_simple_expansion;
	v->a[18966] = sym_expansion;
	v->a[18967] = sym_command_substitution;
	v->a[18968] = actions(367);
	v->a[18969] = 8;
	v->a[18970] = anon_sym_LT;
	v->a[18971] = anon_sym_GT;
	v->a[18972] = anon_sym_GT_GT;
	v->a[18973] = anon_sym_AMP_GT;
	v->a[18974] = anon_sym_AMP_GT_GT;
	v->a[18975] = anon_sym_LT_AMP;
	v->a[18976] = anon_sym_GT_AMP;
	v->a[18977] = anon_sym_GT_PIPE;
	v->a[18978] = state(1555);
	v->a[18979] = 12;
	small_parse_table_949(v);
}

void	small_parse_table_949(t_small_parse_table_array *v)
{
	v->a[18980] = sym_redirected_statement;
	v->a[18981] = sym_for_statement;
	v->a[18982] = sym_while_statement;
	v->a[18983] = sym_if_statement;
	v->a[18984] = sym_case_statement;
	v->a[18985] = sym_function_definition;
	v->a[18986] = sym_compound_statement;
	v->a[18987] = sym_subshell;
	v->a[18988] = sym_list;
	v->a[18989] = sym_negated_command;
	v->a[18990] = sym_command;
	v->a[18991] = sym__variable_assignments;
	v->a[18992] = 30;
	v->a[18993] = actions(3);
	v->a[18994] = 1;
	v->a[18995] = sym_comment;
	v->a[18996] = actions(9);
	v->a[18997] = 1;
	v->a[18998] = anon_sym_for;
	v->a[18999] = actions(13);
	small_parse_table_950(v);
}

/* EOF small_parse_table_189.c */
