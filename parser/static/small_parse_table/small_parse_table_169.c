/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_169.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_845(t_small_parse_table_array *v)
{
	v->a[16900] = actions(77);
	v->a[16901] = 1;
	v->a[16902] = anon_sym_DOLLAR_LPAREN;
	v->a[16903] = actions(79);
	v->a[16904] = 1;
	v->a[16905] = anon_sym_BQUOTE;
	v->a[16906] = actions(81);
	v->a[16907] = 1;
	v->a[16908] = sym_file_descriptor;
	v->a[16909] = actions(83);
	v->a[16910] = 1;
	v->a[16911] = sym_variable_name;
	v->a[16912] = actions(238);
	v->a[16913] = 1;
	v->a[16914] = sym_word;
	v->a[16915] = actions(240);
	v->a[16916] = 1;
	v->a[16917] = anon_sym_BANG;
	v->a[16918] = state(135);
	v->a[16919] = 1;
	small_parse_table_846(v);
}

void	small_parse_table_846(t_small_parse_table_array *v)
{
	v->a[16920] = aux_sym__statements_repeat1;
	v->a[16921] = state(185);
	v->a[16922] = 1;
	v->a[16923] = sym_command_name;
	v->a[16924] = state(290);
	v->a[16925] = 1;
	v->a[16926] = sym_variable_assignment;
	v->a[16927] = state(582);
	v->a[16928] = 1;
	v->a[16929] = sym_concatenation;
	v->a[16930] = state(614);
	v->a[16931] = 1;
	v->a[16932] = aux_sym_command_repeat1;
	v->a[16933] = state(769);
	v->a[16934] = 1;
	v->a[16935] = sym_file_redirect;
	v->a[16936] = state(1133);
	v->a[16937] = 1;
	v->a[16938] = aux_sym_redirected_statement_repeat2;
	v->a[16939] = state(1155);
	small_parse_table_847(v);
}

void	small_parse_table_847(t_small_parse_table_array *v)
{
	v->a[16940] = 1;
	v->a[16941] = sym_pipeline;
	v->a[16942] = state(2041);
	v->a[16943] = 1;
	v->a[16944] = sym__statement_not_pipeline;
	v->a[16945] = actions(11);
	v->a[16946] = 2;
	v->a[16947] = anon_sym_while;
	v->a[16948] = anon_sym_until;
	v->a[16949] = actions(61);
	v->a[16950] = 2;
	v->a[16951] = anon_sym_LT_AMP_DASH;
	v->a[16952] = anon_sym_GT_AMP_DASH;
	v->a[16953] = state(397);
	v->a[16954] = 6;
	v->a[16955] = sym_arithmetic_expansion;
	v->a[16956] = sym_string;
	v->a[16957] = sym_number;
	v->a[16958] = sym_simple_expansion;
	v->a[16959] = sym_expansion;
	small_parse_table_848(v);
}

void	small_parse_table_848(t_small_parse_table_array *v)
{
	v->a[16960] = sym_command_substitution;
	v->a[16961] = actions(59);
	v->a[16962] = 8;
	v->a[16963] = anon_sym_LT;
	v->a[16964] = anon_sym_GT;
	v->a[16965] = anon_sym_GT_GT;
	v->a[16966] = anon_sym_AMP_GT;
	v->a[16967] = anon_sym_AMP_GT_GT;
	v->a[16968] = anon_sym_LT_AMP;
	v->a[16969] = anon_sym_GT_AMP;
	v->a[16970] = anon_sym_GT_PIPE;
	v->a[16971] = state(1057);
	v->a[16972] = 12;
	v->a[16973] = sym_redirected_statement;
	v->a[16974] = sym_for_statement;
	v->a[16975] = sym_while_statement;
	v->a[16976] = sym_if_statement;
	v->a[16977] = sym_case_statement;
	v->a[16978] = sym_function_definition;
	v->a[16979] = sym_compound_statement;
	small_parse_table_849(v);
}

void	small_parse_table_849(t_small_parse_table_array *v)
{
	v->a[16980] = sym_subshell;
	v->a[16981] = sym_list;
	v->a[16982] = sym_negated_command;
	v->a[16983] = sym_command;
	v->a[16984] = sym_variable_assignments;
	v->a[16985] = 33;
	v->a[16986] = actions(3);
	v->a[16987] = 1;
	v->a[16988] = sym_comment;
	v->a[16989] = actions(9);
	v->a[16990] = 1;
	v->a[16991] = anon_sym_for;
	v->a[16992] = actions(13);
	v->a[16993] = 1;
	v->a[16994] = anon_sym_if;
	v->a[16995] = actions(15);
	v->a[16996] = 1;
	v->a[16997] = anon_sym_case;
	v->a[16998] = actions(17);
	v->a[16999] = 1;
	small_parse_table_850(v);
}

/* EOF small_parse_table_169.c */
