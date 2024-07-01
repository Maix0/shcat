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
	v->a[12901] = aux_sym_command_repeat1;
	v->a[12902] = state(768);
	v->a[12903] = 1;
	v->a[12904] = sym_file_redirect;
	v->a[12905] = state(1095);
	v->a[12906] = 1;
	v->a[12907] = sym_pipeline;
	v->a[12908] = state(1282);
	v->a[12909] = 1;
	v->a[12910] = aux_sym_redirected_statement_repeat2;
	v->a[12911] = state(2127);
	v->a[12912] = 1;
	v->a[12913] = sym__statement_not_pipeline;
	v->a[12914] = state(2335);
	v->a[12915] = 1;
	v->a[12916] = sym__statements;
	v->a[12917] = actions(11);
	v->a[12918] = 2;
	v->a[12919] = anon_sym_while;
	small_parse_table_646(v);
}

void	small_parse_table_646(t_small_parse_table_array *v)
{
	v->a[12920] = anon_sym_until;
	v->a[12921] = actions(226);
	v->a[12922] = 2;
	v->a[12923] = anon_sym_LT_AMP_DASH;
	v->a[12924] = anon_sym_GT_AMP_DASH;
	v->a[12925] = actions(228);
	v->a[12926] = 2;
	v->a[12927] = sym_raw_string;
	v->a[12928] = sym_number;
	v->a[12929] = state(382);
	v->a[12930] = 5;
	v->a[12931] = sym_arithmetic_expansion;
	v->a[12932] = sym_string;
	v->a[12933] = sym_simple_expansion;
	v->a[12934] = sym_expansion;
	v->a[12935] = sym_command_substitution;
	v->a[12936] = actions(224);
	v->a[12937] = 6;
	v->a[12938] = anon_sym_LT;
	v->a[12939] = anon_sym_GT;
	small_parse_table_647(v);
}

void	small_parse_table_647(t_small_parse_table_array *v)
{
	v->a[12940] = anon_sym_GT_GT;
	v->a[12941] = anon_sym_LT_AMP;
	v->a[12942] = anon_sym_GT_AMP;
	v->a[12943] = anon_sym_GT_PIPE;
	v->a[12944] = state(1087);
	v->a[12945] = 12;
	v->a[12946] = sym_redirected_statement;
	v->a[12947] = sym_for_statement;
	v->a[12948] = sym_while_statement;
	v->a[12949] = sym_if_statement;
	v->a[12950] = sym_case_statement;
	v->a[12951] = sym_function_definition;
	v->a[12952] = sym_compound_statement;
	v->a[12953] = sym_subshell;
	v->a[12954] = sym_list;
	v->a[12955] = sym_negated_command;
	v->a[12956] = sym_command;
	v->a[12957] = sym__variable_assignments;
	v->a[12958] = 32;
	v->a[12959] = actions(3);
	small_parse_table_648(v);
}

void	small_parse_table_648(t_small_parse_table_array *v)
{
	v->a[12960] = 1;
	v->a[12961] = sym_comment;
	v->a[12962] = actions(9);
	v->a[12963] = 1;
	v->a[12964] = anon_sym_for;
	v->a[12965] = actions(13);
	v->a[12966] = 1;
	v->a[12967] = anon_sym_if;
	v->a[12968] = actions(15);
	v->a[12969] = 1;
	v->a[12970] = anon_sym_case;
	v->a[12971] = actions(17);
	v->a[12972] = 1;
	v->a[12973] = anon_sym_LPAREN;
	v->a[12974] = actions(19);
	v->a[12975] = 1;
	v->a[12976] = anon_sym_LBRACE;
	v->a[12977] = actions(45);
	v->a[12978] = 1;
	v->a[12979] = sym_word;
	small_parse_table_649(v);
}

void	small_parse_table_649(t_small_parse_table_array *v)
{
	v->a[12980] = actions(53);
	v->a[12981] = 1;
	v->a[12982] = anon_sym_BANG;
	v->a[12983] = actions(59);
	v->a[12984] = 1;
	v->a[12985] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[12986] = actions(61);
	v->a[12987] = 1;
	v->a[12988] = anon_sym_DOLLAR;
	v->a[12989] = actions(63);
	v->a[12990] = 1;
	v->a[12991] = anon_sym_DQUOTE;
	v->a[12992] = actions(67);
	v->a[12993] = 1;
	v->a[12994] = anon_sym_DOLLAR_LBRACE;
	v->a[12995] = actions(69);
	v->a[12996] = 1;
	v->a[12997] = anon_sym_DOLLAR_LPAREN;
	v->a[12998] = actions(71);
	v->a[12999] = 1;
	small_parse_table_650(v);
}

/* EOF small_parse_table_129.c */
