/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_129.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_645(t_small_parse_table_array *v)
{
	v->a[12900] = 1;
	v->a[12901] = anon_sym_DQUOTE;
	v->a[12902] = actions(63);
	v->a[12903] = 1;
	v->a[12904] = anon_sym_DOLLAR_LBRACE;
	v->a[12905] = actions(65);
	v->a[12906] = 1;
	v->a[12907] = anon_sym_DOLLAR_LPAREN;
	v->a[12908] = actions(67);
	v->a[12909] = 1;
	v->a[12910] = anon_sym_BQUOTE;
	v->a[12911] = actions(69);
	v->a[12912] = 1;
	v->a[12913] = sym_file_descriptor;
	v->a[12914] = actions(71);
	v->a[12915] = 1;
	v->a[12916] = sym_variable_name;
	v->a[12917] = actions(229);
	v->a[12918] = 1;
	v->a[12919] = sym_word;
	small_parse_table_646(v);
}

void	small_parse_table_646(t_small_parse_table_array *v)
{
	v->a[12920] = actions(231);
	v->a[12921] = 1;
	v->a[12922] = anon_sym_BANG;
	v->a[12923] = state(122);
	v->a[12924] = 1;
	v->a[12925] = aux_sym__statements_repeat1;
	v->a[12926] = state(179);
	v->a[12927] = 1;
	v->a[12928] = sym_command_name;
	v->a[12929] = state(302);
	v->a[12930] = 1;
	v->a[12931] = sym_variable_assignment;
	v->a[12932] = state(603);
	v->a[12933] = 1;
	v->a[12934] = sym_concatenation;
	v->a[12935] = state(658);
	v->a[12936] = 1;
	v->a[12937] = aux_sym_command_repeat1;
	v->a[12938] = state(764);
	v->a[12939] = 1;
	small_parse_table_647(v);
}

void	small_parse_table_647(t_small_parse_table_array *v)
{
	v->a[12940] = sym_file_redirect;
	v->a[12941] = state(1052);
	v->a[12942] = 1;
	v->a[12943] = sym_pipeline;
	v->a[12944] = state(1190);
	v->a[12945] = 1;
	v->a[12946] = aux_sym_redirected_statement_repeat2;
	v->a[12947] = state(1890);
	v->a[12948] = 1;
	v->a[12949] = sym__statement_not_pipeline;
	v->a[12950] = state(1938);
	v->a[12951] = 1;
	v->a[12952] = sym__statements;
	v->a[12953] = actions(11);
	v->a[12954] = 2;
	v->a[12955] = anon_sym_while;
	v->a[12956] = anon_sym_until;
	v->a[12957] = actions(61);
	v->a[12958] = 2;
	v->a[12959] = sym_raw_string;
	small_parse_table_648(v);
}

void	small_parse_table_648(t_small_parse_table_array *v)
{
	v->a[12960] = sym_number;
	v->a[12961] = state(436);
	v->a[12962] = 5;
	v->a[12963] = sym_arithmetic_expansion;
	v->a[12964] = sym_string;
	v->a[12965] = sym_simple_expansion;
	v->a[12966] = sym_expansion;
	v->a[12967] = sym_command_substitution;
	v->a[12968] = actions(53);
	v->a[12969] = 7;
	v->a[12970] = anon_sym_LT;
	v->a[12971] = anon_sym_GT;
	v->a[12972] = anon_sym_GT_GT;
	v->a[12973] = anon_sym_LT_AMP;
	v->a[12974] = anon_sym_GT_AMP;
	v->a[12975] = anon_sym_GT_PIPE;
	v->a[12976] = anon_sym_LT_GT;
	v->a[12977] = state(967);
	v->a[12978] = 12;
	v->a[12979] = sym_redirected_statement;
	small_parse_table_649(v);
}

void	small_parse_table_649(t_small_parse_table_array *v)
{
	v->a[12980] = sym_for_statement;
	v->a[12981] = sym_while_statement;
	v->a[12982] = sym_if_statement;
	v->a[12983] = sym_case_statement;
	v->a[12984] = sym_function_definition;
	v->a[12985] = sym_compound_statement;
	v->a[12986] = sym_subshell;
	v->a[12987] = sym_list;
	v->a[12988] = sym_negated_command;
	v->a[12989] = sym_command;
	v->a[12990] = sym__variable_assignments;
	v->a[12991] = 31;
	v->a[12992] = actions(3);
	v->a[12993] = 1;
	v->a[12994] = sym_comment;
	v->a[12995] = actions(9);
	v->a[12996] = 1;
	v->a[12997] = anon_sym_for;
	v->a[12998] = actions(13);
	v->a[12999] = 1;
	small_parse_table_650(v);
}

/* EOF small_parse_table_129.c */
