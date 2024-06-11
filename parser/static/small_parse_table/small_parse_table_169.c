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
	v->a[16900] = anon_sym_LBRACE;
	v->a[16901] = actions(45);
	v->a[16902] = 1;
	v->a[16903] = sym_word;
	v->a[16904] = actions(53);
	v->a[16905] = 1;
	v->a[16906] = anon_sym_BANG;
	v->a[16907] = actions(59);
	v->a[16908] = 1;
	v->a[16909] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16910] = actions(61);
	v->a[16911] = 1;
	v->a[16912] = anon_sym_DOLLAR;
	v->a[16913] = actions(63);
	v->a[16914] = 1;
	v->a[16915] = anon_sym_DQUOTE;
	v->a[16916] = actions(67);
	v->a[16917] = 1;
	v->a[16918] = anon_sym_DOLLAR_LBRACE;
	v->a[16919] = actions(69);
	small_parse_table_846(v);
}

void	small_parse_table_846(t_small_parse_table_array *v)
{
	v->a[16920] = 1;
	v->a[16921] = anon_sym_DOLLAR_LPAREN;
	v->a[16922] = actions(71);
	v->a[16923] = 1;
	v->a[16924] = anon_sym_BQUOTE;
	v->a[16925] = actions(73);
	v->a[16926] = 1;
	v->a[16927] = sym_file_descriptor;
	v->a[16928] = actions(75);
	v->a[16929] = 1;
	v->a[16930] = sym_variable_name;
	v->a[16931] = state(102);
	v->a[16932] = 1;
	v->a[16933] = aux_sym__terminated_statement;
	v->a[16934] = state(187);
	v->a[16935] = 1;
	v->a[16936] = sym_command_name;
	v->a[16937] = state(281);
	v->a[16938] = 1;
	v->a[16939] = sym_variable_assignment;
	small_parse_table_847(v);
}

void	small_parse_table_847(t_small_parse_table_array *v)
{
	v->a[16940] = state(647);
	v->a[16941] = 1;
	v->a[16942] = sym_concatenation;
	v->a[16943] = state(736);
	v->a[16944] = 1;
	v->a[16945] = aux_sym_command_repeat1;
	v->a[16946] = state(738);
	v->a[16947] = 1;
	v->a[16948] = sym_file_redirect;
	v->a[16949] = state(1460);
	v->a[16950] = 1;
	v->a[16951] = aux_sym_redirected_statement_repeat2;
	v->a[16952] = state(1464);
	v->a[16953] = 1;
	v->a[16954] = sym_pipeline;
	v->a[16955] = state(2269);
	v->a[16956] = 1;
	v->a[16957] = sym__statement_not_pipeline;
	v->a[16958] = actions(11);
	v->a[16959] = 2;
	small_parse_table_848(v);
}

void	small_parse_table_848(t_small_parse_table_array *v)
{
	v->a[16960] = anon_sym_while;
	v->a[16961] = anon_sym_until;
	v->a[16962] = actions(57);
	v->a[16963] = 2;
	v->a[16964] = anon_sym_LT_AMP_DASH;
	v->a[16965] = anon_sym_GT_AMP_DASH;
	v->a[16966] = actions(65);
	v->a[16967] = 2;
	v->a[16968] = sym_raw_string;
	v->a[16969] = sym_number;
	v->a[16970] = state(394);
	v->a[16971] = 5;
	v->a[16972] = sym_arithmetic_expansion;
	v->a[16973] = sym_string;
	v->a[16974] = sym_simple_expansion;
	v->a[16975] = sym_expansion;
	v->a[16976] = sym_command_substitution;
	v->a[16977] = actions(55);
	v->a[16978] = 8;
	v->a[16979] = anon_sym_LT;
	small_parse_table_849(v);
}

void	small_parse_table_849(t_small_parse_table_array *v)
{
	v->a[16980] = anon_sym_GT;
	v->a[16981] = anon_sym_GT_GT;
	v->a[16982] = anon_sym_AMP_GT;
	v->a[16983] = anon_sym_AMP_GT_GT;
	v->a[16984] = anon_sym_LT_AMP;
	v->a[16985] = anon_sym_GT_AMP;
	v->a[16986] = anon_sym_GT_PIPE;
	v->a[16987] = state(1324);
	v->a[16988] = 12;
	v->a[16989] = sym_redirected_statement;
	v->a[16990] = sym_for_statement;
	v->a[16991] = sym_while_statement;
	v->a[16992] = sym_if_statement;
	v->a[16993] = sym_case_statement;
	v->a[16994] = sym_function_definition;
	v->a[16995] = sym_compound_statement;
	v->a[16996] = sym_subshell;
	v->a[16997] = sym_list;
	v->a[16998] = sym_negated_command;
	v->a[16999] = sym_command;
	small_parse_table_850(v);
}

/* EOF small_parse_table_169.c */
