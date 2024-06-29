/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_149.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_745(t_small_parse_table_array *v)
{
	v->a[14900] = actions(61);
	v->a[14901] = 1;
	v->a[14902] = anon_sym_DOLLAR;
	v->a[14903] = actions(63);
	v->a[14904] = 1;
	v->a[14905] = anon_sym_DQUOTE;
	v->a[14906] = actions(67);
	v->a[14907] = 1;
	v->a[14908] = anon_sym_DOLLAR_LBRACE;
	v->a[14909] = actions(69);
	v->a[14910] = 1;
	v->a[14911] = anon_sym_DOLLAR_LPAREN;
	v->a[14912] = actions(71);
	v->a[14913] = 1;
	v->a[14914] = anon_sym_BQUOTE;
	v->a[14915] = actions(220);
	v->a[14916] = 1;
	v->a[14917] = sym_word;
	v->a[14918] = actions(222);
	v->a[14919] = 1;
	small_parse_table_746(v);
}

void	small_parse_table_746(t_small_parse_table_array *v)
{
	v->a[14920] = anon_sym_BANG;
	v->a[14921] = actions(230);
	v->a[14922] = 1;
	v->a[14923] = sym_file_descriptor;
	v->a[14924] = actions(232);
	v->a[14925] = 1;
	v->a[14926] = sym_variable_name;
	v->a[14927] = state(138);
	v->a[14928] = 1;
	v->a[14929] = aux_sym__statements_repeat1;
	v->a[14930] = state(185);
	v->a[14931] = 1;
	v->a[14932] = sym_command_name;
	v->a[14933] = state(235);
	v->a[14934] = 1;
	v->a[14935] = sym_variable_assignment;
	v->a[14936] = state(624);
	v->a[14937] = 1;
	v->a[14938] = sym_concatenation;
	v->a[14939] = state(710);
	small_parse_table_747(v);
}

void	small_parse_table_747(t_small_parse_table_array *v)
{
	v->a[14940] = 1;
	v->a[14941] = sym_file_redirect;
	v->a[14942] = state(765);
	v->a[14943] = 1;
	v->a[14944] = aux_sym_command_repeat1;
	v->a[14945] = state(1110);
	v->a[14946] = 1;
	v->a[14947] = sym_pipeline;
	v->a[14948] = state(1188);
	v->a[14949] = 1;
	v->a[14950] = aux_sym_redirected_statement_repeat2;
	v->a[14951] = state(2115);
	v->a[14952] = 1;
	v->a[14953] = sym__statement_not_pipeline;
	v->a[14954] = state(2253);
	v->a[14955] = 1;
	v->a[14956] = sym__statements;
	v->a[14957] = actions(11);
	v->a[14958] = 2;
	v->a[14959] = anon_sym_while;
	small_parse_table_748(v);
}

void	small_parse_table_748(t_small_parse_table_array *v)
{
	v->a[14960] = anon_sym_until;
	v->a[14961] = actions(226);
	v->a[14962] = 2;
	v->a[14963] = anon_sym_LT_AMP_DASH;
	v->a[14964] = anon_sym_GT_AMP_DASH;
	v->a[14965] = actions(228);
	v->a[14966] = 2;
	v->a[14967] = sym_raw_string;
	v->a[14968] = sym_number;
	v->a[14969] = state(299);
	v->a[14970] = 5;
	v->a[14971] = sym_arithmetic_expansion;
	v->a[14972] = sym_string;
	v->a[14973] = sym_simple_expansion;
	v->a[14974] = sym_expansion;
	v->a[14975] = sym_command_substitution;
	v->a[14976] = actions(224);
	v->a[14977] = 8;
	v->a[14978] = anon_sym_LT;
	v->a[14979] = anon_sym_GT;
	small_parse_table_749(v);
}

void	small_parse_table_749(t_small_parse_table_array *v)
{
	v->a[14980] = anon_sym_GT_GT;
	v->a[14981] = anon_sym_AMP_GT;
	v->a[14982] = anon_sym_AMP_GT_GT;
	v->a[14983] = anon_sym_LT_AMP;
	v->a[14984] = anon_sym_GT_AMP;
	v->a[14985] = anon_sym_GT_PIPE;
	v->a[14986] = state(1072);
	v->a[14987] = 12;
	v->a[14988] = sym_redirected_statement;
	v->a[14989] = sym_for_statement;
	v->a[14990] = sym_while_statement;
	v->a[14991] = sym_if_statement;
	v->a[14992] = sym_case_statement;
	v->a[14993] = sym_function_definition;
	v->a[14994] = sym_compound_statement;
	v->a[14995] = sym_subshell;
	v->a[14996] = sym_list;
	v->a[14997] = sym_negated_command;
	v->a[14998] = sym_command;
	v->a[14999] = sym__variable_assignments;
	small_parse_table_750(v);
}

/* EOF small_parse_table_149.c */
