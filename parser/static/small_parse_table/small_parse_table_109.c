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
	v->a[10900] = anon_sym_GT_GT;
	v->a[10901] = anon_sym_LT_AMP;
	v->a[10902] = anon_sym_GT_AMP;
	v->a[10903] = anon_sym_GT_PIPE;
	v->a[10904] = state(1087);
	v->a[10905] = 12;
	v->a[10906] = sym_redirected_statement;
	v->a[10907] = sym_for_statement;
	v->a[10908] = sym_while_statement;
	v->a[10909] = sym_if_statement;
	v->a[10910] = sym_case_statement;
	v->a[10911] = sym_function_definition;
	v->a[10912] = sym_compound_statement;
	v->a[10913] = sym_subshell;
	v->a[10914] = sym_list;
	v->a[10915] = sym_negated_command;
	v->a[10916] = sym_command;
	v->a[10917] = sym__variable_assignments;
	v->a[10918] = 32;
	v->a[10919] = actions(3);
	small_parse_table_546(v);
}

void	small_parse_table_546(t_small_parse_table_array *v)
{
	v->a[10920] = 1;
	v->a[10921] = sym_comment;
	v->a[10922] = actions(9);
	v->a[10923] = 1;
	v->a[10924] = anon_sym_for;
	v->a[10925] = actions(13);
	v->a[10926] = 1;
	v->a[10927] = anon_sym_if;
	v->a[10928] = actions(15);
	v->a[10929] = 1;
	v->a[10930] = anon_sym_case;
	v->a[10931] = actions(17);
	v->a[10932] = 1;
	v->a[10933] = anon_sym_LPAREN;
	v->a[10934] = actions(19);
	v->a[10935] = 1;
	v->a[10936] = anon_sym_LBRACE;
	v->a[10937] = actions(59);
	v->a[10938] = 1;
	v->a[10939] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_547(v);
}

void	small_parse_table_547(t_small_parse_table_array *v)
{
	v->a[10940] = actions(61);
	v->a[10941] = 1;
	v->a[10942] = anon_sym_DOLLAR;
	v->a[10943] = actions(63);
	v->a[10944] = 1;
	v->a[10945] = anon_sym_DQUOTE;
	v->a[10946] = actions(67);
	v->a[10947] = 1;
	v->a[10948] = anon_sym_DOLLAR_LBRACE;
	v->a[10949] = actions(69);
	v->a[10950] = 1;
	v->a[10951] = anon_sym_DOLLAR_LPAREN;
	v->a[10952] = actions(71);
	v->a[10953] = 1;
	v->a[10954] = anon_sym_BQUOTE;
	v->a[10955] = actions(73);
	v->a[10956] = 1;
	v->a[10957] = sym_file_descriptor;
	v->a[10958] = actions(75);
	v->a[10959] = 1;
	small_parse_table_548(v);
}

void	small_parse_table_548(t_small_parse_table_array *v)
{
	v->a[10960] = sym_variable_name;
	v->a[10961] = actions(240);
	v->a[10962] = 1;
	v->a[10963] = sym_word;
	v->a[10964] = actions(242);
	v->a[10965] = 1;
	v->a[10966] = anon_sym_BANG;
	v->a[10967] = state(136);
	v->a[10968] = 1;
	v->a[10969] = aux_sym__statements_repeat1;
	v->a[10970] = state(188);
	v->a[10971] = 1;
	v->a[10972] = sym_command_name;
	v->a[10973] = state(297);
	v->a[10974] = 1;
	v->a[10975] = sym_variable_assignment;
	v->a[10976] = state(650);
	v->a[10977] = 1;
	v->a[10978] = sym_concatenation;
	v->a[10979] = state(749);
	small_parse_table_549(v);
}

void	small_parse_table_549(t_small_parse_table_array *v)
{
	v->a[10980] = 1;
	v->a[10981] = aux_sym_command_repeat1;
	v->a[10982] = state(795);
	v->a[10983] = 1;
	v->a[10984] = sym_file_redirect;
	v->a[10985] = state(1154);
	v->a[10986] = 1;
	v->a[10987] = sym_pipeline;
	v->a[10988] = state(1240);
	v->a[10989] = 1;
	v->a[10990] = aux_sym_redirected_statement_repeat2;
	v->a[10991] = state(2119);
	v->a[10992] = 1;
	v->a[10993] = sym__statement_not_pipeline;
	v->a[10994] = state(2244);
	v->a[10995] = 1;
	v->a[10996] = sym__statements;
	v->a[10997] = actions(11);
	v->a[10998] = 2;
	v->a[10999] = anon_sym_while;
	small_parse_table_550(v);
}

/* EOF small_parse_table_109.c */
