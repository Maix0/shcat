/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_179.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_895(t_small_parse_table_array *v)
{
	v->a[17900] = state(713);
	v->a[17901] = 1;
	v->a[17902] = aux_sym_command_repeat1;
	v->a[17903] = state(726);
	v->a[17904] = 1;
	v->a[17905] = sym_file_redirect;
	v->a[17906] = state(1420);
	v->a[17907] = 1;
	v->a[17908] = aux_sym_redirected_statement_repeat2;
	v->a[17909] = state(1431);
	v->a[17910] = 1;
	v->a[17911] = sym_pipeline;
	v->a[17912] = state(2123);
	v->a[17913] = 1;
	v->a[17914] = sym__statement_not_pipeline;
	v->a[17915] = actions(11);
	v->a[17916] = 2;
	v->a[17917] = anon_sym_while;
	v->a[17918] = anon_sym_until;
	v->a[17919] = actions(369);
	small_parse_table_896(v);
}

void	small_parse_table_896(t_small_parse_table_array *v)
{
	v->a[17920] = 2;
	v->a[17921] = anon_sym_LT_AMP_DASH;
	v->a[17922] = anon_sym_GT_AMP_DASH;
	v->a[17923] = actions(371);
	v->a[17924] = 2;
	v->a[17925] = sym_raw_string;
	v->a[17926] = sym_number;
	v->a[17927] = state(734);
	v->a[17928] = 5;
	v->a[17929] = sym_arithmetic_expansion;
	v->a[17930] = sym_string;
	v->a[17931] = sym_simple_expansion;
	v->a[17932] = sym_expansion;
	v->a[17933] = sym_command_substitution;
	v->a[17934] = actions(367);
	v->a[17935] = 8;
	v->a[17936] = anon_sym_LT;
	v->a[17937] = anon_sym_GT;
	v->a[17938] = anon_sym_GT_GT;
	v->a[17939] = anon_sym_AMP_GT;
	small_parse_table_897(v);
}

void	small_parse_table_897(t_small_parse_table_array *v)
{
	v->a[17940] = anon_sym_AMP_GT_GT;
	v->a[17941] = anon_sym_LT_AMP;
	v->a[17942] = anon_sym_GT_AMP;
	v->a[17943] = anon_sym_GT_PIPE;
	v->a[17944] = state(1406);
	v->a[17945] = 12;
	v->a[17946] = sym_redirected_statement;
	v->a[17947] = sym_for_statement;
	v->a[17948] = sym_while_statement;
	v->a[17949] = sym_if_statement;
	v->a[17950] = sym_case_statement;
	v->a[17951] = sym_function_definition;
	v->a[17952] = sym_compound_statement;
	v->a[17953] = sym_subshell;
	v->a[17954] = sym_list;
	v->a[17955] = sym_negated_command;
	v->a[17956] = sym_command;
	v->a[17957] = sym__variable_assignments;
	v->a[17958] = 29;
	v->a[17959] = actions(3);
	small_parse_table_898(v);
}

void	small_parse_table_898(t_small_parse_table_array *v)
{
	v->a[17960] = 1;
	v->a[17961] = sym_comment;
	v->a[17962] = actions(9);
	v->a[17963] = 1;
	v->a[17964] = anon_sym_for;
	v->a[17965] = actions(13);
	v->a[17966] = 1;
	v->a[17967] = anon_sym_if;
	v->a[17968] = actions(15);
	v->a[17969] = 1;
	v->a[17970] = anon_sym_case;
	v->a[17971] = actions(17);
	v->a[17972] = 1;
	v->a[17973] = anon_sym_LPAREN;
	v->a[17974] = actions(19);
	v->a[17975] = 1;
	v->a[17976] = anon_sym_LBRACE;
	v->a[17977] = actions(59);
	v->a[17978] = 1;
	v->a[17979] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_899(v);
}

void	small_parse_table_899(t_small_parse_table_array *v)
{
	v->a[17980] = actions(61);
	v->a[17981] = 1;
	v->a[17982] = anon_sym_DOLLAR;
	v->a[17983] = actions(63);
	v->a[17984] = 1;
	v->a[17985] = anon_sym_DQUOTE;
	v->a[17986] = actions(67);
	v->a[17987] = 1;
	v->a[17988] = anon_sym_DOLLAR_LBRACE;
	v->a[17989] = actions(69);
	v->a[17990] = 1;
	v->a[17991] = anon_sym_DOLLAR_LPAREN;
	v->a[17992] = actions(71);
	v->a[17993] = 1;
	v->a[17994] = anon_sym_BQUOTE;
	v->a[17995] = actions(73);
	v->a[17996] = 1;
	v->a[17997] = sym_file_descriptor;
	v->a[17998] = actions(75);
	v->a[17999] = 1;
	small_parse_table_900(v);
}

/* EOF small_parse_table_179.c */
