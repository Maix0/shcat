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
	v->a[16900] = 1;
	v->a[16901] = sym_variable_assignment;
	v->a[16902] = state(636);
	v->a[16903] = 1;
	v->a[16904] = sym_concatenation;
	v->a[16905] = state(677);
	v->a[16906] = 1;
	v->a[16907] = sym_file_redirect;
	v->a[16908] = state(752);
	v->a[16909] = 1;
	v->a[16910] = aux_sym_command_repeat1;
	v->a[16911] = state(1006);
	v->a[16912] = 1;
	v->a[16913] = sym__variable_assignments;
	v->a[16914] = state(1014);
	v->a[16915] = 1;
	v->a[16916] = sym_redirected_statement;
	v->a[16917] = state(1015);
	v->a[16918] = 1;
	v->a[16919] = sym_for_statement;
	small_parse_table_846(v);
}

void	small_parse_table_846(t_small_parse_table_array *v)
{
	v->a[16920] = state(1016);
	v->a[16921] = 1;
	v->a[16922] = sym_while_statement;
	v->a[16923] = state(1021);
	v->a[16924] = 1;
	v->a[16925] = sym_if_statement;
	v->a[16926] = state(1022);
	v->a[16927] = 1;
	v->a[16928] = sym_case_statement;
	v->a[16929] = state(1023);
	v->a[16930] = 1;
	v->a[16931] = sym_function_definition;
	v->a[16932] = state(1024);
	v->a[16933] = 1;
	v->a[16934] = sym_compound_statement;
	v->a[16935] = state(1027);
	v->a[16936] = 1;
	v->a[16937] = sym_subshell;
	v->a[16938] = state(1028);
	v->a[16939] = 1;
	small_parse_table_847(v);
}

void	small_parse_table_847(t_small_parse_table_array *v)
{
	v->a[16940] = sym_list;
	v->a[16941] = state(1044);
	v->a[16942] = 1;
	v->a[16943] = sym_negated_command;
	v->a[16944] = state(1049);
	v->a[16945] = 1;
	v->a[16946] = sym_command;
	v->a[16947] = state(1156);
	v->a[16948] = 1;
	v->a[16949] = sym_pipeline;
	v->a[16950] = state(1226);
	v->a[16951] = 1;
	v->a[16952] = aux_sym_redirected_statement_repeat2;
	v->a[16953] = state(2111);
	v->a[16954] = 1;
	v->a[16955] = sym__statement_not_pipeline;
	v->a[16956] = actions(160);
	v->a[16957] = 2;
	v->a[16958] = anon_sym_while;
	v->a[16959] = anon_sym_until;
	small_parse_table_848(v);
}

void	small_parse_table_848(t_small_parse_table_array *v)
{
	v->a[16960] = actions(174);
	v->a[16961] = 2;
	v->a[16962] = anon_sym_LT_AMP_DASH;
	v->a[16963] = anon_sym_GT_AMP_DASH;
	v->a[16964] = actions(182);
	v->a[16965] = 2;
	v->a[16966] = sym_raw_string;
	v->a[16967] = sym_number;
	v->a[16968] = state(385);
	v->a[16969] = 5;
	v->a[16970] = sym_arithmetic_expansion;
	v->a[16971] = sym_string;
	v->a[16972] = sym_simple_expansion;
	v->a[16973] = sym_expansion;
	v->a[16974] = sym_command_substitution;
	v->a[16975] = actions(172);
	v->a[16976] = 6;
	v->a[16977] = anon_sym_LT;
	v->a[16978] = anon_sym_GT;
	v->a[16979] = anon_sym_GT_GT;
	small_parse_table_849(v);
}

void	small_parse_table_849(t_small_parse_table_array *v)
{
	v->a[16980] = anon_sym_LT_AMP;
	v->a[16981] = anon_sym_GT_AMP;
	v->a[16982] = anon_sym_GT_PIPE;
	v->a[16983] = 31;
	v->a[16984] = actions(3);
	v->a[16985] = 1;
	v->a[16986] = sym_comment;
	v->a[16987] = actions(9);
	v->a[16988] = 1;
	v->a[16989] = anon_sym_for;
	v->a[16990] = actions(13);
	v->a[16991] = 1;
	v->a[16992] = anon_sym_if;
	v->a[16993] = actions(15);
	v->a[16994] = 1;
	v->a[16995] = anon_sym_case;
	v->a[16996] = actions(17);
	v->a[16997] = 1;
	v->a[16998] = anon_sym_LPAREN;
	v->a[16999] = actions(19);
	small_parse_table_850(v);
}

/* EOF small_parse_table_169.c */
