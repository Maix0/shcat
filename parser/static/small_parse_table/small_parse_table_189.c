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
	v->a[18900] = sym_while_statement;
	v->a[18901] = sym_if_statement;
	v->a[18902] = sym_case_statement;
	v->a[18903] = sym_function_definition;
	v->a[18904] = sym_compound_statement;
	v->a[18905] = sym_subshell;
	v->a[18906] = sym_list;
	v->a[18907] = sym_negated_command;
	v->a[18908] = sym_command;
	v->a[18909] = sym__variable_assignments;
	v->a[18910] = 25;
	v->a[18911] = actions(3);
	v->a[18912] = 1;
	v->a[18913] = sym_comment;
	v->a[18914] = actions(327);
	v->a[18915] = 1;
	v->a[18916] = anon_sym_for;
	v->a[18917] = actions(331);
	v->a[18918] = 1;
	v->a[18919] = anon_sym_if;
	small_parse_table_946(v);
}

void	small_parse_table_946(t_small_parse_table_array *v)
{
	v->a[18920] = actions(335);
	v->a[18921] = 1;
	v->a[18922] = anon_sym_LPAREN;
	v->a[18923] = actions(337);
	v->a[18924] = 1;
	v->a[18925] = anon_sym_LBRACE;
	v->a[18926] = actions(345);
	v->a[18927] = 1;
	v->a[18928] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[18929] = actions(347);
	v->a[18930] = 1;
	v->a[18931] = anon_sym_DOLLAR;
	v->a[18932] = actions(349);
	v->a[18933] = 1;
	v->a[18934] = anon_sym_DQUOTE;
	v->a[18935] = actions(353);
	v->a[18936] = 1;
	v->a[18937] = anon_sym_DOLLAR_LBRACE;
	v->a[18938] = actions(355);
	v->a[18939] = 1;
	small_parse_table_947(v);
}

void	small_parse_table_947(t_small_parse_table_array *v)
{
	v->a[18940] = anon_sym_DOLLAR_LPAREN;
	v->a[18941] = actions(357);
	v->a[18942] = 1;
	v->a[18943] = anon_sym_BQUOTE;
	v->a[18944] = actions(359);
	v->a[18945] = 1;
	v->a[18946] = sym_file_descriptor;
	v->a[18947] = actions(377);
	v->a[18948] = 1;
	v->a[18949] = sym_variable_name;
	v->a[18950] = state(387);
	v->a[18951] = 1;
	v->a[18952] = sym_command_name;
	v->a[18953] = state(737);
	v->a[18954] = 1;
	v->a[18955] = aux_sym_command_repeat1;
	v->a[18956] = state(975);
	v->a[18957] = 1;
	v->a[18958] = sym_concatenation;
	v->a[18959] = state(991);
	small_parse_table_948(v);
}

void	small_parse_table_948(t_small_parse_table_array *v)
{
	v->a[18960] = 1;
	v->a[18961] = sym_file_redirect;
	v->a[18962] = state(1305);
	v->a[18963] = 1;
	v->a[18964] = sym_variable_assignment;
	v->a[18965] = state(1540);
	v->a[18966] = 1;
	v->a[18967] = aux_sym_redirected_statement_repeat2;
	v->a[18968] = actions(329);
	v->a[18969] = 2;
	v->a[18970] = anon_sym_while;
	v->a[18971] = anon_sym_until;
	v->a[18972] = actions(343);
	v->a[18973] = 2;
	v->a[18974] = anon_sym_LT_AMP_DASH;
	v->a[18975] = anon_sym_GT_AMP_DASH;
	v->a[18976] = actions(351);
	v->a[18977] = 3;
	v->a[18978] = sym_raw_string;
	v->a[18979] = sym_number;
	small_parse_table_949(v);
}

void	small_parse_table_949(t_small_parse_table_array *v)
{
	v->a[18980] = sym_word;
	v->a[18981] = state(785);
	v->a[18982] = 5;
	v->a[18983] = sym_arithmetic_expansion;
	v->a[18984] = sym_string;
	v->a[18985] = sym_simple_expansion;
	v->a[18986] = sym_expansion;
	v->a[18987] = sym_command_substitution;
	v->a[18988] = actions(341);
	v->a[18989] = 6;
	v->a[18990] = anon_sym_LT;
	v->a[18991] = anon_sym_GT;
	v->a[18992] = anon_sym_GT_GT;
	v->a[18993] = anon_sym_LT_AMP;
	v->a[18994] = anon_sym_GT_AMP;
	v->a[18995] = anon_sym_GT_PIPE;
	v->a[18996] = state(1680);
	v->a[18997] = 7;
	v->a[18998] = sym_for_statement;
	v->a[18999] = sym_while_statement;
	small_parse_table_950(v);
}

/* EOF small_parse_table_189.c */
