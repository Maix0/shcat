/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_109.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_545(t_small_parse_table_array *v)
{
	v->a[10900] = 1;
	v->a[10901] = aux_sym_number_token1;
	v->a[10902] = actions(73);
	v->a[10903] = 1;
	v->a[10904] = aux_sym_number_token2;
	v->a[10905] = actions(75);
	v->a[10906] = 1;
	v->a[10907] = anon_sym_DOLLAR_LBRACE;
	v->a[10908] = actions(77);
	v->a[10909] = 1;
	v->a[10910] = anon_sym_DOLLAR_LPAREN;
	v->a[10911] = actions(79);
	v->a[10912] = 1;
	v->a[10913] = anon_sym_BQUOTE;
	v->a[10914] = actions(81);
	v->a[10915] = 1;
	v->a[10916] = sym_file_descriptor;
	v->a[10917] = actions(83);
	v->a[10918] = 1;
	v->a[10919] = sym_variable_name;
	small_parse_table_546(v);
}

void	small_parse_table_546(t_small_parse_table_array *v)
{
	v->a[10920] = actions(276);
	v->a[10921] = 1;
	v->a[10922] = anon_sym_done;
	v->a[10923] = state(37);
	v->a[10924] = 1;
	v->a[10925] = aux_sym__terminated_statement;
	v->a[10926] = state(190);
	v->a[10927] = 1;
	v->a[10928] = sym_command_name;
	v->a[10929] = state(303);
	v->a[10930] = 1;
	v->a[10931] = sym_variable_assignment;
	v->a[10932] = state(582);
	v->a[10933] = 1;
	v->a[10934] = sym_concatenation;
	v->a[10935] = state(587);
	v->a[10936] = 1;
	v->a[10937] = aux_sym_command_repeat1;
	v->a[10938] = state(718);
	v->a[10939] = 1;
	small_parse_table_547(v);
}

void	small_parse_table_547(t_small_parse_table_array *v)
{
	v->a[10940] = sym_file_redirect;
	v->a[10941] = state(1213);
	v->a[10942] = 1;
	v->a[10943] = aux_sym_redirected_statement_repeat2;
	v->a[10944] = state(1225);
	v->a[10945] = 1;
	v->a[10946] = sym_pipeline;
	v->a[10947] = state(2035);
	v->a[10948] = 1;
	v->a[10949] = sym__statement_not_pipeline;
	v->a[10950] = actions(11);
	v->a[10951] = 2;
	v->a[10952] = anon_sym_while;
	v->a[10953] = anon_sym_until;
	v->a[10954] = actions(61);
	v->a[10955] = 2;
	v->a[10956] = anon_sym_LT_AMP_DASH;
	v->a[10957] = anon_sym_GT_AMP_DASH;
	v->a[10958] = state(397);
	v->a[10959] = 6;
	small_parse_table_548(v);
}

void	small_parse_table_548(t_small_parse_table_array *v)
{
	v->a[10960] = sym_arithmetic_expansion;
	v->a[10961] = sym_string;
	v->a[10962] = sym_number;
	v->a[10963] = sym_simple_expansion;
	v->a[10964] = sym_expansion;
	v->a[10965] = sym_command_substitution;
	v->a[10966] = actions(59);
	v->a[10967] = 8;
	v->a[10968] = anon_sym_LT;
	v->a[10969] = anon_sym_GT;
	v->a[10970] = anon_sym_GT_GT;
	v->a[10971] = anon_sym_AMP_GT;
	v->a[10972] = anon_sym_AMP_GT_GT;
	v->a[10973] = anon_sym_LT_AMP;
	v->a[10974] = anon_sym_GT_AMP;
	v->a[10975] = anon_sym_GT_PIPE;
	v->a[10976] = state(1137);
	v->a[10977] = 12;
	v->a[10978] = sym_redirected_statement;
	v->a[10979] = sym_for_statement;
	small_parse_table_549(v);
}

void	small_parse_table_549(t_small_parse_table_array *v)
{
	v->a[10980] = sym_while_statement;
	v->a[10981] = sym_if_statement;
	v->a[10982] = sym_case_statement;
	v->a[10983] = sym_function_definition;
	v->a[10984] = sym_compound_statement;
	v->a[10985] = sym_subshell;
	v->a[10986] = sym_list;
	v->a[10987] = sym_negated_command;
	v->a[10988] = sym_command;
	v->a[10989] = sym_variable_assignments;
	v->a[10990] = 34;
	v->a[10991] = actions(3);
	v->a[10992] = 1;
	v->a[10993] = sym_comment;
	v->a[10994] = actions(9);
	v->a[10995] = 1;
	v->a[10996] = anon_sym_for;
	v->a[10997] = actions(13);
	v->a[10998] = 1;
	v->a[10999] = anon_sym_if;
	small_parse_table_550(v);
}

/* EOF small_parse_table_109.c */
