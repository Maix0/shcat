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
	v->a[12900] = sym_expansion;
	v->a[12901] = sym_command_substitution;
	v->a[12902] = actions(55);
	v->a[12903] = 8;
	v->a[12904] = anon_sym_LT;
	v->a[12905] = anon_sym_GT;
	v->a[12906] = anon_sym_GT_GT;
	v->a[12907] = anon_sym_AMP_GT;
	v->a[12908] = anon_sym_AMP_GT_GT;
	v->a[12909] = anon_sym_LT_AMP;
	v->a[12910] = anon_sym_GT_AMP;
	v->a[12911] = anon_sym_GT_PIPE;
	v->a[12912] = state(1211);
	v->a[12913] = 12;
	v->a[12914] = sym_redirected_statement;
	v->a[12915] = sym_for_statement;
	v->a[12916] = sym_while_statement;
	v->a[12917] = sym_if_statement;
	v->a[12918] = sym_case_statement;
	v->a[12919] = sym_function_definition;
	small_parse_table_646(v);
}

void	small_parse_table_646(t_small_parse_table_array *v)
{
	v->a[12920] = sym_compound_statement;
	v->a[12921] = sym_subshell;
	v->a[12922] = sym_list;
	v->a[12923] = sym_negated_command;
	v->a[12924] = sym_command;
	v->a[12925] = sym_variable_assignments;
	v->a[12926] = 32;
	v->a[12927] = actions(3);
	v->a[12928] = 1;
	v->a[12929] = sym_comment;
	v->a[12930] = actions(9);
	v->a[12931] = 1;
	v->a[12932] = anon_sym_for;
	v->a[12933] = actions(13);
	v->a[12934] = 1;
	v->a[12935] = anon_sym_if;
	v->a[12936] = actions(15);
	v->a[12937] = 1;
	v->a[12938] = anon_sym_case;
	v->a[12939] = actions(17);
	small_parse_table_647(v);
}

void	small_parse_table_647(t_small_parse_table_array *v)
{
	v->a[12940] = 1;
	v->a[12941] = anon_sym_LPAREN;
	v->a[12942] = actions(19);
	v->a[12943] = 1;
	v->a[12944] = anon_sym_LBRACE;
	v->a[12945] = actions(59);
	v->a[12946] = 1;
	v->a[12947] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[12948] = actions(61);
	v->a[12949] = 1;
	v->a[12950] = anon_sym_DOLLAR;
	v->a[12951] = actions(63);
	v->a[12952] = 1;
	v->a[12953] = anon_sym_DQUOTE;
	v->a[12954] = actions(67);
	v->a[12955] = 1;
	v->a[12956] = anon_sym_DOLLAR_LBRACE;
	v->a[12957] = actions(69);
	v->a[12958] = 1;
	v->a[12959] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_648(v);
}

void	small_parse_table_648(t_small_parse_table_array *v)
{
	v->a[12960] = actions(71);
	v->a[12961] = 1;
	v->a[12962] = anon_sym_BQUOTE;
	v->a[12963] = actions(220);
	v->a[12964] = 1;
	v->a[12965] = sym_word;
	v->a[12966] = actions(222);
	v->a[12967] = 1;
	v->a[12968] = anon_sym_BANG;
	v->a[12969] = actions(230);
	v->a[12970] = 1;
	v->a[12971] = sym_file_descriptor;
	v->a[12972] = actions(232);
	v->a[12973] = 1;
	v->a[12974] = sym_variable_name;
	v->a[12975] = state(126);
	v->a[12976] = 1;
	v->a[12977] = aux_sym__statements_repeat1;
	v->a[12978] = state(184);
	v->a[12979] = 1;
	small_parse_table_649(v);
}

void	small_parse_table_649(t_small_parse_table_array *v)
{
	v->a[12980] = sym_command_name;
	v->a[12981] = state(268);
	v->a[12982] = 1;
	v->a[12983] = sym_variable_assignment;
	v->a[12984] = state(647);
	v->a[12985] = 1;
	v->a[12986] = sym_concatenation;
	v->a[12987] = state(801);
	v->a[12988] = 1;
	v->a[12989] = sym_file_redirect;
	v->a[12990] = state(828);
	v->a[12991] = 1;
	v->a[12992] = aux_sym_command_repeat1;
	v->a[12993] = state(1314);
	v->a[12994] = 1;
	v->a[12995] = sym_pipeline;
	v->a[12996] = state(1331);
	v->a[12997] = 1;
	v->a[12998] = aux_sym_redirected_statement_repeat2;
	v->a[12999] = state(2252);
	small_parse_table_650(v);
}

/* EOF small_parse_table_129.c */
