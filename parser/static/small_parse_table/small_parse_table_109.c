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
	v->a[10900] = anon_sym_BANG;
	v->a[10901] = state(129);
	v->a[10902] = 1;
	v->a[10903] = aux_sym__statements_repeat1;
	v->a[10904] = state(189);
	v->a[10905] = 1;
	v->a[10906] = sym_command_name;
	v->a[10907] = state(244);
	v->a[10908] = 1;
	v->a[10909] = sym_variable_assignment;
	v->a[10910] = state(624);
	v->a[10911] = 1;
	v->a[10912] = sym_concatenation;
	v->a[10913] = state(672);
	v->a[10914] = 1;
	v->a[10915] = aux_sym_command_repeat1;
	v->a[10916] = state(787);
	v->a[10917] = 1;
	v->a[10918] = sym_file_redirect;
	v->a[10919] = state(1176);
	small_parse_table_546(v);
}

void	small_parse_table_546(t_small_parse_table_array *v)
{
	v->a[10920] = 1;
	v->a[10921] = sym_pipeline;
	v->a[10922] = state(1207);
	v->a[10923] = 1;
	v->a[10924] = aux_sym_redirected_statement_repeat2;
	v->a[10925] = state(2116);
	v->a[10926] = 1;
	v->a[10927] = sym__statement_not_pipeline;
	v->a[10928] = state(2304);
	v->a[10929] = 1;
	v->a[10930] = sym__statements;
	v->a[10931] = actions(11);
	v->a[10932] = 2;
	v->a[10933] = anon_sym_while;
	v->a[10934] = anon_sym_until;
	v->a[10935] = actions(57);
	v->a[10936] = 2;
	v->a[10937] = anon_sym_LT_AMP_DASH;
	v->a[10938] = anon_sym_GT_AMP_DASH;
	v->a[10939] = actions(65);
	small_parse_table_547(v);
}

void	small_parse_table_547(t_small_parse_table_array *v)
{
	v->a[10940] = 2;
	v->a[10941] = sym_raw_string;
	v->a[10942] = sym_number;
	v->a[10943] = state(420);
	v->a[10944] = 5;
	v->a[10945] = sym_arithmetic_expansion;
	v->a[10946] = sym_string;
	v->a[10947] = sym_simple_expansion;
	v->a[10948] = sym_expansion;
	v->a[10949] = sym_command_substitution;
	v->a[10950] = actions(55);
	v->a[10951] = 8;
	v->a[10952] = anon_sym_LT;
	v->a[10953] = anon_sym_GT;
	v->a[10954] = anon_sym_GT_GT;
	v->a[10955] = anon_sym_AMP_GT;
	v->a[10956] = anon_sym_AMP_GT_GT;
	v->a[10957] = anon_sym_LT_AMP;
	v->a[10958] = anon_sym_GT_AMP;
	v->a[10959] = anon_sym_GT_PIPE;
	small_parse_table_548(v);
}

void	small_parse_table_548(t_small_parse_table_array *v)
{
	v->a[10960] = state(1057);
	v->a[10961] = 12;
	v->a[10962] = sym_redirected_statement;
	v->a[10963] = sym_for_statement;
	v->a[10964] = sym_while_statement;
	v->a[10965] = sym_if_statement;
	v->a[10966] = sym_case_statement;
	v->a[10967] = sym_function_definition;
	v->a[10968] = sym_compound_statement;
	v->a[10969] = sym_subshell;
	v->a[10970] = sym_list;
	v->a[10971] = sym_negated_command;
	v->a[10972] = sym_command;
	v->a[10973] = sym__variable_assignments;
	v->a[10974] = 32;
	v->a[10975] = actions(3);
	v->a[10976] = 1;
	v->a[10977] = sym_comment;
	v->a[10978] = actions(9);
	v->a[10979] = 1;
	small_parse_table_549(v);
}

void	small_parse_table_549(t_small_parse_table_array *v)
{
	v->a[10980] = anon_sym_for;
	v->a[10981] = actions(13);
	v->a[10982] = 1;
	v->a[10983] = anon_sym_if;
	v->a[10984] = actions(15);
	v->a[10985] = 1;
	v->a[10986] = anon_sym_case;
	v->a[10987] = actions(17);
	v->a[10988] = 1;
	v->a[10989] = anon_sym_LPAREN;
	v->a[10990] = actions(19);
	v->a[10991] = 1;
	v->a[10992] = anon_sym_LBRACE;
	v->a[10993] = actions(59);
	v->a[10994] = 1;
	v->a[10995] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[10996] = actions(61);
	v->a[10997] = 1;
	v->a[10998] = anon_sym_DOLLAR;
	v->a[10999] = actions(63);
	small_parse_table_550(v);
}

/* EOF small_parse_table_109.c */
