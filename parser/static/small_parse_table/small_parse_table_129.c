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
	v->a[12900] = sym_while_statement;
	v->a[12901] = sym_if_statement;
	v->a[12902] = sym_case_statement;
	v->a[12903] = sym_function_definition;
	v->a[12904] = sym_compound_statement;
	v->a[12905] = sym_subshell;
	v->a[12906] = sym_list;
	v->a[12907] = sym_negated_command;
	v->a[12908] = sym_command;
	v->a[12909] = sym_variable_assignments;
	v->a[12910] = 34;
	v->a[12911] = actions(3);
	v->a[12912] = 1;
	v->a[12913] = sym_comment;
	v->a[12914] = actions(9);
	v->a[12915] = 1;
	v->a[12916] = anon_sym_for;
	v->a[12917] = actions(13);
	v->a[12918] = 1;
	v->a[12919] = anon_sym_if;
	small_parse_table_646(v);
}

void	small_parse_table_646(t_small_parse_table_array *v)
{
	v->a[12920] = actions(15);
	v->a[12921] = 1;
	v->a[12922] = anon_sym_case;
	v->a[12923] = actions(17);
	v->a[12924] = 1;
	v->a[12925] = anon_sym_LPAREN;
	v->a[12926] = actions(19);
	v->a[12927] = 1;
	v->a[12928] = anon_sym_LBRACE;
	v->a[12929] = actions(63);
	v->a[12930] = 1;
	v->a[12931] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[12932] = actions(65);
	v->a[12933] = 1;
	v->a[12934] = anon_sym_DOLLAR;
	v->a[12935] = actions(67);
	v->a[12936] = 1;
	v->a[12937] = anon_sym_DQUOTE;
	v->a[12938] = actions(69);
	v->a[12939] = 1;
	small_parse_table_647(v);
}

void	small_parse_table_647(t_small_parse_table_array *v)
{
	v->a[12940] = sym_raw_string;
	v->a[12941] = actions(71);
	v->a[12942] = 1;
	v->a[12943] = aux_sym_number_token1;
	v->a[12944] = actions(73);
	v->a[12945] = 1;
	v->a[12946] = aux_sym_number_token2;
	v->a[12947] = actions(75);
	v->a[12948] = 1;
	v->a[12949] = anon_sym_DOLLAR_LBRACE;
	v->a[12950] = actions(77);
	v->a[12951] = 1;
	v->a[12952] = anon_sym_DOLLAR_LPAREN;
	v->a[12953] = actions(79);
	v->a[12954] = 1;
	v->a[12955] = anon_sym_BQUOTE;
	v->a[12956] = actions(81);
	v->a[12957] = 1;
	v->a[12958] = sym_file_descriptor;
	v->a[12959] = actions(83);
	small_parse_table_648(v);
}

void	small_parse_table_648(t_small_parse_table_array *v)
{
	v->a[12960] = 1;
	v->a[12961] = sym_variable_name;
	v->a[12962] = actions(238);
	v->a[12963] = 1;
	v->a[12964] = sym_word;
	v->a[12965] = actions(240);
	v->a[12966] = 1;
	v->a[12967] = anon_sym_BANG;
	v->a[12968] = state(132);
	v->a[12969] = 1;
	v->a[12970] = aux_sym__statements_repeat1;
	v->a[12971] = state(185);
	v->a[12972] = 1;
	v->a[12973] = sym_command_name;
	v->a[12974] = state(297);
	v->a[12975] = 1;
	v->a[12976] = sym_variable_assignment;
	v->a[12977] = state(582);
	v->a[12978] = 1;
	v->a[12979] = sym_concatenation;
	small_parse_table_649(v);
}

void	small_parse_table_649(t_small_parse_table_array *v)
{
	v->a[12980] = state(614);
	v->a[12981] = 1;
	v->a[12982] = aux_sym_command_repeat1;
	v->a[12983] = state(769);
	v->a[12984] = 1;
	v->a[12985] = sym_file_redirect;
	v->a[12986] = state(1133);
	v->a[12987] = 1;
	v->a[12988] = aux_sym_redirected_statement_repeat2;
	v->a[12989] = state(1142);
	v->a[12990] = 1;
	v->a[12991] = sym_pipeline;
	v->a[12992] = state(2041);
	v->a[12993] = 1;
	v->a[12994] = sym__statement_not_pipeline;
	v->a[12995] = state(2139);
	v->a[12996] = 1;
	v->a[12997] = sym__statements;
	v->a[12998] = actions(11);
	v->a[12999] = 2;
	small_parse_table_650(v);
}

/* EOF small_parse_table_129.c */
