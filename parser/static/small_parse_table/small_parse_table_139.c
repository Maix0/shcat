/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_139.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_695(t_small_parse_table_array *v)
{
	v->a[13900] = sym_command_substitution;
	v->a[13901] = actions(53);
	v->a[13902] = 7;
	v->a[13903] = anon_sym_LT;
	v->a[13904] = anon_sym_GT;
	v->a[13905] = anon_sym_GT_GT;
	v->a[13906] = anon_sym_LT_AMP;
	v->a[13907] = anon_sym_GT_AMP;
	v->a[13908] = anon_sym_GT_PIPE;
	v->a[13909] = anon_sym_LT_GT;
	v->a[13910] = state(1081);
	v->a[13911] = 12;
	v->a[13912] = sym_redirected_statement;
	v->a[13913] = sym_for_statement;
	v->a[13914] = sym_while_statement;
	v->a[13915] = sym_if_statement;
	v->a[13916] = sym_case_statement;
	v->a[13917] = sym_function_definition;
	v->a[13918] = sym_compound_statement;
	v->a[13919] = sym_subshell;
	small_parse_table_696(v);
}

void	small_parse_table_696(t_small_parse_table_array *v)
{
	v->a[13920] = sym_list;
	v->a[13921] = sym_negated_command;
	v->a[13922] = sym_command;
	v->a[13923] = sym__variable_assignments;
	v->a[13924] = 41;
	v->a[13925] = actions(3);
	v->a[13926] = 1;
	v->a[13927] = sym_comment;
	v->a[13928] = actions(9);
	v->a[13929] = 1;
	v->a[13930] = anon_sym_for;
	v->a[13931] = actions(13);
	v->a[13932] = 1;
	v->a[13933] = anon_sym_if;
	v->a[13934] = actions(15);
	v->a[13935] = 1;
	v->a[13936] = anon_sym_case;
	v->a[13937] = actions(17);
	v->a[13938] = 1;
	v->a[13939] = anon_sym_LPAREN;
	small_parse_table_697(v);
}

void	small_parse_table_697(t_small_parse_table_array *v)
{
	v->a[13940] = actions(19);
	v->a[13941] = 1;
	v->a[13942] = anon_sym_LBRACE;
	v->a[13943] = actions(43);
	v->a[13944] = 1;
	v->a[13945] = sym_word;
	v->a[13946] = actions(51);
	v->a[13947] = 1;
	v->a[13948] = anon_sym_BANG;
	v->a[13949] = actions(55);
	v->a[13950] = 1;
	v->a[13951] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[13952] = actions(57);
	v->a[13953] = 1;
	v->a[13954] = anon_sym_DOLLAR;
	v->a[13955] = actions(59);
	v->a[13956] = 1;
	v->a[13957] = anon_sym_DQUOTE;
	v->a[13958] = actions(63);
	v->a[13959] = 1;
	small_parse_table_698(v);
}

void	small_parse_table_698(t_small_parse_table_array *v)
{
	v->a[13960] = anon_sym_DOLLAR_LBRACE;
	v->a[13961] = actions(65);
	v->a[13962] = 1;
	v->a[13963] = anon_sym_DOLLAR_LPAREN;
	v->a[13964] = actions(67);
	v->a[13965] = 1;
	v->a[13966] = anon_sym_BQUOTE;
	v->a[13967] = actions(69);
	v->a[13968] = 1;
	v->a[13969] = sym_file_descriptor;
	v->a[13970] = actions(71);
	v->a[13971] = 1;
	v->a[13972] = sym_variable_name;
	v->a[13973] = state(123);
	v->a[13974] = 1;
	v->a[13975] = aux_sym__statements_repeat1;
	v->a[13976] = state(183);
	v->a[13977] = 1;
	v->a[13978] = sym_command_name;
	v->a[13979] = state(335);
	small_parse_table_699(v);
}

void	small_parse_table_699(t_small_parse_table_array *v)
{
	v->a[13980] = 1;
	v->a[13981] = sym_variable_assignment;
	v->a[13982] = state(655);
	v->a[13983] = 1;
	v->a[13984] = aux_sym_command_repeat1;
	v->a[13985] = state(661);
	v->a[13986] = 1;
	v->a[13987] = sym_concatenation;
	v->a[13988] = state(665);
	v->a[13989] = 1;
	v->a[13990] = sym_file_redirect;
	v->a[13991] = state(1030);
	v->a[13992] = 1;
	v->a[13993] = sym_function_definition;
	v->a[13994] = state(1031);
	v->a[13995] = 1;
	v->a[13996] = sym_compound_statement;
	v->a[13997] = state(1032);
	v->a[13998] = 1;
	v->a[13999] = sym_subshell;
	small_parse_table_700(v);
}

/* EOF small_parse_table_139.c */
