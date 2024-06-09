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
	v->a[14900] = state(614);
	v->a[14901] = 1;
	v->a[14902] = aux_sym_command_repeat1;
	v->a[14903] = state(769);
	v->a[14904] = 1;
	v->a[14905] = sym_file_redirect;
	v->a[14906] = state(1133);
	v->a[14907] = 1;
	v->a[14908] = aux_sym_redirected_statement_repeat2;
	v->a[14909] = state(1142);
	v->a[14910] = 1;
	v->a[14911] = sym_pipeline;
	v->a[14912] = state(2041);
	v->a[14913] = 1;
	v->a[14914] = sym__statement_not_pipeline;
	v->a[14915] = state(2149);
	v->a[14916] = 1;
	v->a[14917] = sym__statements;
	v->a[14918] = actions(11);
	v->a[14919] = 2;
	small_parse_table_746(v);
}

void	small_parse_table_746(t_small_parse_table_array *v)
{
	v->a[14920] = anon_sym_while;
	v->a[14921] = anon_sym_until;
	v->a[14922] = actions(61);
	v->a[14923] = 2;
	v->a[14924] = anon_sym_LT_AMP_DASH;
	v->a[14925] = anon_sym_GT_AMP_DASH;
	v->a[14926] = state(397);
	v->a[14927] = 6;
	v->a[14928] = sym_arithmetic_expansion;
	v->a[14929] = sym_string;
	v->a[14930] = sym_number;
	v->a[14931] = sym_simple_expansion;
	v->a[14932] = sym_expansion;
	v->a[14933] = sym_command_substitution;
	v->a[14934] = actions(59);
	v->a[14935] = 8;
	v->a[14936] = anon_sym_LT;
	v->a[14937] = anon_sym_GT;
	v->a[14938] = anon_sym_GT_GT;
	v->a[14939] = anon_sym_AMP_GT;
	small_parse_table_747(v);
}

void	small_parse_table_747(t_small_parse_table_array *v)
{
	v->a[14940] = anon_sym_AMP_GT_GT;
	v->a[14941] = anon_sym_LT_AMP;
	v->a[14942] = anon_sym_GT_AMP;
	v->a[14943] = anon_sym_GT_PIPE;
	v->a[14944] = state(1071);
	v->a[14945] = 12;
	v->a[14946] = sym_redirected_statement;
	v->a[14947] = sym_for_statement;
	v->a[14948] = sym_while_statement;
	v->a[14949] = sym_if_statement;
	v->a[14950] = sym_case_statement;
	v->a[14951] = sym_function_definition;
	v->a[14952] = sym_compound_statement;
	v->a[14953] = sym_subshell;
	v->a[14954] = sym_list;
	v->a[14955] = sym_negated_command;
	v->a[14956] = sym_command;
	v->a[14957] = sym_variable_assignments;
	v->a[14958] = 34;
	v->a[14959] = actions(3);
	small_parse_table_748(v);
}

void	small_parse_table_748(t_small_parse_table_array *v)
{
	v->a[14960] = 1;
	v->a[14961] = sym_comment;
	v->a[14962] = actions(9);
	v->a[14963] = 1;
	v->a[14964] = anon_sym_for;
	v->a[14965] = actions(13);
	v->a[14966] = 1;
	v->a[14967] = anon_sym_if;
	v->a[14968] = actions(15);
	v->a[14969] = 1;
	v->a[14970] = anon_sym_case;
	v->a[14971] = actions(17);
	v->a[14972] = 1;
	v->a[14973] = anon_sym_LPAREN;
	v->a[14974] = actions(19);
	v->a[14975] = 1;
	v->a[14976] = anon_sym_LBRACE;
	v->a[14977] = actions(63);
	v->a[14978] = 1;
	v->a[14979] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_749(v);
}

void	small_parse_table_749(t_small_parse_table_array *v)
{
	v->a[14980] = actions(65);
	v->a[14981] = 1;
	v->a[14982] = anon_sym_DOLLAR;
	v->a[14983] = actions(67);
	v->a[14984] = 1;
	v->a[14985] = anon_sym_DQUOTE;
	v->a[14986] = actions(71);
	v->a[14987] = 1;
	v->a[14988] = aux_sym_number_token1;
	v->a[14989] = actions(73);
	v->a[14990] = 1;
	v->a[14991] = aux_sym_number_token2;
	v->a[14992] = actions(75);
	v->a[14993] = 1;
	v->a[14994] = anon_sym_DOLLAR_LBRACE;
	v->a[14995] = actions(77);
	v->a[14996] = 1;
	v->a[14997] = anon_sym_DOLLAR_LPAREN;
	v->a[14998] = actions(79);
	v->a[14999] = 1;
	small_parse_table_750(v);
}

/* EOF small_parse_table_149.c */
