/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_69.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_345(t_small_parse_table_array *v)
{
	v->a[6900] = sym_function_definition;
	v->a[6901] = sym_compound_statement;
	v->a[6902] = sym_subshell;
	v->a[6903] = sym_list;
	v->a[6904] = sym_negated_command;
	v->a[6905] = sym_command;
	v->a[6906] = sym__variable_assignments;
	v->a[6907] = 31;
	v->a[6908] = actions(3);
	v->a[6909] = 1;
	v->a[6910] = sym_comment;
	v->a[6911] = actions(9);
	v->a[6912] = 1;
	v->a[6913] = anon_sym_for;
	v->a[6914] = actions(13);
	v->a[6915] = 1;
	v->a[6916] = anon_sym_if;
	v->a[6917] = actions(15);
	v->a[6918] = 1;
	v->a[6919] = anon_sym_case;
	small_parse_table_346(v);
}

void	small_parse_table_346(t_small_parse_table_array *v)
{
	v->a[6920] = actions(17);
	v->a[6921] = 1;
	v->a[6922] = anon_sym_LPAREN;
	v->a[6923] = actions(19);
	v->a[6924] = 1;
	v->a[6925] = anon_sym_LBRACE;
	v->a[6926] = actions(55);
	v->a[6927] = 1;
	v->a[6928] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[6929] = actions(57);
	v->a[6930] = 1;
	v->a[6931] = anon_sym_DOLLAR;
	v->a[6932] = actions(59);
	v->a[6933] = 1;
	v->a[6934] = anon_sym_DQUOTE;
	v->a[6935] = actions(63);
	v->a[6936] = 1;
	v->a[6937] = anon_sym_DOLLAR_LBRACE;
	v->a[6938] = actions(65);
	v->a[6939] = 1;
	small_parse_table_347(v);
}

void	small_parse_table_347(t_small_parse_table_array *v)
{
	v->a[6940] = anon_sym_DOLLAR_LPAREN;
	v->a[6941] = actions(67);
	v->a[6942] = 1;
	v->a[6943] = anon_sym_BQUOTE;
	v->a[6944] = actions(211);
	v->a[6945] = 1;
	v->a[6946] = sym_word;
	v->a[6947] = actions(213);
	v->a[6948] = 1;
	v->a[6949] = anon_sym_BANG;
	v->a[6950] = actions(219);
	v->a[6951] = 1;
	v->a[6952] = sym_file_descriptor;
	v->a[6953] = actions(221);
	v->a[6954] = 1;
	v->a[6955] = sym_variable_name;
	v->a[6956] = state(127);
	v->a[6957] = 1;
	v->a[6958] = aux_sym__statements_repeat1;
	v->a[6959] = state(170);
	small_parse_table_348(v);
}

void	small_parse_table_348(t_small_parse_table_array *v)
{
	v->a[6960] = 1;
	v->a[6961] = sym_command_name;
	v->a[6962] = state(241);
	v->a[6963] = 1;
	v->a[6964] = sym_variable_assignment;
	v->a[6965] = state(617);
	v->a[6966] = 1;
	v->a[6967] = aux_sym_command_repeat1;
	v->a[6968] = state(661);
	v->a[6969] = 1;
	v->a[6970] = sym_concatenation;
	v->a[6971] = state(701);
	v->a[6972] = 1;
	v->a[6973] = sym_file_redirect;
	v->a[6974] = state(1070);
	v->a[6975] = 1;
	v->a[6976] = sym_pipeline;
	v->a[6977] = state(1177);
	v->a[6978] = 1;
	v->a[6979] = aux_sym_redirected_statement_repeat2;
	small_parse_table_349(v);
}

void	small_parse_table_349(t_small_parse_table_array *v)
{
	v->a[6980] = state(1919);
	v->a[6981] = 1;
	v->a[6982] = sym__statement_not_pipeline;
	v->a[6983] = state(2001);
	v->a[6984] = 1;
	v->a[6985] = sym__statements;
	v->a[6986] = actions(11);
	v->a[6987] = 2;
	v->a[6988] = anon_sym_while;
	v->a[6989] = anon_sym_until;
	v->a[6990] = actions(217);
	v->a[6991] = 2;
	v->a[6992] = sym_raw_string;
	v->a[6993] = sym_number;
	v->a[6994] = state(374);
	v->a[6995] = 5;
	v->a[6996] = sym_arithmetic_expansion;
	v->a[6997] = sym_string;
	v->a[6998] = sym_simple_expansion;
	v->a[6999] = sym_expansion;
	small_parse_table_350(v);
}

/* EOF small_parse_table_69.c */
