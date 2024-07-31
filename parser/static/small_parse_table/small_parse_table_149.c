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
	v->a[14900] = sym_raw_string;
	v->a[14901] = sym_number;
	v->a[14902] = state(635);
	v->a[14903] = 5;
	v->a[14904] = sym_arithmetic_expansion;
	v->a[14905] = sym_string;
	v->a[14906] = sym_simple_expansion;
	v->a[14907] = sym_expansion;
	v->a[14908] = sym_command_substitution;
	v->a[14909] = actions(323);
	v->a[14910] = 7;
	v->a[14911] = anon_sym_LT;
	v->a[14912] = anon_sym_GT;
	v->a[14913] = anon_sym_GT_GT;
	v->a[14914] = anon_sym_LT_AMP;
	v->a[14915] = anon_sym_GT_AMP;
	v->a[14916] = anon_sym_GT_PIPE;
	v->a[14917] = anon_sym_LT_GT;
	v->a[14918] = state(1229);
	v->a[14919] = 12;
	small_parse_table_746(v);
}

void	small_parse_table_746(t_small_parse_table_array *v)
{
	v->a[14920] = sym_redirected_statement;
	v->a[14921] = sym_for_statement;
	v->a[14922] = sym_while_statement;
	v->a[14923] = sym_if_statement;
	v->a[14924] = sym_case_statement;
	v->a[14925] = sym_function_definition;
	v->a[14926] = sym_compound_statement;
	v->a[14927] = sym_subshell;
	v->a[14928] = sym_list;
	v->a[14929] = sym_negated_command;
	v->a[14930] = sym_command;
	v->a[14931] = sym__variable_assignments;
	v->a[14932] = 27;
	v->a[14933] = actions(3);
	v->a[14934] = 1;
	v->a[14935] = sym_comment;
	v->a[14936] = actions(307);
	v->a[14937] = 1;
	v->a[14938] = sym_word;
	v->a[14939] = actions(309);
	small_parse_table_747(v);
}

void	small_parse_table_747(t_small_parse_table_array *v)
{
	v->a[14940] = 1;
	v->a[14941] = anon_sym_for;
	v->a[14942] = actions(313);
	v->a[14943] = 1;
	v->a[14944] = anon_sym_if;
	v->a[14945] = actions(315);
	v->a[14946] = 1;
	v->a[14947] = anon_sym_case;
	v->a[14948] = actions(317);
	v->a[14949] = 1;
	v->a[14950] = anon_sym_LPAREN;
	v->a[14951] = actions(319);
	v->a[14952] = 1;
	v->a[14953] = anon_sym_LBRACE;
	v->a[14954] = actions(321);
	v->a[14955] = 1;
	v->a[14956] = anon_sym_BANG;
	v->a[14957] = actions(325);
	v->a[14958] = 1;
	v->a[14959] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_748(v);
}

void	small_parse_table_748(t_small_parse_table_array *v)
{
	v->a[14960] = actions(327);
	v->a[14961] = 1;
	v->a[14962] = anon_sym_DOLLAR;
	v->a[14963] = actions(329);
	v->a[14964] = 1;
	v->a[14965] = anon_sym_DQUOTE;
	v->a[14966] = actions(333);
	v->a[14967] = 1;
	v->a[14968] = anon_sym_DOLLAR_LBRACE;
	v->a[14969] = actions(335);
	v->a[14970] = 1;
	v->a[14971] = anon_sym_DOLLAR_LPAREN;
	v->a[14972] = actions(337);
	v->a[14973] = 1;
	v->a[14974] = anon_sym_BQUOTE;
	v->a[14975] = actions(339);
	v->a[14976] = 1;
	v->a[14977] = sym_variable_name;
	v->a[14978] = state(342);
	v->a[14979] = 1;
	small_parse_table_749(v);
}

void	small_parse_table_749(t_small_parse_table_array *v)
{
	v->a[14980] = sym_command_name;
	v->a[14981] = state(489);
	v->a[14982] = 1;
	v->a[14983] = aux_sym_command_repeat1;
	v->a[14984] = state(510);
	v->a[14985] = 1;
	v->a[14986] = sym_variable_assignment;
	v->a[14987] = state(717);
	v->a[14988] = 1;
	v->a[14989] = sym_file_redirect;
	v->a[14990] = state(732);
	v->a[14991] = 1;
	v->a[14992] = sym_concatenation;
	v->a[14993] = state(1236);
	v->a[14994] = 1;
	v->a[14995] = aux_sym_redirected_statement_repeat2;
	v->a[14996] = state(1239);
	v->a[14997] = 1;
	v->a[14998] = sym_pipeline;
	v->a[14999] = actions(311);
	small_parse_table_750(v);
}

/* EOF small_parse_table_149.c */
