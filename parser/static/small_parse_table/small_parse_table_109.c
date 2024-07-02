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
	v->a[10900] = anon_sym_LPAREN;
	v->a[10901] = actions(19);
	v->a[10902] = 1;
	v->a[10903] = anon_sym_LBRACE;
	v->a[10904] = actions(43);
	v->a[10905] = 1;
	v->a[10906] = sym_word;
	v->a[10907] = actions(51);
	v->a[10908] = 1;
	v->a[10909] = anon_sym_BANG;
	v->a[10910] = actions(55);
	v->a[10911] = 1;
	v->a[10912] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[10913] = actions(57);
	v->a[10914] = 1;
	v->a[10915] = anon_sym_DOLLAR;
	v->a[10916] = actions(59);
	v->a[10917] = 1;
	v->a[10918] = anon_sym_DQUOTE;
	v->a[10919] = actions(63);
	small_parse_table_546(v);
}

void	small_parse_table_546(t_small_parse_table_array *v)
{
	v->a[10920] = 1;
	v->a[10921] = anon_sym_DOLLAR_LBRACE;
	v->a[10922] = actions(65);
	v->a[10923] = 1;
	v->a[10924] = anon_sym_DOLLAR_LPAREN;
	v->a[10925] = actions(67);
	v->a[10926] = 1;
	v->a[10927] = anon_sym_BQUOTE;
	v->a[10928] = actions(69);
	v->a[10929] = 1;
	v->a[10930] = sym_file_descriptor;
	v->a[10931] = actions(71);
	v->a[10932] = 1;
	v->a[10933] = sym_variable_name;
	v->a[10934] = actions(249);
	v->a[10935] = 1;
	v->a[10936] = anon_sym_then;
	v->a[10937] = state(36);
	v->a[10938] = 1;
	v->a[10939] = aux_sym__terminated_statement;
	small_parse_table_547(v);
}

void	small_parse_table_547(t_small_parse_table_array *v)
{
	v->a[10940] = state(182);
	v->a[10941] = 1;
	v->a[10942] = sym_command_name;
	v->a[10943] = state(305);
	v->a[10944] = 1;
	v->a[10945] = sym_variable_assignment;
	v->a[10946] = state(584);
	v->a[10947] = 1;
	v->a[10948] = sym_concatenation;
	v->a[10949] = state(620);
	v->a[10950] = 1;
	v->a[10951] = sym_file_redirect;
	v->a[10952] = state(623);
	v->a[10953] = 1;
	v->a[10954] = aux_sym_command_repeat1;
	v->a[10955] = state(1118);
	v->a[10956] = 1;
	v->a[10957] = sym_pipeline;
	v->a[10958] = state(1201);
	v->a[10959] = 1;
	small_parse_table_548(v);
}

void	small_parse_table_548(t_small_parse_table_array *v)
{
	v->a[10960] = aux_sym_redirected_statement_repeat2;
	v->a[10961] = state(1911);
	v->a[10962] = 1;
	v->a[10963] = sym__statement_not_pipeline;
	v->a[10964] = actions(11);
	v->a[10965] = 2;
	v->a[10966] = anon_sym_while;
	v->a[10967] = anon_sym_until;
	v->a[10968] = actions(61);
	v->a[10969] = 2;
	v->a[10970] = sym_raw_string;
	v->a[10971] = sym_number;
	v->a[10972] = state(433);
	v->a[10973] = 5;
	v->a[10974] = sym_arithmetic_expansion;
	v->a[10975] = sym_string;
	v->a[10976] = sym_simple_expansion;
	v->a[10977] = sym_expansion;
	v->a[10978] = sym_command_substitution;
	v->a[10979] = actions(53);
	small_parse_table_549(v);
}

void	small_parse_table_549(t_small_parse_table_array *v)
{
	v->a[10980] = 7;
	v->a[10981] = anon_sym_LT;
	v->a[10982] = anon_sym_GT;
	v->a[10983] = anon_sym_GT_GT;
	v->a[10984] = anon_sym_LT_AMP;
	v->a[10985] = anon_sym_GT_AMP;
	v->a[10986] = anon_sym_GT_PIPE;
	v->a[10987] = anon_sym_LT_GT;
	v->a[10988] = state(1077);
	v->a[10989] = 12;
	v->a[10990] = sym_redirected_statement;
	v->a[10991] = sym_for_statement;
	v->a[10992] = sym_while_statement;
	v->a[10993] = sym_if_statement;
	v->a[10994] = sym_case_statement;
	v->a[10995] = sym_function_definition;
	v->a[10996] = sym_compound_statement;
	v->a[10997] = sym_subshell;
	v->a[10998] = sym_list;
	v->a[10999] = sym_negated_command;
	small_parse_table_550(v);
}

/* EOF small_parse_table_109.c */
