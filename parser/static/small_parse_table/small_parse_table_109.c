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
	v->a[10900] = aux_sym_command_repeat1;
	v->a[10901] = state(600);
	v->a[10902] = 1;
	v->a[10903] = sym_file_redirect;
	v->a[10904] = state(602);
	v->a[10905] = 1;
	v->a[10906] = sym_concatenation;
	v->a[10907] = state(980);
	v->a[10908] = 1;
	v->a[10909] = sym_pipeline;
	v->a[10910] = state(1068);
	v->a[10911] = 1;
	v->a[10912] = aux_sym_redirected_statement_repeat2;
	v->a[10913] = state(1609);
	v->a[10914] = 1;
	v->a[10915] = sym__statement_not_pipeline;
	v->a[10916] = actions(139);
	v->a[10917] = 2;
	v->a[10918] = anon_sym_while;
	v->a[10919] = anon_sym_until;
	small_parse_table_546(v);
}

void	small_parse_table_546(t_small_parse_table_array *v)
{
	v->a[10920] = actions(171);
	v->a[10921] = 2;
	v->a[10922] = sym_raw_string;
	v->a[10923] = sym_number;
	v->a[10924] = state(425);
	v->a[10925] = 5;
	v->a[10926] = sym_arithmetic_expansion;
	v->a[10927] = sym_string;
	v->a[10928] = sym_simple_expansion;
	v->a[10929] = sym_expansion;
	v->a[10930] = sym_command_substitution;
	v->a[10931] = actions(159);
	v->a[10932] = 7;
	v->a[10933] = anon_sym_LT;
	v->a[10934] = anon_sym_GT;
	v->a[10935] = anon_sym_GT_GT;
	v->a[10936] = anon_sym_LT_AMP;
	v->a[10937] = anon_sym_GT_AMP;
	v->a[10938] = anon_sym_GT_PIPE;
	v->a[10939] = anon_sym_LT_GT;
	small_parse_table_547(v);
}

void	small_parse_table_547(t_small_parse_table_array *v)
{
	v->a[10940] = state(956);
	v->a[10941] = 12;
	v->a[10942] = sym_redirected_statement;
	v->a[10943] = sym_for_statement;
	v->a[10944] = sym_while_statement;
	v->a[10945] = sym_if_statement;
	v->a[10946] = sym_case_statement;
	v->a[10947] = sym_function_definition;
	v->a[10948] = sym_compound_statement;
	v->a[10949] = sym_subshell;
	v->a[10950] = sym_list;
	v->a[10951] = sym_negated_command;
	v->a[10952] = sym_command;
	v->a[10953] = sym__variable_assignments;
	v->a[10954] = 30;
	v->a[10955] = actions(3);
	v->a[10956] = 1;
	v->a[10957] = sym_comment;
	v->a[10958] = actions(133);
	v->a[10959] = 1;
	small_parse_table_548(v);
}

void	small_parse_table_548(t_small_parse_table_array *v)
{
	v->a[10960] = sym_word;
	v->a[10961] = actions(136);
	v->a[10962] = 1;
	v->a[10963] = anon_sym_for;
	v->a[10964] = actions(142);
	v->a[10965] = 1;
	v->a[10966] = anon_sym_if;
	v->a[10967] = actions(145);
	v->a[10968] = 1;
	v->a[10969] = anon_sym_do;
	v->a[10970] = actions(147);
	v->a[10971] = 1;
	v->a[10972] = anon_sym_case;
	v->a[10973] = actions(150);
	v->a[10974] = 1;
	v->a[10975] = anon_sym_LPAREN;
	v->a[10976] = actions(153);
	v->a[10977] = 1;
	v->a[10978] = anon_sym_LBRACE;
	v->a[10979] = actions(156);
	small_parse_table_549(v);
}

void	small_parse_table_549(t_small_parse_table_array *v)
{
	v->a[10980] = 1;
	v->a[10981] = anon_sym_BANG;
	v->a[10982] = actions(162);
	v->a[10983] = 1;
	v->a[10984] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[10985] = actions(165);
	v->a[10986] = 1;
	v->a[10987] = anon_sym_DOLLAR;
	v->a[10988] = actions(168);
	v->a[10989] = 1;
	v->a[10990] = anon_sym_DQUOTE;
	v->a[10991] = actions(174);
	v->a[10992] = 1;
	v->a[10993] = anon_sym_DOLLAR_LBRACE;
	v->a[10994] = actions(177);
	v->a[10995] = 1;
	v->a[10996] = anon_sym_DOLLAR_LPAREN;
	v->a[10997] = actions(180);
	v->a[10998] = 1;
	v->a[10999] = anon_sym_BQUOTE;
	small_parse_table_550(v);
}

/* EOF small_parse_table_109.c */
