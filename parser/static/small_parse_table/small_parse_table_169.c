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
	v->a[16900] = sym_variable_assignment;
	v->a[16901] = state(567);
	v->a[16902] = 1;
	v->a[16903] = sym_concatenation;
	v->a[16904] = state(634);
	v->a[16905] = 1;
	v->a[16906] = sym_file_redirect;
	v->a[16907] = state(670);
	v->a[16908] = 1;
	v->a[16909] = aux_sym_command_repeat1;
	v->a[16910] = state(1019);
	v->a[16911] = 1;
	v->a[16912] = sym_pipeline;
	v->a[16913] = state(1157);
	v->a[16914] = 1;
	v->a[16915] = aux_sym_redirected_statement_repeat2;
	v->a[16916] = state(1901);
	v->a[16917] = 1;
	v->a[16918] = sym__statement_not_pipeline;
	v->a[16919] = actions(87);
	small_parse_table_846(v);
}

void	small_parse_table_846(t_small_parse_table_array *v)
{
	v->a[16920] = 2;
	v->a[16921] = anon_sym_while;
	v->a[16922] = anon_sym_until;
	v->a[16923] = actions(109);
	v->a[16924] = 2;
	v->a[16925] = sym_raw_string;
	v->a[16926] = sym_number;
	v->a[16927] = state(348);
	v->a[16928] = 5;
	v->a[16929] = sym_arithmetic_expansion;
	v->a[16930] = sym_string;
	v->a[16931] = sym_simple_expansion;
	v->a[16932] = sym_expansion;
	v->a[16933] = sym_command_substitution;
	v->a[16934] = actions(101);
	v->a[16935] = 7;
	v->a[16936] = anon_sym_LT;
	v->a[16937] = anon_sym_GT;
	v->a[16938] = anon_sym_GT_GT;
	v->a[16939] = anon_sym_LT_AMP;
	small_parse_table_847(v);
}

void	small_parse_table_847(t_small_parse_table_array *v)
{
	v->a[16940] = anon_sym_GT_AMP;
	v->a[16941] = anon_sym_GT_PIPE;
	v->a[16942] = anon_sym_LT_GT;
	v->a[16943] = state(1016);
	v->a[16944] = 12;
	v->a[16945] = sym_redirected_statement;
	v->a[16946] = sym_for_statement;
	v->a[16947] = sym_while_statement;
	v->a[16948] = sym_if_statement;
	v->a[16949] = sym_case_statement;
	v->a[16950] = sym_function_definition;
	v->a[16951] = sym_compound_statement;
	v->a[16952] = sym_subshell;
	v->a[16953] = sym_list;
	v->a[16954] = sym_negated_command;
	v->a[16955] = sym_command;
	v->a[16956] = sym__variable_assignments;
	v->a[16957] = 28;
	v->a[16958] = actions(3);
	v->a[16959] = 1;
	small_parse_table_848(v);
}

void	small_parse_table_848(t_small_parse_table_array *v)
{
	v->a[16960] = sym_comment;
	v->a[16961] = actions(9);
	v->a[16962] = 1;
	v->a[16963] = anon_sym_for;
	v->a[16964] = actions(13);
	v->a[16965] = 1;
	v->a[16966] = anon_sym_if;
	v->a[16967] = actions(15);
	v->a[16968] = 1;
	v->a[16969] = anon_sym_case;
	v->a[16970] = actions(17);
	v->a[16971] = 1;
	v->a[16972] = anon_sym_LPAREN;
	v->a[16973] = actions(19);
	v->a[16974] = 1;
	v->a[16975] = anon_sym_LBRACE;
	v->a[16976] = actions(55);
	v->a[16977] = 1;
	v->a[16978] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16979] = actions(57);
	small_parse_table_849(v);
}

void	small_parse_table_849(t_small_parse_table_array *v)
{
	v->a[16980] = 1;
	v->a[16981] = anon_sym_DOLLAR;
	v->a[16982] = actions(59);
	v->a[16983] = 1;
	v->a[16984] = anon_sym_DQUOTE;
	v->a[16985] = actions(63);
	v->a[16986] = 1;
	v->a[16987] = anon_sym_DOLLAR_LBRACE;
	v->a[16988] = actions(65);
	v->a[16989] = 1;
	v->a[16990] = anon_sym_DOLLAR_LPAREN;
	v->a[16991] = actions(67);
	v->a[16992] = 1;
	v->a[16993] = anon_sym_BQUOTE;
	v->a[16994] = actions(347);
	v->a[16995] = 1;
	v->a[16996] = sym_word;
	v->a[16997] = actions(349);
	v->a[16998] = 1;
	v->a[16999] = anon_sym_BANG;
	small_parse_table_850(v);
}

/* EOF small_parse_table_169.c */
