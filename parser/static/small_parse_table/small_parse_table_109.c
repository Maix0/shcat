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
	v->a[10900] = sym_case_statement;
	v->a[10901] = sym_function_definition;
	v->a[10902] = sym_compound_statement;
	v->a[10903] = sym_subshell;
	v->a[10904] = sym_list;
	v->a[10905] = sym_negated_command;
	v->a[10906] = sym_command;
	v->a[10907] = sym__variable_assignments;
	v->a[10908] = 30;
	v->a[10909] = actions(3);
	v->a[10910] = 1;
	v->a[10911] = sym_comment;
	v->a[10912] = actions(9);
	v->a[10913] = 1;
	v->a[10914] = anon_sym_for;
	v->a[10915] = actions(13);
	v->a[10916] = 1;
	v->a[10917] = anon_sym_if;
	v->a[10918] = actions(15);
	v->a[10919] = 1;
	small_parse_table_546(v);
}

void	small_parse_table_546(t_small_parse_table_array *v)
{
	v->a[10920] = anon_sym_case;
	v->a[10921] = actions(17);
	v->a[10922] = 1;
	v->a[10923] = anon_sym_LPAREN;
	v->a[10924] = actions(19);
	v->a[10925] = 1;
	v->a[10926] = anon_sym_LBRACE;
	v->a[10927] = actions(41);
	v->a[10928] = 1;
	v->a[10929] = sym_word;
	v->a[10930] = actions(49);
	v->a[10931] = 1;
	v->a[10932] = anon_sym_BANG;
	v->a[10933] = actions(53);
	v->a[10934] = 1;
	v->a[10935] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[10936] = actions(55);
	v->a[10937] = 1;
	v->a[10938] = anon_sym_DOLLAR;
	v->a[10939] = actions(57);
	small_parse_table_547(v);
}

void	small_parse_table_547(t_small_parse_table_array *v)
{
	v->a[10940] = 1;
	v->a[10941] = anon_sym_DQUOTE;
	v->a[10942] = actions(61);
	v->a[10943] = 1;
	v->a[10944] = anon_sym_DOLLAR_LBRACE;
	v->a[10945] = actions(63);
	v->a[10946] = 1;
	v->a[10947] = anon_sym_DOLLAR_LPAREN;
	v->a[10948] = actions(65);
	v->a[10949] = 1;
	v->a[10950] = anon_sym_BQUOTE;
	v->a[10951] = actions(67);
	v->a[10952] = 1;
	v->a[10953] = sym_variable_name;
	v->a[10954] = actions(242);
	v->a[10955] = 1;
	v->a[10956] = anon_sym_then;
	v->a[10957] = state(38);
	v->a[10958] = 1;
	v->a[10959] = aux_sym__terminated_statement;
	small_parse_table_548(v);
}

void	small_parse_table_548(t_small_parse_table_array *v)
{
	v->a[10960] = state(185);
	v->a[10961] = 1;
	v->a[10962] = sym_command_name;
	v->a[10963] = state(237);
	v->a[10964] = 1;
	v->a[10965] = sym_variable_assignment;
	v->a[10966] = state(411);
	v->a[10967] = 1;
	v->a[10968] = aux_sym_command_repeat1;
	v->a[10969] = state(551);
	v->a[10970] = 1;
	v->a[10971] = sym_file_redirect;
	v->a[10972] = state(555);
	v->a[10973] = 1;
	v->a[10974] = sym_concatenation;
	v->a[10975] = state(1059);
	v->a[10976] = 1;
	v->a[10977] = sym_pipeline;
	v->a[10978] = state(1126);
	v->a[10979] = 1;
	small_parse_table_549(v);
}

void	small_parse_table_549(t_small_parse_table_array *v)
{
	v->a[10980] = aux_sym_redirected_statement_repeat2;
	v->a[10981] = state(1561);
	v->a[10982] = 1;
	v->a[10983] = sym__statement_not_pipeline;
	v->a[10984] = actions(11);
	v->a[10985] = 2;
	v->a[10986] = anon_sym_while;
	v->a[10987] = anon_sym_until;
	v->a[10988] = actions(59);
	v->a[10989] = 2;
	v->a[10990] = sym_raw_string;
	v->a[10991] = sym_number;
	v->a[10992] = actions(51);
	v->a[10993] = 3;
	v->a[10994] = anon_sym_LT;
	v->a[10995] = anon_sym_GT;
	v->a[10996] = anon_sym_GT_GT;
	v->a[10997] = state(401);
	v->a[10998] = 5;
	v->a[10999] = sym_arithmetic_expansion;
	small_parse_table_550(v);
}

/* EOF small_parse_table_109.c */
