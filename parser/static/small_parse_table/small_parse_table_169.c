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
	v->a[16901] = state(585);
	v->a[16902] = 1;
	v->a[16903] = aux_sym_command_repeat1;
	v->a[16904] = state(661);
	v->a[16905] = 1;
	v->a[16906] = sym_concatenation;
	v->a[16907] = state(774);
	v->a[16908] = 1;
	v->a[16909] = sym_file_redirect;
	v->a[16910] = state(1149);
	v->a[16911] = 1;
	v->a[16912] = aux_sym_redirected_statement_repeat2;
	v->a[16913] = state(1435);
	v->a[16914] = 1;
	v->a[16915] = sym_pipeline;
	v->a[16916] = actions(11);
	v->a[16917] = 2;
	v->a[16918] = anon_sym_while;
	v->a[16919] = anon_sym_until;
	small_parse_table_846(v);
}

void	small_parse_table_846(t_small_parse_table_array *v)
{
	v->a[16920] = actions(61);
	v->a[16921] = 2;
	v->a[16922] = sym_raw_string;
	v->a[16923] = sym_number;
	v->a[16924] = state(455);
	v->a[16925] = 5;
	v->a[16926] = sym_arithmetic_expansion;
	v->a[16927] = sym_string;
	v->a[16928] = sym_simple_expansion;
	v->a[16929] = sym_expansion;
	v->a[16930] = sym_command_substitution;
	v->a[16931] = actions(53);
	v->a[16932] = 7;
	v->a[16933] = anon_sym_LT;
	v->a[16934] = anon_sym_GT;
	v->a[16935] = anon_sym_GT_GT;
	v->a[16936] = anon_sym_LT_AMP;
	v->a[16937] = anon_sym_GT_AMP;
	v->a[16938] = anon_sym_GT_PIPE;
	v->a[16939] = anon_sym_LT_GT;
	small_parse_table_847(v);
}

void	small_parse_table_847(t_small_parse_table_array *v)
{
	v->a[16940] = state(1096);
	v->a[16941] = 13;
	v->a[16942] = sym__statement_not_pipeline;
	v->a[16943] = sym_redirected_statement;
	v->a[16944] = sym_for_statement;
	v->a[16945] = sym_while_statement;
	v->a[16946] = sym_if_statement;
	v->a[16947] = sym_case_statement;
	v->a[16948] = sym_function_definition;
	v->a[16949] = sym_compound_statement;
	v->a[16950] = sym_subshell;
	v->a[16951] = sym_list;
	v->a[16952] = sym_negated_command;
	v->a[16953] = sym_command;
	v->a[16954] = sym__variable_assignments;
	v->a[16955] = 28;
	v->a[16956] = actions(3);
	v->a[16957] = 1;
	v->a[16958] = sym_comment;
	v->a[16959] = actions(9);
	small_parse_table_848(v);
}

void	small_parse_table_848(t_small_parse_table_array *v)
{
	v->a[16960] = 1;
	v->a[16961] = anon_sym_for;
	v->a[16962] = actions(13);
	v->a[16963] = 1;
	v->a[16964] = anon_sym_if;
	v->a[16965] = actions(15);
	v->a[16966] = 1;
	v->a[16967] = anon_sym_case;
	v->a[16968] = actions(17);
	v->a[16969] = 1;
	v->a[16970] = anon_sym_LPAREN;
	v->a[16971] = actions(19);
	v->a[16972] = 1;
	v->a[16973] = anon_sym_LBRACE;
	v->a[16974] = actions(55);
	v->a[16975] = 1;
	v->a[16976] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16977] = actions(57);
	v->a[16978] = 1;
	v->a[16979] = anon_sym_DOLLAR;
	small_parse_table_849(v);
}

void	small_parse_table_849(t_small_parse_table_array *v)
{
	v->a[16980] = actions(59);
	v->a[16981] = 1;
	v->a[16982] = anon_sym_DQUOTE;
	v->a[16983] = actions(63);
	v->a[16984] = 1;
	v->a[16985] = anon_sym_DOLLAR_LBRACE;
	v->a[16986] = actions(65);
	v->a[16987] = 1;
	v->a[16988] = anon_sym_DOLLAR_LPAREN;
	v->a[16989] = actions(67);
	v->a[16990] = 1;
	v->a[16991] = anon_sym_BQUOTE;
	v->a[16992] = actions(211);
	v->a[16993] = 1;
	v->a[16994] = sym_word;
	v->a[16995] = actions(213);
	v->a[16996] = 1;
	v->a[16997] = anon_sym_BANG;
	v->a[16998] = actions(219);
	v->a[16999] = 1;
	small_parse_table_850(v);
}

/* EOF small_parse_table_169.c */
